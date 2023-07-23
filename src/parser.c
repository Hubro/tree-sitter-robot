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
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 3
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_RETURN = 36,
  anon_sym_IF = 37,
  anon_sym_END = 38,
  anon_sym_ELSEIF = 39,
  anon_sym_ELSE = 40,
  sym_ellipses = 41,
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
  sym_return_statement = 66,
  sym_variable_assignment = 67,
  sym_keyword_invocation = 68,
  sym_if_statement = 69,
  sym_elseif_statement = 70,
  sym_else_statement = 71,
  sym_block = 72,
  sym_arguments = 73,
  sym_arguments_without_continuation = 74,
  sym_continuation = 75,
  sym_argument = 76,
  sym_scalar_variable = 77,
  sym_list_variable = 78,
  sym_dictionary_variable = 79,
  sym__indentation = 80,
  sym__whitespace = 81,
  sym__empty_line = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_settings_section_repeat1 = 84,
  aux_sym_variables_section_repeat1 = 85,
  aux_sym_keywords_section_repeat1 = 86,
  aux_sym_keyword_definition_body_repeat1 = 87,
  aux_sym_test_cases_section_repeat1 = 88,
  aux_sym_test_case_definition_body_repeat1 = 89,
  aux_sym_if_statement_repeat1 = 90,
  aux_sym_block_repeat1 = 91,
  aux_sym_arguments_repeat1 = 92,
  aux_sym_arguments_repeat2 = 93,
  aux_sym_argument_repeat1 = 94,
  alias_sym_keyword = 95,
  alias_sym_name = 96,
  alias_sym_return_value = 97,
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
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_IF] = "IF",
  [anon_sym_END] = "END",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [sym_ellipses] = "ellipses",
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
  [sym_return_statement] = "return_statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym_keyword_invocation] = "keyword_invocation",
  [sym_if_statement] = "if_statement",
  [sym_elseif_statement] = "elseif_statement",
  [sym_else_statement] = "else_statement",
  [sym_block] = "block",
  [sym_arguments] = "arguments",
  [sym_arguments_without_continuation] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym__indentation] = "_indentation",
  [sym__whitespace] = "_whitespace",
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
  [alias_sym_return_value] = "return_value",
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
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [sym_ellipses] = sym_ellipses,
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
  [sym_return_statement] = sym_return_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_keyword_invocation] = sym_keyword_invocation,
  [sym_if_statement] = sym_if_statement,
  [sym_elseif_statement] = sym_elseif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_block] = sym_block,
  [sym_arguments] = sym_arguments,
  [sym_arguments_without_continuation] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym__indentation] = sym__indentation,
  [sym__whitespace] = sym__whitespace,
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
  [alias_sym_return_value] = alias_sym_return_value,
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
  [anon_sym_RETURN] = {
    .visible = true,
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
  [sym_return_statement] = {
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
  [sym_arguments_without_continuation] = {
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
  [sym__whitespace] = {
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
  [alias_sym_return_value] = {
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
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 3},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 4},
  [15] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alternative, 0},
  [1] =
    {field_condition, 2},
  [2] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [4] =
    {field_alternative, 4},
    {field_condition, 2},
  [6] =
    {field_condition, 2},
    {field_consequence, 4},
  [8] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [10] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [13] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [16] =
    {field_consequence, 3},
  [17] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [20] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [24] =
    {field_condition, 3},
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
  [3] = {
    [2] = alias_sym_return_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    alias_sym_return_value,
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 7,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 7,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 60,
  [66] = 64,
  [67] = 67,
  [68] = 67,
  [69] = 60,
  [70] = 64,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 79,
  [89] = 82,
  [90] = 83,
  [91] = 91,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 91,
  [96] = 94,
  [97] = 97,
  [98] = 97,
  [99] = 81,
  [100] = 100,
  [101] = 94,
  [102] = 102,
  [103] = 103,
  [104] = 91,
  [105] = 97,
  [106] = 81,
  [107] = 86,
  [108] = 83,
  [109] = 75,
  [110] = 74,
  [111] = 79,
  [112] = 82,
  [113] = 7,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 114,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 114,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 136,
  [141] = 137,
  [142] = 139,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 134,
  [151] = 143,
  [152] = 144,
  [153] = 145,
  [154] = 154,
  [155] = 148,
  [156] = 148,
  [157] = 149,
  [158] = 149,
  [159] = 159,
  [160] = 160,
  [161] = 143,
  [162] = 144,
  [163] = 163,
  [164] = 145,
  [165] = 165,
  [166] = 166,
  [167] = 134,
  [168] = 168,
  [169] = 136,
  [170] = 137,
  [171] = 139,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
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
  [218] = 173,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 209,
  [225] = 225,
  [226] = 212,
  [227] = 227,
  [228] = 174,
  [229] = 191,
  [230] = 180,
  [231] = 197,
  [232] = 173,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 209,
  [239] = 239,
  [240] = 212,
  [241] = 241,
  [242] = 174,
  [243] = 191,
  [244] = 180,
  [245] = 197,
  [246] = 173,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 205,
  [251] = 219,
  [252] = 223,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 205,
  [257] = 219,
  [258] = 223,
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
      if (eof) ADVANCE(326);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(647);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '$') ADVANCE(103);
      if (lookahead == '&') ADVANCE(105);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '=') ADVANCE(357);
      if (lookahead == '@') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(647);
      if (lookahead == ' ') ADVANCE(642);
      if (lookahead == '#') ADVANCE(638);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(647);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '}') ADVANCE(356);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(644);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(13);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(647);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(197);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == ']') ADVANCE(365);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ']') ADVANCE(382);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ']') ADVANCE(371);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ']') ADVANCE(374);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ']') ADVANCE(385);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ']') ADVANCE(368);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == ']') ADVANCE(362);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(109);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '[') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(109);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '[') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(109);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(109);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(359);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(329);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(352);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(380);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(518);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(398);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(392);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(390);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(394);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(522);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(388);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 78:
      if (lookahead == 'U') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(365);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(382);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(371);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(374);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(385);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(368);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(362);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(367);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(384);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(387);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(364);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(370);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == '{') ADVANCE(355);
      END_STATE();
    case 104:
      if (lookahead == '{') ADVANCE(355);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 105:
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 106:
      if (lookahead == '{') ADVANCE(406);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 107:
      if (lookahead == '{') ADVANCE(405);
      END_STATE();
    case 108:
      if (lookahead == '{') ADVANCE(405);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 109:
      if (lookahead == '{') ADVANCE(436);
      END_STATE();
    case 110:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 111:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 112:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(532);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(534);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 115:
      if (lookahead == '{') ADVANCE(524);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(248);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 148:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 183:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 184:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 185:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 186:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 187:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 188:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 196:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 197:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 204:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 205:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 207:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 221:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 227:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 228:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 232:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 233:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 234:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 235:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 236:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 237:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 238:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 239:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 240:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 246:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 247:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 248:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 254:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 297:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 301:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 302:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 303:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 304:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 305:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 306:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 307:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 308:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 311:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 312:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 313:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 314:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 315:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 316:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 317:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 318:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 319:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 320:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(436);
      END_STATE();
    case 321:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(524);
      END_STATE();
    case 322:
      if (eof) ADVANCE(326);
      if (lookahead == '\t') ADVANCE(639);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 323:
      if (eof) ADVANCE(326);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(647);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '$') ADVANCE(103);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(645);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 324:
      if (eof) ADVANCE(326);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(646);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 325:
      if (eof) ADVANCE(326);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(645);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(638);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(645);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(638);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '{') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(632);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(632);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(632);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '*') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(391);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(431);
      if (lookahead == 'N') ADVANCE(424);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '{') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(512);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(512);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(512);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(512);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(512);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(512);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(512);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(512);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(512);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(512);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(512);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(512);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(512);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(512);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(512);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(512);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(512);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(512);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(512);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(512);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(512);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(512);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(512);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(512);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(512);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(512);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(512);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(512);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(512);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(512);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(512);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(512);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(512);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(512);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(512);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(444);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '*') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(115);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(604);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(604);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(604);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(604);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(604);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(604);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(604);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(604);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(604);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(604);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(604);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(604);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(604);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(604);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(604);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(604);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(604);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(604);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(604);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == ']') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(113);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(512);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(446);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(448);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ']') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ']') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == ']') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ']') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ']') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ']') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(109);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(115);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '{') ADVANCE(638);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '{') ADVANCE(638);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '{') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(638);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(638);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(645);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(638);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(645);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 325},
  [2] = {.lex_state = 323},
  [3] = {.lex_state = 323},
  [4] = {.lex_state = 323},
  [5] = {.lex_state = 323},
  [6] = {.lex_state = 323},
  [7] = {.lex_state = 323},
  [8] = {.lex_state = 323},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 322},
  [12] = {.lex_state = 322},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 322},
  [15] = {.lex_state = 322},
  [16] = {.lex_state = 324},
  [17] = {.lex_state = 323},
  [18] = {.lex_state = 324},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 324},
  [22] = {.lex_state = 323},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 323},
  [25] = {.lex_state = 324},
  [26] = {.lex_state = 323},
  [27] = {.lex_state = 324},
  [28] = {.lex_state = 323},
  [29] = {.lex_state = 324},
  [30] = {.lex_state = 324},
  [31] = {.lex_state = 324},
  [32] = {.lex_state = 324},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 324},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 322},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 322},
  [46] = {.lex_state = 322},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 324},
  [51] = {.lex_state = 324},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 323},
  [54] = {.lex_state = 324},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 323},
  [58] = {.lex_state = 324},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 323},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 42},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 42},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 9},
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
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 42},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 42},
  [251] = {.lex_state = 42},
  [252] = {.lex_state = 42},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 42},
  [257] = {.lex_state = 42},
  [258] = {.lex_state = 42},
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
    [anon_sym_RETURN] = ACTIONS(1),
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
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(203),
    [sym_section] = STATE(33),
    [sym_settings_section] = STATE(80),
    [sym_variables_section] = STATE(80),
    [sym_keywords_section] = STATE(80),
    [sym_test_cases_section] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(33),
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
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      aux_sym__whitespace_token1,
    ACTIONS(25), 1,
      sym__line_break,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
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
  [41] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(34), 1,
      sym__line_break,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [82] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(34), 1,
      sym__line_break,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(38), 1,
      sym__line_break,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__whitespace_token1,
    ACTIONS(44), 24,
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
  [238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 23,
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
  [270] = 8,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(207), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(178), 4,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
  [304] = 8,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(255), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(178), 4,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
    ACTIONS(64), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [338] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym__separator,
    ACTIONS(73), 1,
      aux_sym__whitespace_token1,
    ACTIONS(76), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(11), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(68), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [368] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym__separator,
    ACTIONS(86), 1,
      aux_sym__whitespace_token1,
    ACTIONS(89), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(12), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(81), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [398] = 10,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_END,
    ACTIONS(94), 1,
      anon_sym_ELSEIF,
    ACTIONS(96), 1,
      anon_sym_ELSE,
    STATE(208), 1,
      sym_statement,
    STATE(178), 4,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [432] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(106), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(11), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(100), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [462] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(114), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(12), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(110), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [492] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym_text_chunk,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(118), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [519] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(130), 1,
      sym__line_break,
    STATE(26), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [544] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(138), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(134), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [571] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_settings_section_token1,
    ACTIONS(145), 1,
      aux_sym_variables_section_token1,
    ACTIONS(148), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(151), 1,
      aux_sym_test_cases_section_token1,
    STATE(19), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(80), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [600] = 8,
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
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(80), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [629] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      sym_text_chunk,
    ACTIONS(163), 1,
      aux_sym__whitespace_token1,
    ACTIONS(166), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(158), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(171), 1,
      sym__line_break,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [681] = 8,
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
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(80), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [710] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(177), 1,
      sym__line_break,
    STATE(22), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [735] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_text_chunk,
    ACTIONS(186), 1,
      aux_sym__whitespace_token1,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(181), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(171), 1,
      sym__line_break,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [787] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(194), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [814] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(203), 1,
      aux_sym__whitespace_token1,
    ACTIONS(206), 1,
      sym__line_break,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [839] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(194), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [866] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_text_chunk,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym__line_break,
    STATE(34), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(213), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [893] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(209), 1,
      sym__line_break,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(219), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [920] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_text_chunk,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(213), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [947] = 8,
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
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(80), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [976] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_text_chunk,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(221), 1,
      sym__line_break,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(225), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1003] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__separator,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(231), 1,
      sym__line_break,
    STATE(13), 1,
      sym__indentation,
    STATE(84), 1,
      sym_block,
    STATE(85), 1,
      aux_sym_if_statement_repeat1,
    STATE(154), 1,
      sym_else_statement,
    STATE(225), 1,
      sym_elseif_statement,
    STATE(72), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1035] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(222), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1062] = 7,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(208), 1,
      sym_statement,
    STATE(178), 4,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
  [1087] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(204), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1114] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(254), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1141] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1158] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(193), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1185] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(247), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1212] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(221), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1239] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(122), 1,
      sym_argument,
    STATE(179), 1,
      sym_arguments_without_continuation,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1266] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1283] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(46), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1300] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(248), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1327] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(93), 1,
      sym_argument,
    STATE(233), 1,
      sym_arguments,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1354] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(255), 1,
      sym_text_chunk,
    STATE(249), 1,
      sym_argument,
    STATE(70), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1378] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1394] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1410] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      sym_text_chunk,
    STATE(131), 1,
      sym_argument,
    STATE(66), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym__whitespace_token1,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1450] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1466] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(159), 1,
      sym_argument,
    STATE(64), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1490] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(255), 1,
      sym_text_chunk,
    STATE(187), 1,
      sym_argument,
    STATE(70), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym__whitespace_token1,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1530] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(285), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(58), 1,
      sym_test_case_definition_body,
    STATE(14), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1569] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_,
    ACTIONS(293), 1,
      sym_text_chunk,
    ACTIONS(296), 2,
      sym__separator,
      sym__line_break,
    STATE(60), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1590] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(298), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(54), 1,
      sym_keyword_definition_body,
    STATE(15), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(231), 1,
      sym__line_break,
    ACTIONS(300), 1,
      sym__separator,
    STATE(37), 1,
      sym__indentation,
    STATE(188), 1,
      sym_block,
    STATE(72), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(231), 1,
      sym__line_break,
    ACTIONS(300), 1,
      sym__separator,
    STATE(37), 1,
      sym__indentation,
    STATE(192), 1,
      sym_block,
    STATE(72), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1659] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(304), 1,
      sym_text_chunk,
    ACTIONS(306), 2,
      sym__separator,
      sym__line_break,
    STATE(68), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1680] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(314), 1,
      sym_text_chunk,
    ACTIONS(296), 2,
      aux_sym__whitespace_token1,
      sym__line_break,
    STATE(65), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1701] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      sym_text_chunk,
    ACTIONS(306), 2,
      aux_sym__whitespace_token1,
      sym__line_break,
    STATE(67), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1722] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(321), 1,
      sym_text_chunk,
    ACTIONS(323), 2,
      aux_sym__whitespace_token1,
      sym__line_break,
    STATE(65), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1743] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(302), 1,
      anon_sym_,
    ACTIONS(325), 1,
      sym_text_chunk,
    ACTIONS(323), 2,
      sym__separator,
      sym__line_break,
    STATE(60), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1764] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__line_break,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      anon_sym_,
    ACTIONS(333), 1,
      sym_text_chunk,
    STATE(69), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1784] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      sym__line_break,
    ACTIONS(336), 1,
      anon_sym_,
    ACTIONS(338), 1,
      sym_text_chunk,
    STATE(71), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1804] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(323), 1,
      sym__line_break,
    ACTIONS(336), 1,
      anon_sym_,
    ACTIONS(340), 1,
      sym_text_chunk,
    STATE(69), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1824] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(342), 1,
      sym__separator,
    ACTIONS(345), 1,
      sym__line_break,
    STATE(37), 1,
      sym__indentation,
    STATE(73), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__separator,
    ACTIONS(350), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      sym__line_break,
    STATE(37), 1,
      sym__indentation,
    STATE(73), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1864] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(358), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1877] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(362), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(366), 1,
      sym__line_break,
    STATE(118), 1,
      aux_sym_arguments_repeat1,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1907] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(362), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1920] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(358), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1933] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(371), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1957] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(296), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1970] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(379), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1983] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(383), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [1996] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__separator,
    STATE(87), 1,
      aux_sym_if_statement_repeat1,
    STATE(117), 1,
      sym__indentation,
    STATE(160), 1,
      sym_else_statement,
    STATE(225), 1,
      sym_elseif_statement,
  [2015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__separator,
    STATE(103), 1,
      aux_sym_if_statement_repeat1,
    STATE(124), 1,
      sym__indentation,
    STATE(166), 1,
      sym_else_statement,
    STATE(225), 1,
      sym_elseif_statement,
  [2034] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(391), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2047] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__separator,
    STATE(103), 1,
      aux_sym_if_statement_repeat1,
    STATE(123), 1,
      sym__indentation,
    STATE(172), 1,
      sym_else_statement,
    STATE(225), 1,
      sym_elseif_statement,
  [2066] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(371), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2079] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(379), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2092] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(383), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2105] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(397), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2118] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(391), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(399), 1,
      sym__line_break,
    STATE(76), 1,
      aux_sym_arguments_repeat1,
    STATE(129), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2148] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(404), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2161] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(397), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2174] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(404), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2187] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(408), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2200] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(408), 3,
      anon_sym_,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2213] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(296), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym__separator,
    ACTIONS(414), 1,
      sym__line_break,
    ACTIONS(410), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2240] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(404), 2,
      anon_sym_,
      sym__line_break,
  [2252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__separator,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    ACTIONS(420), 1,
      sym__line_break,
    STATE(213), 1,
      sym__whitespace,
  [2268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym__separator,
    STATE(103), 1,
      aux_sym_if_statement_repeat1,
    STATE(183), 1,
      sym__indentation,
    STATE(225), 1,
      sym_elseif_statement,
  [2284] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(397), 2,
      anon_sym_,
      sym__line_break,
  [2296] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(408), 2,
      anon_sym_,
      sym__line_break,
  [2308] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(375), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2320] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(391), 2,
      anon_sym_,
      sym__line_break,
  [2332] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(383), 2,
      anon_sym_,
      sym__line_break,
  [2344] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(362), 2,
      anon_sym_,
      sym__line_break,
  [2356] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(358), 2,
      anon_sym_,
      sym__line_break,
  [2368] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(371), 2,
      anon_sym_,
      sym__line_break,
  [2380] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(379), 2,
      anon_sym_,
      sym__line_break,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [2403] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(425), 1,
      sym_text_chunk,
    STATE(81), 1,
      sym_scalar_variable,
  [2416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(115), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__line_break,
    STATE(115), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_ELSE,
    ACTIONS(433), 1,
      anon_sym_END,
    ACTIONS(435), 1,
      anon_sym_ELSEIF,
  [2451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__separator,
    ACTIONS(440), 1,
      sym__line_break,
    STATE(118), 1,
      aux_sym_arguments_repeat1,
  [2464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym__separator,
    ACTIONS(442), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__line_break,
    ACTIONS(446), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [2486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(450), 1,
      sym__line_break,
    STATE(118), 1,
      aux_sym_arguments_repeat1,
  [2499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(452), 1,
      sym__line_break,
    STATE(121), 1,
      aux_sym_arguments_repeat1,
  [2512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_ELSE,
    ACTIONS(435), 1,
      anon_sym_ELSEIF,
    ACTIONS(454), 1,
      anon_sym_END,
  [2525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_ELSE,
    ACTIONS(435), 1,
      anon_sym_ELSEIF,
    ACTIONS(456), 1,
      anon_sym_END,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(458), 1,
      sym__line_break,
    STATE(118), 1,
      aux_sym_arguments_repeat1,
  [2551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(458), 1,
      sym__line_break,
    STATE(130), 1,
      aux_sym_arguments_repeat1,
  [2564] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(460), 1,
      sym_text_chunk,
    STATE(106), 1,
      sym_scalar_variable,
  [2577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(462), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
  [2590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__line_break,
    STATE(115), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(464), 1,
      sym__line_break,
    STATE(118), 1,
      aux_sym_arguments_repeat1,
  [2614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym__whitespace_token1,
    ACTIONS(468), 1,
      sym__line_break,
    STATE(234), 1,
      sym__whitespace,
  [2627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_ellipses,
    ACTIONS(472), 1,
      sym__separator,
    STATE(177), 1,
      sym__indentation,
  [2640] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(474), 1,
      sym_text_chunk,
    STATE(99), 1,
      sym_scalar_variable,
  [2653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_,
  [2663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__separator,
    ACTIONS(482), 1,
      sym__line_break,
  [2673] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_,
    ACTIONS(486), 1,
      sym_variable_name,
  [2683] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_,
    ACTIONS(490), 1,
      sym_variable_name,
  [2693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
  [2703] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_,
    ACTIONS(498), 1,
      sym_variable_name,
  [2713] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_,
    ACTIONS(502), 1,
      sym_variable_name,
  [2723] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_,
    ACTIONS(506), 1,
      sym_variable_name,
  [2733] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_,
    ACTIONS(510), 1,
      sym_variable_name,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      anon_sym_,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(518), 1,
      anon_sym_,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(522), 1,
      anon_sym_,
  [2773] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_settings_section_token2,
    ACTIONS(526), 1,
      sym__line_break,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__separator,
    ACTIONS(530), 1,
      sym__line_break,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(534), 1,
      anon_sym_,
  [2803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      anon_sym_,
  [2813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      anon_sym_,
  [2823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      anon_sym_,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    ACTIONS(550), 1,
      anon_sym_,
  [2843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(554), 1,
      anon_sym_,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__separator,
    STATE(220), 1,
      sym__indentation,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(560), 1,
      anon_sym_,
  [2873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(564), 1,
      anon_sym_,
  [2883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(568), 1,
      anon_sym_,
  [2893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_,
  [2903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__line_break,
    ACTIONS(574), 1,
      sym__separator,
  [2913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__separator,
    STATE(175), 1,
      sym__indentation,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(580), 1,
      anon_sym_,
  [2933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      anon_sym_,
  [2943] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(586), 1,
      aux_sym_settings_section_token2,
    ACTIONS(588), 1,
      sym__line_break,
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(592), 1,
      anon_sym_,
  [2963] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_settings_section_token2,
    ACTIONS(596), 1,
      sym__line_break,
  [2973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__separator,
    STATE(181), 1,
      sym__indentation,
  [2983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(602), 1,
      anon_sym_,
  [2993] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(604), 1,
      aux_sym_settings_section_token2,
    ACTIONS(606), 1,
      sym__line_break,
  [3003] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_,
    ACTIONS(610), 1,
      sym_variable_name,
  [3013] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_,
    ACTIONS(614), 1,
      sym_variable_name,
  [3023] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_,
    ACTIONS(618), 1,
      sym_variable_name,
  [3033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__separator,
    STATE(185), 1,
      sym__indentation,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__line_break,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_END,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__line_break,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_ellipses,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__line_break,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__line_break,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_END,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__line_break,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_ELSEIF,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__line_break,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_END,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__line_break,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__line_break,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__separator,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__line_break,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__line_break,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__separator,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__line_break,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__line_break,
  [3204] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_variable_name,
  [3211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__separator,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__line_break,
  [3232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__line_break,
  [3239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__line_break,
  [3246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__line_break,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
  [3260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__line_break,
  [3267] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_variable_name,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__separator,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__line_break,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__line_break,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__line_break,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
  [3316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [3323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__line_break,
  [3330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__line_break,
  [3337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__line_break,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__line_break,
  [3351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
  [3358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__line_break,
  [3365] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_variable_name,
  [3372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_END,
  [3379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__line_break,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__line_break,
  [3393] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_variable_name,
  [3400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
  [3407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym__separator,
  [3414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__line_break,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [3442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [3456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__line_break,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__line_break,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__line_break,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__line_break,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__separator,
  [3491] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_variable_name,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym__separator,
  [3512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__separator,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym__line_break,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym__line_break,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym__line_break,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym__line_break,
  [3582] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_variable_name,
  [3589] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_variable_name,
  [3596] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_variable_name,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym__line_break,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__line_break,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__line_break,
  [3624] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_variable_name,
  [3631] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_variable_name,
  [3638] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 270,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 398,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 462,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 629,
  [SMALL_STATE(22)] = 656,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 710,
  [SMALL_STATE(25)] = 735,
  [SMALL_STATE(26)] = 762,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 814,
  [SMALL_STATE(29)] = 839,
  [SMALL_STATE(30)] = 866,
  [SMALL_STATE(31)] = 893,
  [SMALL_STATE(32)] = 920,
  [SMALL_STATE(33)] = 947,
  [SMALL_STATE(34)] = 976,
  [SMALL_STATE(35)] = 1003,
  [SMALL_STATE(36)] = 1035,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1087,
  [SMALL_STATE(39)] = 1114,
  [SMALL_STATE(40)] = 1141,
  [SMALL_STATE(41)] = 1158,
  [SMALL_STATE(42)] = 1185,
  [SMALL_STATE(43)] = 1212,
  [SMALL_STATE(44)] = 1239,
  [SMALL_STATE(45)] = 1266,
  [SMALL_STATE(46)] = 1283,
  [SMALL_STATE(47)] = 1300,
  [SMALL_STATE(48)] = 1327,
  [SMALL_STATE(49)] = 1354,
  [SMALL_STATE(50)] = 1378,
  [SMALL_STATE(51)] = 1394,
  [SMALL_STATE(52)] = 1410,
  [SMALL_STATE(53)] = 1434,
  [SMALL_STATE(54)] = 1450,
  [SMALL_STATE(55)] = 1466,
  [SMALL_STATE(56)] = 1490,
  [SMALL_STATE(57)] = 1514,
  [SMALL_STATE(58)] = 1530,
  [SMALL_STATE(59)] = 1546,
  [SMALL_STATE(60)] = 1569,
  [SMALL_STATE(61)] = 1590,
  [SMALL_STATE(62)] = 1613,
  [SMALL_STATE(63)] = 1636,
  [SMALL_STATE(64)] = 1659,
  [SMALL_STATE(65)] = 1680,
  [SMALL_STATE(66)] = 1701,
  [SMALL_STATE(67)] = 1722,
  [SMALL_STATE(68)] = 1743,
  [SMALL_STATE(69)] = 1764,
  [SMALL_STATE(70)] = 1784,
  [SMALL_STATE(71)] = 1804,
  [SMALL_STATE(72)] = 1824,
  [SMALL_STATE(73)] = 1844,
  [SMALL_STATE(74)] = 1864,
  [SMALL_STATE(75)] = 1877,
  [SMALL_STATE(76)] = 1890,
  [SMALL_STATE(77)] = 1907,
  [SMALL_STATE(78)] = 1920,
  [SMALL_STATE(79)] = 1933,
  [SMALL_STATE(80)] = 1946,
  [SMALL_STATE(81)] = 1957,
  [SMALL_STATE(82)] = 1970,
  [SMALL_STATE(83)] = 1983,
  [SMALL_STATE(84)] = 1996,
  [SMALL_STATE(85)] = 2015,
  [SMALL_STATE(86)] = 2034,
  [SMALL_STATE(87)] = 2047,
  [SMALL_STATE(88)] = 2066,
  [SMALL_STATE(89)] = 2079,
  [SMALL_STATE(90)] = 2092,
  [SMALL_STATE(91)] = 2105,
  [SMALL_STATE(92)] = 2118,
  [SMALL_STATE(93)] = 2131,
  [SMALL_STATE(94)] = 2148,
  [SMALL_STATE(95)] = 2161,
  [SMALL_STATE(96)] = 2174,
  [SMALL_STATE(97)] = 2187,
  [SMALL_STATE(98)] = 2200,
  [SMALL_STATE(99)] = 2213,
  [SMALL_STATE(100)] = 2226,
  [SMALL_STATE(101)] = 2240,
  [SMALL_STATE(102)] = 2252,
  [SMALL_STATE(103)] = 2268,
  [SMALL_STATE(104)] = 2284,
  [SMALL_STATE(105)] = 2296,
  [SMALL_STATE(106)] = 2308,
  [SMALL_STATE(107)] = 2320,
  [SMALL_STATE(108)] = 2332,
  [SMALL_STATE(109)] = 2344,
  [SMALL_STATE(110)] = 2356,
  [SMALL_STATE(111)] = 2368,
  [SMALL_STATE(112)] = 2380,
  [SMALL_STATE(113)] = 2392,
  [SMALL_STATE(114)] = 2403,
  [SMALL_STATE(115)] = 2416,
  [SMALL_STATE(116)] = 2427,
  [SMALL_STATE(117)] = 2438,
  [SMALL_STATE(118)] = 2451,
  [SMALL_STATE(119)] = 2464,
  [SMALL_STATE(120)] = 2475,
  [SMALL_STATE(121)] = 2486,
  [SMALL_STATE(122)] = 2499,
  [SMALL_STATE(123)] = 2512,
  [SMALL_STATE(124)] = 2525,
  [SMALL_STATE(125)] = 2538,
  [SMALL_STATE(126)] = 2551,
  [SMALL_STATE(127)] = 2564,
  [SMALL_STATE(128)] = 2577,
  [SMALL_STATE(129)] = 2590,
  [SMALL_STATE(130)] = 2601,
  [SMALL_STATE(131)] = 2614,
  [SMALL_STATE(132)] = 2627,
  [SMALL_STATE(133)] = 2640,
  [SMALL_STATE(134)] = 2653,
  [SMALL_STATE(135)] = 2663,
  [SMALL_STATE(136)] = 2673,
  [SMALL_STATE(137)] = 2683,
  [SMALL_STATE(138)] = 2693,
  [SMALL_STATE(139)] = 2703,
  [SMALL_STATE(140)] = 2713,
  [SMALL_STATE(141)] = 2723,
  [SMALL_STATE(142)] = 2733,
  [SMALL_STATE(143)] = 2743,
  [SMALL_STATE(144)] = 2753,
  [SMALL_STATE(145)] = 2763,
  [SMALL_STATE(146)] = 2773,
  [SMALL_STATE(147)] = 2783,
  [SMALL_STATE(148)] = 2793,
  [SMALL_STATE(149)] = 2803,
  [SMALL_STATE(150)] = 2813,
  [SMALL_STATE(151)] = 2823,
  [SMALL_STATE(152)] = 2833,
  [SMALL_STATE(153)] = 2843,
  [SMALL_STATE(154)] = 2853,
  [SMALL_STATE(155)] = 2863,
  [SMALL_STATE(156)] = 2873,
  [SMALL_STATE(157)] = 2883,
  [SMALL_STATE(158)] = 2893,
  [SMALL_STATE(159)] = 2903,
  [SMALL_STATE(160)] = 2913,
  [SMALL_STATE(161)] = 2923,
  [SMALL_STATE(162)] = 2933,
  [SMALL_STATE(163)] = 2943,
  [SMALL_STATE(164)] = 2953,
  [SMALL_STATE(165)] = 2963,
  [SMALL_STATE(166)] = 2973,
  [SMALL_STATE(167)] = 2983,
  [SMALL_STATE(168)] = 2993,
  [SMALL_STATE(169)] = 3003,
  [SMALL_STATE(170)] = 3013,
  [SMALL_STATE(171)] = 3023,
  [SMALL_STATE(172)] = 3033,
  [SMALL_STATE(173)] = 3043,
  [SMALL_STATE(174)] = 3050,
  [SMALL_STATE(175)] = 3057,
  [SMALL_STATE(176)] = 3064,
  [SMALL_STATE(177)] = 3071,
  [SMALL_STATE(178)] = 3078,
  [SMALL_STATE(179)] = 3085,
  [SMALL_STATE(180)] = 3092,
  [SMALL_STATE(181)] = 3099,
  [SMALL_STATE(182)] = 3106,
  [SMALL_STATE(183)] = 3113,
  [SMALL_STATE(184)] = 3120,
  [SMALL_STATE(185)] = 3127,
  [SMALL_STATE(186)] = 3134,
  [SMALL_STATE(187)] = 3141,
  [SMALL_STATE(188)] = 3148,
  [SMALL_STATE(189)] = 3155,
  [SMALL_STATE(190)] = 3162,
  [SMALL_STATE(191)] = 3169,
  [SMALL_STATE(192)] = 3176,
  [SMALL_STATE(193)] = 3183,
  [SMALL_STATE(194)] = 3190,
  [SMALL_STATE(195)] = 3197,
  [SMALL_STATE(196)] = 3204,
  [SMALL_STATE(197)] = 3211,
  [SMALL_STATE(198)] = 3218,
  [SMALL_STATE(199)] = 3225,
  [SMALL_STATE(200)] = 3232,
  [SMALL_STATE(201)] = 3239,
  [SMALL_STATE(202)] = 3246,
  [SMALL_STATE(203)] = 3253,
  [SMALL_STATE(204)] = 3260,
  [SMALL_STATE(205)] = 3267,
  [SMALL_STATE(206)] = 3274,
  [SMALL_STATE(207)] = 3281,
  [SMALL_STATE(208)] = 3288,
  [SMALL_STATE(209)] = 3295,
  [SMALL_STATE(210)] = 3302,
  [SMALL_STATE(211)] = 3309,
  [SMALL_STATE(212)] = 3316,
  [SMALL_STATE(213)] = 3323,
  [SMALL_STATE(214)] = 3330,
  [SMALL_STATE(215)] = 3337,
  [SMALL_STATE(216)] = 3344,
  [SMALL_STATE(217)] = 3351,
  [SMALL_STATE(218)] = 3358,
  [SMALL_STATE(219)] = 3365,
  [SMALL_STATE(220)] = 3372,
  [SMALL_STATE(221)] = 3379,
  [SMALL_STATE(222)] = 3386,
  [SMALL_STATE(223)] = 3393,
  [SMALL_STATE(224)] = 3400,
  [SMALL_STATE(225)] = 3407,
  [SMALL_STATE(226)] = 3414,
  [SMALL_STATE(227)] = 3421,
  [SMALL_STATE(228)] = 3428,
  [SMALL_STATE(229)] = 3435,
  [SMALL_STATE(230)] = 3442,
  [SMALL_STATE(231)] = 3449,
  [SMALL_STATE(232)] = 3456,
  [SMALL_STATE(233)] = 3463,
  [SMALL_STATE(234)] = 3470,
  [SMALL_STATE(235)] = 3477,
  [SMALL_STATE(236)] = 3484,
  [SMALL_STATE(237)] = 3491,
  [SMALL_STATE(238)] = 3498,
  [SMALL_STATE(239)] = 3505,
  [SMALL_STATE(240)] = 3512,
  [SMALL_STATE(241)] = 3519,
  [SMALL_STATE(242)] = 3526,
  [SMALL_STATE(243)] = 3533,
  [SMALL_STATE(244)] = 3540,
  [SMALL_STATE(245)] = 3547,
  [SMALL_STATE(246)] = 3554,
  [SMALL_STATE(247)] = 3561,
  [SMALL_STATE(248)] = 3568,
  [SMALL_STATE(249)] = 3575,
  [SMALL_STATE(250)] = 3582,
  [SMALL_STATE(251)] = 3589,
  [SMALL_STATE(252)] = 3596,
  [SMALL_STATE(253)] = 3603,
  [SMALL_STATE(254)] = 3610,
  [SMALL_STATE(255)] = 3617,
  [SMALL_STATE(256)] = 3624,
  [SMALL_STATE(257)] = 3631,
  [SMALL_STATE(258)] = 3638,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(198),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(173),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(232),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(232),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(12),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(135),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(218),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(21),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(195),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(218),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(25),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(196),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(173),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(28),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(171),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(133),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(60),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(142),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(114),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(65),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(139),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(127),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(69),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(37),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(246),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(132),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(132),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(183),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(132),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(132),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(55),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 8),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 11),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 12),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 14),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 15),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [678] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5, .production_id = 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4, .production_id = 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
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
