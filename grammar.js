
// const SECTION_NAMES = [
//   "Settings",
//   "Variables",
//   "Test Cases",
//   "Tasks",
//   "Keywords",
//   "Comments",
// ]

const SETTINGS_KEYWORDS = [
  "Library",
  "Resource",
  "Variables",
  "Documentation",
  "Metadata",
  "Suite Setup",
  "Suite Teardown",
  "Force Tags",
  "Default Tags",
  "Test Setup",
  "Test Teardown",
  "Test Template",
  "Test Timeout",
  "Task Setup",
  "Task Teardown",
  "Task Template",
  "Task Timeout",
];

function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}

/**
 * Shortcut for defining a section header
 */
function section_header($, name) {
  return seq(
    alias(
      token(
        seq("***", optional(" "), caseInsensitive(name), optional(" "), "***")
      ),
      $.section_header
    ),
    optional(alias(/[^\r\n]+/, $.extra_text)),
    $._line_break,
  )
}

/**
 * Shortcut for defining a setting token
 */
function setting(name) {
  return token(
    seq("[", optional(" "), caseInsensitive(name), optional(" "), "]")
  )
}

module.exports = grammar({
  name: "robot",

  extras: $ => [$.comment],

  rules: {
    source_file: $ => seq(
      optional(/\s+/), // Allows whitespace before the first section
      repeat($.section)
    ),

    section: $ => choice(
      $.settings_section,
      $.variables_section,
      $.keywords_section,
      $.test_cases_section,
    ),

    //
    // Settings section
    //

    settings_section: $ => seq(
      section_header($, "Settings"),
      repeat(choice(
        $.setting_statement,
        $._empty_line,
      )),
    ),
    setting_statement: $ => seq(
      choice(...SETTINGS_KEYWORDS.map(caseInsensitive)),
      $._separator,
      $.arguments,
    ),

    //
    // Variables section
    //

    variables_section: $ => seq(
      section_header($, "Variables"),
      repeat(choice(
        $.variable_definition,
        $._empty_line,
      )),
    ),
    variable_definition: $ => seq(
      seq("${", $.variable_name, "}"),
      optional(
        choice("=", " =")
      ),
      $._separator,
      $.arguments,
    ),

    //
    // Keywords section
    //

    keywords_section: $ => seq(
      section_header($, "Keywords"),
      repeat(choice(
        $.keyword_definition,
        $._empty_line,
      )),
    ),
    keyword_definition: $ => seq(
      alias($.text_chunk, $.name),
      $._line_break,
      alias($.keyword_definition_body, $.body),
    ),
    keyword_definition_body: $ => prec.right(repeat1(
      choice(
        seq($._indentation, $.keyword_setting),
        seq($._indentation, $.statement),
        $._empty_line,
      )
    )),
    // Ref: http://robotframework.org/robotframework/latest/RobotFrameworkUserGuide.html#keyword-section-1
    keyword_setting: $ => seq(
      choice(
        setting("Documentation"),
        setting("Tags"),
        setting("Arguments"),
        setting("Return"),
        setting("Teardown"),
        setting("Timeout"),
      ),
      $._separator,
      $.arguments,
    ),

    //
    // Test cases / Tasks section
    //

    test_cases_section: $ => seq(
      section_header($, "Test Cases"),
      repeat(choice(
        $.test_case_definition,
        $._empty_line,
      )),
    ),
    test_case_definition: $ => seq(
      alias($.text_chunk, $.name),
      choice(
        // Data-driven tests have arguments
        seq(
          $._separator,
          $.arguments,
        ),

        // Regular tests have bodies
        seq(
          $._line_break,
          alias($.test_case_definition_body, $.body),
        )
      )
    ),
    test_case_definition_body: $ => prec.right(repeat1(
      choice(
        seq($._indentation, $.test_case_setting),
        seq($._indentation, $.statement),
        $._empty_line,
      )
    )),
    // Ref: http://robotframework.org/robotframework/latest/RobotFrameworkUserGuide.html#test-case-section
    test_case_setting: $ => seq(
      choice(
        setting("Documentation"),
        setting("Tags"),
        setting("Setup"),
        setting("Teardown"),
        setting("Template"),
        setting("Timeout"),
      ),
      $._separator,
      $.arguments,
    ),

    //
    // Statements
    //
    // These are the lines that appear within test cases, tasks and user
    // defined keywords
    //

    statement: $ => seq(
      choice(
        $.variable_assignment,
        $.keyword_invocation,
        $.return_statement,
        $.if_statement,
      ),
    ),

    return_statement: $ => seq(
      "RETURN",
      optional(
        seq(
          $._separator,
          alias($.argument, $.return_value),
        )
      ),
      optional($._whitespace),
      $._line_break,
    ),

    variable_assignment: $ => seq(
      seq("${", $.variable_name, "}"),
      optional(
        choice("=", " =")
      ),
      choice(
        seq(
          $._separator,
          $.arguments,
        ),
        $._line_break,
      ),
    ),

    keyword_invocation: $ => seq(
      alias($.text_chunk, $.keyword),
      choice(
        seq(
          $._separator,
          $.arguments,
        ),
        $._line_break,
      ),
    ),

    if_statement: $ => seq(
      "IF",
      $._separator,
      field("condition", $.argument),
      $._line_break,
      $._indentation,

      optional(field("consequence", $.block)),

      repeat(field("alternative", $.elseif_statement)),

      optional(field("alternative", $.else_statement)),

      "END",
    ),

    elseif_statement: $ => seq(
      "ELSE IF",
      $._separator,
      field("condition", $.argument),
      $._line_break,
      $._indentation,
      field("consequence", $.block),
    ),

    else_statement: $ => seq(
      "ELSE",
      seq(
        $._line_break,
        $._indentation,
        $.block,
      )
    ),

    block: $ => repeat1(
      choice(
        $._line_break,
        seq($.statement, $._indentation),
      )
    ),

    //
    // Reusable rules
    //

    arguments: $ => seq(
      $.argument,
      repeat(seq(
        $._separator,
        $.argument,
      )),
      $._line_break,
      repeat($.continuation),
    ),

    continuation: $ => seq(
      choice(
        $.ellipses,
        alias($.indented_ellipses, $.ellipses),
      ),
      repeat(seq(
        $._separator,
        $.argument,
      )),
      $._line_break,
    ),

    ellipses: $ => "...",
    indented_ellipses: $ => token(seq(
      /[ ]{2}|\t/,
      optional(/[ \t]+/),
      "..."
    )),

    argument: $ => seq(
      choice(
        $.text_chunk,
        $.scalar_variable,
        $.list_variable,
        $.dictionary_variable,
      ),
      repeat(seq(
        optional(" "),
        choice(
          $.text_chunk,
          $.scalar_variable,
        )
      ))
    ),

    scalar_variable: $ => seq(
      "${",
      optional(" "),
      $.variable_name,
      optional(" "),
      "}"
    ),

    list_variable: $ => seq(
      "@{",
      optional(" "),
      $.variable_name,
      optional(" "),
      "}"
    ),

    dictionary_variable: $ => seq(
      "&{",
      optional(" "),
      $.variable_name,
      optional(" "),
      "}"
    ),

    variable_name: $ => /[^{}]+/,

    text_chunk: $ => token(seq(
      choice(
        /[^\s$@&{#]/,   // Can't start with a #, since that would be a comment
        /[$@&][^{]/,
        /[^$@&]\{/,
      ),
      repeat(choice(
        /[^\s$@&{]/,
        /[$@&][^{]/,
        /[^$@&]\{/,
      )),
      repeat(seq(
        " ",
        repeat1(choice(
          /[^\s$@&{]/,
          /[$@&][^{]/,
          /[^$@&]\{/,
        )),
      )),
    )),

    comment: $ => token(seq(optional(/[ \t]+/), "#", /[^\n]*/)),

    _separator: $ => token(seq(/[ ]{2}|\t/, optional(/[ \t]+/))),
    _indentation: $ => $._separator,

    _whitespace: $ => /[ \t]+/,

    _line_break: $ => /\r\n|\r|\n/,

    _empty_line: $ => seq(optional(/[ \t]+/), $._line_break),
  },
});
