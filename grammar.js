function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map((letter) => `[${letter}${letter.toUpperCase()}]`)
      .join("")
  );
}

module.exports = grammar({
  name: "robot",

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) => choice($.section),

    section: ($) =>
      seq(
        "***",
        choice(
          caseInsensitive("settings"),
          caseInsensitive("variables"),
          caseInsensitive("keywords"),
          caseInsensitive("tests"),
          caseInsensitive("tasks"),
        ),
        "***"
      ),
  },
});
