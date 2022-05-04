#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 2
#define TOKEN_COUNT 37
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
  anon_sym_AT_LBRACE = 30,
  anon_sym_AMP_LBRACE = 31,
  sym_variable_name = 32,
  sym_text_chunk = 33,
  sym__separator = 34,
  aux_sym__whitespace_token1 = 35,
  sym__line_break = 36,
  sym_source_file = 37,
  sym_section = 38,
  sym_settings_section = 39,
  sym_settings_section_header = 40,
  sym_setting_statement = 41,
  sym_variables_section = 42,
  sym_variables_section_header = 43,
  sym_variable_definition = 44,
  sym_keywords_section = 45,
  sym_keywords_section_header = 46,
  sym_keyword_definition = 47,
  sym_keyword_definition_body = 48,
  sym_statement = 49,
  sym_variable_assignment = 50,
  sym_keyword_invocation = 51,
  sym_arguments = 52,
  sym_continuation = 53,
  sym_argument = 54,
  sym_scalar_variable = 55,
  sym_list_variable = 56,
  sym_dictionary_variable = 57,
  sym__empty_line = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_settings_section_repeat1 = 60,
  aux_sym_variables_section_repeat1 = 61,
  aux_sym_keywords_section_repeat1 = 62,
  aux_sym_keyword_definition_body_repeat1 = 63,
  aux_sym_arguments_repeat1 = 64,
  aux_sym_arguments_repeat2 = 65,
  aux_sym_argument_repeat1 = 66,
  alias_sym_keyword = 67,
  alias_sym_name = 68,
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
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
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
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
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
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
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
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
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
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_list_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_variable] = {
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
      if (eof) ADVANCE(189);
      if (lookahead == '\t') ADVANCE(240);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '&') ADVANCE(51);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == 'K') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(18);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(240);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(240);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(195);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == 'K') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == '}') ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(191);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(221);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(223);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(200);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '{') ADVANCE(216);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(216);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(225);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(225);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 53:
      if (lookahead == '{') ADVANCE(224);
      END_STATE();
    case 54:
      if (lookahead == '{') ADVANCE(224);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(235);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(5);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 167:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 168:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 169:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 170:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 171:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 172:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 173:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 174:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 175:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 176:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      END_STATE();
    case 177:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 178:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 179:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 181:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 182:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(232);
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(235);
      END_STATE();
    case 184:
      if (eof) ADVANCE(189);
      if (lookahead == '\t') ADVANCE(245);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 185:
      if (eof) ADVANCE(189);
      if (lookahead == '\t') ADVANCE(237);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      if (lookahead == '\t') ADVANCE(239);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == 'K') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Variables);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Keywords);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(55);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(57);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(247);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(247);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(247);
      if (lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(247);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '{') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '{') ADVANCE(232);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 188},
  [2] = {.lex_state = 184},
  [3] = {.lex_state = 184},
  [4] = {.lex_state = 184},
  [5] = {.lex_state = 184},
  [6] = {.lex_state = 184},
  [7] = {.lex_state = 184},
  [8] = {.lex_state = 184},
  [9] = {.lex_state = 184},
  [10] = {.lex_state = 184},
  [11] = {.lex_state = 184},
  [12] = {.lex_state = 184},
  [13] = {.lex_state = 184},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 185},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 185},
  [20] = {.lex_state = 185},
  [21] = {.lex_state = 185},
  [22] = {.lex_state = 185},
  [23] = {.lex_state = 186},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 186},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 187},
  [32] = {.lex_state = 185},
  [33] = {.lex_state = 185},
  [34] = {.lex_state = 187},
  [35] = {.lex_state = 184},
  [36] = {.lex_state = 184},
  [37] = {.lex_state = 187},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 184},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 186},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 186},
  [47] = {.lex_state = 186},
  [48] = {.lex_state = 186},
  [49] = {.lex_state = 186},
  [50] = {.lex_state = 186},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 187},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 184},
  [57] = {.lex_state = 187},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 184},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 188},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 181},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 181},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 181},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
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
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(109),
    [sym_section] = STATE(16),
    [sym_settings_section] = STATE(96),
    [sym_settings_section_header] = STATE(135),
    [sym_variables_section] = STATE(96),
    [sym_variables_section_header] = STATE(134),
    [sym_keywords_section] = STATE(96),
    [sym_keywords_section_header] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(16),
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
    ACTIONS(20), 1,
      aux_sym__whitespace_token1,
    ACTIONS(17), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
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
    ACTIONS(24), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
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
  [105] = 4,
    ACTIONS(28), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
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
  [140] = 4,
    ACTIONS(28), 1,
      aux_sym__whitespace_token1,
    ACTIONS(11), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
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
  [175] = 2,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(30), 23,
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
  [204] = 5,
    ACTIONS(38), 1,
      aux_sym__whitespace_token1,
    ACTIONS(40), 1,
      sym__line_break,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 17,
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
  [239] = 2,
    ACTIONS(44), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 23,
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
  [268] = 5,
    ACTIONS(38), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 1,
      sym__line_break,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 17,
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
  [303] = 5,
    ACTIONS(55), 1,
      aux_sym__whitespace_token1,
    ACTIONS(58), 1,
      sym__line_break,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(52), 17,
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
    STATE(133), 1,
      sym_keywords_section_header,
    STATE(134), 1,
      sym_variables_section_header,
    STATE(135), 1,
      sym_settings_section_header,
    STATE(15), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(96), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [412] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_keywords_section_header,
    STATE(134), 1,
      sym_variables_section_header,
    STATE(135), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(96), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [437] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_keywords_section_header,
    STATE(134), 1,
      sym_variables_section_header,
    STATE(135), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(96), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [462] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(13), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [483] = 7,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(133), 1,
      sym_keywords_section_header,
    STATE(134), 1,
      sym_variables_section_header,
    STATE(135), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(96), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [508] = 5,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
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
  [529] = 5,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(28), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [550] = 5,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_ellipses,
    ACTIONS(71), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(24), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [571] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_ellipses,
    ACTIONS(81), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(20), 5,
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
    ACTIONS(91), 1,
      aux_sym__whitespace_token1,
    ACTIONS(94), 1,
      sym__line_break,
    ACTIONS(86), 2,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
    STATE(23), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [614] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(46), 1,
      sym_arguments,
    STATE(77), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [638] = 6,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__separator,
    ACTIONS(111), 1,
      aux_sym__whitespace_token1,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(107), 2,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
    STATE(23), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [660] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(56), 1,
      sym_arguments,
    STATE(73), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [684] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(62), 1,
      sym_arguments,
    STATE(73), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [708] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(49), 1,
      sym_arguments,
    STATE(77), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [732] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(44), 1,
      sym_arguments,
    STATE(77), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [756] = 7,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(13), 1,
      sym_arguments,
    STATE(73), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [780] = 6,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(119), 1,
      sym_text_chunk,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(125), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [801] = 2,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(44), 6,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [814] = 2,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(32), 6,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [827] = 6,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(132), 1,
      sym_text_chunk,
    ACTIONS(134), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      sym__line_break,
    STATE(37), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [848] = 5,
    ACTIONS(38), 1,
      aux_sym__whitespace_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(142), 1,
      sym__line_break,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [867] = 5,
    ACTIONS(38), 1,
      aux_sym__whitespace_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [886] = 6,
    ACTIONS(132), 1,
      sym_text_chunk,
    ACTIONS(134), 1,
      aux_sym__whitespace_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [907] = 6,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(99), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(101), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(103), 1,
      sym_text_chunk,
    STATE(84), 1,
      sym_argument,
    STATE(41), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [928] = 5,
    ACTIONS(156), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(159), 1,
      aux_sym__whitespace_token1,
    ACTIONS(162), 1,
      sym__line_break,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [947] = 5,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_,
    ACTIONS(167), 1,
      sym_text_chunk,
    ACTIONS(169), 2,
      sym__separator,
      sym__line_break,
    STATE(42), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [965] = 5,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(165), 1,
      anon_sym_,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(173), 2,
      sym__separator,
      sym__line_break,
    STATE(40), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [983] = 5,
    ACTIONS(175), 1,
      anon_sym_,
    ACTIONS(178), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(184), 2,
      sym__separator,
      sym__line_break,
    STATE(42), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1001] = 5,
    ACTIONS(111), 1,
      aux_sym__whitespace_token1,
    ACTIONS(186), 1,
      sym__separator,
    ACTIONS(188), 1,
      sym__line_break,
    STATE(57), 1,
      sym_keyword_definition_body,
    STATE(25), 3,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1019] = 2,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1030] = 2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1041] = 2,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1052] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1063] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1074] = 2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1085] = 2,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1096] = 2,
    ACTIONS(218), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(216), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1106] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 4,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1116] = 2,
    ACTIONS(222), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(220), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1126] = 2,
    ACTIONS(226), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(224), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1136] = 2,
    ACTIONS(230), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(228), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1146] = 1,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1154] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 4,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1164] = 2,
    ACTIONS(240), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(238), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1174] = 2,
    ACTIONS(244), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(242), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1184] = 2,
    ACTIONS(246), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(184), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1194] = 2,
    ACTIONS(250), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(248), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1204] = 1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1212] = 2,
    ACTIONS(256), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(254), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1222] = 2,
    ACTIONS(260), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(258), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1232] = 4,
    ACTIONS(262), 1,
      anon_sym_,
    ACTIONS(264), 1,
      anon_sym_Settings,
    ACTIONS(266), 1,
      anon_sym_Variables,
    ACTIONS(268), 1,
      anon_sym_Keywords,
  [1245] = 3,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      sym_text_chunk,
    STATE(45), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1256] = 3,
    ACTIONS(276), 1,
      sym__separator,
    ACTIONS(278), 1,
      sym__line_break,
    ACTIONS(274), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1267] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(282), 1,
      sym__line_break,
    STATE(72), 1,
      aux_sym_arguments_repeat1,
  [1277] = 3,
    ACTIONS(284), 1,
      anon_sym_Settings,
    ACTIONS(286), 1,
      anon_sym_Variables,
    ACTIONS(288), 1,
      anon_sym_Keywords,
  [1287] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(290), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1297] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(292), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1307] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(294), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1317] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(296), 1,
      sym__line_break,
    STATE(71), 1,
      aux_sym_arguments_repeat1,
  [1327] = 2,
    ACTIONS(300), 1,
      sym__separator,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1335] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(302), 1,
      sym__line_break,
    STATE(70), 1,
      aux_sym_arguments_repeat1,
  [1345] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(304), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1355] = 3,
    ACTIONS(280), 1,
      sym__separator,
    ACTIONS(306), 1,
      sym__line_break,
    STATE(76), 1,
      aux_sym_arguments_repeat1,
  [1365] = 3,
    ACTIONS(308), 1,
      sym__separator,
    ACTIONS(311), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1375] = 3,
    ACTIONS(97), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    STATE(60), 1,
      sym_scalar_variable,
  [1385] = 2,
    ACTIONS(315), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(317), 1,
      anon_sym_,
  [1392] = 2,
    ACTIONS(319), 1,
      anon_sym_,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
  [1399] = 2,
    ACTIONS(323), 1,
      anon_sym_,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1406] = 2,
    ACTIONS(327), 1,
      sym__separator,
    ACTIONS(329), 1,
      sym__line_break,
  [1413] = 1,
    ACTIONS(311), 2,
      sym__separator,
      sym__line_break,
  [1418] = 2,
    ACTIONS(331), 1,
      anon_sym_,
    ACTIONS(333), 1,
      sym_variable_name,
  [1425] = 2,
    ACTIONS(335), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(337), 1,
      anon_sym_,
  [1432] = 2,
    ACTIONS(339), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(341), 1,
      anon_sym_,
  [1439] = 2,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1446] = 2,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
  [1453] = 2,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
  [1460] = 2,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      sym_variable_name,
  [1467] = 2,
    ACTIONS(359), 1,
      anon_sym_,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
  [1474] = 2,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(365), 1,
      anon_sym_,
  [1481] = 2,
    ACTIONS(367), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(369), 1,
      anon_sym_,
  [1488] = 2,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(373), 1,
      sym_variable_name,
  [1495] = 1,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [1500] = 2,
    ACTIONS(377), 1,
      sym__separator,
    ACTIONS(379), 1,
      sym__line_break,
  [1507] = 2,
    ACTIONS(381), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(383), 1,
      anon_sym_,
  [1514] = 1,
    ACTIONS(385), 1,
      sym__line_break,
  [1518] = 1,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
  [1522] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [1526] = 1,
    ACTIONS(389), 1,
      sym__separator,
  [1530] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
  [1534] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1538] = 1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
  [1542] = 1,
    ACTIONS(395), 1,
      sym_variable_name,
  [1546] = 1,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
  [1550] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
  [1554] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [1558] = 1,
    ACTIONS(401), 1,
      sym_variable_name,
  [1562] = 1,
    ACTIONS(403), 1,
      sym_variable_name,
  [1566] = 1,
    ACTIONS(405), 1,
      sym_variable_name,
  [1570] = 1,
    ACTIONS(407), 1,
      sym__line_break,
  [1574] = 1,
    ACTIONS(409), 1,
      sym__line_break,
  [1578] = 1,
    ACTIONS(411), 1,
      sym__line_break,
  [1582] = 1,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
  [1586] = 1,
    ACTIONS(415), 1,
      anon_sym_STAR_STAR_STAR,
  [1590] = 1,
    ACTIONS(417), 1,
      sym__line_break,
  [1594] = 1,
    ACTIONS(419), 1,
      anon_sym_STAR_STAR_STAR,
  [1598] = 1,
    ACTIONS(421), 1,
      sym__line_break,
  [1602] = 1,
    ACTIONS(423), 1,
      anon_sym_STAR_STAR_STAR,
  [1606] = 1,
    ACTIONS(425), 1,
      sym__line_break,
  [1610] = 1,
    ACTIONS(427), 1,
      sym_variable_name,
  [1614] = 1,
    ACTIONS(429), 1,
      sym__line_break,
  [1618] = 1,
    ACTIONS(431), 1,
      sym__separator,
  [1622] = 1,
    ACTIONS(339), 1,
      anon_sym_STAR_STAR_STAR,
  [1626] = 1,
    ACTIONS(433), 1,
      sym__line_break,
  [1630] = 1,
    ACTIONS(381), 1,
      anon_sym_STAR_STAR_STAR,
  [1634] = 1,
    ACTIONS(435), 1,
      sym__line_break,
  [1638] = 1,
    ACTIONS(367), 1,
      anon_sym_STAR_STAR_STAR,
  [1642] = 1,
    ACTIONS(437), 1,
      sym__line_break,
  [1646] = 1,
    ACTIONS(439), 1,
      sym__line_break,
  [1650] = 1,
    ACTIONS(441), 1,
      sym__line_break,
  [1654] = 1,
    ACTIONS(443), 1,
      sym__line_break,
  [1658] = 1,
    ACTIONS(445), 1,
      sym__line_break,
  [1662] = 1,
    ACTIONS(447), 1,
      sym__line_break,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 239,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 412,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 508,
  [SMALL_STATE(20)] = 529,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 614,
  [SMALL_STATE(25)] = 638,
  [SMALL_STATE(26)] = 660,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 732,
  [SMALL_STATE(30)] = 756,
  [SMALL_STATE(31)] = 780,
  [SMALL_STATE(32)] = 801,
  [SMALL_STATE(33)] = 814,
  [SMALL_STATE(34)] = 827,
  [SMALL_STATE(35)] = 848,
  [SMALL_STATE(36)] = 867,
  [SMALL_STATE(37)] = 886,
  [SMALL_STATE(38)] = 907,
  [SMALL_STATE(39)] = 928,
  [SMALL_STATE(40)] = 947,
  [SMALL_STATE(41)] = 965,
  [SMALL_STATE(42)] = 983,
  [SMALL_STATE(43)] = 1001,
  [SMALL_STATE(44)] = 1019,
  [SMALL_STATE(45)] = 1030,
  [SMALL_STATE(46)] = 1041,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1074,
  [SMALL_STATE(50)] = 1085,
  [SMALL_STATE(51)] = 1096,
  [SMALL_STATE(52)] = 1106,
  [SMALL_STATE(53)] = 1116,
  [SMALL_STATE(54)] = 1126,
  [SMALL_STATE(55)] = 1136,
  [SMALL_STATE(56)] = 1146,
  [SMALL_STATE(57)] = 1154,
  [SMALL_STATE(58)] = 1164,
  [SMALL_STATE(59)] = 1174,
  [SMALL_STATE(60)] = 1184,
  [SMALL_STATE(61)] = 1194,
  [SMALL_STATE(62)] = 1204,
  [SMALL_STATE(63)] = 1212,
  [SMALL_STATE(64)] = 1222,
  [SMALL_STATE(65)] = 1232,
  [SMALL_STATE(66)] = 1245,
  [SMALL_STATE(67)] = 1256,
  [SMALL_STATE(68)] = 1267,
  [SMALL_STATE(69)] = 1277,
  [SMALL_STATE(70)] = 1287,
  [SMALL_STATE(71)] = 1297,
  [SMALL_STATE(72)] = 1307,
  [SMALL_STATE(73)] = 1317,
  [SMALL_STATE(74)] = 1327,
  [SMALL_STATE(75)] = 1335,
  [SMALL_STATE(76)] = 1345,
  [SMALL_STATE(77)] = 1355,
  [SMALL_STATE(78)] = 1365,
  [SMALL_STATE(79)] = 1375,
  [SMALL_STATE(80)] = 1385,
  [SMALL_STATE(81)] = 1392,
  [SMALL_STATE(82)] = 1399,
  [SMALL_STATE(83)] = 1406,
  [SMALL_STATE(84)] = 1413,
  [SMALL_STATE(85)] = 1418,
  [SMALL_STATE(86)] = 1425,
  [SMALL_STATE(87)] = 1432,
  [SMALL_STATE(88)] = 1439,
  [SMALL_STATE(89)] = 1446,
  [SMALL_STATE(90)] = 1453,
  [SMALL_STATE(91)] = 1460,
  [SMALL_STATE(92)] = 1467,
  [SMALL_STATE(93)] = 1474,
  [SMALL_STATE(94)] = 1481,
  [SMALL_STATE(95)] = 1488,
  [SMALL_STATE(96)] = 1495,
  [SMALL_STATE(97)] = 1500,
  [SMALL_STATE(98)] = 1507,
  [SMALL_STATE(99)] = 1514,
  [SMALL_STATE(100)] = 1518,
  [SMALL_STATE(101)] = 1522,
  [SMALL_STATE(102)] = 1526,
  [SMALL_STATE(103)] = 1530,
  [SMALL_STATE(104)] = 1534,
  [SMALL_STATE(105)] = 1538,
  [SMALL_STATE(106)] = 1542,
  [SMALL_STATE(107)] = 1546,
  [SMALL_STATE(108)] = 1550,
  [SMALL_STATE(109)] = 1554,
  [SMALL_STATE(110)] = 1558,
  [SMALL_STATE(111)] = 1562,
  [SMALL_STATE(112)] = 1566,
  [SMALL_STATE(113)] = 1570,
  [SMALL_STATE(114)] = 1574,
  [SMALL_STATE(115)] = 1578,
  [SMALL_STATE(116)] = 1582,
  [SMALL_STATE(117)] = 1586,
  [SMALL_STATE(118)] = 1590,
  [SMALL_STATE(119)] = 1594,
  [SMALL_STATE(120)] = 1598,
  [SMALL_STATE(121)] = 1602,
  [SMALL_STATE(122)] = 1606,
  [SMALL_STATE(123)] = 1610,
  [SMALL_STATE(124)] = 1614,
  [SMALL_STATE(125)] = 1618,
  [SMALL_STATE(126)] = 1622,
  [SMALL_STATE(127)] = 1626,
  [SMALL_STATE(128)] = 1630,
  [SMALL_STATE(129)] = 1634,
  [SMALL_STATE(130)] = 1638,
  [SMALL_STATE(131)] = 1642,
  [SMALL_STATE(132)] = 1646,
  [SMALL_STATE(133)] = 1650,
  [SMALL_STATE(134)] = 1654,
  [SMALL_STATE(135)] = 1658,
  [SMALL_STATE(136)] = 1662,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(68),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(125),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(124),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(75),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(75),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(136),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(99),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(131),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(123),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(124),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(39),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(79),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(95),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(42),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
