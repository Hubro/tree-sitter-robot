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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 273
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 2
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum {
  aux_sym_source_file_token1 = 1,
  aux_sym_settings_section_token1 = 2,
  aux_sym_settings_section_token2 = 3,
  aux_sym_setting_statement_token1 = 4,
  aux_sym_setting_statement_token2 = 5,
  aux_sym_setting_statement_token3 = 6,
  aux_sym_setting_statement_token4 = 7,
  aux_sym_setting_statement_token5 = 8,
  aux_sym_setting_statement_token6 = 9,
  aux_sym_setting_statement_token7 = 10,
  aux_sym_setting_statement_token8 = 11,
  aux_sym_setting_statement_token9 = 12,
  aux_sym_setting_statement_token10 = 13,
  aux_sym_setting_statement_token11 = 14,
  aux_sym_setting_statement_token12 = 15,
  aux_sym_setting_statement_token13 = 16,
  aux_sym_setting_statement_token14 = 17,
  aux_sym_setting_statement_token15 = 18,
  aux_sym_setting_statement_token16 = 19,
  aux_sym_setting_statement_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  aux_sym_keyword_setting_token1 = 27,
  aux_sym_keyword_setting_token2 = 28,
  aux_sym_keyword_setting_token3 = 29,
  aux_sym_keyword_setting_token4 = 30,
  aux_sym_keyword_setting_token5 = 31,
  aux_sym_keyword_setting_token6 = 32,
  aux_sym_test_cases_section_token1 = 33,
  aux_sym_test_case_setting_token1 = 34,
  aux_sym_test_case_setting_token2 = 35,
  anon_sym_IF = 36,
  anon_sym_END = 37,
  anon_sym_ELSEIF = 38,
  anon_sym_ELSE = 39,
  sym_ellipses = 40,
  sym_indented_ellipses = 41,
  anon_sym_ = 42,
  anon_sym_AT_LBRACE = 43,
  anon_sym_AMP_LBRACE = 44,
  sym_variable_name = 45,
  sym_text_chunk = 46,
  sym_comment = 47,
  sym__separator = 48,
  aux_sym__whitespace_token1 = 49,
  sym__line_break = 50,
  sym_source_file = 51,
  sym_section = 52,
  sym_settings_section = 53,
  sym_setting_statement = 54,
  sym_variables_section = 55,
  sym_variable_definition = 56,
  sym_keywords_section = 57,
  sym_keyword_definition = 58,
  sym_keyword_definition_body = 59,
  sym_keyword_setting = 60,
  sym_test_cases_section = 61,
  sym_test_case_definition = 62,
  sym_test_case_definition_body = 63,
  sym_test_case_setting = 64,
  sym_statement = 65,
  sym_variable_assignment = 66,
  sym_keyword_invocation = 67,
  sym_if_statement = 68,
  sym_elseif_statement = 69,
  sym_else_statement = 70,
  sym_block = 71,
  sym_arguments = 72,
  sym_continuation = 73,
  sym_argument = 74,
  sym_scalar_variable = 75,
  sym_list_variable = 76,
  sym_dictionary_variable = 77,
  sym__indentation = 78,
  sym__empty_line = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_settings_section_repeat1 = 81,
  aux_sym_variables_section_repeat1 = 82,
  aux_sym_keywords_section_repeat1 = 83,
  aux_sym_keyword_definition_body_repeat1 = 84,
  aux_sym_test_cases_section_repeat1 = 85,
  aux_sym_test_case_definition_body_repeat1 = 86,
  aux_sym_if_statement_repeat1 = 87,
  aux_sym_block_repeat1 = 88,
  aux_sym_arguments_repeat1 = 89,
  aux_sym_arguments_repeat2 = 90,
  aux_sym_argument_repeat1 = 91,
  alias_sym_keyword = 92,
  alias_sym_name = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
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
  [aux_sym_variables_section_token1] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [aux_sym_keyword_setting_token1] = "keyword_setting_token1",
  [aux_sym_keyword_setting_token2] = "keyword_setting_token2",
  [aux_sym_keyword_setting_token3] = "keyword_setting_token3",
  [aux_sym_keyword_setting_token4] = "keyword_setting_token4",
  [aux_sym_keyword_setting_token5] = "keyword_setting_token5",
  [aux_sym_keyword_setting_token6] = "keyword_setting_token6",
  [aux_sym_test_cases_section_token1] = "section_header",
  [aux_sym_test_case_setting_token1] = "test_case_setting_token1",
  [aux_sym_test_case_setting_token2] = "test_case_setting_token2",
  [anon_sym_IF] = "IF",
  [anon_sym_END] = "END",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [anon_sym_] = " ",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [sym_variable_name] = "variable_name",
  [sym_text_chunk] = "text_chunk",
  [sym_comment] = "comment",
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
  [sym_if_statement] = "if_statement",
  [sym_elseif_statement] = "elseif_statement",
  [sym_else_statement] = "else_statement",
  [sym_block] = "block",
  [sym_arguments] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym__indentation] = "_indentation",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_test_cases_section_repeat1] = "test_cases_section_repeat1",
  [aux_sym_test_case_definition_body_repeat1] = "test_case_definition_body_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
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
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_keyword_setting_token1] = aux_sym_keyword_setting_token1,
  [aux_sym_keyword_setting_token2] = aux_sym_keyword_setting_token2,
  [aux_sym_keyword_setting_token3] = aux_sym_keyword_setting_token3,
  [aux_sym_keyword_setting_token4] = aux_sym_keyword_setting_token4,
  [aux_sym_keyword_setting_token5] = aux_sym_keyword_setting_token5,
  [aux_sym_keyword_setting_token6] = aux_sym_keyword_setting_token6,
  [aux_sym_test_cases_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_case_setting_token1] = aux_sym_test_case_setting_token1,
  [aux_sym_test_case_setting_token2] = aux_sym_test_case_setting_token2,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_text_chunk] = sym_text_chunk,
  [sym_comment] = sym_comment,
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
  [sym_if_statement] = sym_if_statement,
  [sym_elseif_statement] = sym_elseif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_block] = sym_block,
  [sym_arguments] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym__indentation] = sym__indentation,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_test_cases_section_repeat1] = aux_sym_test_cases_section_repeat1,
  [aux_sym_test_case_definition_body_repeat1] = aux_sym_test_case_definition_body_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [aux_sym_settings_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token2] = {
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
  [aux_sym_variables_section_token1] = {
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
  [aux_sym_keywords_section_token1] = {
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
  [aux_sym_test_cases_section_token1] = {
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
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
  [sym_comment] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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
  [sym__indentation] = {
    .visible = false,
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
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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

enum {
  field_alternative = 1,
  field_condition = 2,
  field_consequence = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 2},
  [1] =
    {field_alternative, 0},
  [2] =
    {field_alternative, 5},
    {field_condition, 2},
  [4] =
    {field_condition, 2},
    {field_consequence, 5},
  [6] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
  [8] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [10] =
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 5},
  [13] =
    {field_alternative, 6, .inherited = true},
    {field_condition, 2},
    {field_consequence, 5},
  [16] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
  [19] =
    {field_alternative, 6, .inherited = true},
    {field_alternative, 7},
    {field_condition, 2},
    {field_consequence, 5},
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 3,
  [21] = 4,
  [22] = 5,
  [23] = 6,
  [24] = 2,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 2,
  [30] = 6,
  [31] = 5,
  [32] = 4,
  [33] = 33,
  [34] = 3,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 9,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 13,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 35,
  [58] = 58,
  [59] = 33,
  [60] = 60,
  [61] = 9,
  [62] = 13,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 14,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 75,
  [86] = 86,
  [87] = 73,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 84,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 14,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 111,
  [112] = 108,
  [113] = 104,
  [114] = 114,
  [115] = 111,
  [116] = 114,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 107,
  [122] = 5,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 2,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 6,
  [133] = 3,
  [134] = 134,
  [135] = 4,
  [136] = 124,
  [137] = 137,
  [138] = 120,
  [139] = 129,
  [140] = 119,
  [141] = 118,
  [142] = 130,
  [143] = 131,
  [144] = 125,
  [145] = 137,
  [146] = 134,
  [147] = 123,
  [148] = 148,
  [149] = 149,
  [150] = 13,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 149,
  [155] = 148,
  [156] = 156,
  [157] = 148,
  [158] = 158,
  [159] = 156,
  [160] = 151,
  [161] = 9,
  [162] = 151,
  [163] = 163,
  [164] = 149,
  [165] = 165,
  [166] = 152,
  [167] = 149,
  [168] = 148,
  [169] = 151,
  [170] = 152,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 176,
  [181] = 178,
  [182] = 182,
  [183] = 179,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 172,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 196,
  [197] = 185,
  [198] = 182,
  [199] = 184,
  [200] = 196,
  [201] = 175,
  [202] = 173,
  [203] = 188,
  [204] = 204,
  [205] = 174,
  [206] = 65,
  [207] = 63,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 208,
  [221] = 221,
  [222] = 222,
  [223] = 82,
  [224] = 224,
  [225] = 79,
  [226] = 76,
  [227] = 70,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 68,
  [239] = 239,
  [240] = 240,
  [241] = 66,
  [242] = 67,
  [243] = 71,
  [244] = 74,
  [245] = 215,
  [246] = 246,
  [247] = 247,
  [248] = 240,
  [249] = 237,
  [250] = 250,
  [251] = 251,
  [252] = 208,
  [253] = 236,
  [254] = 235,
  [255] = 255,
  [256] = 250,
  [257] = 232,
  [258] = 258,
  [259] = 230,
  [260] = 90,
  [261] = 92,
  [262] = 64,
  [263] = 263,
  [264] = 222,
  [265] = 258,
  [266] = 214,
  [267] = 255,
  [268] = 251,
  [269] = 221,
  [270] = 247,
  [271] = 228,
  [272] = 233,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(321);
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\r') ADVANCE(645);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '$') ADVANCE(96);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '}') ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\r') ADVANCE(645);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(634);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\r') ADVANCE(645);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead == '#') ADVANCE(630);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '#') ADVANCE(630);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '}') ADVANCE(351);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(632);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == '&') ADVANCE(99);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(402);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '#') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\r') ADVANCE(645);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(190);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == ']') ADVANCE(360);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ']') ADVANCE(366);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ']') ADVANCE(372);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(369);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(380);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == ']') ADVANCE(357);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == '[') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(102);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '$') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(102);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(354);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(324);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(347);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(375);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(509);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(510);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(391);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(393);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(385);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(389);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(383);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(387);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(513);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(360);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(366);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(372);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(369);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(380);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(357);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(362);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(374);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(365);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(382);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == '{') ADVANCE(350);
      END_STATE();
    case 97:
      if (lookahead == '{') ADVANCE(350);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 98:
      if (lookahead == '{') ADVANCE(400);
      END_STATE();
    case 99:
      if (lookahead == '{') ADVANCE(400);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 100:
      if (lookahead == '{') ADVANCE(399);
      END_STATE();
    case 101:
      if (lookahead == '{') ADVANCE(399);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 102:
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    case 103:
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 104:
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 105:
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 106:
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(524);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(528);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 107:
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 108:
      if (lookahead == '{') ADVANCE(515);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 133:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 176:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 177:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 179:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 180:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 181:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 189:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 190:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 197:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 198:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 199:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 200:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 201:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 202:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 204:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 214:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 216:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 217:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 218:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 219:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 220:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 221:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 227:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 228:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 229:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 230:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 231:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 232:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 233:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 234:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 235:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 236:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 237:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 238:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 239:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 240:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 246:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 247:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 248:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      END_STATE();
    case 249:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      END_STATE();
    case 250:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 251:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 252:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 253:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      END_STATE();
    case 254:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 290:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 291:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 292:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 293:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 294:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 295:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 296:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 297:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 301:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 302:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 303:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 304:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 305:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 306:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 307:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 308:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 309:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 310:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 311:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 312:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 313:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(428);
      END_STATE();
    case 314:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(515);
      END_STATE();
    case 315:
      if (eof) ADVANCE(321);
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\r') ADVANCE(645);
      if (lookahead == ' ') ADVANCE(637);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '$') ADVANCE(96);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(214);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 316:
      if (eof) ADVANCE(321);
      if (lookahead == '\t') ADVANCE(631);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(639);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 317:
      if (eof) ADVANCE(321);
      if (lookahead == '\t') ADVANCE(633);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(636);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 318:
      if (eof) ADVANCE(321);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(638);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 319:
      if (eof) ADVANCE(321);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 320:
      if (eof) ADVANCE(321);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '#') ADVANCE(630);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(630);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(624);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(624);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(624);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '{') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(625);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(625);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(625);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '*') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '.') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == 'F') ADVANCE(384);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == 'L') ADVANCE(425);
      if (lookahead == 'N') ADVANCE(420);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(420);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '{') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(504);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(504);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(504);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(504);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(504);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(504);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(504);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(504);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(504);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(504);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(504);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(504);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(504);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(504);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(504);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(504);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(504);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(504);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(504);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(504);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(504);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(504);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(504);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'F') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(108);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(595);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(595);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(595);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ']') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ']') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(443);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(504);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(106);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(504);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(437);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ']') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ']') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == ']') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '{') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(625);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(625);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '#') ADVANCE(630);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(630);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '{') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(644);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '{') ADVANCE(428);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 320},
  [2] = {.lex_state = 315},
  [3] = {.lex_state = 315},
  [4] = {.lex_state = 315},
  [5] = {.lex_state = 315},
  [6] = {.lex_state = 315},
  [7] = {.lex_state = 315},
  [8] = {.lex_state = 315},
  [9] = {.lex_state = 315},
  [10] = {.lex_state = 315},
  [11] = {.lex_state = 315},
  [12] = {.lex_state = 315},
  [13] = {.lex_state = 315},
  [14] = {.lex_state = 315},
  [15] = {.lex_state = 315},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 316},
  [21] = {.lex_state = 316},
  [22] = {.lex_state = 316},
  [23] = {.lex_state = 316},
  [24] = {.lex_state = 316},
  [25] = {.lex_state = 317},
  [26] = {.lex_state = 317},
  [27] = {.lex_state = 317},
  [28] = {.lex_state = 317},
  [29] = {.lex_state = 318},
  [30] = {.lex_state = 318},
  [31] = {.lex_state = 318},
  [32] = {.lex_state = 318},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 318},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 315},
  [37] = {.lex_state = 319},
  [38] = {.lex_state = 316},
  [39] = {.lex_state = 315},
  [40] = {.lex_state = 315},
  [41] = {.lex_state = 319},
  [42] = {.lex_state = 319},
  [43] = {.lex_state = 319},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 319},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 319},
  [49] = {.lex_state = 319},
  [50] = {.lex_state = 315},
  [51] = {.lex_state = 319},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 316},
  [54] = {.lex_state = 315},
  [55] = {.lex_state = 319},
  [56] = {.lex_state = 319},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 318},
  [62] = {.lex_state = 318},
  [63] = {.lex_state = 317},
  [64] = {.lex_state = 317},
  [65] = {.lex_state = 317},
  [66] = {.lex_state = 317},
  [67] = {.lex_state = 317},
  [68] = {.lex_state = 317},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 317},
  [71] = {.lex_state = 317},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 317},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 317},
  [77] = {.lex_state = 317},
  [78] = {.lex_state = 317},
  [79] = {.lex_state = 317},
  [80] = {.lex_state = 317},
  [81] = {.lex_state = 317},
  [82] = {.lex_state = 317},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 317},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 317},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 317},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 315},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 315},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 319},
  [100] = {.lex_state = 319},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 319},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 38},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 38},
  [222] = {.lex_state = 38},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 38},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 38},
  [265] = {.lex_state = 38},
  [266] = {.lex_state = 38},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 38},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token1] = ACTIONS(1),
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
    [aux_sym_variables_section_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_keywords_section_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_token5] = ACTIONS(1),
    [aux_sym_keyword_setting_token6] = ACTIONS(1),
    [aux_sym_test_cases_section_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_token2] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(234),
    [sym_section] = STATE(44),
    [sym_settings_section] = STATE(126),
    [sym_variables_section] = STATE(126),
    [sym_keywords_section] = STATE(126),
    [sym_test_cases_section] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_settings_section_token1] = ACTIONS(9),
    [aux_sym_variables_section_token1] = ACTIONS(11),
    [aux_sym_keywords_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_section_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(17), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [41] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [82] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(29), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    ACTIONS(19), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(12), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(40), 17,
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
  [246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym__whitespace_token1,
    ACTIONS(54), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(48), 17,
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
  [287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__whitespace_token1,
    ACTIONS(57), 26,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(63), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(40), 17,
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
  [363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(67), 1,
      sym__line_break,
    STATE(10), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(40), 17,
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
  [404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(63), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(40), 17,
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
  [445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym__whitespace_token1,
    ACTIONS(69), 26,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym__whitespace_token1,
    ACTIONS(73), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym__whitespace_token1,
    ACTIONS(77), 23,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
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
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [545] = 15,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_END,
    ACTIONS(87), 1,
      anon_sym_ELSEIF,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(91), 1,
      sym_text_chunk,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__line_break,
    STATE(35), 1,
      aux_sym_block_repeat1,
    STATE(109), 1,
      aux_sym_if_statement_repeat1,
    STATE(111), 1,
      sym_block,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(172), 1,
      sym_statement,
    STATE(215), 1,
      sym_else_statement,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [593] = 15,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(87), 1,
      anon_sym_ELSEIF,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(91), 1,
      sym_text_chunk,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__line_break,
    ACTIONS(97), 1,
      anon_sym_END,
    STATE(35), 1,
      aux_sym_block_repeat1,
    STATE(115), 1,
      sym_block,
    STATE(117), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(172), 1,
      sym_statement,
    STATE(245), 1,
      sym_else_statement,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [641] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(103), 1,
      anon_sym_IF,
    ACTIONS(105), 1,
      sym_text_chunk,
    STATE(77), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(64), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
    ACTIONS(101), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [671] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(103), 1,
      anon_sym_IF,
    ACTIONS(105), 1,
      sym_text_chunk,
    STATE(81), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(64), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
    ACTIONS(107), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
  [701] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_ellipses,
    ACTIONS(111), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [728] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_ellipses,
    ACTIONS(116), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(32), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [755] = 6,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_ellipses,
    ACTIONS(111), 1,
      sym_indented_ellipses,
    STATE(20), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [782] = 6,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_ellipses,
    ACTIONS(111), 1,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [809] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_ellipses,
    ACTIONS(111), 1,
      sym_indented_ellipses,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [836] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym__separator,
    ACTIONS(126), 1,
      aux_sym__whitespace_token1,
    ACTIONS(129), 1,
      sym__line_break,
    STATE(18), 1,
      sym__indentation,
    STATE(25), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(121), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [866] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym__separator,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(140), 1,
      sym__line_break,
    STATE(18), 1,
      sym__indentation,
    STATE(25), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(134), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [896] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      sym__separator,
    ACTIONS(148), 1,
      sym__line_break,
    STATE(19), 1,
      sym__indentation,
    STATE(28), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(144), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [926] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      sym__separator,
    ACTIONS(157), 1,
      aux_sym__whitespace_token1,
    ACTIONS(160), 1,
      sym__line_break,
    STATE(19), 1,
      sym__indentation,
    STATE(28), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(152), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [956] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_ellipses,
    ACTIONS(165), 1,
      sym_indented_ellipses,
    STATE(30), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(21), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [982] = 6,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_ellipses,
    ACTIONS(165), 1,
      sym_indented_ellipses,
    STATE(32), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1008] = 6,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_ellipses,
    ACTIONS(165), 1,
      sym_indented_ellipses,
    STATE(34), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1034] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_ellipses,
    ACTIONS(170), 1,
      sym_indented_ellipses,
    STATE(32), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(32), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1060] = 9,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(176), 1,
      anon_sym_IF,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(184), 1,
      sym__line_break,
    STATE(33), 1,
      aux_sym_block_repeat1,
    STATE(172), 1,
      sym_statement,
    ACTIONS(179), 3,
      anon_sym_END,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1092] = 6,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_ellipses,
    ACTIONS(165), 1,
      sym_indented_ellipses,
    STATE(32), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1118] = 9,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(91), 1,
      sym_text_chunk,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(33), 1,
      aux_sym_block_repeat1,
    STATE(172), 1,
      sym_statement,
    ACTIONS(187), 3,
      anon_sym_END,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1175] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(205), 1,
      sym__line_break,
    STATE(43), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1202] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(59), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(216), 1,
      aux_sym__whitespace_token1,
    ACTIONS(219), 1,
      sym__line_break,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1271] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      sym_text_chunk,
    ACTIONS(228), 1,
      sym__line_break,
    STATE(42), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(224), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1298] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      sym_text_chunk,
    ACTIONS(237), 1,
      aux_sym__whitespace_token1,
    ACTIONS(240), 1,
      sym__line_break,
    STATE(42), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(232), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1325] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym__line_break,
    STATE(46), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(245), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(45), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(126), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1381] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      aux_sym_settings_section_token1,
    ACTIONS(256), 1,
      aux_sym_variables_section_token1,
    ACTIONS(259), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(262), 1,
      aux_sym_test_cases_section_token1,
    STATE(45), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(126), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1410] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      sym_text_chunk,
    ACTIONS(272), 1,
      aux_sym__whitespace_token1,
    ACTIONS(275), 1,
      sym__line_break,
    STATE(46), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(267), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1437] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(126), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1466] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    STATE(46), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1493] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      sym__line_break,
    STATE(48), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(280), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1545] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(226), 1,
      sym_text_chunk,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(42), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(286), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1572] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(45), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(126), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1601] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(71), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1620] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym__whitespace_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(292), 1,
      sym__line_break,
    STATE(50), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(290), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1645] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(226), 1,
      sym_text_chunk,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      sym__line_break,
    STATE(51), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(296), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1672] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(226), 1,
      sym_text_chunk,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      sym__line_break,
    STATE(41), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(286), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1699] = 9,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(91), 1,
      sym_text_chunk,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_END,
    ACTIONS(302), 1,
      sym__line_break,
    STATE(59), 1,
      aux_sym_block_repeat1,
    STATE(189), 1,
      sym_statement,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1729] = 9,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(91), 1,
      sym_text_chunk,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__line_break,
    STATE(35), 1,
      aux_sym_block_repeat1,
    STATE(165), 1,
      sym_block,
    STATE(172), 1,
      sym_statement,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1759] = 9,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(176), 1,
      anon_sym_IF,
    ACTIONS(179), 1,
      anon_sym_END,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(304), 1,
      sym__line_break,
    STATE(59), 1,
      aux_sym_block_repeat1,
    STATE(189), 1,
      sym_statement,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1789] = 9,
    ACTIONS(81), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(91), 1,
      sym_text_chunk,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__line_break,
    STATE(57), 1,
      aux_sym_block_repeat1,
    STATE(189), 1,
      sym_statement,
    STATE(263), 1,
      sym_block,
    STATE(262), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1819] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(59), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_ellipses,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1837] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_indented_ellipses,
    ACTIONS(71), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_ellipses,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1855] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1872] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1889] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1906] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1923] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1940] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1957] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(15), 1,
      sym_arguments,
    STATE(164), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1984] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2001] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2018] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(95), 1,
      sym_arguments,
    STATE(164), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2045] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(67), 1,
      sym_arguments,
    STATE(154), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2072] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2089] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(71), 1,
      sym_arguments,
    STATE(154), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2116] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2133] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2150] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(75), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2167] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2184] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2201] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2218] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2235] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(99), 1,
      sym_arguments,
    STATE(149), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2262] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(167), 1,
      sym_argument,
    STATE(260), 1,
      sym_arguments,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2289] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(167), 1,
      sym_argument,
    STATE(243), 1,
      sym_arguments,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2316] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(97), 1,
      sym_arguments,
    STATE(164), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2343] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(167), 1,
      sym_argument,
    STATE(242), 1,
      sym_arguments,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2370] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2387] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(80), 1,
      sym_arguments,
    STATE(154), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2414] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2431] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_arguments,
    STATE(154), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2458] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2475] = 8,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(88), 1,
      sym_arguments,
    STATE(154), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2502] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(335), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(337), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(186), 1,
      sym_argument,
    STATE(106), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym__whitespace_token1,
    ACTIONS(381), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2542] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(389), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(391), 1,
      sym_text_chunk,
    STATE(270), 1,
      sym_argument,
    STATE(110), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym__whitespace_token1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2582] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(389), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(391), 1,
      sym_text_chunk,
    STATE(247), 1,
      sym_argument,
    STATE(110), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2606] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2622] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2638] = 7,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(387), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(389), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(391), 1,
      sym_text_chunk,
    STATE(231), 1,
      sym_argument,
    STATE(110), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [2662] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(75), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2678] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      sym__separator,
    ACTIONS(405), 1,
      sym__line_break,
    STATE(19), 1,
      sym__indentation,
    STATE(99), 1,
      sym_test_case_definition_body,
    STATE(27), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2701] = 6,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(410), 1,
      anon_sym_,
    ACTIONS(413), 1,
      sym_text_chunk,
    ACTIONS(416), 2,
      sym__separator,
      sym__line_break,
    STATE(104), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2722] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__separator,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(418), 1,
      sym__line_break,
    STATE(18), 1,
      sym__indentation,
    STATE(100), 1,
      sym_keyword_definition_body,
    STATE(26), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2745] = 6,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(422), 1,
      sym_text_chunk,
    ACTIONS(424), 2,
      sym__separator,
      sym__line_break,
    STATE(108), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2766] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(179), 6,
      anon_sym_IF,
      anon_sym_END,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      sym_text_chunk,
      sym__line_break,
  [2781] = 6,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(428), 1,
      sym_text_chunk,
    ACTIONS(430), 2,
      sym__separator,
      sym__line_break,
    STATE(104), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2802] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(432), 1,
      anon_sym_END,
    ACTIONS(434), 1,
      anon_sym_ELSEIF,
    STATE(127), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(256), 1,
      sym_else_statement,
  [2824] = 6,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 1,
      sym__line_break,
    ACTIONS(436), 1,
      anon_sym_,
    ACTIONS(438), 1,
      sym_text_chunk,
    STATE(112), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(434), 1,
      anon_sym_ELSEIF,
    ACTIONS(440), 1,
      anon_sym_END,
    STATE(114), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(240), 1,
      sym_else_statement,
  [2866] = 6,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(430), 1,
      sym__line_break,
    ACTIONS(436), 1,
      anon_sym_,
    ACTIONS(442), 1,
      sym_text_chunk,
    STATE(113), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2886] = 6,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__line_break,
    ACTIONS(444), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(447), 1,
      anon_sym_,
    ACTIONS(450), 1,
      sym_text_chunk,
    STATE(113), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2906] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(434), 1,
      anon_sym_ELSEIF,
    ACTIONS(453), 1,
      anon_sym_END,
    STATE(127), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(268), 1,
      sym_else_statement,
  [2928] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(434), 1,
      anon_sym_ELSEIF,
    ACTIONS(455), 1,
      anon_sym_END,
    STATE(116), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(248), 1,
      sym_else_statement,
  [2950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(434), 1,
      anon_sym_ELSEIF,
    ACTIONS(457), 1,
      anon_sym_END,
    STATE(127), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(251), 1,
      sym_else_statement,
  [2972] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_ELSE,
    ACTIONS(434), 1,
      anon_sym_ELSEIF,
    ACTIONS(459), 1,
      anon_sym_END,
    STATE(127), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
    STATE(250), 1,
      sym_else_statement,
  [2994] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3007] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3020] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(471), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3033] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(179), 4,
      anon_sym_IF,
      anon_sym_END,
      sym_text_chunk,
      sym__line_break,
  [3046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__separator,
    ACTIONS(473), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(133), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3061] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(477), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3074] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3087] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3111] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_END,
    ACTIONS(491), 1,
      anon_sym_ELSEIF,
    ACTIONS(494), 1,
      anon_sym_ELSE,
    STATE(127), 1,
      aux_sym_if_statement_repeat1,
    STATE(171), 1,
      sym_elseif_statement,
  [3130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__separator,
    ACTIONS(473), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(132), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3145] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(498), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3158] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(416), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3171] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(504), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__separator,
    ACTIONS(473), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(135), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__separator,
    ACTIONS(473), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(135), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3214] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(508), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [3227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym__separator,
    ACTIONS(510), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(135), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3242] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 2,
      anon_sym_,
      sym__line_break,
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(517), 1,
      sym__line_break,
    ACTIONS(513), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3268] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(471), 2,
      anon_sym_,
      sym__line_break,
  [3280] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(498), 2,
      anon_sym_,
      sym__line_break,
  [3292] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 2,
      anon_sym_,
      sym__line_break,
  [3304] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 2,
      anon_sym_,
      sym__line_break,
  [3316] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(500), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3328] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(504), 2,
      anon_sym_,
      sym__line_break,
  [3340] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 2,
      anon_sym_,
      sym__line_break,
  [3352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    ACTIONS(519), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3366] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(508), 2,
      anon_sym_,
      sym__line_break,
  [3378] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(477), 2,
      anon_sym_,
      sym__line_break,
  [3390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(527), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(529), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__separator,
    ACTIONS(69), 2,
      sym_ellipses,
      sym_indented_ellipses,
  [3427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(531), 1,
      sym__line_break,
    STATE(152), 1,
      aux_sym_arguments_repeat1,
  [3440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(533), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(535), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(537), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
  [3479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(539), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3492] = 4,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(541), 1,
      sym_text_chunk,
    STATE(130), 1,
      sym_scalar_variable,
  [3505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(543), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__separator,
    ACTIONS(548), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3531] = 4,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(550), 1,
      sym_text_chunk,
    STATE(142), 1,
      sym_scalar_variable,
  [3544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [3557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__separator,
    ACTIONS(57), 2,
      sym_ellipses,
      sym_indented_ellipses,
  [3568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(554), 1,
      sym__line_break,
    STATE(166), 1,
      aux_sym_arguments_repeat1,
  [3581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__separator,
    ACTIONS(556), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(560), 1,
      sym__line_break,
    STATE(155), 1,
      aux_sym_arguments_repeat1,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_ELSE,
    ACTIONS(562), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [3616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(566), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(568), 1,
      sym__line_break,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
  [3642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(570), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(572), 1,
      sym__line_break,
    STATE(170), 1,
      aux_sym_arguments_repeat1,
  [3668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_ELSE,
    ACTIONS(576), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__separator,
    STATE(107), 1,
      sym__indentation,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      anon_sym_,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    ACTIONS(588), 1,
      anon_sym_,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym__separator,
    STATE(17), 1,
      sym__indentation,
  [3732] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_,
    ACTIONS(594), 1,
      sym_variable_name,
  [3742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    STATE(58), 1,
      sym__indentation,
  [3752] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_,
    ACTIONS(600), 1,
      sym_variable_name,
  [3762] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_,
    ACTIONS(604), 1,
      sym_variable_name,
  [3772] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_,
    ACTIONS(608), 1,
      sym_variable_name,
  [3782] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_,
    ACTIONS(612), 1,
      sym_variable_name,
  [3792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      anon_sym_,
  [3802] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      sym_variable_name,
  [3812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    ACTIONS(624), 1,
      anon_sym_,
  [3822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      anon_sym_,
  [3832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__line_break,
    ACTIONS(630), 1,
      sym__separator,
  [3842] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(632), 1,
      aux_sym_settings_section_token2,
    ACTIONS(634), 1,
      sym__line_break,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 1,
      anon_sym_,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__separator,
    STATE(121), 1,
      sym__indentation,
  [3872] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(642), 1,
      aux_sym_settings_section_token2,
    ACTIONS(644), 1,
      sym__line_break,
  [3882] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(646), 1,
      aux_sym_settings_section_token2,
    ACTIONS(648), 1,
      sym__line_break,
  [3892] = 3,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(650), 1,
      aux_sym_settings_section_token2,
    ACTIONS(652), 1,
      sym__line_break,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
    ACTIONS(656), 1,
      sym__line_break,
  [3912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__separator,
    ACTIONS(660), 1,
      sym__line_break,
  [3922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__separator,
    ACTIONS(668), 1,
      sym__line_break,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_,
  [3962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(680), 1,
      anon_sym_,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__separator,
    ACTIONS(684), 1,
      sym__line_break,
  [3982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__separator,
    STATE(16), 1,
      sym__indentation,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    ACTIONS(690), 1,
      anon_sym_,
  [4002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      anon_sym_,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__separator,
    STATE(60), 1,
      sym__indentation,
  [4022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__separator,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__separator,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__line_break,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym__line_break,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__line_break,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__line_break,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__line_break,
  [4088] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_variable_name,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_END,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym__line_break,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__separator,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__separator,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__line_break,
  [4137] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_variable_name,
  [4144] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_variable_name,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__separator,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__separator,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__separator,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__separator,
  [4179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__separator,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__line_break,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__line_break,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym__separator,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__separator,
  [4263] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_variable_name,
  [4270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_END,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__separator,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__separator,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__separator,
  [4298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__separator,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_END,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym__line_break,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_END,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_END,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_END,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__line_break,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_END,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
  [4396] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_variable_name,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__separator,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym__separator,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__separator,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_END,
  [4438] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_variable_name,
  [4445] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_variable_name,
  [4452] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_variable_name,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_END,
  [4473] = 2,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_variable_name,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__line_break,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 322,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 404,
  [SMALL_STATE(13)] = 445,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 513,
  [SMALL_STATE(16)] = 545,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 641,
  [SMALL_STATE(19)] = 671,
  [SMALL_STATE(20)] = 701,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 755,
  [SMALL_STATE(23)] = 782,
  [SMALL_STATE(24)] = 809,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 956,
  [SMALL_STATE(30)] = 982,
  [SMALL_STATE(31)] = 1008,
  [SMALL_STATE(32)] = 1034,
  [SMALL_STATE(33)] = 1060,
  [SMALL_STATE(34)] = 1092,
  [SMALL_STATE(35)] = 1118,
  [SMALL_STATE(36)] = 1150,
  [SMALL_STATE(37)] = 1175,
  [SMALL_STATE(38)] = 1202,
  [SMALL_STATE(39)] = 1221,
  [SMALL_STATE(40)] = 1246,
  [SMALL_STATE(41)] = 1271,
  [SMALL_STATE(42)] = 1298,
  [SMALL_STATE(43)] = 1325,
  [SMALL_STATE(44)] = 1352,
  [SMALL_STATE(45)] = 1381,
  [SMALL_STATE(46)] = 1410,
  [SMALL_STATE(47)] = 1437,
  [SMALL_STATE(48)] = 1466,
  [SMALL_STATE(49)] = 1493,
  [SMALL_STATE(50)] = 1520,
  [SMALL_STATE(51)] = 1545,
  [SMALL_STATE(52)] = 1572,
  [SMALL_STATE(53)] = 1601,
  [SMALL_STATE(54)] = 1620,
  [SMALL_STATE(55)] = 1645,
  [SMALL_STATE(56)] = 1672,
  [SMALL_STATE(57)] = 1699,
  [SMALL_STATE(58)] = 1729,
  [SMALL_STATE(59)] = 1759,
  [SMALL_STATE(60)] = 1789,
  [SMALL_STATE(61)] = 1819,
  [SMALL_STATE(62)] = 1837,
  [SMALL_STATE(63)] = 1855,
  [SMALL_STATE(64)] = 1872,
  [SMALL_STATE(65)] = 1889,
  [SMALL_STATE(66)] = 1906,
  [SMALL_STATE(67)] = 1923,
  [SMALL_STATE(68)] = 1940,
  [SMALL_STATE(69)] = 1957,
  [SMALL_STATE(70)] = 1984,
  [SMALL_STATE(71)] = 2001,
  [SMALL_STATE(72)] = 2018,
  [SMALL_STATE(73)] = 2045,
  [SMALL_STATE(74)] = 2072,
  [SMALL_STATE(75)] = 2089,
  [SMALL_STATE(76)] = 2116,
  [SMALL_STATE(77)] = 2133,
  [SMALL_STATE(78)] = 2150,
  [SMALL_STATE(79)] = 2167,
  [SMALL_STATE(80)] = 2184,
  [SMALL_STATE(81)] = 2201,
  [SMALL_STATE(82)] = 2218,
  [SMALL_STATE(83)] = 2235,
  [SMALL_STATE(84)] = 2262,
  [SMALL_STATE(85)] = 2289,
  [SMALL_STATE(86)] = 2316,
  [SMALL_STATE(87)] = 2343,
  [SMALL_STATE(88)] = 2370,
  [SMALL_STATE(89)] = 2387,
  [SMALL_STATE(90)] = 2414,
  [SMALL_STATE(91)] = 2431,
  [SMALL_STATE(92)] = 2458,
  [SMALL_STATE(93)] = 2475,
  [SMALL_STATE(94)] = 2502,
  [SMALL_STATE(95)] = 2526,
  [SMALL_STATE(96)] = 2542,
  [SMALL_STATE(97)] = 2566,
  [SMALL_STATE(98)] = 2582,
  [SMALL_STATE(99)] = 2606,
  [SMALL_STATE(100)] = 2622,
  [SMALL_STATE(101)] = 2638,
  [SMALL_STATE(102)] = 2662,
  [SMALL_STATE(103)] = 2678,
  [SMALL_STATE(104)] = 2701,
  [SMALL_STATE(105)] = 2722,
  [SMALL_STATE(106)] = 2745,
  [SMALL_STATE(107)] = 2766,
  [SMALL_STATE(108)] = 2781,
  [SMALL_STATE(109)] = 2802,
  [SMALL_STATE(110)] = 2824,
  [SMALL_STATE(111)] = 2844,
  [SMALL_STATE(112)] = 2866,
  [SMALL_STATE(113)] = 2886,
  [SMALL_STATE(114)] = 2906,
  [SMALL_STATE(115)] = 2928,
  [SMALL_STATE(116)] = 2950,
  [SMALL_STATE(117)] = 2972,
  [SMALL_STATE(118)] = 2994,
  [SMALL_STATE(119)] = 3007,
  [SMALL_STATE(120)] = 3020,
  [SMALL_STATE(121)] = 3033,
  [SMALL_STATE(122)] = 3046,
  [SMALL_STATE(123)] = 3061,
  [SMALL_STATE(124)] = 3074,
  [SMALL_STATE(125)] = 3087,
  [SMALL_STATE(126)] = 3100,
  [SMALL_STATE(127)] = 3111,
  [SMALL_STATE(128)] = 3130,
  [SMALL_STATE(129)] = 3145,
  [SMALL_STATE(130)] = 3158,
  [SMALL_STATE(131)] = 3171,
  [SMALL_STATE(132)] = 3184,
  [SMALL_STATE(133)] = 3199,
  [SMALL_STATE(134)] = 3214,
  [SMALL_STATE(135)] = 3227,
  [SMALL_STATE(136)] = 3242,
  [SMALL_STATE(137)] = 3254,
  [SMALL_STATE(138)] = 3268,
  [SMALL_STATE(139)] = 3280,
  [SMALL_STATE(140)] = 3292,
  [SMALL_STATE(141)] = 3304,
  [SMALL_STATE(142)] = 3316,
  [SMALL_STATE(143)] = 3328,
  [SMALL_STATE(144)] = 3340,
  [SMALL_STATE(145)] = 3352,
  [SMALL_STATE(146)] = 3366,
  [SMALL_STATE(147)] = 3378,
  [SMALL_STATE(148)] = 3390,
  [SMALL_STATE(149)] = 3403,
  [SMALL_STATE(150)] = 3416,
  [SMALL_STATE(151)] = 3427,
  [SMALL_STATE(152)] = 3440,
  [SMALL_STATE(153)] = 3453,
  [SMALL_STATE(154)] = 3466,
  [SMALL_STATE(155)] = 3479,
  [SMALL_STATE(156)] = 3492,
  [SMALL_STATE(157)] = 3505,
  [SMALL_STATE(158)] = 3518,
  [SMALL_STATE(159)] = 3531,
  [SMALL_STATE(160)] = 3544,
  [SMALL_STATE(161)] = 3557,
  [SMALL_STATE(162)] = 3568,
  [SMALL_STATE(163)] = 3581,
  [SMALL_STATE(164)] = 3592,
  [SMALL_STATE(165)] = 3605,
  [SMALL_STATE(166)] = 3616,
  [SMALL_STATE(167)] = 3629,
  [SMALL_STATE(168)] = 3642,
  [SMALL_STATE(169)] = 3655,
  [SMALL_STATE(170)] = 3668,
  [SMALL_STATE(171)] = 3681,
  [SMALL_STATE(172)] = 3692,
  [SMALL_STATE(173)] = 3702,
  [SMALL_STATE(174)] = 3712,
  [SMALL_STATE(175)] = 3722,
  [SMALL_STATE(176)] = 3732,
  [SMALL_STATE(177)] = 3742,
  [SMALL_STATE(178)] = 3752,
  [SMALL_STATE(179)] = 3762,
  [SMALL_STATE(180)] = 3772,
  [SMALL_STATE(181)] = 3782,
  [SMALL_STATE(182)] = 3792,
  [SMALL_STATE(183)] = 3802,
  [SMALL_STATE(184)] = 3812,
  [SMALL_STATE(185)] = 3822,
  [SMALL_STATE(186)] = 3832,
  [SMALL_STATE(187)] = 3842,
  [SMALL_STATE(188)] = 3852,
  [SMALL_STATE(189)] = 3862,
  [SMALL_STATE(190)] = 3872,
  [SMALL_STATE(191)] = 3882,
  [SMALL_STATE(192)] = 3892,
  [SMALL_STATE(193)] = 3902,
  [SMALL_STATE(194)] = 3912,
  [SMALL_STATE(195)] = 3922,
  [SMALL_STATE(196)] = 3932,
  [SMALL_STATE(197)] = 3942,
  [SMALL_STATE(198)] = 3952,
  [SMALL_STATE(199)] = 3962,
  [SMALL_STATE(200)] = 3972,
  [SMALL_STATE(201)] = 3982,
  [SMALL_STATE(202)] = 3992,
  [SMALL_STATE(203)] = 4002,
  [SMALL_STATE(204)] = 4012,
  [SMALL_STATE(205)] = 4022,
  [SMALL_STATE(206)] = 4032,
  [SMALL_STATE(207)] = 4039,
  [SMALL_STATE(208)] = 4046,
  [SMALL_STATE(209)] = 4053,
  [SMALL_STATE(210)] = 4060,
  [SMALL_STATE(211)] = 4067,
  [SMALL_STATE(212)] = 4074,
  [SMALL_STATE(213)] = 4081,
  [SMALL_STATE(214)] = 4088,
  [SMALL_STATE(215)] = 4095,
  [SMALL_STATE(216)] = 4102,
  [SMALL_STATE(217)] = 4109,
  [SMALL_STATE(218)] = 4116,
  [SMALL_STATE(219)] = 4123,
  [SMALL_STATE(220)] = 4130,
  [SMALL_STATE(221)] = 4137,
  [SMALL_STATE(222)] = 4144,
  [SMALL_STATE(223)] = 4151,
  [SMALL_STATE(224)] = 4158,
  [SMALL_STATE(225)] = 4165,
  [SMALL_STATE(226)] = 4172,
  [SMALL_STATE(227)] = 4179,
  [SMALL_STATE(228)] = 4186,
  [SMALL_STATE(229)] = 4193,
  [SMALL_STATE(230)] = 4200,
  [SMALL_STATE(231)] = 4207,
  [SMALL_STATE(232)] = 4214,
  [SMALL_STATE(233)] = 4221,
  [SMALL_STATE(234)] = 4228,
  [SMALL_STATE(235)] = 4235,
  [SMALL_STATE(236)] = 4242,
  [SMALL_STATE(237)] = 4249,
  [SMALL_STATE(238)] = 4256,
  [SMALL_STATE(239)] = 4263,
  [SMALL_STATE(240)] = 4270,
  [SMALL_STATE(241)] = 4277,
  [SMALL_STATE(242)] = 4284,
  [SMALL_STATE(243)] = 4291,
  [SMALL_STATE(244)] = 4298,
  [SMALL_STATE(245)] = 4305,
  [SMALL_STATE(246)] = 4312,
  [SMALL_STATE(247)] = 4319,
  [SMALL_STATE(248)] = 4326,
  [SMALL_STATE(249)] = 4333,
  [SMALL_STATE(250)] = 4340,
  [SMALL_STATE(251)] = 4347,
  [SMALL_STATE(252)] = 4354,
  [SMALL_STATE(253)] = 4361,
  [SMALL_STATE(254)] = 4368,
  [SMALL_STATE(255)] = 4375,
  [SMALL_STATE(256)] = 4382,
  [SMALL_STATE(257)] = 4389,
  [SMALL_STATE(258)] = 4396,
  [SMALL_STATE(259)] = 4403,
  [SMALL_STATE(260)] = 4410,
  [SMALL_STATE(261)] = 4417,
  [SMALL_STATE(262)] = 4424,
  [SMALL_STATE(263)] = 4431,
  [SMALL_STATE(264)] = 4438,
  [SMALL_STATE(265)] = 4445,
  [SMALL_STATE(266)] = 4452,
  [SMALL_STATE(267)] = 4459,
  [SMALL_STATE(268)] = 4466,
  [SMALL_STATE(269)] = 4473,
  [SMALL_STATE(270)] = 4480,
  [SMALL_STATE(271)] = 4487,
  [SMALL_STATE(272)] = 4494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(160),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(209),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(208),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(162),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(162),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(18),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(252),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(252),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(28),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(151),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(151),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(272),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(200),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(239),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(208),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(40),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(229),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(220),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(42),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(194),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(220),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(46),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 6),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 9),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 11),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 11),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 12),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 9, .production_id = 12),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(183),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(156),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(104),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(179),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(159),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(113),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 8),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 8), SHIFT_REPEAT(218),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 8),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(169),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(94),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elseif_statement, 6, .production_id = 6),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .production_id = 6),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [740] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 4),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
