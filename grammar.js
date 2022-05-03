
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
      optional($._separator),
      $.ellipses,
      repeat(seq(
        $._separator,
        $.argument,
      )),
      $._line_break,
    ),

    ellipses: $ => "...",

    argument: $ => $._token,

    variable_name: $ => /[^{}]+/,

    _token: $ => /[^\s]+([ ][^\s]+)*/,

    _separator: $ => token(seq(/[ ]{2}|\t/, optional(/[ \t]+/))),

    _whitespace: $ => /[ \t]+/,

    _line_break: $ => /\r\n|\r|\n/,

    _empty_line: $ => seq(optional(/[ \t]+/), $._line_break),
  },
});
