#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 2
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_STAR_STAR_STAR = 2,
  anon_sym_ = 3,
  anon_sym_Settings = 4,
  aux_sym_setting_statement_token1 = 5,
  aux_sym_setting_statement_token2 = 6,
  aux_sym_setting_statement_token3 = 7,
  aux_sym_setting_statement_token4 = 8,
  aux_sym_setting_statement_token5 = 9,
  aux_sym_setting_statement_token6 = 10,
  aux_sym_setting_statement_token7 = 11,
  aux_sym_setting_statement_token8 = 12,
  aux_sym_setting_statement_token9 = 13,
  aux_sym_setting_statement_token10 = 14,
  aux_sym_setting_statement_token11 = 15,
  aux_sym_setting_statement_token12 = 16,
  aux_sym_setting_statement_token13 = 17,
  aux_sym_setting_statement_token14 = 18,
  aux_sym_setting_statement_token15 = 19,
  aux_sym_setting_statement_token16 = 20,
  aux_sym_setting_statement_token17 = 21,
  anon_sym_Variables = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_EQ = 25,
  anon_sym_EQ2 = 26,
  anon_sym_Keywords = 27,
  sym_ellipses = 28,
  sym_indented_ellipses = 29,
  sym_variable_name = 30,
  sym__token = 31,
  sym__separator = 32,
  aux_sym__whitespace_token1 = 33,
  sym__line_break = 34,
  sym_source_file = 35,
  sym_section = 36,
  sym_settings_section = 37,
  sym_settings_section_header = 38,
  sym_setting_statement = 39,
  sym_variables_section = 40,
  sym_variables_section_header = 41,
  sym_variable_definition = 42,
  sym_keywords_section = 43,
  sym_keywords_section_header = 44,
  sym_keyword_definition = 45,
  sym_keyword_definition_body = 46,
  sym_statement = 47,
  sym_arguments = 48,
  sym_continuation = 49,
  sym_argument = 50,
  sym__empty_line = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_settings_section_repeat1 = 53,
  aux_sym_variables_section_repeat1 = 54,
  aux_sym_keywords_section_repeat1 = 55,
  aux_sym_keyword_definition_body_repeat1 = 56,
  aux_sym_arguments_repeat1 = 57,
  aux_sym_arguments_repeat2 = 58,
  alias_sym_keyword = 59,
  alias_sym_name = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_STAR_STAR_STAR] = "***",
  [anon_sym_] = " ",
  [anon_sym_Settings] = "Settings",
  [aux_sym_setting_statement_token1] = "setting_statement_token1",
  [aux_sym_setting_statement_token2] = "setting_statement_token2",
  [aux_sym_setting_statement_token3] = "setting_statement_token3",
  [aux_sym_setting_statement_token4] = "setting_statement_token4",
  [aux_sym_setting_statement_token5] = "setting_statement_token5",
  [aux_sym_setting_statement_token6] = "setting_statement_token6",
  [aux_sym_setting_statement_token7] = "setting_statement_token7",
  [aux_sym_setting_statement_token8] = "setting_statement_token8",
  [aux_sym_setting_statement_token9] = "setting_statement_token9",
  [aux_sym_setting_statement_token10] = "setting_statement_token10",
  [aux_sym_setting_statement_token11] = "setting_statement_token11",
  [aux_sym_setting_statement_token12] = "setting_statement_token12",
  [aux_sym_setting_statement_token13] = "setting_statement_token13",
  [aux_sym_setting_statement_token14] = "setting_statement_token14",
  [aux_sym_setting_statement_token15] = "setting_statement_token15",
  [aux_sym_setting_statement_token16] = "setting_statement_token16",
  [aux_sym_setting_statement_token17] = "setting_statement_token17",
  [anon_sym_Variables] = "Variables",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [anon_sym_Keywords] = "Keywords",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [sym_variable_name] = "variable_name",
  [sym__token] = "_token",
  [sym__separator] = "_separator",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__line_break] = "_line_break",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_settings_section_header] = "section_header",
  [sym_setting_statement] = "setting_statement",
  [sym_variables_section] = "variables_section",
  [sym_variables_section_header] = "section_header",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keywords_section_header] = "section_header",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_statement] = "statement",
  [sym_arguments] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [anon_sym_] = anon_sym_,
  [anon_sym_Settings] = anon_sym_Settings,
  [aux_sym_setting_statement_token1] = aux_sym_setting_statement_token1,
  [aux_sym_setting_statement_token2] = aux_sym_setting_statement_token2,
  [aux_sym_setting_statement_token3] = aux_sym_setting_statement_token3,
  [aux_sym_setting_statement_token4] = aux_sym_setting_statement_token4,
  [aux_sym_setting_statement_token5] = aux_sym_setting_statement_token5,
  [aux_sym_setting_statement_token6] = aux_sym_setting_statement_token6,
  [aux_sym_setting_statement_token7] = aux_sym_setting_statement_token7,
  [aux_sym_setting_statement_token8] = aux_sym_setting_statement_token8,
  [aux_sym_setting_statement_token9] = aux_sym_setting_statement_token9,
  [aux_sym_setting_statement_token10] = aux_sym_setting_statement_token10,
  [aux_sym_setting_statement_token11] = aux_sym_setting_statement_token11,
  [aux_sym_setting_statement_token12] = aux_sym_setting_statement_token12,
  [aux_sym_setting_statement_token13] = aux_sym_setting_statement_token13,
  [aux_sym_setting_statement_token14] = aux_sym_setting_statement_token14,
  [aux_sym_setting_statement_token15] = aux_sym_setting_statement_token15,
  [aux_sym_setting_statement_token16] = aux_sym_setting_statement_token16,
  [aux_sym_setting_statement_token17] = aux_sym_setting_statement_token17,
  [anon_sym_Variables] = anon_sym_Variables,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [anon_sym_Keywords] = anon_sym_Keywords,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [sym_variable_name] = sym_variable_name,
  [sym__token] = sym__token,
  [sym__separator] = sym__separator,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__line_break] = sym__line_break,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_settings_section_header] = sym_settings_section_header,
  [sym_setting_statement] = sym_setting_statement,
  [sym_variables_section] = sym_variables_section,
  [sym_variables_section_header] = sym_settings_section_header,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keywords_section_header] = sym_settings_section_header,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_statement] = sym_statement,
  [sym_arguments] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Settings] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setting_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Keywords] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_ellipses] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_section] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keywords_section] = {
    .visible = true,
    .named = true,
  },
  [sym_keywords_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keywords_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [2] = {
    [1] = alias_sym_keyword,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(176);
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') ADVANCE(177);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == 'K') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'V') ADVANCE(15);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 'v') ADVANCE(47);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(219);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(219);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == 'K') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(209);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(204);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(7);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 162:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 163:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 164:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 165:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 166:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 167:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 168:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 171:
      if (eof) ADVANCE(176);
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(226);
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 172:
      if (eof) ADVANCE(176);
      if (lookahead == '\t') ADVANCE(218);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(226);
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 173:
      if (eof) ADVANCE(176);
      if (lookahead == '\t') ADVANCE(219);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(226);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 174:
      if (eof) ADVANCE(176);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(226);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 175:
      if (eof) ADVANCE(176);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == 'K') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(180);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_Variables);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Keywords);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 175},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 171},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 171},
  [11] = {.lex_state = 171},
  [12] = {.lex_state = 171},
  [13] = {.lex_state = 171},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 172},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 172},
  [21] = {.lex_state = 172},
  [22] = {.lex_state = 172},
  [23] = {.lex_state = 173},
  [24] = {.lex_state = 173},
  [25] = {.lex_state = 174},
  [26] = {.lex_state = 174},
  [27] = {.lex_state = 174},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 172},
  [30] = {.lex_state = 172},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 171},
  [33] = {.lex_state = 173},
  [34] = {.lex_state = 173},
  [35] = {.lex_state = 173},
  [36] = {.lex_state = 173},
  [37] = {.lex_state = 174},
  [38] = {.lex_state = 171},
  [39] = {.lex_state = 171},
  [40] = {.lex_state = 174},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 173},
  [43] = {.lex_state = 169},
  [44] = {.lex_state = 173},
  [45] = {.lex_state = 173},
  [46] = {.lex_state = 169},
  [47] = {.lex_state = 173},
  [48] = {.lex_state = 169},
  [49] = {.lex_state = 173},
  [50] = {.lex_state = 175},
  [51] = {.lex_state = 173},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 169},
  [54] = {.lex_state = 173},
  [55] = {.lex_state = 173},
  [56] = {.lex_state = 173},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 169},
  [59] = {.lex_state = 173},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 173},
  [62] = {.lex_state = 173},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 173},
  [70] = {.lex_state = 169},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 171},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 171},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 170},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 173},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 171},
  [91] = {.lex_state = 171},
  [92] = {.lex_state = 171},
  [93] = {.lex_state = 171},
  [94] = {.lex_state = 171},
  [95] = {.lex_state = 171},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_Settings] = ACTIONS(1),
    [aux_sym_setting_statement_token1] = ACTIONS(1),
    [aux_sym_setting_statement_token2] = ACTIONS(1),
    [aux_sym_setting_statement_token3] = ACTIONS(1),
    [aux_sym_setting_statement_token4] = ACTIONS(1),
    [aux_sym_setting_statement_token5] = ACTIONS(1),
    [aux_sym_setting_statement_token6] = ACTIONS(1),
    [aux_sym_setting_statement_token7] = ACTIONS(1),
    [aux_sym_setting_statement_token8] = ACTIONS(1),
    [aux_sym_setting_statement_token9] = ACTIONS(1),
    [aux_sym_setting_statement_token10] = ACTIONS(1),
    [aux_sym_setting_statement_token11] = ACTIONS(1),
    [aux_sym_setting_statement_token12] = ACTIONS(1),
    [aux_sym_setting_statement_token13] = ACTIONS(1),
    [aux_sym_setting_statement_token14] = ACTIONS(1),
    [aux_sym_setting_statement_token15] = ACTIONS(1),
    [aux_sym_setting_statement_token16] = ACTIONS(1),
    [aux_sym_setting_statement_token17] = ACTIONS(1),
    [anon_sym_Variables] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_Keywords] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [sym_indented_ellipses] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_section] = STATE(14),
    [sym_settings_section] = STATE(63),
    [sym_settings_section_header] = STATE(94),
    [sym_variables_section] = STATE(63),
    [sym_variables_section_header] = STATE(93),
    [sym_keywords_section] = STATE(63),
    [sym_keywords_section_header] = STATE(92),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(14), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(9), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [35] = 4,
    ACTIONS(20), 1,
      aux_sym__whitespace_token1,
    ACTIONS(18), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(16), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [70] = 4,
    ACTIONS(20), 1,
      aux_sym__whitespace_token1,
    ACTIONS(18), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(16), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [105] = 4,
    ACTIONS(24), 1,
      aux_sym__whitespace_token1,
    ACTIONS(18), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(22), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [140] = 4,
    ACTIONS(28), 1,
      aux_sym__whitespace_token1,
    ACTIONS(18), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(26), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [175] = 5,
    ACTIONS(35), 1,
      aux_sym__whitespace_token1,
    ACTIONS(38), 1,
      sym__line_break,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(7), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(32), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [210] = 2,
    ACTIONS(43), 1,
      aux_sym__whitespace_token1,
    ACTIONS(41), 23,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [239] = 5,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    ACTIONS(51), 1,
      sym__line_break,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(47), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [274] = 2,
    ACTIONS(55), 1,
      aux_sym__whitespace_token1,
    ACTIONS(53), 23,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [303] = 5,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    ACTIONS(59), 1,
      sym__line_break,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(7), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(47), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [338] = 1,
    ACTIONS(61), 22,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [363] = 1,
    ACTIONS(63), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym__whitespace_token1,
      sym__line_break,
  [387] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_keywords_section_header,
    STATE(93), 1,
      sym_variables_section_header,
    STATE(94), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(63), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [412] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_keywords_section_header,
    STATE(93), 1,
      sym_variables_section_header,
    STATE(94), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(63), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [437] = 5,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(24), 4,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [458] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_keywords_section_header,
    STATE(93), 1,
      sym_variables_section_header,
    STATE(94), 1,
      sym_settings_section_header,
    STATE(15), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(63), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [483] = 7,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(92), 1,
      sym_keywords_section_header,
    STATE(93), 1,
      sym_variables_section_header,
    STATE(94), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(63), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [508] = 5,
    ACTIONS(78), 1,
      sym_ellipses,
    ACTIONS(81), 1,
      sym_indented_ellipses,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(14), 4,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [529] = 5,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(28), 4,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [550] = 5,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    ACTIONS(16), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(16), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(20), 4,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [571] = 5,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    ACTIONS(16), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(20), 4,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [592] = 6,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym__separator,
    ACTIONS(90), 1,
      aux_sym__whitespace_token1,
    ACTIONS(92), 1,
      sym__line_break,
    ACTIONS(86), 2,
      anon_sym_STAR_STAR_STAR,
      sym__token,
    STATE(24), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [614] = 6,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym__separator,
    ACTIONS(101), 1,
      aux_sym__whitespace_token1,
    ACTIONS(104), 1,
      sym__line_break,
    ACTIONS(96), 2,
      anon_sym_STAR_STAR_STAR,
      sym__token,
    STATE(24), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [636] = 6,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(111), 1,
      sym__token,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    ACTIONS(115), 1,
      sym__line_break,
    STATE(27), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [657] = 6,
    ACTIONS(111), 1,
      sym__token,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(121), 1,
      sym__line_break,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [678] = 6,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(127), 1,
      sym__token,
    ACTIONS(130), 1,
      aux_sym__whitespace_token1,
    ACTIONS(133), 1,
      sym__line_break,
    STATE(27), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [699] = 5,
    ACTIONS(138), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(141), 1,
      aux_sym__whitespace_token1,
    ACTIONS(144), 1,
      sym__line_break,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [718] = 2,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(55), 5,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [731] = 2,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(43), 5,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym__token,
      sym__separator,
      aux_sym__whitespace_token1,
  [744] = 5,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    ACTIONS(149), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(151), 1,
      sym__line_break,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [763] = 5,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    ACTIONS(149), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(155), 1,
      sym__line_break,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [782] = 5,
    ACTIONS(88), 1,
      sym__separator,
    ACTIONS(90), 1,
      aux_sym__whitespace_token1,
    ACTIONS(157), 1,
      sym__line_break,
    STATE(40), 1,
      sym_keyword_definition_body,
    STATE(23), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [800] = 2,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      sym__separator,
      sym__line_break,
    ACTIONS(161), 3,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      aux_sym__whitespace_token1,
  [811] = 2,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym__separator,
      sym__line_break,
    ACTIONS(165), 3,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      aux_sym__whitespace_token1,
  [822] = 2,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym__separator,
      sym__line_break,
    ACTIONS(167), 3,
      anon_sym_STAR_STAR_STAR,
      sym__token,
      aux_sym__whitespace_token1,
  [833] = 2,
    ACTIONS(167), 2,
      anon_sym_STAR_STAR_STAR,
      sym__token,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      sym__line_break,
  [843] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [851] = 1,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [859] = 2,
    ACTIONS(175), 2,
      anon_sym_STAR_STAR_STAR,
      sym__token,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      sym__line_break,
  [869] = 4,
    ACTIONS(177), 1,
      anon_sym_,
    ACTIONS(179), 1,
      anon_sym_Settings,
    ACTIONS(181), 1,
      anon_sym_Variables,
    ACTIONS(183), 1,
      anon_sym_Keywords,
  [882] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(187), 1,
      sym__line_break,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
  [892] = 3,
    ACTIONS(189), 1,
      sym__token,
    STATE(13), 1,
      sym_arguments,
    STATE(51), 1,
      sym_argument,
  [902] = 3,
    ACTIONS(191), 1,
      sym__separator,
    ACTIONS(194), 1,
      sym__line_break,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
  [912] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
  [922] = 3,
    ACTIONS(189), 1,
      sym__token,
    STATE(39), 1,
      sym_arguments,
    STATE(51), 1,
      sym_argument,
  [932] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(198), 1,
      sym__line_break,
    STATE(42), 1,
      aux_sym_arguments_repeat1,
  [942] = 3,
    ACTIONS(189), 1,
      sym__token,
    STATE(38), 1,
      sym_arguments,
    STATE(51), 1,
      sym_argument,
  [952] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(200), 1,
      sym__line_break,
    STATE(45), 1,
      aux_sym_arguments_repeat1,
  [962] = 3,
    ACTIONS(202), 1,
      anon_sym_Settings,
    ACTIONS(204), 1,
      anon_sym_Variables,
    ACTIONS(206), 1,
      anon_sym_Keywords,
  [972] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(208), 1,
      sym__line_break,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [982] = 2,
    ACTIONS(212), 1,
      sym__separator,
    ACTIONS(210), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [990] = 3,
    ACTIONS(189), 1,
      sym__token,
    STATE(34), 1,
      sym_arguments,
    STATE(54), 1,
      sym_argument,
  [1000] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(214), 1,
      sym__line_break,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [1010] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
  [1020] = 3,
    ACTIONS(185), 1,
      sym__separator,
    ACTIONS(218), 1,
      sym__line_break,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
  [1030] = 2,
    ACTIONS(220), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(222), 1,
      anon_sym_,
  [1037] = 2,
    ACTIONS(189), 1,
      sym__token,
    STATE(61), 1,
      sym_argument,
  [1044] = 2,
    ACTIONS(224), 1,
      sym__separator,
    ACTIONS(226), 1,
      sym__line_break,
  [1051] = 2,
    ACTIONS(228), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(230), 1,
      anon_sym_,
  [1058] = 1,
    ACTIONS(194), 2,
      sym__separator,
      sym__line_break,
  [1063] = 1,
    ACTIONS(232), 2,
      sym__separator,
      sym__line_break,
  [1068] = 1,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [1073] = 2,
    ACTIONS(236), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(238), 1,
      anon_sym_,
  [1080] = 2,
    ACTIONS(240), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(242), 1,
      anon_sym_,
  [1087] = 2,
    ACTIONS(244), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(246), 1,
      anon_sym_,
  [1094] = 2,
    ACTIONS(248), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(250), 1,
      anon_sym_,
  [1101] = 1,
    ACTIONS(252), 1,
      sym__line_break,
  [1105] = 1,
    ACTIONS(254), 1,
      sym__separator,
  [1109] = 1,
    ACTIONS(256), 1,
      sym__token,
  [1113] = 1,
    ACTIONS(258), 1,
      sym__line_break,
  [1117] = 1,
    ACTIONS(260), 1,
      sym__line_break,
  [1121] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1125] = 1,
    ACTIONS(264), 1,
      sym__line_break,
  [1129] = 1,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
  [1133] = 1,
    ACTIONS(268), 1,
      anon_sym_STAR_STAR_STAR,
  [1137] = 1,
    ACTIONS(270), 1,
      sym__line_break,
  [1141] = 1,
    ACTIONS(272), 1,
      anon_sym_STAR_STAR_STAR,
  [1145] = 1,
    ACTIONS(274), 1,
      sym__line_break,
  [1149] = 1,
    ACTIONS(276), 1,
      anon_sym_STAR_STAR_STAR,
  [1153] = 1,
    ACTIONS(278), 1,
      sym__line_break,
  [1157] = 1,
    ACTIONS(280), 1,
      sym__line_break,
  [1161] = 1,
    ACTIONS(282), 1,
      sym_variable_name,
  [1165] = 1,
    ACTIONS(284), 1,
      sym__line_break,
  [1169] = 1,
    ACTIONS(286), 1,
      sym__separator,
  [1173] = 1,
    ACTIONS(236), 1,
      anon_sym_STAR_STAR_STAR,
  [1177] = 1,
    ACTIONS(288), 1,
      sym__line_break,
  [1181] = 1,
    ACTIONS(248), 1,
      anon_sym_STAR_STAR_STAR,
  [1185] = 1,
    ACTIONS(228), 1,
      anon_sym_STAR_STAR_STAR,
  [1189] = 1,
    ACTIONS(290), 1,
      sym__line_break,
  [1193] = 1,
    ACTIONS(292), 1,
      sym__line_break,
  [1197] = 1,
    ACTIONS(294), 1,
      sym__line_break,
  [1201] = 1,
    ACTIONS(296), 1,
      sym__line_break,
  [1205] = 1,
    ACTIONS(298), 1,
      sym__line_break,
  [1209] = 1,
    ACTIONS(300), 1,
      sym__line_break,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 239,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 412,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 458,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 508,
  [SMALL_STATE(20)] = 529,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 614,
  [SMALL_STATE(25)] = 636,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 678,
  [SMALL_STATE(28)] = 699,
  [SMALL_STATE(29)] = 718,
  [SMALL_STATE(30)] = 731,
  [SMALL_STATE(31)] = 744,
  [SMALL_STATE(32)] = 763,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 800,
  [SMALL_STATE(35)] = 811,
  [SMALL_STATE(36)] = 822,
  [SMALL_STATE(37)] = 833,
  [SMALL_STATE(38)] = 843,
  [SMALL_STATE(39)] = 851,
  [SMALL_STATE(40)] = 859,
  [SMALL_STATE(41)] = 869,
  [SMALL_STATE(42)] = 882,
  [SMALL_STATE(43)] = 892,
  [SMALL_STATE(44)] = 902,
  [SMALL_STATE(45)] = 912,
  [SMALL_STATE(46)] = 922,
  [SMALL_STATE(47)] = 932,
  [SMALL_STATE(48)] = 942,
  [SMALL_STATE(49)] = 952,
  [SMALL_STATE(50)] = 962,
  [SMALL_STATE(51)] = 972,
  [SMALL_STATE(52)] = 982,
  [SMALL_STATE(53)] = 990,
  [SMALL_STATE(54)] = 1000,
  [SMALL_STATE(55)] = 1010,
  [SMALL_STATE(56)] = 1020,
  [SMALL_STATE(57)] = 1030,
  [SMALL_STATE(58)] = 1037,
  [SMALL_STATE(59)] = 1044,
  [SMALL_STATE(60)] = 1051,
  [SMALL_STATE(61)] = 1058,
  [SMALL_STATE(62)] = 1063,
  [SMALL_STATE(63)] = 1068,
  [SMALL_STATE(64)] = 1073,
  [SMALL_STATE(65)] = 1080,
  [SMALL_STATE(66)] = 1087,
  [SMALL_STATE(67)] = 1094,
  [SMALL_STATE(68)] = 1101,
  [SMALL_STATE(69)] = 1105,
  [SMALL_STATE(70)] = 1109,
  [SMALL_STATE(71)] = 1113,
  [SMALL_STATE(72)] = 1117,
  [SMALL_STATE(73)] = 1121,
  [SMALL_STATE(74)] = 1125,
  [SMALL_STATE(75)] = 1129,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1137,
  [SMALL_STATE(78)] = 1141,
  [SMALL_STATE(79)] = 1145,
  [SMALL_STATE(80)] = 1149,
  [SMALL_STATE(81)] = 1153,
  [SMALL_STATE(82)] = 1157,
  [SMALL_STATE(83)] = 1161,
  [SMALL_STATE(84)] = 1165,
  [SMALL_STATE(85)] = 1169,
  [SMALL_STATE(86)] = 1173,
  [SMALL_STATE(87)] = 1177,
  [SMALL_STATE(88)] = 1181,
  [SMALL_STATE(89)] = 1185,
  [SMALL_STATE(90)] = 1189,
  [SMALL_STATE(91)] = 1193,
  [SMALL_STATE(92)] = 1197,
  [SMALL_STATE(93)] = 1201,
  [SMALL_STATE(94)] = 1205,
  [SMALL_STATE(95)] = 1209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(47),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(85),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(84),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(49),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(70),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(95),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(82),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(90),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(83),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(84),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(58),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 5),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_robot(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
