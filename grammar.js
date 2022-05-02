
const SECTION_NAMES = [
  "Settings",
  "Variables",
  "Keywords",
  "Tests",
  "Tasks",
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

module.exports = grammar({
  name: "robot",

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.section_statement,
      $.setting_statement,
    ),

    section_statement: $ =>
      seq(
        "***",
        optional(" "),
        choice(...SECTION_NAMES.map(caseInsensitive)),
        optional(" "),
        "***",
        repeat(seq(
          $._separator,
          alias($.argument, $.extra_section_text),
        )),
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
