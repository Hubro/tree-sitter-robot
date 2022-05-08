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
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 2
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_file_token1 = 1,
  sym_settings_section_header = 2,
  aux_sym_setting_statement_token1 = 3,
  aux_sym_setting_statement_token2 = 4,
  aux_sym_setting_statement_token3 = 5,
  aux_sym_setting_statement_token4 = 6,
  aux_sym_setting_statement_token5 = 7,
  aux_sym_setting_statement_token6 = 8,
  aux_sym_setting_statement_token7 = 9,
  aux_sym_setting_statement_token8 = 10,
  aux_sym_setting_statement_token9 = 11,
  aux_sym_setting_statement_token10 = 12,
  aux_sym_setting_statement_token11 = 13,
  aux_sym_setting_statement_token12 = 14,
  aux_sym_setting_statement_token13 = 15,
  aux_sym_setting_statement_token14 = 16,
  aux_sym_setting_statement_token15 = 17,
  aux_sym_setting_statement_token16 = 18,
  aux_sym_setting_statement_token17 = 19,
  sym_variables_section_header = 20,
  anon_sym_DOLLAR_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_EQ = 23,
  anon_sym_EQ2 = 24,
  sym_keywords_section_header = 25,
  aux_sym_keyword_setting_token1 = 26,
  aux_sym_keyword_setting_token2 = 27,
  aux_sym_keyword_setting_token3 = 28,
  aux_sym_keyword_setting_token4 = 29,
  aux_sym_keyword_setting_token5 = 30,
  aux_sym_keyword_setting_token6 = 31,
  sym_section_header_extra_text = 32,
  sym_test_cases_section_header = 33,
  aux_sym_test_case_setting_token1 = 34,
  aux_sym_test_case_setting_token2 = 35,
  sym_ellipses = 36,
  sym_indented_ellipses = 37,
  anon_sym_ = 38,
  anon_sym_AT_LBRACE = 39,
  anon_sym_AMP_LBRACE = 40,
  sym_variable_name = 41,
  sym_text_chunk = 42,
  sym__separator = 43,
  aux_sym__whitespace_token1 = 44,
  sym__line_break = 45,
  sym_source_file = 46,
  sym_section = 47,
  sym_settings_section = 48,
  sym_setting_statement = 49,
  sym_variables_section = 50,
  sym_variable_definition = 51,
  sym_keywords_section = 52,
  sym_keyword_definition = 53,
  sym_keyword_definition_body = 54,
  sym_keyword_setting = 55,
  sym_test_cases_section = 56,
  sym_test_case_definition = 57,
  sym_test_case_definition_body = 58,
  sym_test_case_setting = 59,
  sym_statement = 60,
  sym_variable_assignment = 61,
  sym_keyword_invocation = 62,
  sym_arguments = 63,
  sym_continuation = 64,
  sym_argument = 65,
  sym_scalar_variable = 66,
  sym_list_variable = 67,
  sym_dictionary_variable = 68,
  sym__empty_line = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_settings_section_repeat1 = 71,
  aux_sym_variables_section_repeat1 = 72,
  aux_sym_keywords_section_repeat1 = 73,
  aux_sym_keyword_definition_body_repeat1 = 74,
  aux_sym_test_cases_section_repeat1 = 75,
  aux_sym_test_case_definition_body_repeat1 = 76,
  aux_sym_arguments_repeat1 = 77,
  aux_sym_arguments_repeat2 = 78,
  aux_sym_argument_repeat1 = 79,
  alias_sym_keyword = 80,
  alias_sym_name = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_settings_section_header] = "section_header",
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
  [sym_variables_section_header] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [sym_keywords_section_header] = "section_header",
  [aux_sym_keyword_setting_token1] = "keyword_setting_token1",
  [aux_sym_keyword_setting_token2] = "keyword_setting_token2",
  [aux_sym_keyword_setting_token3] = "keyword_setting_token3",
  [aux_sym_keyword_setting_token4] = "keyword_setting_token4",
  [aux_sym_keyword_setting_token5] = "keyword_setting_token5",
  [aux_sym_keyword_setting_token6] = "keyword_setting_token6",
  [sym_section_header_extra_text] = "extra_text",
  [sym_test_cases_section_header] = "section_header",
  [aux_sym_test_case_setting_token1] = "test_case_setting_token1",
  [aux_sym_test_case_setting_token2] = "test_case_setting_token2",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [anon_sym_] = " ",
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
  [sym_setting_statement] = "setting_statement",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_test_cases_section] = "test_cases_section",
  [sym_test_case_definition] = "test_case_definition",
  [sym_test_case_definition_body] = "body",
  [sym_test_case_setting] = "test_case_setting",
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
  [aux_sym_test_cases_section_repeat1] = "test_cases_section_repeat1",
  [aux_sym_test_case_definition_body_repeat1] = "test_case_definition_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [sym_settings_section_header] = sym_settings_section_header,
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
  [sym_variables_section_header] = sym_settings_section_header,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [sym_keywords_section_header] = sym_settings_section_header,
  [aux_sym_keyword_setting_token1] = aux_sym_keyword_setting_token1,
  [aux_sym_keyword_setting_token2] = aux_sym_keyword_setting_token2,
  [aux_sym_keyword_setting_token3] = aux_sym_keyword_setting_token3,
  [aux_sym_keyword_setting_token4] = aux_sym_keyword_setting_token4,
  [aux_sym_keyword_setting_token5] = aux_sym_keyword_setting_token5,
  [aux_sym_keyword_setting_token6] = aux_sym_keyword_setting_token6,
  [sym_section_header_extra_text] = sym_section_header_extra_text,
  [sym_test_cases_section_header] = sym_settings_section_header,
  [aux_sym_test_case_setting_token1] = aux_sym_test_case_setting_token1,
  [aux_sym_test_case_setting_token2] = aux_sym_test_case_setting_token2,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [anon_sym_] = anon_sym_,
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
  [sym_setting_statement] = sym_setting_statement,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_test_cases_section] = sym_test_cases_section,
  [sym_test_case_definition] = sym_test_case_definition,
  [sym_test_case_definition_body] = sym_keyword_definition_body,
  [sym_test_case_setting] = sym_test_case_setting,
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
  [aux_sym_test_cases_section_repeat1] = aux_sym_test_cases_section_repeat1,
  [aux_sym_test_case_definition_body_repeat1] = aux_sym_test_case_definition_body_repeat1,
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
  [sym_settings_section_header] = {
    .visible = true,
    .named = true,
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
  [sym_variables_section_header] = {
    .visible = true,
    .named = true,
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
  [sym_keywords_section_header] = {
    .visible = true,
    .named = true,
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
  [sym_section_header_extra_text] = {
    .visible = true,
    .named = true,
  },
  [sym_test_cases_section_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_setting_token2] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section] = {
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
  [sym_test_cases_section] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_setting] = {
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
  [aux_sym_test_cases_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_definition_body_repeat1] = {
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
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < 'C'
      ? (c < '@'
        ? c == '&'
        : c <= '@')
      : (c <= 'C' || c == 'c'))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
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

static inline bool sym_text_chunk_character_set_3(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '$'))
    : (c <= '&' || (c < 'a'
      ? (c < 'M'
        ? (c >= '@' && c <= 'A')
        : c <= 'M')
      : (c <= 'a' || c == 'm'))));
}

