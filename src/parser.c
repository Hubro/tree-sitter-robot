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
#define STATE_COUNT 322
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 3
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_WHILE = 43,
  sym_ellipses = 44,
  anon_sym_ = 45,
  anon_sym_AT_LBRACE = 46,
  anon_sym_AMP_LBRACE = 47,
  sym_variable_name = 48,
  sym_text_chunk = 49,
  sym_comment = 50,
  sym__separator = 51,
  aux_sym__whitespace_token1 = 52,
  sym__line_break = 53,
  sym_source_file = 54,
  sym_section = 55,
  sym_settings_section = 56,
  sym_setting_statement = 57,
  sym_variables_section = 58,
  sym_variable_definition = 59,
  sym_keywords_section = 60,
  sym_keyword_definition = 61,
  sym_keyword_definition_body = 62,
  sym_keyword_setting = 63,
  sym_test_cases_section = 64,
  sym_test_case_definition = 65,
  sym_test_case_definition_body = 66,
  sym_test_case_setting = 67,
  sym_statement = 68,
  sym_return_statement = 69,
  sym_variable_assignment = 70,
  sym_keyword_invocation = 71,
  sym_if_statement = 72,
  sym_elseif_statement = 73,
  sym_else_statement = 74,
  sym_inline_if_statement = 75,
  sym_block = 76,
  sym_inline_elseif_statement = 77,
  sym_inline_else_statement = 78,
  sym_inline_statement = 79,
  sym_try_statement = 80,
  sym_except_statement = 81,
  sym_while_statement = 82,
  sym_arguments = 83,
  sym_arguments_without_continuation = 84,
  sym_continuation = 85,
  sym_argument = 86,
  sym_scalar_variable = 87,
  sym_list_variable = 88,
  sym_dictionary_variable = 89,
  sym__indentation = 90,
  sym__empty_line = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_settings_section_repeat1 = 93,
  aux_sym_variables_section_repeat1 = 94,
  aux_sym_keywords_section_repeat1 = 95,
  aux_sym_keyword_definition_body_repeat1 = 96,
  aux_sym_test_cases_section_repeat1 = 97,
  aux_sym_test_case_definition_body_repeat1 = 98,
  aux_sym_if_statement_repeat1 = 99,
  aux_sym_inline_if_statement_repeat1 = 100,
  aux_sym_block_repeat1 = 101,
  aux_sym_try_statement_repeat1 = 102,
  aux_sym_arguments_repeat1 = 103,
  aux_sym_arguments_repeat2 = 104,
  aux_sym_argument_repeat1 = 105,
  alias_sym_keyword = 106,
  alias_sym_name = 107,
  alias_sym_return_value = 108,
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
  [anon_sym_WHILE] = "WHILE",
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
  [sym_while_statement] = "while_statement",
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
  [anon_sym_WHILE] = anon_sym_WHILE,
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
  [sym_while_statement] = sym_while_statement,
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
  [anon_sym_WHILE] = {
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
  [sym_while_statement] = {
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
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
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
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 4},
  [16] = {.index = 26, .length = 2},
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
    {field_body, 4},
    {field_condition, 2},
  [12] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [15] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [18] =
    {field_consequence, 3},
  [19] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [22] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [26] =
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
  [40] = 7,
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
  [53] = 53,
  [54] = 39,
  [55] = 42,
  [56] = 49,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 7,
  [65] = 65,
  [66] = 61,
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
  [80] = 80,
  [81] = 81,
  [82] = 70,
  [83] = 81,
  [84] = 70,
  [85] = 85,
  [86] = 72,
  [87] = 81,
  [88] = 88,
  [89] = 72,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 92,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 99,
  [109] = 96,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 93,
  [117] = 106,
  [118] = 118,
  [119] = 95,
  [120] = 120,
  [121] = 101,
  [122] = 107,
  [123] = 100,
  [124] = 102,
  [125] = 104,
  [126] = 107,
  [127] = 101,
  [128] = 104,
  [129] = 102,
  [130] = 99,
  [131] = 131,
  [132] = 96,
  [133] = 93,
  [134] = 131,
  [135] = 135,
  [136] = 100,
  [137] = 95,
  [138] = 138,
  [139] = 106,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 143,
  [147] = 144,
  [148] = 111,
  [149] = 149,
  [150] = 112,
  [151] = 151,
  [152] = 149,
  [153] = 7,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 141,
  [160] = 113,
  [161] = 161,
  [162] = 158,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 158,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 170,
  [178] = 178,
  [179] = 171,
  [180] = 180,
  [181] = 173,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 176,
  [191] = 191,
  [192] = 180,
  [193] = 187,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 185,
  [198] = 183,
  [199] = 199,
  [200] = 185,
  [201] = 188,
  [202] = 202,
  [203] = 183,
  [204] = 204,
  [205] = 176,
  [206] = 180,
  [207] = 187,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 211,
  [215] = 215,
  [216] = 216,
  [217] = 202,
  [218] = 170,
  [219] = 171,
  [220] = 213,
  [221] = 221,
  [222] = 173,
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
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 241,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 276,
  [282] = 282,
  [283] = 274,
  [284] = 268,
  [285] = 285,
  [286] = 279,
  [287] = 266,
  [288] = 288,
  [289] = 265,
  [290] = 264,
  [291] = 263,
  [292] = 292,
  [293] = 293,
  [294] = 241,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 279,
  [301] = 301,
  [302] = 276,
  [303] = 303,
  [304] = 274,
  [305] = 265,
  [306] = 264,
  [307] = 263,
  [308] = 241,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 225,
  [313] = 309,
  [314] = 311,
  [315] = 244,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 225,
  [320] = 309,
  [321] = 311,
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
      if (eof) ADVANCE(339);
      if (lookahead == '\t') ADVANCE(671);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '&') ADVANCE(118);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '=') ADVANCE(370);
      if (lookahead == '@') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead == 'W') ADVANCE(77);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(671);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(674);
      if (lookahead == '#') ADVANCE(669);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(671);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '=') ADVANCE(370);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '=') ADVANCE(371);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(673);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '=') ADVANCE(371);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '}') ADVANCE(369);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(670);
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '&') ADVANCE(119);
      if (lookahead == '@') ADVANCE(121);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(672);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(673);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '=') ADVANCE(370);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(428);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ']') ADVANCE(395);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(384);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(390);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(387);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ']') ADVANCE(398);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == ']') ADVANCE(381);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ']') ADVANCE(375);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == 'W') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == 'W') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(456);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == 'W') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == 'W') ADVANCE(450);
      if (lookahead == '[') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == 'W') ADVANCE(450);
      if (lookahead == '[') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(458);
      if (lookahead == 'W') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '$') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(428);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(372);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(342);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(365);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(393);
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
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(549);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(417);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(405);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(410);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(415);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(403);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(407);
      END_STATE();
    case 77:
      if (lookahead == 'H') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(70);
      if (lookahead == 'X') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(401);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(413);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'Y') ADVANCE(411);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(395);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(384);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(390);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(387);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(398);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(381);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(375);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(386);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(392);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(383);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(377);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(397);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 117:
      if (lookahead == '{') ADVANCE(368);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(425);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(425);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(424);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(424);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(467);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(591);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(591);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(564);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(555);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 153:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 154:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 155:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 197:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 198:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 199:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 209:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 210:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 217:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 219:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 234:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 247:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 251:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 324:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      END_STATE();
    case 325:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(224);
      END_STATE();
    case 326:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 327:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 328:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 329:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 330:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 331:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 333:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(467);
      END_STATE();
    case 334:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(555);
      END_STATE();
    case 335:
      if (eof) ADVANCE(339);
      if (lookahead == '\t') ADVANCE(670);
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(675);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 336:
      if (eof) ADVANCE(339);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(234);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 337:
      if (eof) ADVANCE(339);
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '*') ADVANCE(435);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 338:
      if (eof) ADVANCE(339);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '#') ADVANCE(669);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(673);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(428);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(669);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '{') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(663);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(663);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(663);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(666);
      if (lookahead == '{') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(664);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(664);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(664);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(436);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '*') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'C') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'D') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(461);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(404);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(451);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead == 'N') ADVANCE(444);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'N') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'N') ADVANCE(444);
      if (lookahead == 'X') ADVANCE(443);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'N') ADVANCE(444);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'R') ADVANCE(464);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'T') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'U') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'Y') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(543);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(543);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(543);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(543);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(543);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(543);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(543);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(543);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(543);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(543);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(543);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(543);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(543);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(543);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(543);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(543);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(543);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(543);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(543);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(543);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(543);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(543);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(543);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(543);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(543);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(543);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(543);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(543);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(543);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(543);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(543);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '*') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == 'F') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(635);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(635);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(635);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(635);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(635);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(635);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(635);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(635);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(635);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(635);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(635);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(635);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(635);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(635);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(635);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(635);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(635);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(635);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(635);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(635);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(635);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(635);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(635);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(635);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(635);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(635);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(635);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(635);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(635);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(635);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(635);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(635);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(635);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(635);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(635);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(635);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(635);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(635);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(635);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(126);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(543);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(476);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ']') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == ']') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == ']') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ']') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ']') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == ']') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(467);
      if (lookahead == '{') ADVANCE(669);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == '{') ADVANCE(669);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '{') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(664);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(664);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(669);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(677);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '#') ADVANCE(669);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(677);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(679);
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
  [1] = {.lex_state = 338},
  [2] = {.lex_state = 336},
  [3] = {.lex_state = 336},
  [4] = {.lex_state = 336},
  [5] = {.lex_state = 336},
  [6] = {.lex_state = 336},
  [7] = {.lex_state = 336},
  [8] = {.lex_state = 336},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 335},
  [16] = {.lex_state = 335},
  [17] = {.lex_state = 335},
  [18] = {.lex_state = 335},
  [19] = {.lex_state = 337},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 337},
  [22] = {.lex_state = 337},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 337},
  [25] = {.lex_state = 336},
  [26] = {.lex_state = 336},
  [27] = {.lex_state = 337},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 337},
  [30] = {.lex_state = 337},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 337},
  [33] = {.lex_state = 337},
  [34] = {.lex_state = 337},
  [35] = {.lex_state = 336},
  [36] = {.lex_state = 336},
  [37] = {.lex_state = 336},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 335},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 335},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 335},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 337},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 337},
  [60] = {.lex_state = 336},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 337},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 337},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 336},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 45},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 45},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 45},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
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
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 9},
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
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 45},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 45},
  [312] = {.lex_state = 45},
  [313] = {.lex_state = 45},
  [314] = {.lex_state = 45},
  [315] = {.lex_state = 45},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 9},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 45},
  [320] = {.lex_state = 45},
  [321] = {.lex_state = 45},
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
    [anon_sym_WHILE] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(262),
    [sym_section] = STATE(20),
    [sym_settings_section] = STATE(105),
    [sym_variables_section] = STATE(105),
    [sym_keywords_section] = STATE(105),
    [sym_test_cases_section] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(20),
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
    ACTIONS(38), 1,
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
    ACTIONS(23), 1,
      sym__line_break,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 5,
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
    STATE(5), 3,
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
  [270] = 10,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_WHILE,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    STATE(249), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(250), 7,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
  [313] = 10,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_WHILE,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    STATE(275), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(68), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(250), 7,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
  [356] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_WHILE,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_END,
    ACTIONS(72), 1,
      anon_sym_ELSEIF,
    ACTIONS(74), 1,
      anon_sym_ELSE,
    STATE(252), 1,
      sym_statement,
    STATE(250), 7,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
  [399] = 11,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_WHILE,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_END,
    ACTIONS(78), 1,
      anon_sym_EXCEPT,
    STATE(252), 1,
      sym_statement,
    STATE(250), 7,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
  [439] = 10,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_WHILE,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_END,
    STATE(252), 1,
      sym_statement,
    STATE(250), 7,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
  [476] = 9,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_TRY,
    ACTIONS(62), 1,
      anon_sym_WHILE,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    STATE(252), 1,
      sym_statement,
    STATE(250), 7,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
  [510] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym__separator,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    ACTIONS(90), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(84), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [540] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym__separator,
    ACTIONS(98), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(94), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [570] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym__separator,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(110), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(102), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [600] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__separator,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    ACTIONS(123), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(115), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [630] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym_text_chunk,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(134), 1,
      sym__line_break,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(128), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [657] = 8,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(105), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [686] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      sym_text_chunk,
    ACTIONS(144), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(140), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [713] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_text_chunk,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(148), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [740] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_settings_section_token1,
    ACTIONS(157), 1,
      aux_sym_variables_section_token1,
    ACTIONS(160), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(163), 1,
      aux_sym_test_cases_section_token1,
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(105), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [769] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym_text_chunk,
    ACTIONS(173), 1,
      aux_sym__whitespace_token1,
    ACTIONS(176), 1,
      sym__line_break,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(168), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(183), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(185), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [846] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym__line_break,
    STATE(34), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(189), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [873] = 8,
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
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(105), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [902] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
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
  [929] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_text_chunk,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(19), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [956] = 8,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(105), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [985] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_text_chunk,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(134), 1,
      sym__line_break,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1012] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym_text_chunk,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(213), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(205), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1039] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym_text_chunk,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(218), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(222), 1,
      sym__line_break,
    STATE(26), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1091] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(232), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(185), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1141] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__separator,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(94), 1,
      sym_block,
    STATE(97), 1,
      aux_sym_if_statement_repeat1,
    STATE(174), 1,
      sym_else_statement,
    STATE(317), 1,
      sym_elseif_statement,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1173] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(212), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1200] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
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
  [1217] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(248), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1244] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(168), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1271] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(155), 1,
      sym_argument,
    STATE(253), 1,
      sym_arguments_without_continuation,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1298] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(261), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1325] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(155), 1,
      sym_argument,
    STATE(258), 1,
      sym_arguments_without_continuation,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1352] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(260), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1379] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(251), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(135), 1,
      sym_block,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(138), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1406] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(267), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1433] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(184), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1460] = 3,
    ACTIONS(66), 1,
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
  [1477] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(251), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1504] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(296), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1531] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1548] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(91), 1,
      sym_argument,
    STATE(212), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1575] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(91), 1,
      sym_argument,
    STATE(168), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1602] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(91), 1,
      sym_argument,
    STATE(184), 1,
      sym_arguments,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1629] = 3,
    ACTIONS(66), 1,
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
  [1645] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(233), 1,
      sym_argument,
    STATE(86), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1669] = 3,
    ACTIONS(66), 1,
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
  [1685] = 3,
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
  [1701] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(209), 1,
      sym_argument,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1725] = 3,
    ACTIONS(66), 1,
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
  [1741] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(210), 1,
      sym_argument,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1765] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1781] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(247), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(249), 1,
      sym_text_chunk,
    STATE(208), 1,
      sym_argument,
    STATE(72), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1805] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(289), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(209), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1829] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(289), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(229), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym__whitespace_token1,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(297), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(295), 1,
      sym_block,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1892] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(302), 1,
      sym_text_chunk,
    ACTIONS(304), 2,
      sym__separator,
      sym__line_break,
    STATE(81), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1913] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(306), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(230), 1,
      sym_block,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1936] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(308), 1,
      sym_text_chunk,
    ACTIONS(310), 2,
      sym__separator,
      sym__line_break,
    STATE(70), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1957] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(312), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(232), 1,
      sym_block,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1980] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(315), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(182), 1,
      sym_block,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2003] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym__separator,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    ACTIONS(317), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(57), 1,
      sym_keyword_definition_body,
    STATE(15), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2026] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    STATE(234), 1,
      sym_inline_statement,
    STATE(172), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2047] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(306), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(236), 1,
      sym_block,
    STATE(85), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2070] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 1,
      anon_sym_RETURN,
    ACTIONS(323), 1,
      sym_text_chunk,
    STATE(221), 1,
      sym_inline_statement,
    STATE(172), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2091] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 1,
      anon_sym_RETURN,
    ACTIONS(323), 1,
      sym_text_chunk,
    STATE(163), 1,
      sym_inline_statement,
    STATE(172), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    ACTIONS(96), 1,
      sym__separator,
    ACTIONS(325), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(59), 1,
      sym_test_case_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2135] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      anon_sym_,
    ACTIONS(333), 1,
      sym_text_chunk,
    ACTIONS(336), 2,
      sym__separator,
      sym__line_break,
    STATE(81), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2156] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      sym__line_break,
    ACTIONS(338), 1,
      anon_sym_,
    ACTIONS(340), 1,
      sym_text_chunk,
    STATE(83), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2176] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__line_break,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(345), 1,
      anon_sym_,
    ACTIONS(348), 1,
      sym_text_chunk,
    STATE(83), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2196] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      sym__separator,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(353), 1,
      sym_text_chunk,
    STATE(87), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(355), 1,
      sym__separator,
    ACTIONS(358), 1,
      sym__line_break,
    STATE(14), 1,
      sym__indentation,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2236] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(310), 1,
      sym__separator,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(360), 1,
      sym_text_chunk,
    STATE(84), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2256] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__separator,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(368), 1,
      sym_text_chunk,
    STATE(87), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__separator,
    ACTIONS(374), 1,
      aux_sym__whitespace_token1,
    ACTIONS(377), 1,
      sym__line_break,
    STATE(14), 1,
      sym__indentation,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2296] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(310), 1,
      sym__line_break,
    ACTIONS(338), 1,
      anon_sym_,
    ACTIONS(380), 1,
      sym_text_chunk,
    STATE(82), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(384), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_arguments_repeat1,
    STATE(160), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__separator,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
    STATE(113), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(393), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(150), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2367] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(398), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__separator,
    STATE(103), 1,
      aux_sym_if_statement_repeat1,
    STATE(166), 1,
      sym__indentation,
    STATE(186), 1,
      sym_else_statement,
    STATE(317), 1,
      sym_elseif_statement,
  [2399] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(404), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2412] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(408), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    STATE(110), 1,
      aux_sym_if_statement_repeat1,
    STATE(157), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(317), 1,
      sym_elseif_statement,
  [2444] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym__separator,
    ACTIONS(415), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(112), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2461] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(420), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2474] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2487] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(336), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2500] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(430), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__separator,
    STATE(110), 1,
      aux_sym_if_statement_repeat1,
    STATE(156), 1,
      sym__indentation,
    STATE(204), 1,
      sym_else_statement,
    STATE(317), 1,
      sym_elseif_statement,
  [2532] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(436), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2556] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(442), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2569] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2582] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(420), 2,
      anon_sym_,
      sym__line_break,
  [2594] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(408), 2,
      anon_sym_,
      sym__line_break,
  [2606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__separator,
    STATE(110), 1,
      aux_sym_if_statement_repeat1,
    STATE(259), 1,
      sym__indentation,
    STATE(317), 1,
      sym_elseif_statement,
  [2622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__separator,
    ACTIONS(453), 1,
      sym__line_break,
    STATE(111), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym__separator,
    ACTIONS(458), 1,
      sym__line_break,
    STATE(111), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__line_break,
    ACTIONS(461), 1,
      sym__separator,
    STATE(111), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_ELSEIF,
    ACTIONS(465), 1,
      anon_sym_ELSE,
    STATE(199), 1,
      sym_inline_elseif_statement,
    STATE(282), 1,
      sym_inline_else_statement,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym__separator,
    STATE(310), 1,
      sym__indentation,
    STATE(115), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2694] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(398), 2,
      anon_sym_,
      sym__line_break,
  [2706] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(442), 2,
      anon_sym_,
      sym__separator,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__separator,
    STATE(178), 1,
      sym__indentation,
    STATE(115), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2732] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(404), 2,
      anon_sym_,
      sym__separator,
  [2744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_ELSEIF,
    ACTIONS(465), 1,
      anon_sym_ELSE,
    STATE(199), 1,
      sym_inline_elseif_statement,
    STATE(273), 1,
      sym_inline_else_statement,
  [2760] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(426), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2772] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 2,
      anon_sym_,
      sym__line_break,
  [2784] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 2,
      anon_sym_,
      sym__separator,
  [2796] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(430), 2,
      anon_sym_,
      sym__separator,
  [2808] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(436), 2,
      anon_sym_,
      sym__separator,
  [2820] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 2,
      anon_sym_,
      sym__separator,
  [2832] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(426), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2844] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(436), 2,
      anon_sym_,
      sym__line_break,
  [2856] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(430), 2,
      anon_sym_,
      sym__line_break,
  [2868] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(420), 2,
      anon_sym_,
      sym__separator,
  [2880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
    ACTIONS(476), 1,
      sym__line_break,
    ACTIONS(472), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2894] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(408), 2,
      anon_sym_,
      sym__separator,
  [2906] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(398), 2,
      anon_sym_,
      sym__separator,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__line_break,
    ACTIONS(480), 1,
      sym__separator,
    ACTIONS(478), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__separator,
    STATE(215), 1,
      sym__indentation,
    STATE(118), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2946] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(424), 2,
      anon_sym_,
      sym__line_break,
  [2958] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(404), 2,
      anon_sym_,
      sym__line_break,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__separator,
    STATE(215), 1,
      sym__indentation,
    STATE(115), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2984] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(442), 2,
      anon_sym_,
      sym__line_break,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(485), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_ellipses,
    ACTIONS(489), 1,
      sym__separator,
    STATE(268), 1,
      sym__indentation,
  [3022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(142), 1,
      aux_sym_arguments_repeat1,
  [3048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(145), 1,
      aux_sym_arguments_repeat1,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__line_break,
    STATE(148), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym__separator,
    ACTIONS(507), 1,
      sym__line_break,
    STATE(144), 1,
      aux_sym_arguments_repeat1,
  [3124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__line_break,
    STATE(148), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(507), 1,
      sym__line_break,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [3161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__separator,
    ACTIONS(517), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(521), 1,
      sym__line_break,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [3196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_ELSE,
    ACTIONS(523), 1,
      anon_sym_END,
    ACTIONS(525), 1,
      anon_sym_ELSEIF,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_ELSE,
    ACTIONS(525), 1,
      anon_sym_ELSEIF,
    ACTIONS(527), 1,
      anon_sym_END,
  [3222] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(529), 1,
      sym_text_chunk,
    STATE(121), 1,
      sym_scalar_variable,
  [3235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_ellipses,
    ACTIONS(533), 1,
      sym__separator,
    STATE(284), 1,
      sym__indentation,
  [3248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__line_break,
    STATE(148), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym__separator,
    ACTIONS(537), 1,
      sym__line_break,
    STATE(165), 1,
      aux_sym_inline_if_statement_repeat1,
  [3272] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(539), 1,
      sym_text_chunk,
    STATE(127), 1,
      sym_scalar_variable,
  [3285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__separator,
    ACTIONS(543), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_inline_if_statement_repeat1,
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__line_break,
    ACTIONS(545), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__separator,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(165), 1,
      aux_sym_inline_if_statement_repeat1,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_ELSE,
    ACTIONS(525), 1,
      anon_sym_ELSEIF,
    ACTIONS(554), 1,
      anon_sym_END,
  [3335] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(556), 1,
      sym_text_chunk,
    STATE(101), 1,
      sym_scalar_variable,
  [3348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__separator,
    ACTIONS(560), 1,
      sym__line_break,
  [3358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym__separator,
    ACTIONS(564), 1,
      sym__line_break,
  [3368] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_,
    ACTIONS(568), 1,
      sym_variable_name,
  [3378] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_,
    ACTIONS(572), 1,
      sym_variable_name,
  [3388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__separator,
    ACTIONS(576), 1,
      sym__line_break,
  [3398] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_,
    ACTIONS(580), 1,
      sym_variable_name,
  [3408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__separator,
    STATE(303), 1,
      sym__indentation,
  [3418] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_settings_section_token2,
    ACTIONS(586), 1,
      sym__line_break,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(590), 1,
      anon_sym_,
  [3438] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_,
    ACTIONS(594), 1,
      sym_variable_name,
  [3448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_END,
    ACTIONS(598), 1,
      anon_sym_EXCEPT,
  [3458] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_,
    ACTIONS(602), 1,
      sym_variable_name,
  [3468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 1,
      anon_sym_,
  [3478] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_,
    ACTIONS(610), 1,
      sym_variable_name,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__separator,
    STATE(293), 1,
      sym__indentation,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      anon_sym_,
  [3508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(620), 1,
      sym__line_break,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    ACTIONS(624), 1,
      anon_sym_,
  [3528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    STATE(278), 1,
      sym__indentation,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      anon_sym_,
  [3548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 1,
      anon_sym_,
  [3558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 1,
      anon_sym_,
  [3568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(642), 1,
      anon_sym_,
  [3578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__separator,
    STATE(271), 1,
      sym__indentation,
  [3588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_,
  [3598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_,
  [3608] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_settings_section_token2,
    ACTIONS(656), 1,
      sym__line_break,
  [3618] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_settings_section_token2,
    ACTIONS(660), 1,
      sym__line_break,
  [3628] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(662), 1,
      aux_sym_settings_section_token2,
    ACTIONS(664), 1,
      sym__line_break,
  [3638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_,
  [3658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__line_break,
    ACTIONS(674), 1,
      sym__separator,
  [3668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
    ACTIONS(678), 1,
      anon_sym_,
  [3678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    ACTIONS(682), 1,
      anon_sym_,
  [3688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__separator,
    ACTIONS(686), 1,
      sym__line_break,
  [3698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    ACTIONS(690), 1,
      anon_sym_,
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
    STATE(227), 1,
      sym__indentation,
  [3718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 1,
      anon_sym_,
  [3728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_,
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(704), 1,
      anon_sym_,
  [3748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__line_break,
    ACTIONS(706), 1,
      sym__separator,
  [3758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    ACTIONS(710), 1,
      sym__line_break,
  [3768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__separator,
    ACTIONS(714), 1,
      sym__line_break,
  [3778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym__separator,
    ACTIONS(719), 1,
      sym__line_break,
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym__separator,
    ACTIONS(723), 1,
      sym__line_break,
  [3798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym__separator,
    ACTIONS(727), 1,
      sym__line_break,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym__line_break,
    ACTIONS(729), 1,
      sym__separator,
  [3818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_EXCEPT,
    ACTIONS(731), 1,
      anon_sym_END,
  [3828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_ELSEIF,
    STATE(199), 1,
      sym_inline_elseif_statement,
  [3838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__line_break,
    ACTIONS(733), 1,
      sym__separator,
  [3848] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_,
    ACTIONS(737), 1,
      sym_variable_name,
  [3858] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_,
    ACTIONS(741), 1,
      sym_variable_name,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__line_break,
    ACTIONS(743), 1,
      sym__separator,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym__separator,
    ACTIONS(748), 1,
      sym__line_break,
  [3888] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_,
    ACTIONS(752), 1,
      sym_variable_name,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym__separator,
    ACTIONS(756), 1,
      sym__line_break,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__separator,
  [3915] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_variable_name,
  [3922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym__line_break,
  [3929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_END,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__line_break,
  [3943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym__line_break,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__separator,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym__line_break,
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__separator,
  [3971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym__separator,
  [3978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym__line_break,
  [3985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__line_break,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym__separator,
  [3999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__line_break,
  [4013] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_variable_name,
  [4020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__line_break,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__line_break,
  [4034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__separator,
  [4041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__line_break,
  [4048] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym_variable_name,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__line_break,
  [4062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__separator,
  [4069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__separator,
  [4076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__line_break,
  [4083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__line_break,
  [4090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__line_break,
  [4097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__line_break,
  [4104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__line_break,
  [4111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__line_break,
  [4118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__line_break,
  [4125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__line_break,
  [4132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__line_break,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__line_break,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__line_break,
  [4153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_ELSEIF,
  [4160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__line_break,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__line_break,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__line_break,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_ellipses,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__line_break,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__line_break,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_END,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__separator,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__line_break,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__line_break,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym__line_break,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_END,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__line_break,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__line_break,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_ellipses,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__separator,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__separator,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__line_break,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_END,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__line_break,
  [4405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__separator,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__line_break,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__line_break,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__line_break,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym__separator,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__line_break,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_END,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__line_break,
  [4503] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_variable_name,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_EXCEPT,
  [4517] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_variable_name,
  [4524] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_variable_name,
  [4531] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_variable_name,
  [4538] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_variable_name,
  [4545] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_variable_name,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__line_break,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__separator,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym__separator,
  [4573] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_variable_name,
  [4580] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_variable_name,
  [4587] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(930), 1,
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
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 356,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 476,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 600,
  [SMALL_STATE(19)] = 630,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 686,
  [SMALL_STATE(22)] = 713,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 769,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 821,
  [SMALL_STATE(27)] = 846,
  [SMALL_STATE(28)] = 873,
  [SMALL_STATE(29)] = 902,
  [SMALL_STATE(30)] = 929,
  [SMALL_STATE(31)] = 956,
  [SMALL_STATE(32)] = 985,
  [SMALL_STATE(33)] = 1012,
  [SMALL_STATE(34)] = 1039,
  [SMALL_STATE(35)] = 1066,
  [SMALL_STATE(36)] = 1091,
  [SMALL_STATE(37)] = 1116,
  [SMALL_STATE(38)] = 1141,
  [SMALL_STATE(39)] = 1173,
  [SMALL_STATE(40)] = 1200,
  [SMALL_STATE(41)] = 1217,
  [SMALL_STATE(42)] = 1244,
  [SMALL_STATE(43)] = 1271,
  [SMALL_STATE(44)] = 1298,
  [SMALL_STATE(45)] = 1325,
  [SMALL_STATE(46)] = 1352,
  [SMALL_STATE(47)] = 1379,
  [SMALL_STATE(48)] = 1406,
  [SMALL_STATE(49)] = 1433,
  [SMALL_STATE(50)] = 1460,
  [SMALL_STATE(51)] = 1477,
  [SMALL_STATE(52)] = 1504,
  [SMALL_STATE(53)] = 1531,
  [SMALL_STATE(54)] = 1548,
  [SMALL_STATE(55)] = 1575,
  [SMALL_STATE(56)] = 1602,
  [SMALL_STATE(57)] = 1629,
  [SMALL_STATE(58)] = 1645,
  [SMALL_STATE(59)] = 1669,
  [SMALL_STATE(60)] = 1685,
  [SMALL_STATE(61)] = 1701,
  [SMALL_STATE(62)] = 1725,
  [SMALL_STATE(63)] = 1741,
  [SMALL_STATE(64)] = 1765,
  [SMALL_STATE(65)] = 1781,
  [SMALL_STATE(66)] = 1805,
  [SMALL_STATE(67)] = 1829,
  [SMALL_STATE(68)] = 1853,
  [SMALL_STATE(69)] = 1869,
  [SMALL_STATE(70)] = 1892,
  [SMALL_STATE(71)] = 1913,
  [SMALL_STATE(72)] = 1936,
  [SMALL_STATE(73)] = 1957,
  [SMALL_STATE(74)] = 1980,
  [SMALL_STATE(75)] = 2003,
  [SMALL_STATE(76)] = 2026,
  [SMALL_STATE(77)] = 2047,
  [SMALL_STATE(78)] = 2070,
  [SMALL_STATE(79)] = 2091,
  [SMALL_STATE(80)] = 2112,
  [SMALL_STATE(81)] = 2135,
  [SMALL_STATE(82)] = 2156,
  [SMALL_STATE(83)] = 2176,
  [SMALL_STATE(84)] = 2196,
  [SMALL_STATE(85)] = 2216,
  [SMALL_STATE(86)] = 2236,
  [SMALL_STATE(87)] = 2256,
  [SMALL_STATE(88)] = 2276,
  [SMALL_STATE(89)] = 2296,
  [SMALL_STATE(90)] = 2316,
  [SMALL_STATE(91)] = 2333,
  [SMALL_STATE(92)] = 2350,
  [SMALL_STATE(93)] = 2367,
  [SMALL_STATE(94)] = 2380,
  [SMALL_STATE(95)] = 2399,
  [SMALL_STATE(96)] = 2412,
  [SMALL_STATE(97)] = 2425,
  [SMALL_STATE(98)] = 2444,
  [SMALL_STATE(99)] = 2461,
  [SMALL_STATE(100)] = 2474,
  [SMALL_STATE(101)] = 2487,
  [SMALL_STATE(102)] = 2500,
  [SMALL_STATE(103)] = 2513,
  [SMALL_STATE(104)] = 2532,
  [SMALL_STATE(105)] = 2545,
  [SMALL_STATE(106)] = 2556,
  [SMALL_STATE(107)] = 2569,
  [SMALL_STATE(108)] = 2582,
  [SMALL_STATE(109)] = 2594,
  [SMALL_STATE(110)] = 2606,
  [SMALL_STATE(111)] = 2622,
  [SMALL_STATE(112)] = 2636,
  [SMALL_STATE(113)] = 2650,
  [SMALL_STATE(114)] = 2664,
  [SMALL_STATE(115)] = 2680,
  [SMALL_STATE(116)] = 2694,
  [SMALL_STATE(117)] = 2706,
  [SMALL_STATE(118)] = 2718,
  [SMALL_STATE(119)] = 2732,
  [SMALL_STATE(120)] = 2744,
  [SMALL_STATE(121)] = 2760,
  [SMALL_STATE(122)] = 2772,
  [SMALL_STATE(123)] = 2784,
  [SMALL_STATE(124)] = 2796,
  [SMALL_STATE(125)] = 2808,
  [SMALL_STATE(126)] = 2820,
  [SMALL_STATE(127)] = 2832,
  [SMALL_STATE(128)] = 2844,
  [SMALL_STATE(129)] = 2856,
  [SMALL_STATE(130)] = 2868,
  [SMALL_STATE(131)] = 2880,
  [SMALL_STATE(132)] = 2894,
  [SMALL_STATE(133)] = 2906,
  [SMALL_STATE(134)] = 2918,
  [SMALL_STATE(135)] = 2932,
  [SMALL_STATE(136)] = 2946,
  [SMALL_STATE(137)] = 2958,
  [SMALL_STATE(138)] = 2970,
  [SMALL_STATE(139)] = 2984,
  [SMALL_STATE(140)] = 2996,
  [SMALL_STATE(141)] = 3009,
  [SMALL_STATE(142)] = 3022,
  [SMALL_STATE(143)] = 3035,
  [SMALL_STATE(144)] = 3048,
  [SMALL_STATE(145)] = 3061,
  [SMALL_STATE(146)] = 3074,
  [SMALL_STATE(147)] = 3087,
  [SMALL_STATE(148)] = 3100,
  [SMALL_STATE(149)] = 3111,
  [SMALL_STATE(150)] = 3124,
  [SMALL_STATE(151)] = 3135,
  [SMALL_STATE(152)] = 3148,
  [SMALL_STATE(153)] = 3161,
  [SMALL_STATE(154)] = 3172,
  [SMALL_STATE(155)] = 3183,
  [SMALL_STATE(156)] = 3196,
  [SMALL_STATE(157)] = 3209,
  [SMALL_STATE(158)] = 3222,
  [SMALL_STATE(159)] = 3235,
  [SMALL_STATE(160)] = 3248,
  [SMALL_STATE(161)] = 3259,
  [SMALL_STATE(162)] = 3272,
  [SMALL_STATE(163)] = 3285,
  [SMALL_STATE(164)] = 3298,
  [SMALL_STATE(165)] = 3309,
  [SMALL_STATE(166)] = 3322,
  [SMALL_STATE(167)] = 3335,
  [SMALL_STATE(168)] = 3348,
  [SMALL_STATE(169)] = 3358,
  [SMALL_STATE(170)] = 3368,
  [SMALL_STATE(171)] = 3378,
  [SMALL_STATE(172)] = 3388,
  [SMALL_STATE(173)] = 3398,
  [SMALL_STATE(174)] = 3408,
  [SMALL_STATE(175)] = 3418,
  [SMALL_STATE(176)] = 3428,
  [SMALL_STATE(177)] = 3438,
  [SMALL_STATE(178)] = 3448,
  [SMALL_STATE(179)] = 3458,
  [SMALL_STATE(180)] = 3468,
  [SMALL_STATE(181)] = 3478,
  [SMALL_STATE(182)] = 3488,
  [SMALL_STATE(183)] = 3498,
  [SMALL_STATE(184)] = 3508,
  [SMALL_STATE(185)] = 3518,
  [SMALL_STATE(186)] = 3528,
  [SMALL_STATE(187)] = 3538,
  [SMALL_STATE(188)] = 3548,
  [SMALL_STATE(189)] = 3558,
  [SMALL_STATE(190)] = 3568,
  [SMALL_STATE(191)] = 3578,
  [SMALL_STATE(192)] = 3588,
  [SMALL_STATE(193)] = 3598,
  [SMALL_STATE(194)] = 3608,
  [SMALL_STATE(195)] = 3618,
  [SMALL_STATE(196)] = 3628,
  [SMALL_STATE(197)] = 3638,
  [SMALL_STATE(198)] = 3648,
  [SMALL_STATE(199)] = 3658,
  [SMALL_STATE(200)] = 3668,
  [SMALL_STATE(201)] = 3678,
  [SMALL_STATE(202)] = 3688,
  [SMALL_STATE(203)] = 3698,
  [SMALL_STATE(204)] = 3708,
  [SMALL_STATE(205)] = 3718,
  [SMALL_STATE(206)] = 3728,
  [SMALL_STATE(207)] = 3738,
  [SMALL_STATE(208)] = 3748,
  [SMALL_STATE(209)] = 3758,
  [SMALL_STATE(210)] = 3768,
  [SMALL_STATE(211)] = 3778,
  [SMALL_STATE(212)] = 3788,
  [SMALL_STATE(213)] = 3798,
  [SMALL_STATE(214)] = 3808,
  [SMALL_STATE(215)] = 3818,
  [SMALL_STATE(216)] = 3828,
  [SMALL_STATE(217)] = 3838,
  [SMALL_STATE(218)] = 3848,
  [SMALL_STATE(219)] = 3858,
  [SMALL_STATE(220)] = 3868,
  [SMALL_STATE(221)] = 3878,
  [SMALL_STATE(222)] = 3888,
  [SMALL_STATE(223)] = 3898,
  [SMALL_STATE(224)] = 3908,
  [SMALL_STATE(225)] = 3915,
  [SMALL_STATE(226)] = 3922,
  [SMALL_STATE(227)] = 3929,
  [SMALL_STATE(228)] = 3936,
  [SMALL_STATE(229)] = 3943,
  [SMALL_STATE(230)] = 3950,
  [SMALL_STATE(231)] = 3957,
  [SMALL_STATE(232)] = 3964,
  [SMALL_STATE(233)] = 3971,
  [SMALL_STATE(234)] = 3978,
  [SMALL_STATE(235)] = 3985,
  [SMALL_STATE(236)] = 3992,
  [SMALL_STATE(237)] = 3999,
  [SMALL_STATE(238)] = 4006,
  [SMALL_STATE(239)] = 4013,
  [SMALL_STATE(240)] = 4020,
  [SMALL_STATE(241)] = 4027,
  [SMALL_STATE(242)] = 4034,
  [SMALL_STATE(243)] = 4041,
  [SMALL_STATE(244)] = 4048,
  [SMALL_STATE(245)] = 4055,
  [SMALL_STATE(246)] = 4062,
  [SMALL_STATE(247)] = 4069,
  [SMALL_STATE(248)] = 4076,
  [SMALL_STATE(249)] = 4083,
  [SMALL_STATE(250)] = 4090,
  [SMALL_STATE(251)] = 4097,
  [SMALL_STATE(252)] = 4104,
  [SMALL_STATE(253)] = 4111,
  [SMALL_STATE(254)] = 4118,
  [SMALL_STATE(255)] = 4125,
  [SMALL_STATE(256)] = 4132,
  [SMALL_STATE(257)] = 4139,
  [SMALL_STATE(258)] = 4146,
  [SMALL_STATE(259)] = 4153,
  [SMALL_STATE(260)] = 4160,
  [SMALL_STATE(261)] = 4167,
  [SMALL_STATE(262)] = 4174,
  [SMALL_STATE(263)] = 4181,
  [SMALL_STATE(264)] = 4188,
  [SMALL_STATE(265)] = 4195,
  [SMALL_STATE(266)] = 4202,
  [SMALL_STATE(267)] = 4209,
  [SMALL_STATE(268)] = 4216,
  [SMALL_STATE(269)] = 4223,
  [SMALL_STATE(270)] = 4230,
  [SMALL_STATE(271)] = 4237,
  [SMALL_STATE(272)] = 4244,
  [SMALL_STATE(273)] = 4251,
  [SMALL_STATE(274)] = 4258,
  [SMALL_STATE(275)] = 4265,
  [SMALL_STATE(276)] = 4272,
  [SMALL_STATE(277)] = 4279,
  [SMALL_STATE(278)] = 4286,
  [SMALL_STATE(279)] = 4293,
  [SMALL_STATE(280)] = 4300,
  [SMALL_STATE(281)] = 4307,
  [SMALL_STATE(282)] = 4314,
  [SMALL_STATE(283)] = 4321,
  [SMALL_STATE(284)] = 4328,
  [SMALL_STATE(285)] = 4335,
  [SMALL_STATE(286)] = 4342,
  [SMALL_STATE(287)] = 4349,
  [SMALL_STATE(288)] = 4356,
  [SMALL_STATE(289)] = 4363,
  [SMALL_STATE(290)] = 4370,
  [SMALL_STATE(291)] = 4377,
  [SMALL_STATE(292)] = 4384,
  [SMALL_STATE(293)] = 4391,
  [SMALL_STATE(294)] = 4398,
  [SMALL_STATE(295)] = 4405,
  [SMALL_STATE(296)] = 4412,
  [SMALL_STATE(297)] = 4419,
  [SMALL_STATE(298)] = 4426,
  [SMALL_STATE(299)] = 4433,
  [SMALL_STATE(300)] = 4440,
  [SMALL_STATE(301)] = 4447,
  [SMALL_STATE(302)] = 4454,
  [SMALL_STATE(303)] = 4461,
  [SMALL_STATE(304)] = 4468,
  [SMALL_STATE(305)] = 4475,
  [SMALL_STATE(306)] = 4482,
  [SMALL_STATE(307)] = 4489,
  [SMALL_STATE(308)] = 4496,
  [SMALL_STATE(309)] = 4503,
  [SMALL_STATE(310)] = 4510,
  [SMALL_STATE(311)] = 4517,
  [SMALL_STATE(312)] = 4524,
  [SMALL_STATE(313)] = 4531,
  [SMALL_STATE(314)] = 4538,
  [SMALL_STATE(315)] = 4545,
  [SMALL_STATE(316)] = 4552,
  [SMALL_STATE(317)] = 4559,
  [SMALL_STATE(318)] = 4566,
  [SMALL_STATE(319)] = 4573,
  [SMALL_STATE(320)] = 4580,
  [SMALL_STATE(321)] = 4587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(242),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(241),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(294),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(294),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(18),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(169),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(270),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(24),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(238),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(270),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(33),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(239),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(241),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(36),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(14),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100), SHIFT(14),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(222),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(167),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(81),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(181),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(158),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(83),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(173),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(162),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(87),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(308),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(141),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(65),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(159),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(141),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 2), SHIFT(65),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(159),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(259),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(159),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(159),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(310),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(55),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(65),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(65),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(141),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(65),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(141),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(65),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(216),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(56),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(54),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 11),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 13),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 14),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 6, .dynamic_precedence = 100),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 15),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 16),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7, .production_id = 10),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [832] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 8),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 5),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
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
