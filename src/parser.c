#include "tree_sitter/parser.h"

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
#define STATE_COUNT 374
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 5
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_settings_section_token1 = 2,
  aux_sym_settings_section_token2 = 3,
  aux_sym_setting_name_token1 = 4,
  aux_sym_setting_name_token2 = 5,
  aux_sym_setting_name_token3 = 6,
  aux_sym_setting_name_token4 = 7,
  aux_sym_setting_name_token5 = 8,
  aux_sym_setting_name_token6 = 9,
  aux_sym_setting_name_token7 = 10,
  aux_sym_setting_name_token8 = 11,
  aux_sym_setting_name_token9 = 12,
  aux_sym_setting_name_token10 = 13,
  aux_sym_setting_name_token11 = 14,
  aux_sym_setting_name_token12 = 15,
  aux_sym_setting_name_token13 = 16,
  aux_sym_setting_name_token14 = 17,
  aux_sym_setting_name_token15 = 18,
  aux_sym_setting_name_token16 = 19,
  aux_sym_setting_name_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  aux_sym_keyword_setting_name_token1 = 27,
  aux_sym_keyword_setting_name_token2 = 28,
  aux_sym_keyword_setting_name_token3 = 29,
  aux_sym_keyword_setting_name_token4 = 30,
  aux_sym_keyword_setting_name_token5 = 31,
  aux_sym_keyword_setting_name_token6 = 32,
  aux_sym_test_cases_section_token1 = 33,
  aux_sym_test_case_setting_name_token1 = 34,
  aux_sym_test_case_setting_name_token2 = 35,
  anon_sym_RETURN = 36,
  anon_sym_IF = 37,
  anon_sym_END = 38,
  anon_sym_ELSEIF = 39,
  anon_sym_ELSE = 40,
  anon_sym_TRY = 41,
  anon_sym_EXCEPT = 42,
  anon_sym_FINALLY = 43,
  anon_sym_WHILE = 44,
  anon_sym_FOR = 45,
  anon_sym_IN = 46,
  anon_sym_INRANGE = 47,
  anon_sym_INENUMERATE = 48,
  anon_sym_INZIP = 49,
  sym_continue_statement = 50,
  sym_break_statement = 51,
  sym_ellipses = 52,
  anon_sym_SPACE = 53,
  anon_sym_AT_LBRACE = 54,
  anon_sym_AMP_LBRACE = 55,
  anon_sym_DOLLAR_LBRACE_LBRACE = 56,
  aux_sym_inline_python_expression_token1 = 57,
  anon_sym_RBRACE_RBRACE = 58,
  sym_variable_name = 59,
  sym_text_chunk = 60,
  sym_comment = 61,
  sym__separator = 62,
  aux_sym__whitespace_token1 = 63,
  sym__line_break = 64,
  sym_source_file = 65,
  sym_section = 66,
  sym_settings_section = 67,
  sym_setting_statement = 68,
  sym_setting_name = 69,
  sym_variables_section = 70,
  sym_variable_definition = 71,
  sym_keywords_section = 72,
  sym_keyword_definition = 73,
  sym_keyword_definition_body = 74,
  sym_keyword_setting = 75,
  sym_keyword_setting_name = 76,
  sym_test_cases_section = 77,
  sym_test_case_definition = 78,
  sym_test_case_definition_body = 79,
  sym_test_case_setting = 80,
  sym_test_case_setting_name = 81,
  sym_statement = 82,
  sym_return_statement = 83,
  sym_variable_assignment = 84,
  sym_keyword_invocation = 85,
  sym_if_statement = 86,
  sym_elseif_statement = 87,
  sym_else_statement = 88,
  sym_inline_if_statement = 89,
  sym_block = 90,
  sym_inline_elseif_statement = 91,
  sym_inline_else_statement = 92,
  sym_inline_statement = 93,
  sym_try_statement = 94,
  sym_except_statement = 95,
  sym_finally_statement = 96,
  sym_while_statement = 97,
  sym_for_statement = 98,
  sym__for_in = 99,
  sym__for_in_range = 100,
  sym__for_in_enumerate = 101,
  sym__for_in_zip = 102,
  sym_arguments = 103,
  sym_arguments_without_continuation = 104,
  sym_continuation = 105,
  sym_argument = 106,
  sym_scalar_variable = 107,
  sym_list_variable = 108,
  sym_dictionary_variable = 109,
  sym_inline_python_expression = 110,
  sym__indentation = 111,
  sym__empty_line = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_settings_section_repeat1 = 114,
  aux_sym_variables_section_repeat1 = 115,
  aux_sym_keywords_section_repeat1 = 116,
  aux_sym_keyword_definition_body_repeat1 = 117,
  aux_sym_test_cases_section_repeat1 = 118,
  aux_sym_test_case_definition_body_repeat1 = 119,
  aux_sym_if_statement_repeat1 = 120,
  aux_sym_inline_if_statement_repeat1 = 121,
  aux_sym_block_repeat1 = 122,
  aux_sym_try_statement_repeat1 = 123,
  aux_sym_for_statement_repeat1 = 124,
  aux_sym_arguments_repeat1 = 125,
  aux_sym_arguments_repeat2 = 126,
  aux_sym_argument_repeat1 = 127,
  aux_sym_inline_python_expression_repeat1 = 128,
  alias_sym_keyword = 129,
  alias_sym_name = 130,
  alias_sym_python_expression = 131,
  alias_sym_return_value = 132,
  alias_sym_variable_list = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_setting_name_token1] = "setting_name_token1",
  [aux_sym_setting_name_token2] = "setting_name_token2",
  [aux_sym_setting_name_token3] = "setting_name_token3",
  [aux_sym_setting_name_token4] = "setting_name_token4",
  [aux_sym_setting_name_token5] = "setting_name_token5",
  [aux_sym_setting_name_token6] = "setting_name_token6",
  [aux_sym_setting_name_token7] = "setting_name_token7",
  [aux_sym_setting_name_token8] = "setting_name_token8",
  [aux_sym_setting_name_token9] = "setting_name_token9",
  [aux_sym_setting_name_token10] = "setting_name_token10",
  [aux_sym_setting_name_token11] = "setting_name_token11",
  [aux_sym_setting_name_token12] = "setting_name_token12",
  [aux_sym_setting_name_token13] = "setting_name_token13",
  [aux_sym_setting_name_token14] = "setting_name_token14",
  [aux_sym_setting_name_token15] = "setting_name_token15",
  [aux_sym_setting_name_token16] = "setting_name_token16",
  [aux_sym_setting_name_token17] = "setting_name_token17",
  [aux_sym_variables_section_token1] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [aux_sym_keyword_setting_name_token1] = "keyword_setting_name_token1",
  [aux_sym_keyword_setting_name_token2] = "keyword_setting_name_token2",
  [aux_sym_keyword_setting_name_token3] = "keyword_setting_name_token3",
  [aux_sym_keyword_setting_name_token4] = "keyword_setting_name_token4",
  [aux_sym_keyword_setting_name_token5] = "keyword_setting_name_token5",
  [aux_sym_keyword_setting_name_token6] = "keyword_setting_name_token6",
  [aux_sym_test_cases_section_token1] = "section_header",
  [aux_sym_test_case_setting_name_token1] = "test_case_setting_name_token1",
  [aux_sym_test_case_setting_name_token2] = "test_case_setting_name_token2",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_IF] = "IF",
  [anon_sym_END] = "END",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_TRY] = "TRY",
  [anon_sym_EXCEPT] = "EXCEPT",
  [anon_sym_FINALLY] = "FINALLY",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_INRANGE] = "IN RANGE",
  [anon_sym_INENUMERATE] = "IN ENUMERATE",
  [anon_sym_INZIP] = "IN ZIP",
  [sym_continue_statement] = "continue_statement",
  [sym_break_statement] = "break_statement",
  [sym_ellipses] = "ellipses",
  [anon_sym_SPACE] = " ",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [aux_sym_inline_python_expression_token1] = "inline_python_expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [sym_setting_name] = "setting_name",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_keyword_setting_name] = "keyword_setting_name",
  [sym_test_cases_section] = "test_cases_section",
  [sym_test_case_definition] = "test_case_definition",
  [sym_test_case_definition_body] = "body",
  [sym_test_case_setting] = "test_case_setting",
  [sym_test_case_setting_name] = "test_case_setting_name",
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
  [sym_finally_statement] = "finally_statement",
  [sym_while_statement] = "while_statement",
  [sym_for_statement] = "for_statement",
  [sym__for_in] = "in",
  [sym__for_in_range] = "in_range",
  [sym__for_in_enumerate] = "in_enumerate",
  [sym__for_in_zip] = "in_zip",
  [sym_arguments] = "arguments",
  [sym_arguments_without_continuation] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym_inline_python_expression] = "inline_python_expression",
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
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_inline_python_expression_repeat1] = "inline_python_expression_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
  [alias_sym_python_expression] = "python_expression",
  [alias_sym_return_value] = "return_value",
  [alias_sym_variable_list] = "variable_list",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
  [aux_sym_setting_name_token1] = aux_sym_setting_name_token1,
  [aux_sym_setting_name_token2] = aux_sym_setting_name_token2,
  [aux_sym_setting_name_token3] = aux_sym_setting_name_token3,
  [aux_sym_setting_name_token4] = aux_sym_setting_name_token4,
  [aux_sym_setting_name_token5] = aux_sym_setting_name_token5,
  [aux_sym_setting_name_token6] = aux_sym_setting_name_token6,
  [aux_sym_setting_name_token7] = aux_sym_setting_name_token7,
  [aux_sym_setting_name_token8] = aux_sym_setting_name_token8,
  [aux_sym_setting_name_token9] = aux_sym_setting_name_token9,
  [aux_sym_setting_name_token10] = aux_sym_setting_name_token10,
  [aux_sym_setting_name_token11] = aux_sym_setting_name_token11,
  [aux_sym_setting_name_token12] = aux_sym_setting_name_token12,
  [aux_sym_setting_name_token13] = aux_sym_setting_name_token13,
  [aux_sym_setting_name_token14] = aux_sym_setting_name_token14,
  [aux_sym_setting_name_token15] = aux_sym_setting_name_token15,
  [aux_sym_setting_name_token16] = aux_sym_setting_name_token16,
  [aux_sym_setting_name_token17] = aux_sym_setting_name_token17,
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_keyword_setting_name_token1] = aux_sym_keyword_setting_name_token1,
  [aux_sym_keyword_setting_name_token2] = aux_sym_keyword_setting_name_token2,
  [aux_sym_keyword_setting_name_token3] = aux_sym_keyword_setting_name_token3,
  [aux_sym_keyword_setting_name_token4] = aux_sym_keyword_setting_name_token4,
  [aux_sym_keyword_setting_name_token5] = aux_sym_keyword_setting_name_token5,
  [aux_sym_keyword_setting_name_token6] = aux_sym_keyword_setting_name_token6,
  [aux_sym_test_cases_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_case_setting_name_token1] = aux_sym_test_case_setting_name_token1,
  [aux_sym_test_case_setting_name_token2] = aux_sym_test_case_setting_name_token2,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_TRY] = anon_sym_TRY,
  [anon_sym_EXCEPT] = anon_sym_EXCEPT,
  [anon_sym_FINALLY] = anon_sym_FINALLY,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_INRANGE] = anon_sym_INRANGE,
  [anon_sym_INENUMERATE] = anon_sym_INENUMERATE,
  [anon_sym_INZIP] = anon_sym_INZIP,
  [sym_continue_statement] = sym_continue_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_ellipses] = sym_ellipses,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [aux_sym_inline_python_expression_token1] = aux_sym_inline_python_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
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
  [sym_setting_name] = sym_setting_name,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_keyword_setting_name] = sym_keyword_setting_name,
  [sym_test_cases_section] = sym_test_cases_section,
  [sym_test_case_definition] = sym_test_case_definition,
  [sym_test_case_definition_body] = sym_keyword_definition_body,
  [sym_test_case_setting] = sym_test_case_setting,
  [sym_test_case_setting_name] = sym_test_case_setting_name,
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
  [sym_finally_statement] = sym_finally_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_for_statement] = sym_for_statement,
  [sym__for_in] = sym__for_in,
  [sym__for_in_range] = sym__for_in_range,
  [sym__for_in_enumerate] = sym__for_in_enumerate,
  [sym__for_in_zip] = sym__for_in_zip,
  [sym_arguments] = sym_arguments,
  [sym_arguments_without_continuation] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym_inline_python_expression] = sym_inline_python_expression,
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
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_inline_python_expression_repeat1] = aux_sym_inline_python_expression_repeat1,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_python_expression] = alias_sym_python_expression,
  [alias_sym_return_value] = alias_sym_return_value,
  [alias_sym_variable_list] = alias_sym_variable_list,
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
  [aux_sym_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token17] = {
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
  [aux_sym_keyword_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_setting_name_token2] = {
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
  [anon_sym_FINALLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INRANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INENUMERATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INZIP] = {
    .visible = true,
    .named = false,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
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
  [anon_sym_DOLLAR_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_python_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
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
  [sym_setting_name] = {
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
  [sym_keyword_setting_name] = {
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
  [sym_test_case_setting_name] = {
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
  [sym_finally_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_range] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_enumerate] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_zip] = {
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
  [sym_inline_python_expression] = {
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
  [aux_sym_for_statement_repeat1] = {
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
  [aux_sym_inline_python_expression_repeat1] = {
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
  [alias_sym_python_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_return_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_list] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_left = 5,
  field_name = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [6] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 1},
  [9] = {.index = 4, .length = 2},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 2},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 3},
  [16] = {.index = 18, .length = 3},
  [17] = {.index = 21, .length = 3},
  [18] = {.index = 24, .length = 3},
  [19] = {.index = 27, .length = 4},
  [20] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_alternative, 0},
  [2] =
    {field_condition, 1},
  [3] =
    {field_condition, 2},
  [4] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [6] =
    {field_consequence, 3},
  [7] =
    {field_body, 3},
    {field_condition, 1},
  [9] =
    {field_alternative, 4},
    {field_condition, 2},
  [11] =
    {field_condition, 2},
    {field_consequence, 4},
  [13] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [15] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [18] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [21] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [24] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [27] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [31] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [0] = alias_sym_keyword,
  },
  [4] = {
    [1] = alias_sym_python_expression,
  },
  [5] = {
    [2] = alias_sym_return_value,
  },
  [18] = {
    [1] = alias_sym_variable_list,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    alias_sym_return_value,
  aux_sym_for_statement_repeat1, 2,
    aux_sym_for_statement_repeat1,
    alias_sym_variable_list,
  aux_sym_inline_python_expression_repeat1, 2,
    aux_sym_inline_python_expression_repeat1,
    alias_sym_python_expression,
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 42,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 9,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 52,
  [59] = 52,
  [60] = 53,
  [61] = 51,
  [62] = 62,
  [63] = 63,
  [64] = 9,
  [65] = 65,
  [66] = 66,
  [67] = 63,
  [68] = 68,
  [69] = 69,
  [70] = 51,
  [71] = 53,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 95,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 84,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 104,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 92,
  [117] = 114,
  [118] = 107,
  [119] = 110,
  [120] = 111,
  [121] = 114,
  [122] = 100,
  [123] = 96,
  [124] = 94,
  [125] = 115,
  [126] = 83,
  [127] = 96,
  [128] = 104,
  [129] = 93,
  [130] = 91,
  [131] = 131,
  [132] = 98,
  [133] = 93,
  [134] = 94,
  [135] = 100,
  [136] = 111,
  [137] = 110,
  [138] = 107,
  [139] = 92,
  [140] = 140,
  [141] = 141,
  [142] = 91,
  [143] = 98,
  [144] = 83,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 146,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 147,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 147,
  [160] = 146,
  [161] = 161,
  [162] = 162,
  [163] = 162,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 148,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 168,
  [174] = 157,
  [175] = 175,
  [176] = 156,
  [177] = 177,
  [178] = 164,
  [179] = 179,
  [180] = 171,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 9,
  [188] = 188,
  [189] = 167,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 193,
  [200] = 196,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 198,
  [205] = 193,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 196,
  [210] = 210,
  [211] = 206,
  [212] = 198,
  [213] = 206,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 207,
  [219] = 210,
  [220] = 220,
  [221] = 221,
  [222] = 208,
  [223] = 210,
  [224] = 193,
  [225] = 206,
  [226] = 208,
  [227] = 227,
  [228] = 228,
  [229] = 215,
  [230] = 216,
  [231] = 231,
  [232] = 207,
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
  [245] = 191,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 207,
  [250] = 215,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 216,
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
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 269,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 104,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 96,
  [306] = 306,
  [307] = 307,
  [308] = 83,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 316,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 326,
  [332] = 332,
  [333] = 321,
  [334] = 334,
  [335] = 314,
  [336] = 307,
  [337] = 303,
  [338] = 269,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 329,
  [344] = 344,
  [345] = 345,
  [346] = 329,
  [347] = 347,
  [348] = 326,
  [349] = 349,
  [350] = 321,
  [351] = 314,
  [352] = 307,
  [353] = 303,
  [354] = 269,
  [355] = 355,
  [356] = 356,
  [357] = 329,
  [358] = 314,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 310,
  [363] = 282,
  [364] = 277,
  [365] = 289,
  [366] = 366,
  [367] = 319,
  [368] = 368,
  [369] = 310,
  [370] = 282,
  [371] = 277,
  [372] = 372,
  [373] = 310,
};

static inline bool sym_text_chunk_character_set_1(int32_t c) {
  return (c < 'E'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '$' || (c < '@'
        ? c == '&'
        : c <= 'A')))
    : (c <= 'E' || (c < 'e'
      ? (c < 'a'
        ? c == 'I'
        : c <= 'a')
      : (c <= 'e' || c == 'i'))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
  return (c < 'K'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
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
      if (eof) ADVANCE(380);
      if (lookahead == '\t') ADVANCE(758);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(478);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '&') ADVANCE(157);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == 'B') ADVANCE(115);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(758);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(762);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(758);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(760);
      if (lookahead == '#') ADVANCE(756);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '}') ADVANCE(412);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(757);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(477);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '&') ADVANCE(158);
      if (lookahead == '@') ADVANCE(160);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(759);
      if (lookahead == ' ') ADVANCE(479);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(760);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(491);
      if (lookahead == ' ') ADVANCE(482);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ']') ADVANCE(422);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(323);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == ']') ADVANCE(439);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == ']') ADVANCE(428);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ']') ADVANCE(434);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == ']') ADVANCE(431);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == ']') ADVANCE(442);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == ']') ADVANCE(425);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '.') ADVANCE(507);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'E') ADVANCE(526);
      if (lookahead == 'F') ADVANCE(524);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'E') ADVANCE(530);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '[') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '[') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'C') ADVANCE(536);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead == 'W') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(488);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(416);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(383);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(407);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(437);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(638);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(475);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(449);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(471);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(468);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(447);
      if (lookahead == 'N') ADVANCE(467);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(451);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'H') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(640);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(473);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(445);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(470);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(459);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 126:
      if (lookahead == 'U') ADVANCE(105);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'Y') ADVANCE(457);
      END_STATE();
    case 130:
      if (lookahead == 'Y') ADVANCE(461);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(422);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(439);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(428);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(434);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(431);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(442);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(425);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(436);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 146:
      if (lookahead == ']') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 148:
      if (lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 150:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 151:
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 152:
      if (lookahead == ']') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == ']') ADVANCE(444);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 154:
      if (lookahead == ']') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 155:
      if (lookahead == '{') ADVANCE(411);
      END_STATE();
    case 156:
      if (lookahead == '{') ADVANCE(411);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(484);
      END_STATE();
    case 158:
      if (lookahead == '{') ADVANCE(484);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 159:
      if (lookahead == '{') ADVANCE(483);
      END_STATE();
    case 160:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 161:
      if (lookahead == '{') ADVANCE(410);
      END_STATE();
    case 162:
      if (lookahead == '{') ADVANCE(410);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 163:
      if (lookahead == '{') ADVANCE(554);
      END_STATE();
    case 164:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 165:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 166:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 167:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(651);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(655);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(719);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 168:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 169:
      if (lookahead == '{') ADVANCE(642);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 172:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 194:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      END_STATE();
    case 195:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(302);
      END_STATE();
    case 196:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 237:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 238:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 239:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 240:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 241:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(362);
      END_STATE();
    case 242:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 250:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 251:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 258:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 285:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 286:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 287:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 288:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 290:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 291:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 292:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 293:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 294:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 308:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 309:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      END_STATE();
    case 311:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      END_STATE();
    case 312:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 313:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 314:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 315:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(277);
      END_STATE();
    case 316:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      END_STATE();
    case 317:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 319:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 351:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 352:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 353:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 354:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 355:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 356:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 357:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 358:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 359:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 360:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 361:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 362:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 363:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 364:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 365:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(264);
      END_STATE();
    case 366:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      END_STATE();
    case 367:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      END_STATE();
    case 368:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(281);
      END_STATE();
    case 369:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(269);
      END_STATE();
    case 370:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 371:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 372:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(722);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 373:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 374:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(554);
      END_STATE();
    case 375:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(642);
      END_STATE();
    case 376:
      if (eof) ADVANCE(380);
      if (lookahead == '\t') ADVANCE(757);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(761);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '*') ADVANCE(499);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 377:
      if (eof) ADVANCE(380);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '$') ADVANCE(161);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(764);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 378:
      if (eof) ADVANCE(380);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '*') ADVANCE(499);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(763);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 379:
      if (eof) ADVANCE(380);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == '}') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(381);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(381);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(485);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(489);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token6);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token6);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token6);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(760);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(756);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(752);
      if (lookahead == '{') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(754);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(754);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(752);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(754);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(755);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(755);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(755);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(500);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '.') ADVANCE(508);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(545);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(522);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(534);
      if (lookahead == 'O') ADVANCE(541);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'K') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(543);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == 'X') ADVANCE(511);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O') ADVANCE(533);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O') ADVANCE(541);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'P') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(514);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(550);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'Y') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'Y') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '{') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'M' &&
          lookahead != 'a' &&
          lookahead != 'm') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(630);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(630);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(630);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(630);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(630);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(630);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(630);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(630);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(630);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(630);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(630);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(630);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(630);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(630);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(630);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(630);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(630);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(630);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(630);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(630);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(630);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(741);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(630);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(630);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(630);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(630);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(630);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(747);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(630);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(630);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(630);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(630);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(630);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(630);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(630);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(630);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(630);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(169);
      if (lookahead != 0) ADVANCE(722);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'M' &&
          lookahead != 'a' &&
          lookahead != 'm') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(683);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(722);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(722);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(722);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(722);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(722);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(722);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(722);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(722);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(722);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(722);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(722);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(722);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(722);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(722);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(722);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(732);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(736);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(722);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(722);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(722);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(722);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(722);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(688);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(722);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(722);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(722);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(722);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(722);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(722);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(722);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(722);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(722);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(722);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(722);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(722);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(722);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(713);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(722);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(166);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(589);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(167);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(630);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(563);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == ']') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ']') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == ']') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == ']') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == ']') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == ']') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == ']') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == ']') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ']') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == ']') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(554);
      if (lookahead == '{') ADVANCE(756);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(642);
      if (lookahead == '{') ADVANCE(756);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(755);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(755);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(760);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(760);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(764);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(764);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(764);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(764);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(554);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 379},
  [2] = {.lex_state = 377},
  [3] = {.lex_state = 377},
  [4] = {.lex_state = 377},
  [5] = {.lex_state = 377},
  [6] = {.lex_state = 377},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 377},
  [10] = {.lex_state = 377},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 376},
  [17] = {.lex_state = 376},
  [18] = {.lex_state = 376},
  [19] = {.lex_state = 376},
  [20] = {.lex_state = 378},
  [21] = {.lex_state = 378},
  [22] = {.lex_state = 378},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 378},
  [25] = {.lex_state = 377},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 377},
  [28] = {.lex_state = 378},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 378},
  [31] = {.lex_state = 378},
  [32] = {.lex_state = 378},
  [33] = {.lex_state = 378},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 378},
  [36] = {.lex_state = 377},
  [37] = {.lex_state = 377},
  [38] = {.lex_state = 377},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 376},
  [55] = {.lex_state = 376},
  [56] = {.lex_state = 376},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 377},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 378},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 378},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 377},
  [69] = {.lex_state = 378},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 46},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 379},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 379},
  [159] = {.lex_state = 46},
  [160] = {.lex_state = 46},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 9},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 13},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 47},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 47},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 47},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 379},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 47},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 379},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 379},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 47},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 379},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 379},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 379},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 379},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 9},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 379},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 379},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 379},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 379},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 379},
  [336] = {.lex_state = 379},
  [337] = {.lex_state = 379},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 379},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 379},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 379},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 379},
  [351] = {.lex_state = 379},
  [352] = {.lex_state = 379},
  [353] = {.lex_state = 379},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 379},
  [358] = {.lex_state = 379},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 47},
  [363] = {.lex_state = 47},
  [364] = {.lex_state = 47},
  [365] = {.lex_state = 47},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 47},
  [370] = {.lex_state = 47},
  [371] = {.lex_state = 47},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token1] = ACTIONS(1),
    [aux_sym_setting_name_token1] = ACTIONS(1),
    [aux_sym_setting_name_token2] = ACTIONS(1),
    [aux_sym_setting_name_token3] = ACTIONS(1),
    [aux_sym_setting_name_token4] = ACTIONS(1),
    [aux_sym_setting_name_token5] = ACTIONS(1),
    [aux_sym_setting_name_token6] = ACTIONS(1),
    [aux_sym_setting_name_token7] = ACTIONS(1),
    [aux_sym_setting_name_token8] = ACTIONS(1),
    [aux_sym_setting_name_token9] = ACTIONS(1),
    [aux_sym_setting_name_token10] = ACTIONS(1),
    [aux_sym_setting_name_token11] = ACTIONS(1),
    [aux_sym_setting_name_token12] = ACTIONS(1),
    [aux_sym_setting_name_token13] = ACTIONS(1),
    [aux_sym_setting_name_token14] = ACTIONS(1),
    [aux_sym_setting_name_token15] = ACTIONS(1),
    [aux_sym_setting_name_token16] = ACTIONS(1),
    [aux_sym_setting_name_token17] = ACTIONS(1),
    [aux_sym_variables_section_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_keywords_section_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token5] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token6] = ACTIONS(1),
    [aux_sym_test_cases_section_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_name_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_name_token2] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_EXCEPT] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_INRANGE] = ACTIONS(1),
    [anon_sym_INENUMERATE] = ACTIONS(1),
    [anon_sym_INZIP] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(295),
    [sym_section] = STATE(29),
    [sym_settings_section] = STATE(141),
    [sym_variables_section] = STATE(141),
    [sym_keywords_section] = STATE(141),
    [sym_test_cases_section] = STATE(141),
    [aux_sym_source_file_repeat1] = STATE(29),
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
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(23), 1,
      sym__line_break,
    STATE(89), 1,
      sym_setting_name,
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
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [44] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      aux_sym__whitespace_token1,
    ACTIONS(33), 1,
      sym__line_break,
    STATE(89), 1,
      sym_setting_name,
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
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(38), 1,
      sym__line_break,
    STATE(89), 1,
      sym_setting_name,
    STATE(6), 3,
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
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(89), 1,
      sym_setting_name,
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
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(89), 1,
      sym_setting_name,
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
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [220] = 13,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(97), 1,
      sym_keyword_setting_name,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(309), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(46), 6,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_keyword_setting_name_token6,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [274] = 13,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(101), 1,
      sym_test_case_setting_name,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(258), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(64), 6,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token5,
      aux_sym_keyword_setting_name_token6,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym__whitespace_token1,
    ACTIONS(66), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym__whitespace_token1,
    ACTIONS(70), 23,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [393] = 15,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_END,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(78), 1,
      anon_sym_EXCEPT,
    ACTIONS(80), 1,
      anon_sym_FINALLY,
    STATE(265), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [447] = 14,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(82), 1,
      anon_sym_END,
    ACTIONS(84), 1,
      anon_sym_ELSEIF,
    STATE(265), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [498] = 12,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_END,
    STATE(265), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [543] = 12,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
    STATE(265), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [588] = 11,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(265), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [630] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(98), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [660] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym__separator,
    ACTIONS(106), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(102), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [690] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(115), 1,
      aux_sym__whitespace_token1,
    ACTIONS(118), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(110), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [720] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym__separator,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(131), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(123), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [750] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym__line_break,
    STATE(32), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [777] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      sym__line_break,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(146), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [804] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      sym__line_break,
    STATE(33), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(154), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      aux_sym_settings_section_token1,
    ACTIONS(163), 1,
      aux_sym_variables_section_token1,
    ACTIONS(166), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(169), 1,
      aux_sym_test_cases_section_token1,
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(141), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [860] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym_text_chunk,
    ACTIONS(179), 1,
      aux_sym__whitespace_token1,
    ACTIONS(182), 1,
      sym__line_break,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(174), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [912] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__separator,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(90), 1,
      sym_block,
    STATE(182), 1,
      sym_else_statement,
    STATE(244), 1,
      sym_finally_statement,
    STATE(87), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [970] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym_text_chunk,
    ACTIONS(206), 1,
      aux_sym__whitespace_token1,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(201), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [997] = 8,
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
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(141), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1026] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(214), 1,
      sym__line_break,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1053] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(218), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1080] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(214), 1,
      sym__line_break,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(224), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1107] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      sym__line_break,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(218), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1134] = 8,
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
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(141), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1163] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(228), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(237), 1,
      aux_sym__whitespace_token1,
    ACTIONS(240), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(232), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      sym__line_break,
    STATE(27), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1265] = 8,
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
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(141), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1294] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_text_chunk,
    STATE(257), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1322] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text_chunk,
    STATE(261), 1,
      sym_argument,
    STATE(61), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1350] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_text_chunk,
    STATE(240), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1378] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_text_chunk,
    STATE(259), 1,
      sym_argument,
    STATE(70), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1406] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_text_chunk,
    STATE(203), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1434] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_text_chunk,
    STATE(268), 1,
      sym_argument,
    STATE(70), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1462] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(281), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(113), 1,
      aux_sym_if_statement_repeat1,
    STATE(131), 1,
      sym_block,
    STATE(197), 1,
      sym_else_statement,
    STATE(368), 1,
      sym_elseif_statement,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1494] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_text_chunk,
    STATE(241), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1522] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_IN,
    ACTIONS(287), 1,
      anon_sym_INRANGE,
    ACTIONS(289), 1,
      anon_sym_INENUMERATE,
    ACTIONS(291), 1,
      anon_sym_INZIP,
    STATE(288), 1,
      sym_scalar_variable,
    STATE(372), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1550] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_text_chunk,
    STATE(227), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1578] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_text_chunk,
    STATE(240), 1,
      sym_argument,
    STATE(70), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1606] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(293), 1,
      anon_sym_SPACE,
    ACTIONS(295), 1,
      sym_text_chunk,
    ACTIONS(297), 2,
      sym__separator,
      sym__line_break,
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1631] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(302), 1,
      anon_sym_SPACE,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(308), 1,
      sym_text_chunk,
    ACTIONS(311), 2,
      sym__separator,
      sym__line_break,
    STATE(52), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1656] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(293), 1,
      anon_sym_SPACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    ACTIONS(315), 2,
      sym__separator,
      sym__line_break,
    STATE(52), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1681] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1698] = 3,
    ACTIONS(62), 1,
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
  [1715] = 3,
    ACTIONS(62), 1,
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
  [1732] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(325), 1,
      sym_ellipses,
    ACTIONS(327), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(330), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1758] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__line_break,
    ACTIONS(330), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(333), 1,
      anon_sym_SPACE,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(58), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1782] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__separator,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(345), 1,
      anon_sym_SPACE,
    ACTIONS(348), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(351), 1,
      sym_text_chunk,
    STATE(59), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1806] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym__separator,
    ACTIONS(354), 1,
      anon_sym_SPACE,
    ACTIONS(356), 1,
      sym_text_chunk,
    STATE(59), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1830] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__separator,
    ACTIONS(354), 1,
      anon_sym_SPACE,
    ACTIONS(358), 1,
      sym_text_chunk,
    STATE(60), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym__whitespace_token1,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1870] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__separator,
    ACTIONS(369), 1,
      sym__line_break,
    STATE(115), 1,
      aux_sym_arguments_repeat1,
    STATE(248), 1,
      sym_arguments,
    ACTIONS(364), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(148), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1894] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1910] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(287), 1,
      sym_arguments,
    ACTIONS(372), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1934] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(384), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(248), 1,
      sym_arguments,
    ACTIONS(382), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__whitespace_token1,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1990] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2006] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__line_break,
    ACTIONS(395), 1,
      anon_sym_SPACE,
    ACTIONS(397), 1,
      sym_text_chunk,
    STATE(71), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2030] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(395), 1,
      anon_sym_SPACE,
    ACTIONS(399), 1,
      sym_text_chunk,
    STATE(58), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2054] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(104), 1,
      sym__separator,
    ACTIONS(401), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(69), 1,
      sym_test_case_definition_body,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2077] = 6,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(262), 1,
      sym_inline_statement,
    STATE(195), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(403), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(328), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2121] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(406), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(66), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(408), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(267), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2167] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(412), 1,
      anon_sym_RETURN,
    ACTIONS(414), 1,
      sym_text_chunk,
    STATE(181), 1,
      sym_inline_statement,
    STATE(195), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2188] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(408), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(332), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(416), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(291), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(419), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(239), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(408), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(228), 1,
      sym_block,
    STATE(88), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2280] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(412), 1,
      anon_sym_RETURN,
    ACTIONS(414), 1,
      sym_text_chunk,
    STATE(256), 1,
      sym_inline_statement,
    STATE(195), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2301] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(421), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(190), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(320), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(345), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2375] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__separator,
    STATE(158), 1,
      sym__indentation,
    STATE(165), 1,
      sym_else_statement,
    STATE(251), 1,
      sym_finally_statement,
    STATE(152), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    ACTIONS(430), 1,
      sym__separator,
    ACTIONS(433), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(105), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(264), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2435] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__separator,
    STATE(158), 1,
      sym__indentation,
    STATE(165), 1,
      sym_else_statement,
    STATE(251), 1,
      sym_finally_statement,
    STATE(99), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2455] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(435), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2469] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(439), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2483] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(443), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2497] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(447), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(451), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2531] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(454), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(312), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2565] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(458), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__separator,
    STATE(149), 1,
      sym__indentation,
    STATE(175), 1,
      sym_else_statement,
    STATE(201), 1,
      sym_finally_statement,
    STATE(152), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2599] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(311), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(311), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2633] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym__separator,
    ACTIONS(469), 1,
      sym__line_break,
    STATE(115), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(148), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2653] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(472), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(360), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2673] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym__separator,
    ACTIONS(481), 1,
      aux_sym__whitespace_token1,
    ACTIONS(484), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(105), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__separator,
    ACTIONS(490), 1,
      sym__line_break,
    STATE(115), 1,
      aux_sym_arguments_repeat1,
    STATE(190), 1,
      sym_arguments,
    STATE(148), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2727] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(349), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(347), 1,
      sym_arguments,
    STATE(169), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2781] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(497), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2795] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2809] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_if_statement_repeat1,
    STATE(185), 1,
      sym__indentation,
    STATE(217), 1,
      sym_else_statement,
    STATE(368), 1,
      sym_elseif_statement,
  [2841] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(507), 1,
      sym_text_chunk,
    STATE(135), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__separator,
    ACTIONS(512), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2875] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(439), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2888] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(515), 1,
      sym_text_chunk,
    STATE(122), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2905] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2918] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(497), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2931] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2944] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(517), 1,
      sym_text_chunk,
    STATE(100), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2961] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(311), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2974] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(454), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2987] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(447), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
    STATE(176), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3017] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(421), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3030] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(454), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3043] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3056] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(443), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3069] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(435), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__separator,
    STATE(140), 1,
      aux_sym_if_statement_repeat1,
    STATE(179), 1,
      sym__indentation,
    STATE(214), 1,
      sym_else_statement,
    STATE(368), 1,
      sym_elseif_statement,
  [3101] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(458), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3114] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(443), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3127] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(447), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3140] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(311), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3153] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3166] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(497), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3179] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3192] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(439), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_if_statement_repeat1,
    STATE(170), 1,
      sym__indentation,
    STATE(238), 1,
      sym_else_statement,
    STATE(368), 1,
      sym_elseif_statement,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3235] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(435), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3248] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(458), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3261] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(421), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_ELSEIF,
    ACTIONS(530), 1,
      anon_sym_ELSE,
    STATE(231), 1,
      sym_inline_elseif_statement,
    STATE(322), 1,
      sym_inline_else_statement,
  [3290] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3304] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym__line_break,
    ACTIONS(538), 1,
      sym__separator,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
    ACTIONS(542), 1,
      anon_sym_ELSE,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
  [3348] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(159), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_ELSEIF,
    ACTIONS(530), 1,
      anon_sym_ELSE,
    STATE(231), 1,
      sym_inline_elseif_statement,
    STATE(281), 1,
      sym_inline_else_statement,
  [3378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__separator,
    STATE(359), 1,
      sym__indentation,
    STATE(152), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_if_statement_repeat1,
    STATE(296), 1,
      sym__indentation,
    STATE(368), 1,
      sym_elseif_statement,
  [3408] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3422] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(558), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__separator,
    ACTIONS(565), 1,
      sym__line_break,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__separator,
    ACTIONS(570), 1,
      sym__line_break,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_ELSE,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(573), 1,
      anon_sym_END,
  [3480] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3494] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(147), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(579), 1,
      sym__line_break,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
    STATE(301), 1,
      sym_arguments_without_continuation,
  [3524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(581), 1,
      sym__line_break,
    STATE(171), 1,
      aux_sym_arguments_repeat1,
  [3537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__line_break,
    ACTIONS(583), 1,
      sym__separator,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(589), 1,
      sym__line_break,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
  [3563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__separator,
    STATE(201), 1,
      sym_finally_statement,
    STATE(202), 1,
      sym__indentation,
  [3576] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(593), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_ellipses,
    ACTIONS(597), 1,
      sym__separator,
    STATE(367), 1,
      sym__indentation,
  [3600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__line_break,
    ACTIONS(583), 1,
      sym__separator,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(599), 1,
      anon_sym_END,
    ACTIONS(601), 1,
      anon_sym_ELSEIF,
  [3637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(603), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__separator,
    ACTIONS(608), 1,
      sym__line_break,
    STATE(172), 1,
      aux_sym_inline_if_statement_repeat1,
  [3663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(581), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__separator,
    STATE(220), 1,
      sym_finally_statement,
    STATE(221), 1,
      sym__indentation,
  [3700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__line_break,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(618), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(589), 1,
      sym__line_break,
    STATE(173), 1,
      aux_sym_arguments_repeat1,
  [3737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(601), 1,
      anon_sym_ELSEIF,
    ACTIONS(620), 1,
      anon_sym_END,
  [3750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__line_break,
    ACTIONS(622), 1,
      sym__separator,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__separator,
    ACTIONS(627), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_inline_if_statement_repeat1,
  [3776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__separator,
    STATE(251), 1,
      sym_finally_statement,
    STATE(253), 1,
      sym__indentation,
  [3789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__line_break,
    ACTIONS(631), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
    STATE(317), 1,
      sym_arguments_without_continuation,
  [3813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(601), 1,
      anon_sym_ELSEIF,
    ACTIONS(635), 1,
      anon_sym_END,
  [3826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__separator,
    ACTIONS(640), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym__line_break,
    ACTIONS(68), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym__separator,
    ACTIONS(644), 1,
      sym__line_break,
    STATE(172), 1,
      aux_sym_inline_if_statement_repeat1,
  [3863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_ellipses,
    ACTIONS(648), 1,
      sym__separator,
    STATE(319), 1,
      sym__indentation,
  [3876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__separator,
    ACTIONS(652), 1,
      sym__line_break,
  [3886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
    ACTIONS(656), 1,
      sym__line_break,
  [3896] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_settings_section_token2,
    ACTIONS(660), 1,
      sym__line_break,
  [3906] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_SPACE,
    ACTIONS(664), 1,
      sym_variable_name,
  [3916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__separator,
    ACTIONS(668), 1,
      sym__line_break,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__separator,
    ACTIONS(672), 1,
      sym__line_break,
  [3936] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SPACE,
    ACTIONS(676), 1,
      sym_variable_name,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__separator,
    STATE(344), 1,
      sym__indentation,
  [3956] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SPACE,
    ACTIONS(682), 1,
      sym_variable_name,
  [3966] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SPACE,
    ACTIONS(686), 1,
      sym_variable_name,
  [3976] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SPACE,
    ACTIONS(690), 1,
      sym_variable_name,
  [3986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
    STATE(339), 1,
      sym__indentation,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__line_break,
    ACTIONS(694), 1,
      sym__separator,
  [4016] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SPACE,
    ACTIONS(698), 1,
      sym_variable_name,
  [4026] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SPACE,
    ACTIONS(702), 1,
      sym_variable_name,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(706), 1,
      anon_sym_SPACE,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_SPACE,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      anon_sym_SPACE,
  [4066] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SPACE,
    ACTIONS(718), 1,
      sym_variable_name,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(722), 1,
      anon_sym_SPACE,
  [4086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(726), 1,
      anon_sym_SPACE,
  [4096] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_SPACE,
    ACTIONS(730), 1,
      sym_variable_name,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_SPACE,
  [4116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    STATE(304), 1,
      sym__indentation,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(740), 1,
      anon_sym_SPACE,
  [4136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 1,
      anon_sym_SPACE,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym__separator,
    STATE(300), 1,
      sym__indentation,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      anon_sym_SPACE,
  [4166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 1,
      anon_sym_SPACE,
  [4176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym__separator,
    STATE(292), 1,
      sym__indentation,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(758), 1,
      anon_sym_END,
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      anon_sym_SPACE,
  [4206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(766), 1,
      anon_sym_SPACE,
  [4216] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SPACE,
    ACTIONS(770), 1,
      sym_variable_name,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(774), 1,
      anon_sym_SPACE,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(778), 1,
      anon_sym_SPACE,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__separator,
    ACTIONS(782), 1,
      sym__line_break,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym__separator,
    STATE(283), 1,
      sym__indentation,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 1,
      anon_sym_SPACE,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      anon_sym_SPACE,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__line_break,
    ACTIONS(794), 1,
      sym__separator,
  [4296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    ACTIONS(798), 1,
      anon_sym_SPACE,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(288), 1,
      sym_scalar_variable,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__separator,
    STATE(247), 1,
      aux_sym_for_statement_repeat1,
  [4326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__separator,
    ACTIONS(804), 1,
      sym__line_break,
  [4336] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(806), 1,
      aux_sym_settings_section_token2,
    ACTIONS(808), 1,
      sym__line_break,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__separator,
    STATE(234), 1,
      aux_sym_for_statement_repeat1,
  [4356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__separator,
    STATE(278), 1,
      sym__indentation,
  [4366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__separator,
    STATE(356), 1,
      sym__indentation,
  [4376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__separator,
    ACTIONS(818), 1,
      sym__line_break,
  [4386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__separator,
    ACTIONS(822), 1,
      sym__line_break,
  [4396] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(824), 1,
      aux_sym_settings_section_token2,
    ACTIONS(826), 1,
      sym__line_break,
  [4406] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym_settings_section_token2,
    ACTIONS(830), 1,
      sym__line_break,
  [4416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__separator,
    STATE(276), 1,
      sym__indentation,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__line_break,
    ACTIONS(834), 1,
      sym__separator,
  [4436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__separator,
    ACTIONS(838), 1,
      sym__line_break,
  [4446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__separator,
    STATE(247), 1,
      aux_sym_for_statement_repeat1,
  [4456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__separator,
    ACTIONS(845), 1,
      sym__line_break,
  [4466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    ACTIONS(849), 1,
      anon_sym_SPACE,
  [4476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_SPACE,
  [4486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__separator,
    STATE(366), 1,
      sym__indentation,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_ELSEIF,
    STATE(231), 1,
      sym_inline_elseif_statement,
  [4506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(573), 1,
      anon_sym_END,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__separator,
    ACTIONS(859), 1,
      sym__line_break,
  [4526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    ACTIONS(863), 1,
      anon_sym_SPACE,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__separator,
    ACTIONS(867), 1,
      sym__line_break,
  [4546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__separator,
    ACTIONS(871), 1,
      sym__line_break,
  [4556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__line_break,
  [4563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__line_break,
  [4570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__line_break,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym__separator,
  [4584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__line_break,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym__line_break,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym__line_break,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__line_break,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__separator,
  [4626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym__line_break,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym__line_break,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym__line_break,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym__line_break,
  [4654] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_variable_name,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__line_break,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__line_break,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__line_break,
  [4682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_END,
  [4689] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_variable_name,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_END,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__line_break,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym__line_break,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__line_break,
  [4724] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym_variable_name,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_END,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__line_break,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__line_break,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__line_break,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym__separator,
  [4773] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_variable_name,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__line_break,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__separator,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_END,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__separator,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__line_break,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_ELSEIF,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__line_break,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_END,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym__line_break,
  [4864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__line_break,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_END,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym__separator,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__line_break,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__separator,
  [4913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__line_break,
  [4920] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_variable_name,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym__line_break,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym__line_break,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__line_break,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__line_break,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
  [4969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__line_break,
  [4976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_ellipses,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__line_break,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__line_break,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__separator,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__separator,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__line_break,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym__separator,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__separator,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__separator,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__separator,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__line_break,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_RBRACE,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym__line_break,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_END,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__line_break,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__separator,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym__line_break,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_END,
  [5165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__line_break,
  [5172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__line_break,
  [5186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym__line_break,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
  [5214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
  [5228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__line_break,
  [5235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__line_break,
  [5242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_END,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [5256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
  [5263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
  [5270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym__line_break,
  [5277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym__line_break,
  [5284] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_variable_name,
  [5291] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym_variable_name,
  [5298] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_variable_name,
  [5305] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_variable_name,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
  [5319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_ellipses,
  [5326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym__separator,
  [5333] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_variable_name,
  [5340] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym_variable_name,
  [5347] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_variable_name,
  [5354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym__line_break,
  [5361] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 328,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 498,
  [SMALL_STATE(14)] = 543,
  [SMALL_STATE(15)] = 588,
  [SMALL_STATE(16)] = 630,
  [SMALL_STATE(17)] = 660,
  [SMALL_STATE(18)] = 690,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 750,
  [SMALL_STATE(21)] = 777,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 860,
  [SMALL_STATE(25)] = 887,
  [SMALL_STATE(26)] = 912,
  [SMALL_STATE(27)] = 945,
  [SMALL_STATE(28)] = 970,
  [SMALL_STATE(29)] = 997,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1053,
  [SMALL_STATE(32)] = 1080,
  [SMALL_STATE(33)] = 1107,
  [SMALL_STATE(34)] = 1134,
  [SMALL_STATE(35)] = 1163,
  [SMALL_STATE(36)] = 1190,
  [SMALL_STATE(37)] = 1215,
  [SMALL_STATE(38)] = 1240,
  [SMALL_STATE(39)] = 1265,
  [SMALL_STATE(40)] = 1294,
  [SMALL_STATE(41)] = 1322,
  [SMALL_STATE(42)] = 1350,
  [SMALL_STATE(43)] = 1378,
  [SMALL_STATE(44)] = 1406,
  [SMALL_STATE(45)] = 1434,
  [SMALL_STATE(46)] = 1462,
  [SMALL_STATE(47)] = 1494,
  [SMALL_STATE(48)] = 1522,
  [SMALL_STATE(49)] = 1550,
  [SMALL_STATE(50)] = 1578,
  [SMALL_STATE(51)] = 1606,
  [SMALL_STATE(52)] = 1631,
  [SMALL_STATE(53)] = 1656,
  [SMALL_STATE(54)] = 1681,
  [SMALL_STATE(55)] = 1698,
  [SMALL_STATE(56)] = 1715,
  [SMALL_STATE(57)] = 1732,
  [SMALL_STATE(58)] = 1758,
  [SMALL_STATE(59)] = 1782,
  [SMALL_STATE(60)] = 1806,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1854,
  [SMALL_STATE(63)] = 1870,
  [SMALL_STATE(64)] = 1894,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1934,
  [SMALL_STATE(67)] = 1950,
  [SMALL_STATE(68)] = 1974,
  [SMALL_STATE(69)] = 1990,
  [SMALL_STATE(70)] = 2006,
  [SMALL_STATE(71)] = 2030,
  [SMALL_STATE(72)] = 2054,
  [SMALL_STATE(73)] = 2077,
  [SMALL_STATE(74)] = 2098,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2144,
  [SMALL_STATE(77)] = 2167,
  [SMALL_STATE(78)] = 2188,
  [SMALL_STATE(79)] = 2211,
  [SMALL_STATE(80)] = 2234,
  [SMALL_STATE(81)] = 2257,
  [SMALL_STATE(82)] = 2280,
  [SMALL_STATE(83)] = 2301,
  [SMALL_STATE(84)] = 2315,
  [SMALL_STATE(85)] = 2335,
  [SMALL_STATE(86)] = 2355,
  [SMALL_STATE(87)] = 2375,
  [SMALL_STATE(88)] = 2395,
  [SMALL_STATE(89)] = 2415,
  [SMALL_STATE(90)] = 2435,
  [SMALL_STATE(91)] = 2455,
  [SMALL_STATE(92)] = 2469,
  [SMALL_STATE(93)] = 2483,
  [SMALL_STATE(94)] = 2497,
  [SMALL_STATE(95)] = 2511,
  [SMALL_STATE(96)] = 2531,
  [SMALL_STATE(97)] = 2545,
  [SMALL_STATE(98)] = 2565,
  [SMALL_STATE(99)] = 2579,
  [SMALL_STATE(100)] = 2599,
  [SMALL_STATE(101)] = 2613,
  [SMALL_STATE(102)] = 2633,
  [SMALL_STATE(103)] = 2653,
  [SMALL_STATE(104)] = 2673,
  [SMALL_STATE(105)] = 2687,
  [SMALL_STATE(106)] = 2707,
  [SMALL_STATE(107)] = 2727,
  [SMALL_STATE(108)] = 2741,
  [SMALL_STATE(109)] = 2761,
  [SMALL_STATE(110)] = 2781,
  [SMALL_STATE(111)] = 2795,
  [SMALL_STATE(112)] = 2809,
  [SMALL_STATE(113)] = 2822,
  [SMALL_STATE(114)] = 2841,
  [SMALL_STATE(115)] = 2858,
  [SMALL_STATE(116)] = 2875,
  [SMALL_STATE(117)] = 2888,
  [SMALL_STATE(118)] = 2905,
  [SMALL_STATE(119)] = 2918,
  [SMALL_STATE(120)] = 2931,
  [SMALL_STATE(121)] = 2944,
  [SMALL_STATE(122)] = 2961,
  [SMALL_STATE(123)] = 2974,
  [SMALL_STATE(124)] = 2987,
  [SMALL_STATE(125)] = 3000,
  [SMALL_STATE(126)] = 3017,
  [SMALL_STATE(127)] = 3030,
  [SMALL_STATE(128)] = 3043,
  [SMALL_STATE(129)] = 3056,
  [SMALL_STATE(130)] = 3069,
  [SMALL_STATE(131)] = 3082,
  [SMALL_STATE(132)] = 3101,
  [SMALL_STATE(133)] = 3114,
  [SMALL_STATE(134)] = 3127,
  [SMALL_STATE(135)] = 3140,
  [SMALL_STATE(136)] = 3153,
  [SMALL_STATE(137)] = 3166,
  [SMALL_STATE(138)] = 3179,
  [SMALL_STATE(139)] = 3192,
  [SMALL_STATE(140)] = 3205,
  [SMALL_STATE(141)] = 3224,
  [SMALL_STATE(142)] = 3235,
  [SMALL_STATE(143)] = 3248,
  [SMALL_STATE(144)] = 3261,
  [SMALL_STATE(145)] = 3274,
  [SMALL_STATE(146)] = 3290,
  [SMALL_STATE(147)] = 3304,
  [SMALL_STATE(148)] = 3318,
  [SMALL_STATE(149)] = 3332,
  [SMALL_STATE(150)] = 3348,
  [SMALL_STATE(151)] = 3362,
  [SMALL_STATE(152)] = 3378,
  [SMALL_STATE(153)] = 3392,
  [SMALL_STATE(154)] = 3408,
  [SMALL_STATE(155)] = 3422,
  [SMALL_STATE(156)] = 3436,
  [SMALL_STATE(157)] = 3450,
  [SMALL_STATE(158)] = 3464,
  [SMALL_STATE(159)] = 3480,
  [SMALL_STATE(160)] = 3494,
  [SMALL_STATE(161)] = 3508,
  [SMALL_STATE(162)] = 3524,
  [SMALL_STATE(163)] = 3537,
  [SMALL_STATE(164)] = 3550,
  [SMALL_STATE(165)] = 3563,
  [SMALL_STATE(166)] = 3576,
  [SMALL_STATE(167)] = 3587,
  [SMALL_STATE(168)] = 3600,
  [SMALL_STATE(169)] = 3613,
  [SMALL_STATE(170)] = 3624,
  [SMALL_STATE(171)] = 3637,
  [SMALL_STATE(172)] = 3650,
  [SMALL_STATE(173)] = 3663,
  [SMALL_STATE(174)] = 3676,
  [SMALL_STATE(175)] = 3687,
  [SMALL_STATE(176)] = 3700,
  [SMALL_STATE(177)] = 3711,
  [SMALL_STATE(178)] = 3724,
  [SMALL_STATE(179)] = 3737,
  [SMALL_STATE(180)] = 3750,
  [SMALL_STATE(181)] = 3763,
  [SMALL_STATE(182)] = 3776,
  [SMALL_STATE(183)] = 3789,
  [SMALL_STATE(184)] = 3800,
  [SMALL_STATE(185)] = 3813,
  [SMALL_STATE(186)] = 3826,
  [SMALL_STATE(187)] = 3839,
  [SMALL_STATE(188)] = 3850,
  [SMALL_STATE(189)] = 3863,
  [SMALL_STATE(190)] = 3876,
  [SMALL_STATE(191)] = 3886,
  [SMALL_STATE(192)] = 3896,
  [SMALL_STATE(193)] = 3906,
  [SMALL_STATE(194)] = 3916,
  [SMALL_STATE(195)] = 3926,
  [SMALL_STATE(196)] = 3936,
  [SMALL_STATE(197)] = 3946,
  [SMALL_STATE(198)] = 3956,
  [SMALL_STATE(199)] = 3966,
  [SMALL_STATE(200)] = 3976,
  [SMALL_STATE(201)] = 3986,
  [SMALL_STATE(202)] = 3996,
  [SMALL_STATE(203)] = 4006,
  [SMALL_STATE(204)] = 4016,
  [SMALL_STATE(205)] = 4026,
  [SMALL_STATE(206)] = 4036,
  [SMALL_STATE(207)] = 4046,
  [SMALL_STATE(208)] = 4056,
  [SMALL_STATE(209)] = 4066,
  [SMALL_STATE(210)] = 4076,
  [SMALL_STATE(211)] = 4086,
  [SMALL_STATE(212)] = 4096,
  [SMALL_STATE(213)] = 4106,
  [SMALL_STATE(214)] = 4116,
  [SMALL_STATE(215)] = 4126,
  [SMALL_STATE(216)] = 4136,
  [SMALL_STATE(217)] = 4146,
  [SMALL_STATE(218)] = 4156,
  [SMALL_STATE(219)] = 4166,
  [SMALL_STATE(220)] = 4176,
  [SMALL_STATE(221)] = 4186,
  [SMALL_STATE(222)] = 4196,
  [SMALL_STATE(223)] = 4206,
  [SMALL_STATE(224)] = 4216,
  [SMALL_STATE(225)] = 4226,
  [SMALL_STATE(226)] = 4236,
  [SMALL_STATE(227)] = 4246,
  [SMALL_STATE(228)] = 4256,
  [SMALL_STATE(229)] = 4266,
  [SMALL_STATE(230)] = 4276,
  [SMALL_STATE(231)] = 4286,
  [SMALL_STATE(232)] = 4296,
  [SMALL_STATE(233)] = 4306,
  [SMALL_STATE(234)] = 4316,
  [SMALL_STATE(235)] = 4326,
  [SMALL_STATE(236)] = 4336,
  [SMALL_STATE(237)] = 4346,
  [SMALL_STATE(238)] = 4356,
  [SMALL_STATE(239)] = 4366,
  [SMALL_STATE(240)] = 4376,
  [SMALL_STATE(241)] = 4386,
  [SMALL_STATE(242)] = 4396,
  [SMALL_STATE(243)] = 4406,
  [SMALL_STATE(244)] = 4416,
  [SMALL_STATE(245)] = 4426,
  [SMALL_STATE(246)] = 4436,
  [SMALL_STATE(247)] = 4446,
  [SMALL_STATE(248)] = 4456,
  [SMALL_STATE(249)] = 4466,
  [SMALL_STATE(250)] = 4476,
  [SMALL_STATE(251)] = 4486,
  [SMALL_STATE(252)] = 4496,
  [SMALL_STATE(253)] = 4506,
  [SMALL_STATE(254)] = 4516,
  [SMALL_STATE(255)] = 4526,
  [SMALL_STATE(256)] = 4536,
  [SMALL_STATE(257)] = 4546,
  [SMALL_STATE(258)] = 4556,
  [SMALL_STATE(259)] = 4563,
  [SMALL_STATE(260)] = 4570,
  [SMALL_STATE(261)] = 4577,
  [SMALL_STATE(262)] = 4584,
  [SMALL_STATE(263)] = 4591,
  [SMALL_STATE(264)] = 4598,
  [SMALL_STATE(265)] = 4605,
  [SMALL_STATE(266)] = 4612,
  [SMALL_STATE(267)] = 4619,
  [SMALL_STATE(268)] = 4626,
  [SMALL_STATE(269)] = 4633,
  [SMALL_STATE(270)] = 4640,
  [SMALL_STATE(271)] = 4647,
  [SMALL_STATE(272)] = 4654,
  [SMALL_STATE(273)] = 4661,
  [SMALL_STATE(274)] = 4668,
  [SMALL_STATE(275)] = 4675,
  [SMALL_STATE(276)] = 4682,
  [SMALL_STATE(277)] = 4689,
  [SMALL_STATE(278)] = 4696,
  [SMALL_STATE(279)] = 4703,
  [SMALL_STATE(280)] = 4710,
  [SMALL_STATE(281)] = 4717,
  [SMALL_STATE(282)] = 4724,
  [SMALL_STATE(283)] = 4731,
  [SMALL_STATE(284)] = 4738,
  [SMALL_STATE(285)] = 4745,
  [SMALL_STATE(286)] = 4752,
  [SMALL_STATE(287)] = 4759,
  [SMALL_STATE(288)] = 4766,
  [SMALL_STATE(289)] = 4773,
  [SMALL_STATE(290)] = 4780,
  [SMALL_STATE(291)] = 4787,
  [SMALL_STATE(292)] = 4794,
  [SMALL_STATE(293)] = 4801,
  [SMALL_STATE(294)] = 4808,
  [SMALL_STATE(295)] = 4815,
  [SMALL_STATE(296)] = 4822,
  [SMALL_STATE(297)] = 4829,
  [SMALL_STATE(298)] = 4836,
  [SMALL_STATE(299)] = 4843,
  [SMALL_STATE(300)] = 4850,
  [SMALL_STATE(301)] = 4857,
  [SMALL_STATE(302)] = 4864,
  [SMALL_STATE(303)] = 4871,
  [SMALL_STATE(304)] = 4878,
  [SMALL_STATE(305)] = 4885,
  [SMALL_STATE(306)] = 4892,
  [SMALL_STATE(307)] = 4899,
  [SMALL_STATE(308)] = 4906,
  [SMALL_STATE(309)] = 4913,
  [SMALL_STATE(310)] = 4920,
  [SMALL_STATE(311)] = 4927,
  [SMALL_STATE(312)] = 4934,
  [SMALL_STATE(313)] = 4941,
  [SMALL_STATE(314)] = 4948,
  [SMALL_STATE(315)] = 4955,
  [SMALL_STATE(316)] = 4962,
  [SMALL_STATE(317)] = 4969,
  [SMALL_STATE(318)] = 4976,
  [SMALL_STATE(319)] = 4983,
  [SMALL_STATE(320)] = 4990,
  [SMALL_STATE(321)] = 4997,
  [SMALL_STATE(322)] = 5004,
  [SMALL_STATE(323)] = 5011,
  [SMALL_STATE(324)] = 5018,
  [SMALL_STATE(325)] = 5025,
  [SMALL_STATE(326)] = 5032,
  [SMALL_STATE(327)] = 5039,
  [SMALL_STATE(328)] = 5046,
  [SMALL_STATE(329)] = 5053,
  [SMALL_STATE(330)] = 5060,
  [SMALL_STATE(331)] = 5067,
  [SMALL_STATE(332)] = 5074,
  [SMALL_STATE(333)] = 5081,
  [SMALL_STATE(334)] = 5088,
  [SMALL_STATE(335)] = 5095,
  [SMALL_STATE(336)] = 5102,
  [SMALL_STATE(337)] = 5109,
  [SMALL_STATE(338)] = 5116,
  [SMALL_STATE(339)] = 5123,
  [SMALL_STATE(340)] = 5130,
  [SMALL_STATE(341)] = 5137,
  [SMALL_STATE(342)] = 5144,
  [SMALL_STATE(343)] = 5151,
  [SMALL_STATE(344)] = 5158,
  [SMALL_STATE(345)] = 5165,
  [SMALL_STATE(346)] = 5172,
  [SMALL_STATE(347)] = 5179,
  [SMALL_STATE(348)] = 5186,
  [SMALL_STATE(349)] = 5193,
  [SMALL_STATE(350)] = 5200,
  [SMALL_STATE(351)] = 5207,
  [SMALL_STATE(352)] = 5214,
  [SMALL_STATE(353)] = 5221,
  [SMALL_STATE(354)] = 5228,
  [SMALL_STATE(355)] = 5235,
  [SMALL_STATE(356)] = 5242,
  [SMALL_STATE(357)] = 5249,
  [SMALL_STATE(358)] = 5256,
  [SMALL_STATE(359)] = 5263,
  [SMALL_STATE(360)] = 5270,
  [SMALL_STATE(361)] = 5277,
  [SMALL_STATE(362)] = 5284,
  [SMALL_STATE(363)] = 5291,
  [SMALL_STATE(364)] = 5298,
  [SMALL_STATE(365)] = 5305,
  [SMALL_STATE(366)] = 5312,
  [SMALL_STATE(367)] = 5319,
  [SMALL_STATE(368)] = 5326,
  [SMALL_STATE(369)] = 5333,
  [SMALL_STATE(370)] = 5340,
  [SMALL_STATE(371)] = 5347,
  [SMALL_STATE(372)] = 5354,
  [SMALL_STATE(373)] = 5361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(254),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(275),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(338),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(7),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(338),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(161),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(269),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(24),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(270),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(269),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(28),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(272),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(275),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(224),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(121),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(146),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(52),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(14),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(205),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(117),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(150),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(58),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(193),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(114),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(160),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(59),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(44),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(189),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(167),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(167),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 3), SHIFT(167),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 3), SHIFT(44),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 3), SHIFT(189),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(354),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(44),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(189),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, .production_id = 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, .production_id = 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(44),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(189),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(167),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(359),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 9), SHIFT_REPEAT(296),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2), SHIFT_REPEAT(166),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(189),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(189),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(44),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(44),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(252),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(167),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(167),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(44),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 5),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(233),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 18),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 19),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 20),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 16),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [945] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 13),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2, .production_id = 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2, .production_id = 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 12),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 17),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 11),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 10),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 7),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 6),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
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