static inline bool sym_text_chunk_character_set_4(int32_t c) {
  return (c < 'K'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '@'
        ? c == '&'
        : c <= '@')))
    : (c <= 'K' || (c < 'k'
      ? (c < 'V'
        ? (c >= 'S' && c <= 'T')
        : c <= 'V')
      : (c <= 'k' || (c < 'v'
        ? (c >= 's' && c <= 't')
        : c <= 'v')))));
}

static inline bool sym_text_chunk_character_set_5(int32_t c) {
  return (c < '@'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= '@' || (c < 'd'
      ? (c < 'S'
        ? c == 'D'
        : c <= 'T')
      : (c <= 'd' || (c >= 's' && c <= 't')))));
}

static inline bool sym_text_chunk_character_set_6(int32_t c) {
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
      if (eof) ADVANCE(305);
      if (lookahead == '\t') ADVANCE(583);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '@') ADVANCE(83);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '}') ADVANCE(331);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(583);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(583);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(584);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(582);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\r') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(82);
      if (lookahead == '@') ADVANCE(84);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(594);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(583);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == ']') ADVANCE(340);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(367);
      if (lookahead == '}') ADVANCE(331);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(373);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == ']') ADVANCE(358);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == ']') ADVANCE(352);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ']') ADVANCE(361);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ']') ADVANCE(343);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ']') ADVANCE(337);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '[') ADVANCE(557);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(85);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '[') ADVANCE(560);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(85);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(334);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(307);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(327);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(356);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(466);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(364);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(366);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == ']') ADVANCE(340);
      END_STATE();
    case 56:
      if (lookahead == ']') ADVANCE(358);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(352);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 60:
      if (lookahead == ']') ADVANCE(361);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(343);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(337);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(342);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(360);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(363);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(348);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(345);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(330);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(372);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(372);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 83:
      if (lookahead == '{') ADVANCE(371);
      END_STATE();
    case 84:
      if (lookahead == '{') ADVANCE(371);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    case 86:
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(507);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 87:
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 88:
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(507);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 89:
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 90:
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 91:
      if (lookahead == '{') ADVANCE(471);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 118:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 159:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 161:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 172:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 183:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 184:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 185:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 209:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 214:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 215:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 216:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 228:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 229:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 243:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 244:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      END_STATE();
    case 245:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 246:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 273:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 275:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 276:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 277:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 278:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 279:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 280:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 281:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 282:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 283:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 284:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 286:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 287:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 288:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 289:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(189);
      END_STATE();
    case 290:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(203);
      END_STATE();
    case 291:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(191);
      END_STATE();
    case 292:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 293:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 294:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 295:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 296:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(373);
      END_STATE();
    case 297:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(385);
      END_STATE();
    case 298:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(471);
      END_STATE();
    case 299:
      if (eof) ADVANCE(305);
      if (lookahead == '\t') ADVANCE(590);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(594);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 300:
      if (eof) ADVANCE(305);
      if (lookahead == '\t') ADVANCE(580);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\r') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 301:
      if (eof) ADVANCE(305);
      if (lookahead == '\t') ADVANCE(582);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\r') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(585);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 302:
      if (eof) ADVANCE(305);
      if (lookahead == '\t') ADVANCE(589);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\r') ADVANCE(595);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 303:
      if (eof) ADVANCE(305);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\r') ADVANCE(595);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 304:
      if (eof) ADVANCE(305);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_settings_section_header);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_settings_section_header);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_settings_section_header);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variables_section_header);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variables_section_header);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variables_section_header);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_keywords_section_header);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_keywords_section_header);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_keywords_section_header);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_section_header_extra_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_test_cases_section_header);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_test_cases_section_header);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(583);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(583);
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '.') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(85);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(461);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(461);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(461);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(461);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(461);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(461);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(461);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(461);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(461);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(461);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(461);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(461);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(461);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(461);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(461);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(461);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(461);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(461);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(461);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(461);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(461);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(461);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(461);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(461);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(461);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(91);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(551);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(551);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(551);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(551);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(551);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(551);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(551);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(551);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(551);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(551);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(551);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(551);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(551);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(551);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(551);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(551);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(551);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(551);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(89);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(461);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(88);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(461);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ']') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(86);
      if (!sym_text_chunk_character_set_6(lookahead)) ADVANCE(461);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ']') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == ']') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ']') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ']') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ']') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '*') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(583);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(583);
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(590);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(590);
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == ' ') ADVANCE(581);
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '{') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(593);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '{') ADVANCE(385);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 304},
  [2] = {.lex_state = 299},
  [3] = {.lex_state = 299},
  [4] = {.lex_state = 299},
  [5] = {.lex_state = 299},
  [6] = {.lex_state = 299},
  [7] = {.lex_state = 299},
  [8] = {.lex_state = 299},
  [9] = {.lex_state = 299},
  [10] = {.lex_state = 299},
  [11] = {.lex_state = 299},
  [12] = {.lex_state = 299},
  [13] = {.lex_state = 299},
  [14] = {.lex_state = 300},
  [15] = {.lex_state = 301},
  [16] = {.lex_state = 300},
  [17] = {.lex_state = 301},
  [18] = {.lex_state = 301},
  [19] = {.lex_state = 300},
  [20] = {.lex_state = 301},
  [21] = {.lex_state = 300},
  [22] = {.lex_state = 300},
  [23] = {.lex_state = 302},
  [24] = {.lex_state = 302},
  [25] = {.lex_state = 302},
  [26] = {.lex_state = 302},
  [27] = {.lex_state = 302},
  [28] = {.lex_state = 299},
  [29] = {.lex_state = 303},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 299},
  [32] = {.lex_state = 303},
  [33] = {.lex_state = 303},
  [34] = {.lex_state = 303},
  [35] = {.lex_state = 303},
  [36] = {.lex_state = 303},
  [37] = {.lex_state = 299},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 303},
  [40] = {.lex_state = 303},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 300},
  [44] = {.lex_state = 300},
  [45] = {.lex_state = 302},
  [46] = {.lex_state = 302},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 301},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 301},
  [52] = {.lex_state = 301},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 301},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 301},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 301},
  [62] = {.lex_state = 301},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 301},
  [66] = {.lex_state = 301},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 303},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 303},
  [72] = {.lex_state = 303},
  [73] = {.lex_state = 299},
  [74] = {.lex_state = 299},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 296},
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
  [137] = {.lex_state = 296},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 296},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 296},
  [144] = {.lex_state = 296},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_settings_section_header] = ACTIONS(1),
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
    [sym_variables_section_header] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_keywords_section_header] = ACTIONS(1),
    [aux_sym_keyword_setting_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_token5] = ACTIONS(1),
    [aux_sym_keyword_setting_token6] = ACTIONS(1),
    [sym_test_cases_section_header] = ACTIONS(1),
    [aux_sym_test_case_setting_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_token2] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(131),
    [sym_section] = STATE(42),
    [sym_settings_section] = STATE(88),
    [sym_variables_section] = STATE(88),
    [sym_keywords_section] = STATE(88),
    [sym_test_cases_section] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [sym_settings_section_header] = ACTIONS(7),
    [sym_variables_section_header] = ACTIONS(9),
    [sym_keywords_section_header] = ACTIONS(11),
    [sym_test_cases_section_header] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      aux_sym__whitespace_token1,
    ACTIONS(17), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(15), 24,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym__line_break,
  [38] = 4,
    ACTIONS(23), 1,
      aux_sym__whitespace_token1,
    ACTIONS(17), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 24,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym__line_break,
  [76] = 4,
    ACTIONS(27), 1,
      aux_sym__whitespace_token1,
    ACTIONS(17), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 24,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym__line_break,
  [114] = 4,
    ACTIONS(34), 1,
      aux_sym__whitespace_token1,
    ACTIONS(31), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 24,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym__line_break,
  [152] = 4,
    ACTIONS(19), 1,
      aux_sym__whitespace_token1,
    ACTIONS(17), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(15), 24,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym__line_break,
  [190] = 2,
    ACTIONS(38), 1,
      aux_sym__whitespace_token1,
    ACTIONS(36), 26,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [222] = 5,
    ACTIONS(45), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
    ACTIONS(42), 17,
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
  [260] = 5,
    ACTIONS(55), 1,
      aux_sym__whitespace_token1,
    ACTIONS(57), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
    ACTIONS(53), 17,
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
  [298] = 2,
    ACTIONS(61), 1,
      aux_sym__whitespace_token1,
    ACTIONS(59), 26,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [330] = 5,
    ACTIONS(55), 1,
      aux_sym__whitespace_token1,
    ACTIONS(65), 1,
      sym__line_break,
    STATE(9), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
    ACTIONS(53), 17,
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
  [368] = 1,
    ACTIONS(67), 25,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      aux_sym__whitespace_token1,
      sym__line_break,
  [396] = 1,
    ACTIONS(69), 24,
      ts_builtin_sym_end,
      sym_settings_section_header,
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
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      aux_sym__whitespace_token1,
      sym__line_break,
  [423] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_ellipses,
    ACTIONS(73), 1,
      sym_indented_ellipses,
    STATE(22), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [447] = 6,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym__separator,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    ACTIONS(83), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(77), 5,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
  [473] = 5,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_ellipses,
    ACTIONS(73), 1,
      sym_indented_ellipses,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [497] = 6,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__separator,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(95), 1,
      sym__line_break,
    STATE(17), 4,
      sym_test_case_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(87), 5,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
  [523] = 6,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(104), 1,
      sym__line_break,
    STATE(17), 4,
      sym_test_case_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(100), 5,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
  [549] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_ellipses,
    ACTIONS(73), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [573] = 6,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym__separator,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    ACTIONS(116), 1,
      sym__line_break,
    STATE(20), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(108), 5,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
  [599] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_ellipses,
    ACTIONS(122), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [623] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_ellipses,
    ACTIONS(73), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [647] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym_ellipses,
    ACTIONS(127), 1,
      sym_indented_ellipses,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [670] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym_ellipses,
    ACTIONS(132), 1,
      sym_indented_ellipses,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [693] = 5,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym_ellipses,
    ACTIONS(127), 1,
      sym_indented_ellipses,
    STATE(27), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [716] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym_ellipses,
    ACTIONS(127), 1,
      sym_indented_ellipses,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [739] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym_ellipses,
    ACTIONS(127), 1,
      sym_indented_ellipses,
    STATE(24), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [762] = 5,
    ACTIONS(55), 1,
      aux_sym__whitespace_token1,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [784] = 6,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_text_chunk,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(149), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(143), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [808] = 7,
    ACTIONS(7), 1,
      sym_settings_section_header,
    ACTIONS(9), 1,
      sym_variables_section_header,
    ACTIONS(11), 1,
      sym_keywords_section_header,
    ACTIONS(13), 1,
      sym_test_cases_section_header,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(41), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [834] = 5,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(158), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [856] = 6,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_text_chunk,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    STATE(34), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(143), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [880] = 6,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym_text_chunk,
    ACTIONS(173), 1,
      aux_sym__whitespace_token1,
    ACTIONS(176), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(168), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [904] = 6,
    ACTIONS(145), 1,
      sym_text_chunk,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(149), 1,
      sym__line_break,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(181), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [928] = 6,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym_text_chunk,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(185), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [952] = 6,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_text_chunk,
    ACTIONS(198), 1,
      aux_sym__whitespace_token1,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(193), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [976] = 5,
    ACTIONS(55), 1,
      aux_sym__whitespace_token1,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [998] = 7,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      sym_settings_section_header,
    ACTIONS(213), 1,
      sym_variables_section_header,
    ACTIONS(216), 1,
      sym_keywords_section_header,
    ACTIONS(219), 1,
      sym_test_cases_section_header,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1024] = 6,
    ACTIONS(145), 1,
      sym_text_chunk,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      sym__line_break,
    STATE(29), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(224), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [1048] = 6,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      sym_text_chunk,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__line_break,
    STATE(35), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(230), 4,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [1072] = 7,
    ACTIONS(7), 1,
      sym_settings_section_header,
    ACTIONS(9), 1,
      sym_variables_section_header,
    ACTIONS(11), 1,
      sym_keywords_section_header,
    ACTIONS(13), 1,
      sym_test_cases_section_header,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1098] = 7,
    ACTIONS(7), 1,
      sym_settings_section_header,
    ACTIONS(9), 1,
      sym_variables_section_header,
    ACTIONS(11), 1,
      sym_keywords_section_header,
    ACTIONS(13), 1,
      sym_test_cases_section_header,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(88), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1124] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(61), 9,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1140] = 2,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(38), 9,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1156] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(61), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_ellipses,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1171] = 2,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(38), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_ellipses,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1186] = 4,
    ACTIONS(236), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(240), 1,
      sym_text_chunk,
    STATE(65), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(238), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
  [1205] = 4,
    ACTIONS(236), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(240), 1,
      sym_text_chunk,
    STATE(65), 2,
      sym_variable_assignment,
      sym_keyword_invocation,
    ACTIONS(242), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [1224] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1238] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(52), 1,
      sym_arguments,
    STATE(90), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1262] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1276] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1290] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(49), 1,
      sym_arguments,
    STATE(90), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1314] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1328] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(51), 1,
      sym_arguments,
    STATE(90), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1352] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(72), 1,
      sym_arguments,
    STATE(92), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1376] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(73), 1,
      sym_arguments,
    STATE(99), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1400] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(61), 1,
      sym_arguments,
    STATE(90), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1424] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1438] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(62), 1,
      sym_arguments,
    STATE(90), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1462] = 2,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1476] = 2,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1490] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(13), 1,
      sym_arguments,
    STATE(99), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1514] = 7,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(74), 1,
      sym_arguments,
    STATE(99), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1538] = 2,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1552] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 8,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1566] = 6,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(250), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(252), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(254), 1,
      sym_text_chunk,
    STATE(115), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1587] = 5,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    ACTIONS(286), 1,
      sym__separator,
    ACTIONS(288), 1,
      sym__line_break,
    STATE(72), 1,
      sym_test_case_definition_body,
    STATE(18), 4,
      sym_test_case_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1606] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1619] = 5,
    ACTIONS(81), 1,
      aux_sym__whitespace_token1,
    ACTIONS(294), 1,
      sym__separator,
    ACTIONS(296), 1,
      sym__line_break,
    STATE(69), 1,
      sym_keyword_definition_body,
    STATE(15), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1638] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1651] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 7,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1664] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1675] = 1,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      anon_sym_DOLLAR_LBRACE,
      sym_keywords_section_header,
      sym_test_cases_section_header,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1686] = 5,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_,
    ACTIONS(308), 1,
      sym_text_chunk,
    ACTIONS(310), 2,
      sym__separator,
      sym__line_break,
    STATE(77), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1704] = 5,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(315), 1,
      anon_sym_,
    ACTIONS(318), 1,
      sym_text_chunk,
    ACTIONS(321), 2,
      sym__separator,
      sym__line_break,
    STATE(76), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1722] = 5,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_,
    ACTIONS(323), 1,
      sym_text_chunk,
    ACTIONS(325), 2,
      sym__separator,
      sym__line_break,
    STATE(76), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1740] = 2,
    ACTIONS(327), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(329), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1750] = 2,
    ACTIONS(331), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(333), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1760] = 2,
    ACTIONS(335), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(321), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1770] = 2,
    ACTIONS(337), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(339), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1780] = 2,
    ACTIONS(341), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(343), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1790] = 2,
    ACTIONS(345), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(347), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1800] = 2,
    ACTIONS(349), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(351), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1810] = 2,
    ACTIONS(353), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(355), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1820] = 2,
    ACTIONS(357), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(359), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1830] = 2,
    ACTIONS(361), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(363), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1840] = 1,
    ACTIONS(365), 5,
      ts_builtin_sym_end,
      sym_settings_section_header,
      sym_variables_section_header,
      sym_keywords_section_header,
      sym_test_cases_section_header,
  [1848] = 3,
    ACTIONS(369), 1,
      sym__separator,
    ACTIONS(371), 1,
      sym__line_break,
    ACTIONS(367), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1859] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(375), 1,
      sym__line_break,
    STATE(97), 1,
      aux_sym_arguments_repeat1,
  [1869] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(377), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
  [1879] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(379), 1,
      sym__line_break,
    STATE(93), 1,
      aux_sym_arguments_repeat1,
  [1889] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(381), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1899] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1909] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1919] = 3,
    ACTIONS(387), 1,
      sym__separator,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1929] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(392), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1939] = 3,
    ACTIONS(248), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(394), 1,
      sym_text_chunk,
    STATE(80), 1,
      sym_scalar_variable,
  [1949] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(396), 1,
      sym__line_break,
    STATE(102), 1,
      aux_sym_arguments_repeat1,
  [1959] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(398), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1969] = 2,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(400), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1977] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(404), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
  [1987] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(406), 1,
      sym__line_break,
    STATE(100), 1,
      aux_sym_arguments_repeat1,
  [1997] = 3,
    ACTIONS(373), 1,
      sym__separator,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
  [2007] = 2,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_,
  [2014] = 2,
    ACTIONS(414), 1,
      anon_sym_,
    ACTIONS(416), 1,
      sym_variable_name,
  [2021] = 2,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 1,
      sym_variable_name,
  [2028] = 2,
    ACTIONS(422), 1,
      anon_sym_,
    ACTIONS(424), 1,
      sym_variable_name,
  [2035] = 2,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      anon_sym_,
  [2042] = 2,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_,
  [2049] = 2,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      anon_sym_,
  [2056] = 2,
    ACTIONS(438), 1,
      sym_section_header_extra_text,
    ACTIONS(440), 1,
      sym__line_break,
  [2063] = 2,
    ACTIONS(442), 1,
      sym__separator,
    ACTIONS(444), 1,
      sym__line_break,
  [2070] = 2,
    ACTIONS(446), 1,
      sym__separator,
    ACTIONS(448), 1,
      sym__line_break,
  [2077] = 1,
    ACTIONS(390), 2,
      sym__separator,
      sym__line_break,
  [2082] = 2,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(452), 1,
      anon_sym_,
  [2089] = 2,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      anon_sym_,
  [2096] = 2,
    ACTIONS(458), 1,
      sym__separator,
    ACTIONS(460), 1,
      sym__line_break,
  [2103] = 1,
    ACTIONS(462), 1,
      sym__line_break,
  [2107] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [2111] = 1,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
  [2115] = 1,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
  [2119] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [2123] = 1,
    ACTIONS(468), 1,
      sym__line_break,
  [2127] = 1,
    ACTIONS(470), 1,
      sym_variable_name,
  [2131] = 1,
    ACTIONS(472), 1,
      sym__line_break,
  [2135] = 1,
    ACTIONS(474), 1,
      sym__separator,
  [2139] = 1,
    ACTIONS(476), 1,
      sym__separator,
  [2143] = 1,
    ACTIONS(478), 1,
      sym__line_break,
  [2147] = 1,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
  [2151] = 1,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
  [2155] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [2159] = 1,
    ACTIONS(484), 1,
      sym__line_break,
  [2163] = 1,
    ACTIONS(486), 1,
      sym__line_break,
  [2167] = 1,
    ACTIONS(488), 1,
      sym__line_break,
  [2171] = 1,
    ACTIONS(490), 1,
      sym__separator,
  [2175] = 1,
    ACTIONS(492), 1,
      sym_variable_name,
  [2179] = 1,
    ACTIONS(494), 1,
      sym__separator,
  [2183] = 1,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
  [2187] = 1,
    ACTIONS(498), 1,
      sym__line_break,
  [2191] = 1,
    ACTIONS(500), 1,
      sym_variable_name,
  [2195] = 1,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
  [2199] = 1,
    ACTIONS(504), 1,
      sym_variable_name,
  [2203] = 1,
    ACTIONS(506), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 330,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 473,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 523,
  [SMALL_STATE(19)] = 549,
  [SMALL_STATE(20)] = 573,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 647,
  [SMALL_STATE(24)] = 670,
  [SMALL_STATE(25)] = 693,
  [SMALL_STATE(26)] = 716,
  [SMALL_STATE(27)] = 739,
  [SMALL_STATE(28)] = 762,
  [SMALL_STATE(29)] = 784,
  [SMALL_STATE(30)] = 808,
  [SMALL_STATE(31)] = 834,
  [SMALL_STATE(32)] = 856,
  [SMALL_STATE(33)] = 880,
  [SMALL_STATE(34)] = 904,
  [SMALL_STATE(35)] = 928,
  [SMALL_STATE(36)] = 952,
  [SMALL_STATE(37)] = 976,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1024,
  [SMALL_STATE(40)] = 1048,
  [SMALL_STATE(41)] = 1072,
  [SMALL_STATE(42)] = 1098,
  [SMALL_STATE(43)] = 1124,
  [SMALL_STATE(44)] = 1140,
  [SMALL_STATE(45)] = 1156,
  [SMALL_STATE(46)] = 1171,
  [SMALL_STATE(47)] = 1186,
  [SMALL_STATE(48)] = 1205,
  [SMALL_STATE(49)] = 1224,
  [SMALL_STATE(50)] = 1238,
  [SMALL_STATE(51)] = 1262,
  [SMALL_STATE(52)] = 1276,
  [SMALL_STATE(53)] = 1290,
  [SMALL_STATE(54)] = 1314,
  [SMALL_STATE(55)] = 1328,
  [SMALL_STATE(56)] = 1352,
  [SMALL_STATE(57)] = 1376,
  [SMALL_STATE(58)] = 1400,
  [SMALL_STATE(59)] = 1424,
  [SMALL_STATE(60)] = 1438,
  [SMALL_STATE(61)] = 1462,
  [SMALL_STATE(62)] = 1476,
  [SMALL_STATE(63)] = 1490,
  [SMALL_STATE(64)] = 1514,
  [SMALL_STATE(65)] = 1538,
  [SMALL_STATE(66)] = 1552,
  [SMALL_STATE(67)] = 1566,
  [SMALL_STATE(68)] = 1587,
  [SMALL_STATE(69)] = 1606,
  [SMALL_STATE(70)] = 1619,
  [SMALL_STATE(71)] = 1638,
  [SMALL_STATE(72)] = 1651,
  [SMALL_STATE(73)] = 1664,
  [SMALL_STATE(74)] = 1675,
  [SMALL_STATE(75)] = 1686,
  [SMALL_STATE(76)] = 1704,
  [SMALL_STATE(77)] = 1722,
  [SMALL_STATE(78)] = 1740,
  [SMALL_STATE(79)] = 1750,
  [SMALL_STATE(80)] = 1760,
  [SMALL_STATE(81)] = 1770,
  [SMALL_STATE(82)] = 1780,
  [SMALL_STATE(83)] = 1790,
  [SMALL_STATE(84)] = 1800,
  [SMALL_STATE(85)] = 1810,
  [SMALL_STATE(86)] = 1820,
  [SMALL_STATE(87)] = 1830,
  [SMALL_STATE(88)] = 1840,
  [SMALL_STATE(89)] = 1848,
  [SMALL_STATE(90)] = 1859,
  [SMALL_STATE(91)] = 1869,
  [SMALL_STATE(92)] = 1879,
  [SMALL_STATE(93)] = 1889,
  [SMALL_STATE(94)] = 1899,
  [SMALL_STATE(95)] = 1909,
  [SMALL_STATE(96)] = 1919,
  [SMALL_STATE(97)] = 1929,
  [SMALL_STATE(98)] = 1939,
  [SMALL_STATE(99)] = 1949,
  [SMALL_STATE(100)] = 1959,
  [SMALL_STATE(101)] = 1969,
  [SMALL_STATE(102)] = 1977,
  [SMALL_STATE(103)] = 1987,
  [SMALL_STATE(104)] = 1997,
  [SMALL_STATE(105)] = 2007,
  [SMALL_STATE(106)] = 2014,
  [SMALL_STATE(107)] = 2021,
  [SMALL_STATE(108)] = 2028,
  [SMALL_STATE(109)] = 2035,
  [SMALL_STATE(110)] = 2042,
  [SMALL_STATE(111)] = 2049,
  [SMALL_STATE(112)] = 2056,
  [SMALL_STATE(113)] = 2063,
  [SMALL_STATE(114)] = 2070,
  [SMALL_STATE(115)] = 2077,
  [SMALL_STATE(116)] = 2082,
  [SMALL_STATE(117)] = 2089,
  [SMALL_STATE(118)] = 2096,
  [SMALL_STATE(119)] = 2103,
  [SMALL_STATE(120)] = 2107,
  [SMALL_STATE(121)] = 2111,
  [SMALL_STATE(122)] = 2115,
  [SMALL_STATE(123)] = 2119,
  [SMALL_STATE(124)] = 2123,
  [SMALL_STATE(125)] = 2127,
  [SMALL_STATE(126)] = 2131,
  [SMALL_STATE(127)] = 2135,
  [SMALL_STATE(128)] = 2139,
  [SMALL_STATE(129)] = 2143,
  [SMALL_STATE(130)] = 2147,
  [SMALL_STATE(131)] = 2151,
  [SMALL_STATE(132)] = 2155,
  [SMALL_STATE(133)] = 2159,
  [SMALL_STATE(134)] = 2163,
  [SMALL_STATE(135)] = 2167,
  [SMALL_STATE(136)] = 2171,
  [SMALL_STATE(137)] = 2175,
  [SMALL_STATE(138)] = 2179,
  [SMALL_STATE(139)] = 2183,
  [SMALL_STATE(140)] = 2187,
  [SMALL_STATE(141)] = 2191,
  [SMALL_STATE(142)] = 2195,
  [SMALL_STATE(143)] = 2199,
  [SMALL_STATE(144)] = 2203,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(103),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(128),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(126),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(47),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(140),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(48),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(140),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(20),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(91),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(91),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(104),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(104),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(125),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(126),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(31),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(119),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(135),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(118),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(135),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(36),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(107),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(98),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(76),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(67),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
