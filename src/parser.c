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
#define STATE_COUNT 313
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 3
#define TOKEN_COUNT 53
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
  anon_sym_TRY = 41,
  anon_sym_EXCEPT = 42,
  sym_ellipses = 43,
  anon_sym_ = 44,
  anon_sym_AT_LBRACE = 45,
  anon_sym_AMP_LBRACE = 46,
  sym_variable_name = 47,
  sym_text_chunk = 48,
  sym_comment = 49,
  sym__separator = 50,
  aux_sym__whitespace_token1 = 51,
  sym__line_break = 52,
  sym_source_file = 53,
  sym_section = 54,
  sym_settings_section = 55,
  sym_setting_statement = 56,
  sym_variables_section = 57,
  sym_variable_definition = 58,
  sym_keywords_section = 59,
  sym_keyword_definition = 60,
  sym_keyword_definition_body = 61,
  sym_keyword_setting = 62,
  sym_test_cases_section = 63,
  sym_test_case_definition = 64,
  sym_test_case_definition_body = 65,
  sym_test_case_setting = 66,
  sym_statement = 67,
  sym_return_statement = 68,
  sym_variable_assignment = 69,
  sym_keyword_invocation = 70,
  sym_if_statement = 71,
  sym_elseif_statement = 72,
  sym_else_statement = 73,
  sym_inline_if_statement = 74,
  sym_block = 75,
  sym_inline_elseif_statement = 76,
  sym_inline_else_statement = 77,
  sym_inline_statement = 78,
  sym_try_statement = 79,
  sym_except_statement = 80,
  sym_arguments = 81,
  sym_arguments_without_continuation = 82,
  sym_continuation = 83,
  sym_argument = 84,
  sym_scalar_variable = 85,
  sym_list_variable = 86,
  sym_dictionary_variable = 87,
  sym__indentation = 88,
  sym__empty_line = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_settings_section_repeat1 = 91,
  aux_sym_variables_section_repeat1 = 92,
  aux_sym_keywords_section_repeat1 = 93,
  aux_sym_keyword_definition_body_repeat1 = 94,
  aux_sym_test_cases_section_repeat1 = 95,
  aux_sym_test_case_definition_body_repeat1 = 96,
  aux_sym_if_statement_repeat1 = 97,
  aux_sym_inline_if_statement_repeat1 = 98,
  aux_sym_block_repeat1 = 99,
  aux_sym_try_statement_repeat1 = 100,
  aux_sym_arguments_repeat1 = 101,
  aux_sym_arguments_repeat2 = 102,
  aux_sym_argument_repeat1 = 103,
  alias_sym_keyword = 104,
  alias_sym_name = 105,
  alias_sym_return_value = 106,
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
  [anon_sym_TRY] = "TRY",
  [anon_sym_EXCEPT] = "EXCEPT",
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
  [sym_inline_if_statement] = "inline_if_statement",
  [sym_block] = "block",
  [sym_inline_elseif_statement] = "inline_elseif_statement",
  [sym_inline_else_statement] = "inline_else_statement",
  [sym_inline_statement] = "inline_statement",
  [sym_try_statement] = "try_statement",
  [sym_except_statement] = "except_statement",
  [sym_arguments] = "arguments",
  [sym_arguments_without_continuation] = "arguments",
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
  [aux_sym_inline_if_statement_repeat1] = "inline_if_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
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
  [anon_sym_TRY] = anon_sym_TRY,
  [anon_sym_EXCEPT] = anon_sym_EXCEPT,
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
  [sym_inline_if_statement] = sym_inline_if_statement,
  [sym_block] = sym_block,
  [sym_inline_elseif_statement] = sym_inline_elseif_statement,
  [sym_inline_else_statement] = sym_inline_else_statement,
  [sym_inline_statement] = sym_inline_statement,
  [sym_try_statement] = sym_try_statement,
  [sym_except_statement] = sym_except_statement,
  [sym_arguments] = sym_arguments,
  [sym_arguments_without_continuation] = sym_arguments,
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
  [aux_sym_inline_if_statement_repeat1] = aux_sym_inline_if_statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_try_statement_repeat1] = aux_sym_try_statement_repeat1,
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
  [anon_sym_TRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXCEPT] = {
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
  [sym_inline_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_try_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_except_statement] = {
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
  [aux_sym_inline_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_try_statement_repeat1] = {
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
  [38] = 7,
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
  [52] = 47,
  [53] = 39,
  [54] = 49,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 56,
  [62] = 7,
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
  [78] = 78,
  [79] = 79,
  [80] = 69,
  [81] = 68,
  [82] = 70,
  [83] = 68,
  [84] = 84,
  [85] = 69,
  [86] = 70,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 90,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 89,
  [105] = 93,
  [106] = 92,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 87,
  [115] = 97,
  [116] = 116,
  [117] = 96,
  [118] = 95,
  [119] = 98,
  [120] = 100,
  [121] = 88,
  [122] = 91,
  [123] = 93,
  [124] = 100,
  [125] = 98,
  [126] = 91,
  [127] = 88,
  [128] = 95,
  [129] = 129,
  [130] = 92,
  [131] = 129,
  [132] = 87,
  [133] = 133,
  [134] = 96,
  [135] = 97,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 138,
  [143] = 140,
  [144] = 144,
  [145] = 108,
  [146] = 109,
  [147] = 147,
  [148] = 144,
  [149] = 7,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 110,
  [155] = 137,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 156,
  [162] = 162,
  [163] = 137,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 167,
  [175] = 175,
  [176] = 176,
  [177] = 169,
  [178] = 173,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 172,
  [186] = 186,
  [187] = 176,
  [188] = 182,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 184,
  [194] = 180,
  [195] = 183,
  [196] = 184,
  [197] = 197,
  [198] = 198,
  [199] = 183,
  [200] = 180,
  [201] = 172,
  [202] = 176,
  [203] = 182,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 166,
  [212] = 212,
  [213] = 173,
  [214] = 198,
  [215] = 215,
  [216] = 216,
  [217] = 208,
  [218] = 167,
  [219] = 169,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
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
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 234,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 266,
  [273] = 273,
  [274] = 260,
  [275] = 258,
  [276] = 270,
  [277] = 277,
  [278] = 256,
  [279] = 279,
  [280] = 255,
  [281] = 254,
  [282] = 252,
  [283] = 283,
  [284] = 284,
  [285] = 234,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 270,
  [292] = 292,
  [293] = 266,
  [294] = 294,
  [295] = 260,
  [296] = 255,
  [297] = 254,
  [298] = 252,
  [299] = 234,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 269,
  [304] = 302,
  [305] = 305,
  [306] = 232,
  [307] = 307,
  [308] = 305,
  [309] = 309,
  [310] = 269,
  [311] = 302,
  [312] = 305,
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
      if (eof) ADVANCE(334);
      if (lookahead == '\t') ADVANCE(659);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '&') ADVANCE(113);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '@') ADVANCE(115);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(659);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(662);
      if (lookahead == '#') ADVANCE(657);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(659);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '=') ADVANCE(365);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '=') ADVANCE(366);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(661);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '=') ADVANCE(366);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '}') ADVANCE(364);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(658);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '&') ADVANCE(114);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(660);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(661);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(365);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(421);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == ']') ADVANCE(373);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(390);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(379);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(385);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ']') ADVANCE(382);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ']') ADVANCE(393);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ']') ADVANCE(376);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(370);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == '[') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == '[') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(421);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(367);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(337);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(360);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(388);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(537);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(538);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(539);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(410);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(400);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(398);
      END_STATE();
    case 74:
      if (lookahead == 'F') ADVANCE(402);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'X') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(396);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(408);
      END_STATE();
    case 85:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'Y') ADVANCE(406);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(373);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(390);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(379);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(385);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(382);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(393);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(376);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(370);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(375);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(392);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(387);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(384);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(395);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(372);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(381);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == '{') ADVANCE(363);
      END_STATE();
    case 112:
      if (lookahead == '{') ADVANCE(363);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(418);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(418);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 115:
      if (lookahead == '{') ADVANCE(417);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(417);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 117:
      if (lookahead == '{') ADVANCE(455);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(553);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(543);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 148:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(209);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 159:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 160:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 191:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 192:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 193:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 194:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 195:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 196:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 204:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 205:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 212:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 213:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 214:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 216:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 217:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 232:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 233:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 234:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 242:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 243:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 244:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 245:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 246:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 247:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(282);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(308);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 305:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 306:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 307:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 308:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 319:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(218);
      END_STATE();
    case 320:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      END_STATE();
    case 321:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 322:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(235);
      END_STATE();
    case 323:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 324:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 325:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 326:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(623);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 327:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 328:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(455);
      END_STATE();
    case 329:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(543);
      END_STATE();
    case 330:
      if (eof) ADVANCE(334);
      if (lookahead == '\t') ADVANCE(658);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(663);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 331:
      if (eof) ADVANCE(334);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '$') ADVANCE(111);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(229);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 332:
      if (eof) ADVANCE(334);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 333:
      if (eof) ADVANCE(334);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '#') ADVANCE(657);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(661);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(657);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(653);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(651);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(651);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(651);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(654);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(652);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(654);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(652);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ' ') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(652);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(429);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(399);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(437);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(437);
      if (lookahead == 'X') ADVANCE(436);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'Y') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(531);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(531);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(531);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(531);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(531);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(531);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(531);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(531);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(531);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(531);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(531);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(531);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(531);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(531);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(531);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(531);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(531);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(531);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(531);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(531);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(531);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(531);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(531);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(531);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(531);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(531);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(531);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(123);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(623);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(623);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(623);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(623);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(623);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(623);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(623);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(623);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(623);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(623);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(623);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(623);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(623);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(623);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(623);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(623);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(623);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(623);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(623);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(623);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(623);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(623);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(623);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(623);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(623);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(623);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(623);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(623);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(623);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(623);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(121);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(531);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(465);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ']') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == ']') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ']') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == ']') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == ']') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == ']') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == ']') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(117);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(455);
      if (lookahead == '{') ADVANCE(657);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == '{') ADVANCE(657);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(652);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(652);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(657);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(657);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(661);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(665);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '#') ADVANCE(657);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(665);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(657);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 333},
  [2] = {.lex_state = 331},
  [3] = {.lex_state = 331},
  [4] = {.lex_state = 331},
  [5] = {.lex_state = 331},
  [6] = {.lex_state = 331},
  [7] = {.lex_state = 331},
  [8] = {.lex_state = 331},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 330},
  [14] = {.lex_state = 330},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 330},
  [17] = {.lex_state = 330},
  [18] = {.lex_state = 331},
  [19] = {.lex_state = 331},
  [20] = {.lex_state = 331},
  [21] = {.lex_state = 332},
  [22] = {.lex_state = 332},
  [23] = {.lex_state = 332},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 332},
  [26] = {.lex_state = 331},
  [27] = {.lex_state = 332},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 332},
  [30] = {.lex_state = 332},
  [31] = {.lex_state = 332},
  [32] = {.lex_state = 332},
  [33] = {.lex_state = 332},
  [34] = {.lex_state = 331},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 330},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 330},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 330},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 331},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 332},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 332},
  [60] = {.lex_state = 332},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 332},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 331},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 43},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 44},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 44},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 8},
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
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 44},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 44},
  [303] = {.lex_state = 44},
  [304] = {.lex_state = 44},
  [305] = {.lex_state = 44},
  [306] = {.lex_state = 44},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 44},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 44},
  [311] = {.lex_state = 44},
  [312] = {.lex_state = 44},
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
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_EXCEPT] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(253),
    [sym_section] = STATE(36),
    [sym_settings_section] = STATE(103),
    [sym_variables_section] = STATE(103),
    [sym_keywords_section] = STATE(103),
    [sym_test_cases_section] = STATE(103),
    [aux_sym_source_file_repeat1] = STATE(36),
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(23), 1,
      sym__line_break,
    STATE(3), 3,
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
    ACTIONS(30), 1,
      aux_sym__whitespace_token1,
    ACTIONS(33), 1,
      sym__line_break,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(27), 17,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(23), 1,
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
  [123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(40), 1,
      sym__line_break,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(38), 5,
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
  [164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(4), 3,
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
  [270] = 9,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      sym_text_chunk,
    ACTIONS(64), 1,
      sym_comment,
    STATE(289), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(243), 6,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
  [309] = 9,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      sym_text_chunk,
    ACTIONS(64), 1,
      sym_comment,
    STATE(240), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(66), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(243), 6,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
  [348] = 11,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      sym_text_chunk,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_END,
    ACTIONS(70), 1,
      anon_sym_ELSEIF,
    ACTIONS(72), 1,
      anon_sym_ELSE,
    STATE(237), 1,
      sym_statement,
    STATE(243), 6,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
  [387] = 10,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      sym_text_chunk,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_END,
    ACTIONS(76), 1,
      anon_sym_EXCEPT,
    STATE(237), 1,
      sym_statement,
    STATE(243), 6,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
  [423] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym__separator,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    ACTIONS(86), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(80), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [453] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym__separator,
    ACTIONS(94), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(90), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [483] = 8,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      sym_text_chunk,
    ACTIONS(64), 1,
      sym_comment,
    STATE(237), 1,
      sym_statement,
    STATE(243), 6,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
  [513] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__separator,
    ACTIONS(103), 1,
      aux_sym__whitespace_token1,
    ACTIONS(106), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(98), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [543] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__separator,
    ACTIONS(116), 1,
      aux_sym__whitespace_token1,
    ACTIONS(119), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(111), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(126), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(126), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(132), 1,
      sym__line_break,
    STATE(18), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [648] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [675] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(151), 1,
      aux_sym__whitespace_token1,
    ACTIONS(154), 1,
      sym__line_break,
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(146), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [702] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym_text_chunk,
    ACTIONS(163), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(159), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [729] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      aux_sym_settings_section_token1,
    ACTIONS(170), 1,
      aux_sym_variables_section_token1,
    ACTIONS(173), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(176), 1,
      aux_sym_test_cases_section_token1,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(103), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [758] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym_text_chunk,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym__line_break,
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(181), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(185), 1,
      sym__line_break,
    STATE(19), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [810] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(189), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [837] = 8,
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
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(103), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [866] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(189), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [893] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym_text_chunk,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(25), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [920] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym_text_chunk,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(205), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [947] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym_text_chunk,
    ACTIONS(183), 1,
      sym__line_break,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [974] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(218), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(225), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1026] = 8,
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
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(103), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1055] = 8,
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
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(103), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1084] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__separator,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(237), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(101), 1,
      sym_block,
    STATE(102), 1,
      aux_sym_if_statement_repeat1,
    STATE(170), 1,
      sym_else_statement,
    STATE(309), 1,
      sym_elseif_statement,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1116] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
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
  [1133] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(165), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1160] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(262), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1187] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(237), 1,
      sym__line_break,
    ACTIONS(247), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(133), 1,
      sym_block,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(136), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1214] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(257), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1241] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1258] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(251), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1285] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(151), 1,
      sym_argument,
    STATE(263), 1,
      sym_arguments_without_continuation,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1312] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(250), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1339] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(210), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1366] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1383] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(179), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1410] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(241), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1437] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(104), 1,
      sym_argument,
    STATE(287), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1464] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(89), 1,
      sym_argument,
    STATE(210), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1491] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(89), 1,
      sym_argument,
    STATE(165), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1518] = 8,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(89), 1,
      sym_argument,
    STATE(179), 1,
      sym_arguments,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__whitespace_token1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1561] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(206), 1,
      sym_argument,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1585] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1601] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(242), 1,
      sym_argument,
    STATE(85), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1625] = 3,
    ACTIONS(64), 1,
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
  [1641] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1657] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(206), 1,
      sym_argument,
    STATE(85), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1681] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1697] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(209), 1,
      sym_argument,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1721] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(243), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(245), 1,
      sym_text_chunk,
    STATE(205), 1,
      sym_argument,
    STATE(69), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1761] = 7,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(289), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(224), 1,
      sym_argument,
    STATE(80), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1785] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_text_chunk,
    ACTIONS(64), 1,
      sym_comment,
    STATE(225), 1,
      sym_inline_statement,
    STATE(168), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1806] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(296), 1,
      anon_sym_,
    ACTIONS(299), 1,
      sym_text_chunk,
    ACTIONS(302), 2,
      sym__separator,
      sym__line_break,
    STATE(68), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1827] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(306), 1,
      sym_text_chunk,
    ACTIONS(308), 2,
      sym__separator,
      sym__line_break,
    STATE(70), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1848] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(310), 1,
      sym_text_chunk,
    ACTIONS(312), 2,
      sym__separator,
      sym__line_break,
    STATE(68), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(237), 1,
      sym__line_break,
    ACTIONS(314), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(267), 1,
      sym_block,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1892] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(237), 1,
      sym__line_break,
    ACTIONS(314), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(227), 1,
      sym_block,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1915] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(318), 1,
      anon_sym_RETURN,
    ACTIONS(320), 1,
      sym_text_chunk,
    STATE(212), 1,
      sym_inline_statement,
    STATE(168), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1936] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    ACTIONS(92), 1,
      sym__separator,
    ACTIONS(322), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(59), 1,
      sym_test_case_definition_body,
    STATE(14), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1959] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(318), 1,
      anon_sym_RETURN,
    ACTIONS(320), 1,
      sym_text_chunk,
    STATE(159), 1,
      sym_inline_statement,
    STATE(168), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1980] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__separator,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    ACTIONS(324), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(60), 1,
      sym_keyword_definition_body,
    STATE(13), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2003] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(237), 1,
      sym__line_break,
    ACTIONS(326), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(286), 1,
      sym_block,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2026] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(237), 1,
      sym__line_break,
    ACTIONS(329), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(223), 1,
      sym_block,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2049] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__separator,
    ACTIONS(335), 1,
      aux_sym__whitespace_token1,
    ACTIONS(338), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(79), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2069] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      sym__separator,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(343), 1,
      sym_text_chunk,
    STATE(82), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2089] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__separator,
    ACTIONS(345), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(348), 1,
      anon_sym_,
    ACTIONS(351), 1,
      sym_text_chunk,
    STATE(81), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2109] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      sym__separator,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(354), 1,
      sym_text_chunk,
    STATE(81), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2129] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__line_break,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(359), 1,
      anon_sym_,
    ACTIONS(362), 1,
      sym_text_chunk,
    STATE(83), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2149] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__whitespace_token1,
    ACTIONS(365), 1,
      sym__separator,
    ACTIONS(368), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(79), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2169] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      sym__line_break,
    ACTIONS(370), 1,
      anon_sym_,
    ACTIONS(372), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2189] = 6,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      sym__line_break,
    ACTIONS(370), 1,
      anon_sym_,
    ACTIONS(374), 1,
      sym_text_chunk,
    STATE(83), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2209] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(378), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2222] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(382), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(387), 1,
      sym__line_break,
    STATE(90), 1,
      aux_sym_arguments_repeat1,
    STATE(110), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__separator,
    ACTIONS(393), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
    STATE(109), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2269] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(398), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2282] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(402), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2295] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(406), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym__separator,
    STATE(111), 1,
      aux_sym_if_statement_repeat1,
    STATE(162), 1,
      sym__indentation,
    STATE(197), 1,
      sym_else_statement,
    STATE(309), 1,
      sym_elseif_statement,
  [2327] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(412), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2340] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(416), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2353] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(420), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2366] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(428), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
    STATE(146), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2396] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(302), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2409] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__separator,
    STATE(94), 1,
      aux_sym_if_statement_repeat1,
    STATE(153), 1,
      sym__indentation,
    STATE(181), 1,
      sym_else_statement,
    STATE(309), 1,
      sym_elseif_statement,
  [2428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__separator,
    STATE(111), 1,
      aux_sym_if_statement_repeat1,
    STATE(158), 1,
      sym__indentation,
    STATE(186), 1,
      sym_else_statement,
    STATE(309), 1,
      sym_elseif_statement,
  [2447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(99), 1,
      aux_sym_arguments_repeat1,
    STATE(154), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2475] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(406), 2,
      anon_sym_,
      sym__line_break,
  [2487] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(402), 2,
      anon_sym_,
      sym__line_break,
  [2499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_ELSEIF,
    ACTIONS(444), 1,
      anon_sym_ELSE,
    STATE(192), 1,
      sym_inline_elseif_statement,
    STATE(279), 1,
      sym_inline_else_statement,
  [2515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__separator,
    ACTIONS(448), 1,
      sym__line_break,
    STATE(108), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__separator,
    ACTIONS(453), 1,
      sym__line_break,
    STATE(108), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__line_break,
    ACTIONS(456), 1,
      sym__separator,
    STATE(108), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__separator,
    STATE(111), 1,
      aux_sym_if_statement_repeat1,
    STATE(264), 1,
      sym__indentation,
    STATE(309), 1,
      sym_elseif_statement,
  [2573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__separator,
    STATE(301), 1,
      sym__indentation,
    STATE(112), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym__separator,
    STATE(175), 1,
      sym__indentation,
    STATE(112), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2601] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(378), 2,
      anon_sym_,
      sym__separator,
  [2613] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(420), 2,
      anon_sym_,
      sym__separator,
  [2625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_ELSEIF,
    ACTIONS(444), 1,
      anon_sym_ELSE,
    STATE(192), 1,
      sym_inline_elseif_statement,
    STATE(259), 1,
      sym_inline_else_statement,
  [2641] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(416), 2,
      anon_sym_,
      sym__separator,
  [2653] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(412), 2,
      anon_sym_,
      sym__line_break,
  [2665] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 2,
      anon_sym_,
      sym__line_break,
  [2677] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2689] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(382), 2,
      anon_sym_,
      sym__separator,
  [2701] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(398), 2,
      anon_sym_,
      sym__separator,
  [2713] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(406), 2,
      anon_sym_,
      sym__separator,
  [2725] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2737] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 2,
      anon_sym_,
      sym__separator,
  [2749] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(398), 2,
      anon_sym_,
      sym__line_break,
  [2761] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(382), 2,
      anon_sym_,
      sym__line_break,
  [2773] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(412), 2,
      anon_sym_,
      sym__separator,
  [2785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym__separator,
    ACTIONS(470), 1,
      sym__line_break,
    ACTIONS(466), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2799] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(402), 2,
      anon_sym_,
      sym__separator,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__line_break,
    ACTIONS(474), 1,
      sym__separator,
    ACTIONS(472), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2825] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(378), 2,
      anon_sym_,
      sym__line_break,
  [2837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__separator,
    STATE(216), 1,
      sym__indentation,
    STATE(113), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2851] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(416), 2,
      anon_sym_,
      sym__line_break,
  [2863] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(420), 2,
      anon_sym_,
      sym__line_break,
  [2875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__separator,
    STATE(216), 1,
      sym__indentation,
    STATE(112), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2889] = 4,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(479), 1,
      sym_text_chunk,
    STATE(100), 1,
      sym_scalar_variable,
  [2902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__separator,
    ACTIONS(484), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [2915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__separator,
    ACTIONS(489), 1,
      sym__line_break,
    STATE(138), 1,
      aux_sym_arguments_repeat1,
  [2928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__separator,
    ACTIONS(489), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [2941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(489), 1,
      sym__line_break,
    STATE(142), 1,
      aux_sym_arguments_repeat1,
  [2954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(484), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [2967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(489), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [2980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [2993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__line_break,
    STATE(145), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(145), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym__separator,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [3028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(143), 1,
      aux_sym_arguments_repeat1,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__separator,
    ACTIONS(507), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(511), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    ACTIONS(516), 1,
      sym__line_break,
    STATE(152), 1,
      aux_sym_inline_if_statement_repeat1,
  [3089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_ELSE,
    ACTIONS(518), 1,
      anon_sym_END,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
  [3102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__line_break,
    STATE(145), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3113] = 4,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(522), 1,
      sym_text_chunk,
    STATE(120), 1,
      sym_scalar_variable,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_ellipses,
    ACTIONS(526), 1,
      sym__separator,
    STATE(258), 1,
      sym__indentation,
  [3139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__separator,
    ACTIONS(528), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_ELSE,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
    ACTIONS(530), 1,
      anon_sym_END,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__separator,
    ACTIONS(534), 1,
      sym__line_break,
    STATE(164), 1,
      aux_sym_inline_if_statement_repeat1,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__line_break,
    ACTIONS(536), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_ellipses,
    ACTIONS(542), 1,
      sym__separator,
    STATE(275), 1,
      sym__indentation,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_ELSE,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
    ACTIONS(544), 1,
      anon_sym_END,
  [3215] = 4,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(546), 1,
      sym_text_chunk,
    STATE(124), 1,
      sym_scalar_variable,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__separator,
    ACTIONS(550), 1,
      sym__line_break,
    STATE(152), 1,
      aux_sym_inline_if_statement_repeat1,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__separator,
    ACTIONS(554), 1,
      sym__line_break,
  [3251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__separator,
    ACTIONS(559), 1,
      sym__line_break,
  [3261] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_,
    ACTIONS(563), 1,
      sym_variable_name,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__separator,
    ACTIONS(567), 1,
      sym__line_break,
  [3281] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_,
    ACTIONS(571), 1,
      sym_variable_name,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__separator,
    STATE(300), 1,
      sym__indentation,
  [3301] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_settings_section_token2,
    ACTIONS(577), 1,
      sym__line_break,
  [3311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(581), 1,
      anon_sym_,
  [3321] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_,
    ACTIONS(585), 1,
      sym_variable_name,
  [3331] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_,
    ACTIONS(589), 1,
      sym_variable_name,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_END,
    ACTIONS(593), 1,
      anon_sym_EXCEPT,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      anon_sym_,
  [3361] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 1,
      sym_variable_name,
  [3371] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 1,
      sym_variable_name,
  [3381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
  [3391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      anon_sym_,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__separator,
    STATE(273), 1,
      sym__indentation,
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 1,
      anon_sym_,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      anon_sym_,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 1,
      anon_sym_,
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      anon_sym_,
  [3451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__separator,
    STATE(221), 1,
      sym__indentation,
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_,
  [3471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      anon_sym_,
  [3481] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(643), 1,
      aux_sym_settings_section_token2,
    ACTIONS(645), 1,
      sym__line_break,
  [3491] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym_settings_section_token2,
    ACTIONS(649), 1,
      sym__line_break,
  [3501] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym_settings_section_token2,
    ACTIONS(653), 1,
      sym__line_break,
  [3511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__line_break,
    ACTIONS(655), 1,
      sym__separator,
  [3521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 1,
      anon_sym_,
  [3531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 1,
      anon_sym_,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(667), 1,
      anon_sym_,
  [3551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      anon_sym_,
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym__separator,
    STATE(245), 1,
      sym__indentation,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__separator,
    ACTIONS(677), 1,
      sym__line_break,
  [3581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(685), 1,
      anon_sym_,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 1,
      anon_sym_,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      anon_sym_,
  [3631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym__separator,
    ACTIONS(701), 1,
      sym__line_break,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__line_break,
    ACTIONS(703), 1,
      sym__separator,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__separator,
    ACTIONS(707), 1,
      sym__line_break,
  [3661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_ELSEIF,
    STATE(192), 1,
      sym_inline_elseif_statement,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__separator,
    ACTIONS(712), 1,
      sym__line_break,
  [3681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__separator,
    ACTIONS(716), 1,
      sym__line_break,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
    ACTIONS(720), 1,
      sym__line_break,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym__line_break,
    ACTIONS(722), 1,
      sym__separator,
  [3711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__separator,
    ACTIONS(726), 1,
      sym__line_break,
  [3721] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      sym_variable_name,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__line_break,
    ACTIONS(732), 1,
      sym__separator,
  [3741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__separator,
    ACTIONS(736), 1,
      sym__line_break,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_EXCEPT,
    ACTIONS(738), 1,
      anon_sym_END,
  [3761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__line_break,
    ACTIONS(740), 1,
      sym__separator,
  [3771] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_,
    ACTIONS(744), 1,
      sym_variable_name,
  [3781] = 3,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_,
    ACTIONS(748), 1,
      sym_variable_name,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym__separator,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_END,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym__line_break,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym__separator,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__separator,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym__line_break,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym__line_break,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__separator,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym__line_break,
  [3861] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym_variable_name,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym__line_break,
  [3875] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_variable_name,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym__separator,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym__line_break,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__separator,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym__line_break,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym__line_break,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__line_break,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__separator,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__line_break,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__line_break,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__line_break,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__line_break,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym__line_break,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_END,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__line_break,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__line_break,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__line_break,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__line_break,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__line_break,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__line_break,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      ts_builtin_sym_end,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__line_break,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_ellipses,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__line_break,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__line_break,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__line_break,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__line_break,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__line_break,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__separator,
  [4127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__separator,
  [4134] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym_variable_name,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
  [4148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__line_break,
  [4155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
  [4162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_END,
  [4169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_ellipses,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
  [4190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__line_break,
  [4197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__line_break,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__separator,
  [4239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__separator,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__line_break,
  [4253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__separator,
  [4260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__line_break,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__line_break,
  [4274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__line_break,
  [4281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__line_break,
  [4288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__separator,
  [4302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__line_break,
  [4316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [4330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [4344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__line_break,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_END,
  [4358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_EXCEPT,
  [4365] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_variable_name,
  [4372] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_variable_name,
  [4379] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_variable_name,
  [4386] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_variable_name,
  [4393] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_variable_name,
  [4400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym__line_break,
  [4407] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_variable_name,
  [4414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__separator,
  [4421] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_variable_name,
  [4428] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_variable_name,
  [4435] = 2,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(912), 1,
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
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 348,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 453,
  [SMALL_STATE(15)] = 483,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 543,
  [SMALL_STATE(18)] = 573,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 623,
  [SMALL_STATE(21)] = 648,
  [SMALL_STATE(22)] = 675,
  [SMALL_STATE(23)] = 702,
  [SMALL_STATE(24)] = 729,
  [SMALL_STATE(25)] = 758,
  [SMALL_STATE(26)] = 785,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 837,
  [SMALL_STATE(29)] = 866,
  [SMALL_STATE(30)] = 893,
  [SMALL_STATE(31)] = 920,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 974,
  [SMALL_STATE(34)] = 1001,
  [SMALL_STATE(35)] = 1026,
  [SMALL_STATE(36)] = 1055,
  [SMALL_STATE(37)] = 1084,
  [SMALL_STATE(38)] = 1116,
  [SMALL_STATE(39)] = 1133,
  [SMALL_STATE(40)] = 1160,
  [SMALL_STATE(41)] = 1187,
  [SMALL_STATE(42)] = 1214,
  [SMALL_STATE(43)] = 1241,
  [SMALL_STATE(44)] = 1258,
  [SMALL_STATE(45)] = 1285,
  [SMALL_STATE(46)] = 1312,
  [SMALL_STATE(47)] = 1339,
  [SMALL_STATE(48)] = 1366,
  [SMALL_STATE(49)] = 1383,
  [SMALL_STATE(50)] = 1410,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1464,
  [SMALL_STATE(53)] = 1491,
  [SMALL_STATE(54)] = 1518,
  [SMALL_STATE(55)] = 1545,
  [SMALL_STATE(56)] = 1561,
  [SMALL_STATE(57)] = 1585,
  [SMALL_STATE(58)] = 1601,
  [SMALL_STATE(59)] = 1625,
  [SMALL_STATE(60)] = 1641,
  [SMALL_STATE(61)] = 1657,
  [SMALL_STATE(62)] = 1681,
  [SMALL_STATE(63)] = 1697,
  [SMALL_STATE(64)] = 1721,
  [SMALL_STATE(65)] = 1745,
  [SMALL_STATE(66)] = 1761,
  [SMALL_STATE(67)] = 1785,
  [SMALL_STATE(68)] = 1806,
  [SMALL_STATE(69)] = 1827,
  [SMALL_STATE(70)] = 1848,
  [SMALL_STATE(71)] = 1869,
  [SMALL_STATE(72)] = 1892,
  [SMALL_STATE(73)] = 1915,
  [SMALL_STATE(74)] = 1936,
  [SMALL_STATE(75)] = 1959,
  [SMALL_STATE(76)] = 1980,
  [SMALL_STATE(77)] = 2003,
  [SMALL_STATE(78)] = 2026,
  [SMALL_STATE(79)] = 2049,
  [SMALL_STATE(80)] = 2069,
  [SMALL_STATE(81)] = 2089,
  [SMALL_STATE(82)] = 2109,
  [SMALL_STATE(83)] = 2129,
  [SMALL_STATE(84)] = 2149,
  [SMALL_STATE(85)] = 2169,
  [SMALL_STATE(86)] = 2189,
  [SMALL_STATE(87)] = 2209,
  [SMALL_STATE(88)] = 2222,
  [SMALL_STATE(89)] = 2235,
  [SMALL_STATE(90)] = 2252,
  [SMALL_STATE(91)] = 2269,
  [SMALL_STATE(92)] = 2282,
  [SMALL_STATE(93)] = 2295,
  [SMALL_STATE(94)] = 2308,
  [SMALL_STATE(95)] = 2327,
  [SMALL_STATE(96)] = 2340,
  [SMALL_STATE(97)] = 2353,
  [SMALL_STATE(98)] = 2366,
  [SMALL_STATE(99)] = 2379,
  [SMALL_STATE(100)] = 2396,
  [SMALL_STATE(101)] = 2409,
  [SMALL_STATE(102)] = 2428,
  [SMALL_STATE(103)] = 2447,
  [SMALL_STATE(104)] = 2458,
  [SMALL_STATE(105)] = 2475,
  [SMALL_STATE(106)] = 2487,
  [SMALL_STATE(107)] = 2499,
  [SMALL_STATE(108)] = 2515,
  [SMALL_STATE(109)] = 2529,
  [SMALL_STATE(110)] = 2543,
  [SMALL_STATE(111)] = 2557,
  [SMALL_STATE(112)] = 2573,
  [SMALL_STATE(113)] = 2587,
  [SMALL_STATE(114)] = 2601,
  [SMALL_STATE(115)] = 2613,
  [SMALL_STATE(116)] = 2625,
  [SMALL_STATE(117)] = 2641,
  [SMALL_STATE(118)] = 2653,
  [SMALL_STATE(119)] = 2665,
  [SMALL_STATE(120)] = 2677,
  [SMALL_STATE(121)] = 2689,
  [SMALL_STATE(122)] = 2701,
  [SMALL_STATE(123)] = 2713,
  [SMALL_STATE(124)] = 2725,
  [SMALL_STATE(125)] = 2737,
  [SMALL_STATE(126)] = 2749,
  [SMALL_STATE(127)] = 2761,
  [SMALL_STATE(128)] = 2773,
  [SMALL_STATE(129)] = 2785,
  [SMALL_STATE(130)] = 2799,
  [SMALL_STATE(131)] = 2811,
  [SMALL_STATE(132)] = 2825,
  [SMALL_STATE(133)] = 2837,
  [SMALL_STATE(134)] = 2851,
  [SMALL_STATE(135)] = 2863,
  [SMALL_STATE(136)] = 2875,
  [SMALL_STATE(137)] = 2889,
  [SMALL_STATE(138)] = 2902,
  [SMALL_STATE(139)] = 2915,
  [SMALL_STATE(140)] = 2928,
  [SMALL_STATE(141)] = 2941,
  [SMALL_STATE(142)] = 2954,
  [SMALL_STATE(143)] = 2967,
  [SMALL_STATE(144)] = 2980,
  [SMALL_STATE(145)] = 2993,
  [SMALL_STATE(146)] = 3004,
  [SMALL_STATE(147)] = 3015,
  [SMALL_STATE(148)] = 3028,
  [SMALL_STATE(149)] = 3041,
  [SMALL_STATE(150)] = 3052,
  [SMALL_STATE(151)] = 3063,
  [SMALL_STATE(152)] = 3076,
  [SMALL_STATE(153)] = 3089,
  [SMALL_STATE(154)] = 3102,
  [SMALL_STATE(155)] = 3113,
  [SMALL_STATE(156)] = 3126,
  [SMALL_STATE(157)] = 3139,
  [SMALL_STATE(158)] = 3152,
  [SMALL_STATE(159)] = 3165,
  [SMALL_STATE(160)] = 3178,
  [SMALL_STATE(161)] = 3189,
  [SMALL_STATE(162)] = 3202,
  [SMALL_STATE(163)] = 3215,
  [SMALL_STATE(164)] = 3228,
  [SMALL_STATE(165)] = 3241,
  [SMALL_STATE(166)] = 3251,
  [SMALL_STATE(167)] = 3261,
  [SMALL_STATE(168)] = 3271,
  [SMALL_STATE(169)] = 3281,
  [SMALL_STATE(170)] = 3291,
  [SMALL_STATE(171)] = 3301,
  [SMALL_STATE(172)] = 3311,
  [SMALL_STATE(173)] = 3321,
  [SMALL_STATE(174)] = 3331,
  [SMALL_STATE(175)] = 3341,
  [SMALL_STATE(176)] = 3351,
  [SMALL_STATE(177)] = 3361,
  [SMALL_STATE(178)] = 3371,
  [SMALL_STATE(179)] = 3381,
  [SMALL_STATE(180)] = 3391,
  [SMALL_STATE(181)] = 3401,
  [SMALL_STATE(182)] = 3411,
  [SMALL_STATE(183)] = 3421,
  [SMALL_STATE(184)] = 3431,
  [SMALL_STATE(185)] = 3441,
  [SMALL_STATE(186)] = 3451,
  [SMALL_STATE(187)] = 3461,
  [SMALL_STATE(188)] = 3471,
  [SMALL_STATE(189)] = 3481,
  [SMALL_STATE(190)] = 3491,
  [SMALL_STATE(191)] = 3501,
  [SMALL_STATE(192)] = 3511,
  [SMALL_STATE(193)] = 3521,
  [SMALL_STATE(194)] = 3531,
  [SMALL_STATE(195)] = 3541,
  [SMALL_STATE(196)] = 3551,
  [SMALL_STATE(197)] = 3561,
  [SMALL_STATE(198)] = 3571,
  [SMALL_STATE(199)] = 3581,
  [SMALL_STATE(200)] = 3591,
  [SMALL_STATE(201)] = 3601,
  [SMALL_STATE(202)] = 3611,
  [SMALL_STATE(203)] = 3621,
  [SMALL_STATE(204)] = 3631,
  [SMALL_STATE(205)] = 3641,
  [SMALL_STATE(206)] = 3651,
  [SMALL_STATE(207)] = 3661,
  [SMALL_STATE(208)] = 3671,
  [SMALL_STATE(209)] = 3681,
  [SMALL_STATE(210)] = 3691,
  [SMALL_STATE(211)] = 3701,
  [SMALL_STATE(212)] = 3711,
  [SMALL_STATE(213)] = 3721,
  [SMALL_STATE(214)] = 3731,
  [SMALL_STATE(215)] = 3741,
  [SMALL_STATE(216)] = 3751,
  [SMALL_STATE(217)] = 3761,
  [SMALL_STATE(218)] = 3771,
  [SMALL_STATE(219)] = 3781,
  [SMALL_STATE(220)] = 3791,
  [SMALL_STATE(221)] = 3798,
  [SMALL_STATE(222)] = 3805,
  [SMALL_STATE(223)] = 3812,
  [SMALL_STATE(224)] = 3819,
  [SMALL_STATE(225)] = 3826,
  [SMALL_STATE(226)] = 3833,
  [SMALL_STATE(227)] = 3840,
  [SMALL_STATE(228)] = 3847,
  [SMALL_STATE(229)] = 3854,
  [SMALL_STATE(230)] = 3861,
  [SMALL_STATE(231)] = 3868,
  [SMALL_STATE(232)] = 3875,
  [SMALL_STATE(233)] = 3882,
  [SMALL_STATE(234)] = 3889,
  [SMALL_STATE(235)] = 3896,
  [SMALL_STATE(236)] = 3903,
  [SMALL_STATE(237)] = 3910,
  [SMALL_STATE(238)] = 3917,
  [SMALL_STATE(239)] = 3924,
  [SMALL_STATE(240)] = 3931,
  [SMALL_STATE(241)] = 3938,
  [SMALL_STATE(242)] = 3945,
  [SMALL_STATE(243)] = 3952,
  [SMALL_STATE(244)] = 3959,
  [SMALL_STATE(245)] = 3966,
  [SMALL_STATE(246)] = 3973,
  [SMALL_STATE(247)] = 3980,
  [SMALL_STATE(248)] = 3987,
  [SMALL_STATE(249)] = 3994,
  [SMALL_STATE(250)] = 4001,
  [SMALL_STATE(251)] = 4008,
  [SMALL_STATE(252)] = 4015,
  [SMALL_STATE(253)] = 4022,
  [SMALL_STATE(254)] = 4029,
  [SMALL_STATE(255)] = 4036,
  [SMALL_STATE(256)] = 4043,
  [SMALL_STATE(257)] = 4050,
  [SMALL_STATE(258)] = 4057,
  [SMALL_STATE(259)] = 4064,
  [SMALL_STATE(260)] = 4071,
  [SMALL_STATE(261)] = 4078,
  [SMALL_STATE(262)] = 4085,
  [SMALL_STATE(263)] = 4092,
  [SMALL_STATE(264)] = 4099,
  [SMALL_STATE(265)] = 4106,
  [SMALL_STATE(266)] = 4113,
  [SMALL_STATE(267)] = 4120,
  [SMALL_STATE(268)] = 4127,
  [SMALL_STATE(269)] = 4134,
  [SMALL_STATE(270)] = 4141,
  [SMALL_STATE(271)] = 4148,
  [SMALL_STATE(272)] = 4155,
  [SMALL_STATE(273)] = 4162,
  [SMALL_STATE(274)] = 4169,
  [SMALL_STATE(275)] = 4176,
  [SMALL_STATE(276)] = 4183,
  [SMALL_STATE(277)] = 4190,
  [SMALL_STATE(278)] = 4197,
  [SMALL_STATE(279)] = 4204,
  [SMALL_STATE(280)] = 4211,
  [SMALL_STATE(281)] = 4218,
  [SMALL_STATE(282)] = 4225,
  [SMALL_STATE(283)] = 4232,
  [SMALL_STATE(284)] = 4239,
  [SMALL_STATE(285)] = 4246,
  [SMALL_STATE(286)] = 4253,
  [SMALL_STATE(287)] = 4260,
  [SMALL_STATE(288)] = 4267,
  [SMALL_STATE(289)] = 4274,
  [SMALL_STATE(290)] = 4281,
  [SMALL_STATE(291)] = 4288,
  [SMALL_STATE(292)] = 4295,
  [SMALL_STATE(293)] = 4302,
  [SMALL_STATE(294)] = 4309,
  [SMALL_STATE(295)] = 4316,
  [SMALL_STATE(296)] = 4323,
  [SMALL_STATE(297)] = 4330,
  [SMALL_STATE(298)] = 4337,
  [SMALL_STATE(299)] = 4344,
  [SMALL_STATE(300)] = 4351,
  [SMALL_STATE(301)] = 4358,
  [SMALL_STATE(302)] = 4365,
  [SMALL_STATE(303)] = 4372,
  [SMALL_STATE(304)] = 4379,
  [SMALL_STATE(305)] = 4386,
  [SMALL_STATE(306)] = 4393,
  [SMALL_STATE(307)] = 4400,
  [SMALL_STATE(308)] = 4407,
  [SMALL_STATE(309)] = 4414,
  [SMALL_STATE(310)] = 4421,
  [SMALL_STATE(311)] = 4428,
  [SMALL_STATE(312)] = 4435,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(235),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(234),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(285),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(285),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(215),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(261),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(229),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(261),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(230),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(234),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(34),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(213),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(137),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(68),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100), SHIFT(15),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(299),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(173),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(163),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(81),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(178),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(155),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(83),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(64),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(161),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 2), SHIFT(64),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(161),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(156),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(156),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(161),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(161),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(264),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(301),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(53),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(64),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(64),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(64),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(156),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(156),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(64),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(207),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(52),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(54),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 6, .dynamic_precedence = 100),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 14),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 15),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 11),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [816] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 12),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 8),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
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
