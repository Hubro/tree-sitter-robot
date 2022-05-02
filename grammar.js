
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
  return seq("***", name, "***")
}

module.exports = grammar({
  name: "robot",

  rules: {
    source_file: $ => repeat($.section),

    section: $ => choice(
      $.settings_section,
    ),

    settings_section_header: $ => section_header("Settings"),
    settings_section: $ => seq(
      alias($.settings_section_header, $.section_header),
      $._line_break,
      repeat($.setting_statement)
    ),

    setting_statement: $ => seq(
      choice(...SETTINGS_KEYWORDS.map(caseInsensitive)),
      repeat(seq(
          $._separator,
          $.argument,
      )),
      repeat(seq(
        $._line_break,
        $.continuation,
      )),
      $._line_break
    ),

    continuation: $ => seq(
      "...",
      repeat(seq(
        $._separator,
        $.argument,
      )),
    ),

    argument: $ => $._token,

    _token: $ => /[^\s]+([ ][^\s]+)*/,

    _separator: $ => /[ ]{2,}|\t+/,

    _line_break: $ => choice("\r\n", "\r", "\n"),
  },
});
