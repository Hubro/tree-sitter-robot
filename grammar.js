
const SECTION_NAMES = [
  "Settings",
  "Variables",
  "Test Cases",
  "Tasks",
  "Keywords",
  "Comments",
]

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
function section_header(name) {
  return seq("***", optional(" "), name, optional(" "), "***")
}

module.exports = grammar({
  name: "robot",

  extras: $ => [],

  rules: {
    source_file: $ => seq(
      optional(/\s+/), // Allows whitespace before the first section
      repeat($.section)
    ),

    section: $ => choice(
      $.settings_section,
      $.variables_section,
      $.keywords_section,
    ),

    //
    // Settings section
    //

    settings_section: $ => seq(
      alias($.settings_section_header, $.section_header),
      $._line_break,
      repeat(choice(
        $.setting_statement,
        $._empty_line,
      )),
    ),
    settings_section_header: $ => section_header("Settings"),
    setting_statement: $ => seq(
      choice(...SETTINGS_KEYWORDS.map(caseInsensitive)),
      $._separator,
      $.arguments,
    ),

    //
    // Variables section
    //

    variables_section: $ => seq(
      alias($.variables_section_header, $.section_header),
      $._line_break,
      repeat(choice(
        $.variable_definition,
        $._empty_line,
      )),
    ),
    variables_section_header: $ => section_header("Variables"),
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
      alias($.keywords_section_header, $.section_header),
      $._line_break,
      repeat(choice(
        $.keyword_definition,
        $._empty_line,
      )),
    ),
    keywords_section_header: $ => section_header("Keywords"),
    keyword_definition: $ => seq(
      alias($.text_chunk, $.name),
      $._line_break,
      alias($.keyword_definition_body, $.body),
    ),
    keyword_definition_body: $ => prec.right(repeat1(
      choice(
        $.statement,
        $._empty_line,
      )
    )),

    //
    // Statements
    //
    // These are the lines that appear within test cases, tasks and user
    // defined keywords
    //

    statement: $ => seq(
      $._separator,   // The initial indentation
      choice(
        $.variable_assignment,
        $.keyword_invocation,
      ),
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

    //
    // Reusable rules
    //

    arguments: $ => prec.right(seq(
      $.argument,
      repeat(seq(
        $._separator,
        $.argument,
      )),
      $._line_break,
      repeat($.continuation),
    )),

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
      repeat1(choice(
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

    _separator: $ => token(seq(/[ ]{2}|\t/, optional(/[ \t]+/))),

    _whitespace: $ => /[ \t]+/,

    _line_break: $ => /\r\n|\r|\n/,

    _empty_line: $ => seq(optional(/[ \t]+/), $._line_break),
  },
});
