#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
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
  sym_text_chunk = 31,
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
  sym_variable_assignment = 48,
  sym_keyword_invocation = 49,
  sym_arguments = 50,
  sym_continuation = 51,
  sym_argument = 52,
  sym_scalar_variable = 53,
  sym__empty_line = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_settings_section_repeat1 = 56,
  aux_sym_variables_section_repeat1 = 57,
  aux_sym_keywords_section_repeat1 = 58,
  aux_sym_keyword_definition_body_repeat1 = 59,
  aux_sym_arguments_repeat1 = 60,
  aux_sym_arguments_repeat2 = 61,
  aux_sym_argument_repeat1 = 62,
  alias_sym_keyword = 63,
  alias_sym_name = 64,
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
  [sym_text_chunk] = "text_chunk",
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
  [sym_variable_assignment] = "variable_assignment",
  [sym_keyword_invocation] = "keyword_invocation",
  [sym_arguments] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
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
  [sym_text_chunk] = sym_text_chunk,
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
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_keyword_invocation] = sym_keyword_invocation,
  [sym_arguments] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
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
  [sym_text_chunk] = {
    .visible = true,
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
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_invocation] = {
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
  [sym_scalar_variable] = {
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
  [aux_sym_argument_repeat1] = {
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
    [0] = alias_sym_keyword,
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
      if (eof) ADVANCE(185);
      if (lookahead == '\t') ADVANCE(234);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'V') ADVANCE(20);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(234);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(234);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(233);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '}') ADVANCE(213);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(187);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(217);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(219);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(196);
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(212);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(212);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 53:
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    case 54:
      if (lookahead == '{') ADVANCE(229);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(5);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 164:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 165:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 166:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 167:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 168:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 169:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 170:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 171:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 172:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 173:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 174:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 175:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 176:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 178:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(226);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(229);
      END_STATE();
    case 180:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(119);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 181:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 182:
      if (eof) ADVANCE(185);
      if (lookahead == '\t') ADVANCE(233);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 183:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 184:
      if (eof) ADVANCE(185);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == 'K') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Variables);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Keywords);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(53);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(54);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(54);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(241);
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(241);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(241);
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(241);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '{') ADVANCE(226);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 184},
  [2] = {.lex_state = 180},
  [3] = {.lex_state = 180},
  [4] = {.lex_state = 180},
  [5] = {.lex_state = 180},
  [6] = {.lex_state = 180},
  [7] = {.lex_state = 180},
  [8] = {.lex_state = 180},
  [9] = {.lex_state = 180},
  [10] = {.lex_state = 180},
  [11] = {.lex_state = 180},
  [12] = {.lex_state = 180},
  [13] = {.lex_state = 180},
  [14] = {.lex_state = 181},
  [15] = {.lex_state = 181},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 181},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 182},
  [24] = {.lex_state = 182},
  [25] = {.lex_state = 181},
  [26] = {.lex_state = 183},
  [27] = {.lex_state = 180},
  [28] = {.lex_state = 183},
  [29] = {.lex_state = 180},
  [30] = {.lex_state = 181},
  [31] = {.lex_state = 180},
  [32] = {.lex_state = 183},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 182},
  [38] = {.lex_state = 182},
  [39] = {.lex_state = 182},
  [40] = {.lex_state = 182},
  [41] = {.lex_state = 182},
  [42] = {.lex_state = 182},
  [43] = {.lex_state = 182},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 180},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 183},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 180},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 183},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 184},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 177},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 177},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 177},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_Keywords] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym_section] = STATE(19),
    [sym_settings_section] = STATE(77),
    [sym_settings_section_header] = STATE(110),
    [sym_variables_section] = STATE(77),
    [sym_variables_section_header] = STATE(109),
    [sym_keywords_section] = STATE(77),
    [sym_keywords_section_header] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
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
    ACTIONS(17), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(15), 21,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 21,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 21,
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
    ACTIONS(25), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 21,
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
  [210] = 5,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    ACTIONS(47), 1,
      sym__line_break,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(7), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(43), 17,
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
  [245] = 2,
    ACTIONS(51), 1,
      aux_sym__whitespace_token1,
    ACTIONS(49), 23,
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
  [274] = 5,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    ACTIONS(55), 1,
      sym__line_break,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(43), 17,
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
  [309] = 2,
    ACTIONS(59), 1,
      aux_sym__whitespace_token1,
    ACTIONS(57), 23,
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
  [387] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [408] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(13), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [429] = 7,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(108), 1,
      sym_keywords_section_header,
    STATE(109), 1,
      sym_variables_section_header,
    STATE(110), 1,
      sym_settings_section_header,
    STATE(16), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(77), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [454] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_keywords_section_header,
    STATE(109), 1,
      sym_variables_section_header,
    STATE(110), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(77), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [479] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_keywords_section_header,
    STATE(109), 1,
      sym_variables_section_header,
    STATE(110), 1,
      sym_settings_section_header,
    STATE(16), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(77), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [504] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_keywords_section_header,
    STATE(109), 1,
      sym_variables_section_header,
    STATE(110), 1,
      sym_settings_section_header,
    STATE(16), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(77), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [529] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(14), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(17), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [550] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(15), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [571] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_ellipses,
    ACTIONS(81), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(28), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
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
      sym_text_chunk,
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
      sym_text_chunk,
    STATE(24), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [636] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(59), 6,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [649] = 6,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(111), 1,
      sym_text_chunk,
    ACTIONS(114), 1,
      aux_sym__whitespace_token1,
    ACTIONS(117), 1,
      sym__line_break,
    STATE(26), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [670] = 5,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    ACTIONS(122), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(124), 1,
      sym__line_break,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [689] = 6,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(130), 1,
      sym_text_chunk,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(134), 1,
      sym__line_break,
    STATE(32), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [710] = 5,
    ACTIONS(138), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(141), 1,
      aux_sym__whitespace_token1,
    ACTIONS(144), 1,
      sym__line_break,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(29), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [729] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(51), 6,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [742] = 5,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    ACTIONS(122), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(149), 1,
      sym__line_break,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(29), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [761] = 6,
    ACTIONS(130), 1,
      sym_text_chunk,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(155), 1,
      sym__line_break,
    STATE(26), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [782] = 5,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(161), 1,
      sym_text_chunk,
    ACTIONS(163), 2,
      sym__separator,
      sym__line_break,
    STATE(34), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [800] = 5,
    ACTIONS(165), 1,
      anon_sym_,
    ACTIONS(168), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(174), 2,
      sym__separator,
      sym__line_break,
    STATE(34), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [818] = 5,
    ACTIONS(90), 1,
      aux_sym__whitespace_token1,
    ACTIONS(176), 1,
      sym__separator,
    ACTIONS(178), 1,
      sym__line_break,
    STATE(57), 1,
      sym_keyword_definition_body,
    STATE(23), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [836] = 5,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(180), 1,
      sym_text_chunk,
    ACTIONS(182), 2,
      sym__separator,
      sym__line_break,
    STATE(33), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [854] = 2,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [865] = 2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [876] = 2,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [887] = 2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [898] = 2,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [909] = 2,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [920] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [931] = 2,
    ACTIONS(212), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(210), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [941] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(42), 1,
      sym_arguments,
    STATE(68), 1,
      sym_argument,
  [957] = 2,
    ACTIONS(216), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(174), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [967] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(54), 1,
      sym_arguments,
    STATE(64), 1,
      sym_argument,
  [983] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(13), 1,
      sym_arguments,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(64), 1,
      sym_argument,
  [999] = 1,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1007] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(40), 1,
      sym_arguments,
    STATE(68), 1,
      sym_argument,
  [1023] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(49), 1,
      sym_arguments,
    STATE(64), 1,
      sym_argument,
  [1039] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 4,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1049] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(38), 1,
      sym_arguments,
    STATE(68), 1,
      sym_argument,
  [1065] = 1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1073] = 2,
    ACTIONS(224), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(222), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1083] = 2,
    ACTIONS(228), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(226), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1093] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 4,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1103] = 4,
    ACTIONS(234), 1,
      anon_sym_,
    ACTIONS(236), 1,
      anon_sym_Settings,
    ACTIONS(238), 1,
      anon_sym_Variables,
    ACTIONS(240), 1,
      anon_sym_Keywords,
  [1116] = 3,
    ACTIONS(242), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(244), 1,
      sym_text_chunk,
    STATE(37), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1127] = 3,
    ACTIONS(248), 1,
      sym__separator,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(246), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1138] = 4,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(214), 1,
      sym_text_chunk,
    STATE(36), 1,
      sym_scalar_variable,
    STATE(79), 1,
      sym_argument,
  [1151] = 2,
    ACTIONS(254), 1,
      sym__separator,
    ACTIONS(252), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1159] = 3,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(256), 1,
      sym_text_chunk,
    STATE(46), 1,
      sym_scalar_variable,
  [1169] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(260), 1,
      sym__line_break,
    STATE(65), 1,
      aux_sym_arguments_repeat1,
  [1179] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(262), 1,
      sym__line_break,
    STATE(73), 1,
      aux_sym_arguments_repeat1,
  [1189] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(264), 1,
      sym__line_break,
    STATE(73), 1,
      aux_sym_arguments_repeat1,
  [1199] = 3,
    ACTIONS(266), 1,
      anon_sym_Settings,
    ACTIONS(268), 1,
      anon_sym_Variables,
    ACTIONS(270), 1,
      anon_sym_Keywords,
  [1209] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(272), 1,
      sym__line_break,
    STATE(69), 1,
      aux_sym_arguments_repeat1,
  [1219] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(274), 1,
      sym__line_break,
    STATE(73), 1,
      aux_sym_arguments_repeat1,
  [1229] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(276), 1,
      sym__line_break,
    STATE(71), 1,
      aux_sym_arguments_repeat1,
  [1239] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(278), 1,
      sym__line_break,
    STATE(73), 1,
      aux_sym_arguments_repeat1,
  [1249] = 3,
    ACTIONS(258), 1,
      sym__separator,
    ACTIONS(280), 1,
      sym__line_break,
    STATE(66), 1,
      aux_sym_arguments_repeat1,
  [1259] = 3,
    ACTIONS(282), 1,
      sym__separator,
    ACTIONS(285), 1,
      sym__line_break,
    STATE(73), 1,
      aux_sym_arguments_repeat1,
  [1269] = 2,
    ACTIONS(287), 1,
      sym__separator,
    ACTIONS(289), 1,
      sym__line_break,
  [1276] = 2,
    ACTIONS(291), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(293), 1,
      anon_sym_,
  [1283] = 2,
    ACTIONS(295), 1,
      anon_sym_,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1290] = 1,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [1295] = 2,
    ACTIONS(301), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(303), 1,
      anon_sym_,
  [1302] = 1,
    ACTIONS(285), 2,
      sym__separator,
      sym__line_break,
  [1307] = 2,
    ACTIONS(305), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(307), 1,
      anon_sym_,
  [1314] = 2,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_variable_name,
  [1321] = 2,
    ACTIONS(313), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(315), 1,
      anon_sym_,
  [1328] = 2,
    ACTIONS(317), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(319), 1,
      anon_sym_,
  [1335] = 2,
    ACTIONS(321), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(323), 1,
      anon_sym_,
  [1342] = 2,
    ACTIONS(325), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
  [1349] = 2,
    ACTIONS(329), 1,
      anon_sym_,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
  [1356] = 1,
    ACTIONS(291), 1,
      anon_sym_STAR_STAR_STAR,
  [1360] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1364] = 1,
    ACTIONS(321), 1,
      anon_sym_STAR_STAR_STAR,
  [1368] = 1,
    ACTIONS(335), 1,
      sym_variable_name,
  [1372] = 1,
    ACTIONS(337), 1,
      sym__line_break,
  [1376] = 1,
    ACTIONS(317), 1,
      anon_sym_STAR_STAR_STAR,
  [1380] = 1,
    ACTIONS(339), 1,
      sym__separator,
  [1384] = 1,
    ACTIONS(341), 1,
      anon_sym_STAR_STAR_STAR,
  [1388] = 1,
    ACTIONS(343), 1,
      sym__line_break,
  [1392] = 1,
    ACTIONS(345), 1,
      sym__line_break,
  [1396] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1400] = 1,
    ACTIONS(347), 1,
      anon_sym_STAR_STAR_STAR,
  [1404] = 1,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
  [1408] = 1,
    ACTIONS(351), 1,
      sym__line_break,
  [1412] = 1,
    ACTIONS(353), 1,
      sym_variable_name,
  [1416] = 1,
    ACTIONS(355), 1,
      sym__line_break,
  [1420] = 1,
    ACTIONS(357), 1,
      sym__line_break,
  [1424] = 1,
    ACTIONS(359), 1,
      sym__line_break,
  [1428] = 1,
    ACTIONS(361), 1,
      sym__separator,
  [1432] = 1,
    ACTIONS(363), 1,
      sym__line_break,
  [1436] = 1,
    ACTIONS(365), 1,
      sym__line_break,
  [1440] = 1,
    ACTIONS(367), 1,
      sym__line_break,
  [1444] = 1,
    ACTIONS(369), 1,
      sym__line_break,
  [1448] = 1,
    ACTIONS(371), 1,
      sym__line_break,
  [1452] = 1,
    ACTIONS(373), 1,
      sym_variable_name,
  [1456] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [1460] = 1,
    ACTIONS(377), 1,
      sym__line_break,
  [1464] = 1,
    ACTIONS(379), 1,
      sym__line_break,
  [1468] = 1,
    ACTIONS(381), 1,
      sym__line_break,
  [1472] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [1476] = 1,
    ACTIONS(385), 1,
      anon_sym_STAR_STAR_STAR,
  [1480] = 1,
    ACTIONS(387), 1,
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
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 429,
  [SMALL_STATE(17)] = 454,
  [SMALL_STATE(18)] = 479,
  [SMALL_STATE(19)] = 504,
  [SMALL_STATE(20)] = 529,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 614,
  [SMALL_STATE(25)] = 636,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 689,
  [SMALL_STATE(29)] = 710,
  [SMALL_STATE(30)] = 729,
  [SMALL_STATE(31)] = 742,
  [SMALL_STATE(32)] = 761,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 800,
  [SMALL_STATE(35)] = 818,
  [SMALL_STATE(36)] = 836,
  [SMALL_STATE(37)] = 854,
  [SMALL_STATE(38)] = 865,
  [SMALL_STATE(39)] = 876,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 898,
  [SMALL_STATE(42)] = 909,
  [SMALL_STATE(43)] = 920,
  [SMALL_STATE(44)] = 931,
  [SMALL_STATE(45)] = 941,
  [SMALL_STATE(46)] = 957,
  [SMALL_STATE(47)] = 967,
  [SMALL_STATE(48)] = 983,
  [SMALL_STATE(49)] = 999,
  [SMALL_STATE(50)] = 1007,
  [SMALL_STATE(51)] = 1023,
  [SMALL_STATE(52)] = 1039,
  [SMALL_STATE(53)] = 1049,
  [SMALL_STATE(54)] = 1065,
  [SMALL_STATE(55)] = 1073,
  [SMALL_STATE(56)] = 1083,
  [SMALL_STATE(57)] = 1093,
  [SMALL_STATE(58)] = 1103,
  [SMALL_STATE(59)] = 1116,
  [SMALL_STATE(60)] = 1127,
  [SMALL_STATE(61)] = 1138,
  [SMALL_STATE(62)] = 1151,
  [SMALL_STATE(63)] = 1159,
  [SMALL_STATE(64)] = 1169,
  [SMALL_STATE(65)] = 1179,
  [SMALL_STATE(66)] = 1189,
  [SMALL_STATE(67)] = 1199,
  [SMALL_STATE(68)] = 1209,
  [SMALL_STATE(69)] = 1219,
  [SMALL_STATE(70)] = 1229,
  [SMALL_STATE(71)] = 1239,
  [SMALL_STATE(72)] = 1249,
  [SMALL_STATE(73)] = 1259,
  [SMALL_STATE(74)] = 1269,
  [SMALL_STATE(75)] = 1276,
  [SMALL_STATE(76)] = 1283,
  [SMALL_STATE(77)] = 1290,
  [SMALL_STATE(78)] = 1295,
  [SMALL_STATE(79)] = 1302,
  [SMALL_STATE(80)] = 1307,
  [SMALL_STATE(81)] = 1314,
  [SMALL_STATE(82)] = 1321,
  [SMALL_STATE(83)] = 1328,
  [SMALL_STATE(84)] = 1335,
  [SMALL_STATE(85)] = 1342,
  [SMALL_STATE(86)] = 1349,
  [SMALL_STATE(87)] = 1356,
  [SMALL_STATE(88)] = 1360,
  [SMALL_STATE(89)] = 1364,
  [SMALL_STATE(90)] = 1368,
  [SMALL_STATE(91)] = 1372,
  [SMALL_STATE(92)] = 1376,
  [SMALL_STATE(93)] = 1380,
  [SMALL_STATE(94)] = 1384,
  [SMALL_STATE(95)] = 1388,
  [SMALL_STATE(96)] = 1392,
  [SMALL_STATE(97)] = 1396,
  [SMALL_STATE(98)] = 1400,
  [SMALL_STATE(99)] = 1404,
  [SMALL_STATE(100)] = 1408,
  [SMALL_STATE(101)] = 1412,
  [SMALL_STATE(102)] = 1416,
  [SMALL_STATE(103)] = 1420,
  [SMALL_STATE(104)] = 1424,
  [SMALL_STATE(105)] = 1428,
  [SMALL_STATE(106)] = 1432,
  [SMALL_STATE(107)] = 1436,
  [SMALL_STATE(108)] = 1440,
  [SMALL_STATE(109)] = 1444,
  [SMALL_STATE(110)] = 1448,
  [SMALL_STATE(111)] = 1452,
  [SMALL_STATE(112)] = 1456,
  [SMALL_STATE(113)] = 1460,
  [SMALL_STATE(114)] = 1464,
  [SMALL_STATE(115)] = 1468,
  [SMALL_STATE(116)] = 1472,
  [SMALL_STATE(117)] = 1476,
  [SMALL_STATE(118)] = 1480,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(72),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(105),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(106),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(70),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(70),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(59),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(118),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(100),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(113),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(111),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(106),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(63),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(81),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(34),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
