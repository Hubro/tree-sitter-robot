#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
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
  aux_sym_keyword_setting_token1 = 28,
  aux_sym_keyword_setting_token2 = 29,
  aux_sym_keyword_setting_token3 = 30,
  aux_sym_keyword_setting_token4 = 31,
  aux_sym_keyword_setting_token5 = 32,
  aux_sym_keyword_setting_token6 = 33,
  sym_ellipses = 34,
  sym_indented_ellipses = 35,
  anon_sym_AT_LBRACE = 36,
  anon_sym_AMP_LBRACE = 37,
  sym_variable_name = 38,
  sym_text_chunk = 39,
  sym__separator = 40,
  aux_sym__whitespace_token1 = 41,
  sym__line_break = 42,
  sym_source_file = 43,
  sym_section = 44,
  sym_settings_section = 45,
  sym_settings_section_header = 46,
  sym_setting_statement = 47,
  sym_variables_section = 48,
  sym_variables_section_header = 49,
  sym_variable_definition = 50,
  sym_keywords_section = 51,
  sym_keywords_section_header = 52,
  sym_keyword_definition = 53,
  sym_keyword_definition_body = 54,
  sym_keyword_setting = 55,
  sym_statement = 56,
  sym_variable_assignment = 57,
  sym_keyword_invocation = 58,
  sym_arguments = 59,
  sym_continuation = 60,
  sym_argument = 61,
  sym_scalar_variable = 62,
  sym_list_variable = 63,
  sym_dictionary_variable = 64,
  sym__empty_line = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_settings_section_repeat1 = 67,
  aux_sym_variables_section_repeat1 = 68,
  aux_sym_keywords_section_repeat1 = 69,
  aux_sym_keyword_definition_body_repeat1 = 70,
  aux_sym_arguments_repeat1 = 71,
  aux_sym_arguments_repeat2 = 72,
  aux_sym_argument_repeat1 = 73,
  alias_sym_keyword = 74,
  alias_sym_name = 75,
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
  [aux_sym_keyword_setting_token1] = "keyword_setting_token1",
  [aux_sym_keyword_setting_token2] = "keyword_setting_token2",
  [aux_sym_keyword_setting_token3] = "keyword_setting_token3",
  [aux_sym_keyword_setting_token4] = "keyword_setting_token4",
  [aux_sym_keyword_setting_token5] = "keyword_setting_token5",
  [aux_sym_keyword_setting_token6] = "keyword_setting_token6",
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
  [sym_keyword_setting] = "keyword_setting",
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
  [aux_sym_keyword_setting_token1] = aux_sym_keyword_setting_token1,
  [aux_sym_keyword_setting_token2] = aux_sym_keyword_setting_token2,
  [aux_sym_keyword_setting_token3] = aux_sym_keyword_setting_token3,
  [aux_sym_keyword_setting_token4] = aux_sym_keyword_setting_token4,
  [aux_sym_keyword_setting_token5] = aux_sym_keyword_setting_token5,
  [aux_sym_keyword_setting_token6] = aux_sym_keyword_setting_token6,
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
  [sym_keyword_setting] = sym_keyword_setting,
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
  [aux_sym_keyword_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token6] = {
    .visible = false,
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
  [sym_keyword_setting] = {
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

static inline bool sym_text_chunk_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= 'A' || (c < 'a'
      ? (c < 'I'
        ? c == 'E'
        : c <= 'I')
      : (c <= 'a' || (c < 'i'
        ? c == 'e'
        : c <= 'i')))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
  return (c < 'D'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '@'
        ? c == '&'
        : c <= 'A')))
    : (c <= 'D' || (c < 'd'
      ? (c < 'T'
        ? c == 'R'
        : (c <= 'T' || c == 'a'))
      : (c <= 'd' || (c < 't'
        ? c == 'r'
        : c <= 't')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(256);
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '&') ADVANCE(77);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == 'K') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'V') ADVANCE(26);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(416);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(417);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(415);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '&') ADVANCE(78);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '=') ADVANCE(286);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == 'K') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == '}') ADVANCE(284);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == ']') ADVANCE(303);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(81);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(258);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(306);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(308);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(291);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(303);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(288);
      END_STATE();
    case 40:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(305);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(296);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 51:
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '{') ADVANCE(283);
      END_STATE();
    case 76:
      if (lookahead == '{') ADVANCE(283);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 77:
      if (lookahead == '{') ADVANCE(310);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(310);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(309);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(378);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(363);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 83:
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 84:
      if (lookahead == '{') ADVANCE(359);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 105:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 138:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 141:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 143:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 146:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 154:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 155:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 169:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 171:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 175:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 176:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 179:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 181:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 182:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 183:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 184:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 187:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 192:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 194:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 197:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      END_STATE();
    case 199:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(267);
      END_STATE();
    case 200:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 201:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      END_STATE();
    case 202:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 207:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 229:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 231:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 233:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 235:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 236:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 238:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 239:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 240:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 241:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 242:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 243:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(161);
      END_STATE();
    case 244:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 245:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 246:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 248:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 249:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(317);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(359);
      END_STATE();
    case 251:
      if (eof) ADVANCE(256);
      if (lookahead == '\t') ADVANCE(421);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 252:
      if (eof) ADVANCE(256);
      if (lookahead == '\t') ADVANCE(413);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 253:
      if (eof) ADVANCE(256);
      if (lookahead == '\t') ADVANCE(415);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 254:
      if (eof) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\r') ADVANCE(426);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 255:
      if (eof) ADVANCE(256);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == 'K') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'V') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Variables);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Keywords);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '{') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(81);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(357);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(357);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(357);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(357);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(357);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(357);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(357);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(357);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(357);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(357);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(357);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(357);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(357);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(357);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(357);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(84);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(399);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(399);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(399);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(399);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(399);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(399);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(399);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(399);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(399);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(399);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(399);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(399);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(399);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(399);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(399);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(399);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(399);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(399);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(399);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(399);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(357);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == ']') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == ']') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '{') ADVANCE(317);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 255},
  [2] = {.lex_state = 251},
  [3] = {.lex_state = 251},
  [4] = {.lex_state = 251},
  [5] = {.lex_state = 251},
  [6] = {.lex_state = 251},
  [7] = {.lex_state = 251},
  [8] = {.lex_state = 251},
  [9] = {.lex_state = 251},
  [10] = {.lex_state = 251},
  [11] = {.lex_state = 251},
  [12] = {.lex_state = 251},
  [13] = {.lex_state = 251},
  [14] = {.lex_state = 252},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 253},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 252},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 252},
  [23] = {.lex_state = 252},
  [24] = {.lex_state = 252},
  [25] = {.lex_state = 253},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 254},
  [34] = {.lex_state = 252},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 251},
  [37] = {.lex_state = 254},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 254},
  [40] = {.lex_state = 251},
  [41] = {.lex_state = 252},
  [42] = {.lex_state = 251},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 253},
  [47] = {.lex_state = 253},
  [48] = {.lex_state = 253},
  [49] = {.lex_state = 253},
  [50] = {.lex_state = 253},
  [51] = {.lex_state = 253},
  [52] = {.lex_state = 253},
  [53] = {.lex_state = 253},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 251},
  [58] = {.lex_state = 251},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 254},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 254},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 255},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 248},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 248},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
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
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 248},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 248},
  [138] = {.lex_state = 248},
  [139] = {.lex_state = 0},
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
    [aux_sym_keyword_setting_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_token5] = ACTIONS(1),
    [aux_sym_keyword_setting_token6] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(133),
    [sym_section] = STATE(21),
    [sym_settings_section] = STATE(88),
    [sym_settings_section_header] = STATE(131),
    [sym_variables_section] = STATE(88),
    [sym_variables_section_header] = STATE(130),
    [sym_keywords_section] = STATE(88),
    [sym_keywords_section_header] = STATE(129),
    [aux_sym_source_file_repeat1] = STATE(21),
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
  [70] = 4,
    ACTIONS(24), 1,
      aux_sym__whitespace_token1,
    ACTIONS(18), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
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
    ACTIONS(18), 2,
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
  [140] = 4,
    ACTIONS(28), 1,
      aux_sym__whitespace_token1,
    ACTIONS(18), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
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
    STATE(9), 3,
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
  [387] = 5,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(24), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [408] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_keywords_section_header,
    STATE(130), 1,
      sym_variables_section_header,
    STATE(131), 1,
      sym_settings_section_header,
    STATE(20), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [433] = 6,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym__separator,
    ACTIONS(78), 1,
      aux_sym__whitespace_token1,
    ACTIONS(81), 1,
      sym__line_break,
    ACTIONS(73), 2,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
    STATE(16), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [456] = 4,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(88), 1,
      sym_text_chunk,
    STATE(47), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(86), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [475] = 7,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(129), 1,
      sym_keywords_section_header,
    STATE(130), 1,
      sym_variables_section_header,
    STATE(131), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [500] = 5,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(28), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [521] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_keywords_section_header,
    STATE(130), 1,
      sym_variables_section_header,
    STATE(131), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [546] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_keywords_section_header,
    STATE(130), 1,
      sym_variables_section_header,
    STATE(131), 1,
      sym_settings_section_header,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 3,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
  [571] = 5,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(28), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [592] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_ellipses,
    ACTIONS(100), 1,
      sym_indented_ellipses,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(14), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [613] = 5,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_ellipses,
    ACTIONS(67), 1,
      sym_indented_ellipses,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(20), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [634] = 6,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__separator,
    ACTIONS(109), 1,
      aux_sym__whitespace_token1,
    ACTIONS(111), 1,
      sym__line_break,
    ACTIONS(105), 2,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
    STATE(16), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [657] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(50), 1,
      sym_arguments,
    STATE(71), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [681] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(52), 1,
      sym_arguments,
    STATE(71), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [705] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(49), 1,
      sym_arguments,
    STATE(71), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [729] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(57), 1,
      sym_arguments,
    STATE(75), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [753] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(53), 1,
      sym_arguments,
    STATE(71), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [777] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(13), 1,
      sym_arguments,
    STATE(75), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [801] = 7,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(58), 1,
      sym_arguments,
    STATE(75), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [825] = 6,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(125), 1,
      sym_text_chunk,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(131), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [846] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(43), 6,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [859] = 5,
    ACTIONS(109), 1,
      aux_sym__whitespace_token1,
    ACTIONS(134), 1,
      sym__separator,
    ACTIONS(136), 1,
      sym__line_break,
    STATE(60), 1,
      sym_keyword_definition_body,
    STATE(25), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [878] = 5,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(142), 1,
      sym__line_break,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(42), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [897] = 6,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [918] = 6,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(115), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(119), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(44), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [939] = 6,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(158), 1,
      sym__line_break,
    STATE(37), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
  [960] = 5,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(162), 1,
      sym__line_break,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [979] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(55), 6,
      anon_sym_STAR_STAR_STAR,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [992] = 5,
    ACTIONS(166), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(169), 1,
      aux_sym__whitespace_token1,
    ACTIONS(172), 1,
      sym__line_break,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(42), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [1011] = 5,
    ACTIONS(175), 1,
      anon_sym_,
    ACTIONS(178), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(184), 2,
      sym__separator,
      sym__line_break,
    STATE(43), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1029] = 5,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(188), 1,
      sym_text_chunk,
    ACTIONS(190), 2,
      sym__separator,
      sym__line_break,
    STATE(45), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1047] = 5,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(192), 1,
      sym_text_chunk,
    ACTIONS(194), 2,
      sym__separator,
      sym__line_break,
    STATE(43), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1065] = 2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1076] = 2,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1087] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1098] = 2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1109] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1120] = 2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1131] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1142] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 5,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1153] = 2,
    ACTIONS(228), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(226), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1163] = 2,
    ACTIONS(230), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(184), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1173] = 2,
    ACTIONS(234), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(232), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1183] = 1,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1191] = 1,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1199] = 2,
    ACTIONS(242), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(240), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1209] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 4,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1219] = 2,
    ACTIONS(250), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(248), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1229] = 2,
    ACTIONS(254), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(252), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1239] = 2,
    ACTIONS(258), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(256), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1249] = 2,
    ACTIONS(262), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(260), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1259] = 2,
    ACTIONS(266), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(264), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1269] = 2,
    ACTIONS(270), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(268), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1279] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 4,
      anon_sym_STAR_STAR_STAR,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1289] = 3,
    ACTIONS(274), 1,
      sym__separator,
    ACTIONS(276), 1,
      sym__line_break,
    ACTIONS(272), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1300] = 4,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      anon_sym_Settings,
    ACTIONS(282), 1,
      anon_sym_Variables,
    ACTIONS(284), 1,
      anon_sym_Keywords,
  [1313] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(288), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1323] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(290), 1,
      sym__line_break,
    STATE(70), 1,
      aux_sym_arguments_repeat1,
  [1333] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(292), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1343] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(294), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1353] = 3,
    ACTIONS(296), 1,
      anon_sym_Settings,
    ACTIONS(298), 1,
      anon_sym_Variables,
    ACTIONS(300), 1,
      anon_sym_Keywords,
  [1363] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(302), 1,
      sym__line_break,
    STATE(73), 1,
      aux_sym_arguments_repeat1,
  [1373] = 2,
    ACTIONS(306), 1,
      sym__separator,
    ACTIONS(304), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1381] = 3,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      sym_text_chunk,
    STATE(55), 1,
      sym_scalar_variable,
  [1391] = 3,
    ACTIONS(310), 1,
      sym__separator,
    ACTIONS(313), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1401] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1411] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(317), 1,
      sym__line_break,
    STATE(72), 1,
      aux_sym_arguments_repeat1,
  [1421] = 3,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(79), 1,
      aux_sym_arguments_repeat1,
  [1431] = 2,
    ACTIONS(321), 1,
      sym__separator,
    ACTIONS(323), 1,
      sym__line_break,
  [1438] = 2,
    ACTIONS(325), 1,
      anon_sym_,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
  [1445] = 2,
    ACTIONS(329), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(331), 1,
      anon_sym_,
  [1452] = 2,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
  [1459] = 2,
    ACTIONS(337), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(339), 1,
      anon_sym_,
  [1466] = 2,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
  [1473] = 1,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [1478] = 2,
    ACTIONS(347), 1,
      sym__separator,
    ACTIONS(349), 1,
      sym__line_break,
  [1485] = 1,
    ACTIONS(313), 2,
      sym__separator,
      sym__line_break,
  [1490] = 2,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
  [1497] = 2,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
  [1504] = 2,
    ACTIONS(359), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(361), 1,
      anon_sym_,
  [1511] = 2,
    ACTIONS(363), 1,
      anon_sym_,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [1518] = 2,
    ACTIONS(367), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(369), 1,
      anon_sym_,
  [1525] = 2,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(373), 1,
      sym_variable_name,
  [1532] = 2,
    ACTIONS(375), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(377), 1,
      anon_sym_,
  [1539] = 2,
    ACTIONS(379), 1,
      anon_sym_,
    ACTIONS(381), 1,
      sym_variable_name,
  [1546] = 2,
    ACTIONS(383), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(385), 1,
      anon_sym_,
  [1553] = 2,
    ACTIONS(387), 1,
      anon_sym_,
    ACTIONS(389), 1,
      sym_variable_name,
  [1560] = 1,
    ACTIONS(391), 1,
      sym__separator,
  [1564] = 1,
    ACTIONS(393), 1,
      sym_variable_name,
  [1568] = 1,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
  [1572] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
  [1576] = 1,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
  [1580] = 1,
    ACTIONS(401), 1,
      sym__line_break,
  [1584] = 1,
    ACTIONS(403), 1,
      sym__separator,
  [1588] = 1,
    ACTIONS(405), 1,
      sym_variable_name,
  [1592] = 1,
    ACTIONS(337), 1,
      anon_sym_STAR_STAR_STAR,
  [1596] = 1,
    ACTIONS(407), 1,
      sym__line_break,
  [1600] = 1,
    ACTIONS(409), 1,
      sym__line_break,
  [1604] = 1,
    ACTIONS(411), 1,
      sym__line_break,
  [1608] = 1,
    ACTIONS(329), 1,
      anon_sym_STAR_STAR_STAR,
  [1612] = 1,
    ACTIONS(413), 1,
      sym__line_break,
  [1616] = 1,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
  [1620] = 1,
    ACTIONS(417), 1,
      anon_sym_STAR_STAR_STAR,
  [1624] = 1,
    ACTIONS(419), 1,
      sym__line_break,
  [1628] = 1,
    ACTIONS(359), 1,
      anon_sym_STAR_STAR_STAR,
  [1632] = 1,
    ACTIONS(421), 1,
      anon_sym_STAR_STAR_STAR,
  [1636] = 1,
    ACTIONS(423), 1,
      sym__line_break,
  [1640] = 1,
    ACTIONS(425), 1,
      sym__line_break,
  [1644] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
  [1648] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
  [1652] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [1656] = 1,
    ACTIONS(427), 1,
      anon_sym_STAR_STAR_STAR,
  [1660] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [1664] = 1,
    ACTIONS(431), 1,
      sym_variable_name,
  [1668] = 1,
    ACTIONS(433), 1,
      sym__line_break,
  [1672] = 1,
    ACTIONS(435), 1,
      sym__line_break,
  [1676] = 1,
    ACTIONS(437), 1,
      sym__line_break,
  [1680] = 1,
    ACTIONS(439), 1,
      sym__line_break,
  [1684] = 1,
    ACTIONS(441), 1,
      sym__separator,
  [1688] = 1,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [1692] = 1,
    ACTIONS(445), 1,
      sym__line_break,
  [1696] = 1,
    ACTIONS(447), 1,
      sym__line_break,
  [1700] = 1,
    ACTIONS(449), 1,
      sym__line_break,
  [1704] = 1,
    ACTIONS(451), 1,
      sym_variable_name,
  [1708] = 1,
    ACTIONS(453), 1,
      sym_variable_name,
  [1712] = 1,
    ACTIONS(455), 1,
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
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 433,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 475,
  [SMALL_STATE(19)] = 500,
  [SMALL_STATE(20)] = 521,
  [SMALL_STATE(21)] = 546,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 592,
  [SMALL_STATE(24)] = 613,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 681,
  [SMALL_STATE(28)] = 705,
  [SMALL_STATE(29)] = 729,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 777,
  [SMALL_STATE(32)] = 801,
  [SMALL_STATE(33)] = 825,
  [SMALL_STATE(34)] = 846,
  [SMALL_STATE(35)] = 859,
  [SMALL_STATE(36)] = 878,
  [SMALL_STATE(37)] = 897,
  [SMALL_STATE(38)] = 918,
  [SMALL_STATE(39)] = 939,
  [SMALL_STATE(40)] = 960,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 992,
  [SMALL_STATE(43)] = 1011,
  [SMALL_STATE(44)] = 1029,
  [SMALL_STATE(45)] = 1047,
  [SMALL_STATE(46)] = 1065,
  [SMALL_STATE(47)] = 1076,
  [SMALL_STATE(48)] = 1087,
  [SMALL_STATE(49)] = 1098,
  [SMALL_STATE(50)] = 1109,
  [SMALL_STATE(51)] = 1120,
  [SMALL_STATE(52)] = 1131,
  [SMALL_STATE(53)] = 1142,
  [SMALL_STATE(54)] = 1153,
  [SMALL_STATE(55)] = 1163,
  [SMALL_STATE(56)] = 1173,
  [SMALL_STATE(57)] = 1183,
  [SMALL_STATE(58)] = 1191,
  [SMALL_STATE(59)] = 1199,
  [SMALL_STATE(60)] = 1209,
  [SMALL_STATE(61)] = 1219,
  [SMALL_STATE(62)] = 1229,
  [SMALL_STATE(63)] = 1239,
  [SMALL_STATE(64)] = 1249,
  [SMALL_STATE(65)] = 1259,
  [SMALL_STATE(66)] = 1269,
  [SMALL_STATE(67)] = 1279,
  [SMALL_STATE(68)] = 1289,
  [SMALL_STATE(69)] = 1300,
  [SMALL_STATE(70)] = 1313,
  [SMALL_STATE(71)] = 1323,
  [SMALL_STATE(72)] = 1333,
  [SMALL_STATE(73)] = 1343,
  [SMALL_STATE(74)] = 1353,
  [SMALL_STATE(75)] = 1363,
  [SMALL_STATE(76)] = 1373,
  [SMALL_STATE(77)] = 1381,
  [SMALL_STATE(78)] = 1391,
  [SMALL_STATE(79)] = 1401,
  [SMALL_STATE(80)] = 1411,
  [SMALL_STATE(81)] = 1421,
  [SMALL_STATE(82)] = 1431,
  [SMALL_STATE(83)] = 1438,
  [SMALL_STATE(84)] = 1445,
  [SMALL_STATE(85)] = 1452,
  [SMALL_STATE(86)] = 1459,
  [SMALL_STATE(87)] = 1466,
  [SMALL_STATE(88)] = 1473,
  [SMALL_STATE(89)] = 1478,
  [SMALL_STATE(90)] = 1485,
  [SMALL_STATE(91)] = 1490,
  [SMALL_STATE(92)] = 1497,
  [SMALL_STATE(93)] = 1504,
  [SMALL_STATE(94)] = 1511,
  [SMALL_STATE(95)] = 1518,
  [SMALL_STATE(96)] = 1525,
  [SMALL_STATE(97)] = 1532,
  [SMALL_STATE(98)] = 1539,
  [SMALL_STATE(99)] = 1546,
  [SMALL_STATE(100)] = 1553,
  [SMALL_STATE(101)] = 1560,
  [SMALL_STATE(102)] = 1564,
  [SMALL_STATE(103)] = 1568,
  [SMALL_STATE(104)] = 1572,
  [SMALL_STATE(105)] = 1576,
  [SMALL_STATE(106)] = 1580,
  [SMALL_STATE(107)] = 1584,
  [SMALL_STATE(108)] = 1588,
  [SMALL_STATE(109)] = 1592,
  [SMALL_STATE(110)] = 1596,
  [SMALL_STATE(111)] = 1600,
  [SMALL_STATE(112)] = 1604,
  [SMALL_STATE(113)] = 1608,
  [SMALL_STATE(114)] = 1612,
  [SMALL_STATE(115)] = 1616,
  [SMALL_STATE(116)] = 1620,
  [SMALL_STATE(117)] = 1624,
  [SMALL_STATE(118)] = 1628,
  [SMALL_STATE(119)] = 1632,
  [SMALL_STATE(120)] = 1636,
  [SMALL_STATE(121)] = 1640,
  [SMALL_STATE(122)] = 1644,
  [SMALL_STATE(123)] = 1648,
  [SMALL_STATE(124)] = 1652,
  [SMALL_STATE(125)] = 1656,
  [SMALL_STATE(126)] = 1660,
  [SMALL_STATE(127)] = 1664,
  [SMALL_STATE(128)] = 1668,
  [SMALL_STATE(129)] = 1672,
  [SMALL_STATE(130)] = 1676,
  [SMALL_STATE(131)] = 1680,
  [SMALL_STATE(132)] = 1684,
  [SMALL_STATE(133)] = 1688,
  [SMALL_STATE(134)] = 1692,
  [SMALL_STATE(135)] = 1696,
  [SMALL_STATE(136)] = 1700,
  [SMALL_STATE(137)] = 1704,
  [SMALL_STATE(138)] = 1708,
  [SMALL_STATE(139)] = 1712,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(80),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(107),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(106),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(139),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(81),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(81),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(111),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(134),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(102),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(106),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(42),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(77),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(96),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(43),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(38),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [443] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section_header, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
