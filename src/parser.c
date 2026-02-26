#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 408
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 3
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

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
  anon_sym_SPACE = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  aux_sym_keyword_setting_name_token1 = 30,
  aux_sym_keyword_setting_name_token2 = 31,
  aux_sym_keyword_setting_name_token3 = 32,
  aux_sym_keyword_setting_name_token4 = 33,
  aux_sym_keyword_setting_name_token5 = 34,
  aux_sym_test_cases_section_token1 = 35,
  aux_sym_test_case_setting_name_token1 = 36,
  aux_sym_test_case_setting_name_token2 = 37,
  anon_sym_RETURN = 38,
  aux_sym_keyword_token1 = 39,
  anon_sym_IF = 40,
  anon_sym_END = 41,
  anon_sym_ELSEIF = 42,
  anon_sym_ELSE = 43,
  anon_sym_TRY = 44,
  anon_sym_EXCEPT = 45,
  anon_sym_FINALLY = 46,
  anon_sym_WHILE = 47,
  anon_sym_FOR = 48,
  anon_sym_IN = 49,
  anon_sym_INRANGE = 50,
  anon_sym_INENUMERATE = 51,
  anon_sym_INZIP = 52,
  sym_continue_statement = 53,
  sym_break_statement = 54,
  sym_ellipses = 55,
  anon_sym_AT_LBRACE = 56,
  anon_sym_AMP_LBRACE = 57,
  anon_sym_DOLLAR_LBRACE_LBRACE = 58,
  aux_sym_inline_python_expression_token1 = 59,
  anon_sym_RBRACE_RBRACE = 60,
  sym_variable_name = 61,
  sym_text_chunk = 62,
  sym_comment = 63,
  sym__separator = 64,
  sym__line_break = 65,
  aux_sym__empty_line_token1 = 66,
  sym_source_file = 67,
  sym_section = 68,
  sym_settings_section = 69,
  sym_setting_statement = 70,
  sym_setting_name = 71,
  sym_variables_section = 72,
  sym_variable_definition = 73,
  sym_keywords_section = 74,
  sym_keyword_definition = 75,
  sym_keyword_name = 76,
  sym_keyword_definition_body = 77,
  sym_keyword_setting = 78,
  sym_keyword_setting_name = 79,
  sym_test_cases_section = 80,
  sym_test_case_definition = 81,
  sym_test_case_definition_body = 82,
  sym_test_case_setting = 83,
  sym_test_case_setting_name = 84,
  sym_statement = 85,
  sym_return_statement = 86,
  sym_variable_assignment = 87,
  sym_keyword_invocation = 88,
  sym_keyword = 89,
  sym_if_statement = 90,
  sym_elseif_statement = 91,
  sym_else_statement = 92,
  sym_inline_if_statement = 93,
  sym_block = 94,
  sym_inline_elseif_statement = 95,
  sym_inline_else_statement = 96,
  sym_inline_statement = 97,
  sym_try_statement = 98,
  sym_except_statement = 99,
  sym_finally_statement = 100,
  sym_while_statement = 101,
  sym_for_statement = 102,
  sym__for_in = 103,
  sym__for_in_range = 104,
  sym__for_in_enumerate = 105,
  sym__for_in_zip = 106,
  sym_arguments = 107,
  sym_arguments_without_continuation = 108,
  sym_continuation = 109,
  sym_argument = 110,
  sym_scalar_variable = 111,
  sym_list_variable = 112,
  sym_dictionary_variable = 113,
  sym_inline_python_expression = 114,
  sym__indentation = 115,
  sym__empty_line = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_settings_section_repeat1 = 118,
  aux_sym_variables_section_repeat1 = 119,
  aux_sym_keywords_section_repeat1 = 120,
  aux_sym_keyword_name_repeat1 = 121,
  aux_sym_keyword_definition_body_repeat1 = 122,
  aux_sym_test_cases_section_repeat1 = 123,
  aux_sym_test_case_definition_body_repeat1 = 124,
  aux_sym_if_statement_repeat1 = 125,
  aux_sym_inline_if_statement_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  aux_sym_try_statement_repeat1 = 128,
  aux_sym_for_statement_repeat1 = 129,
  aux_sym_arguments_repeat1 = 130,
  aux_sym_arguments_repeat2 = 131,
  aux_sym_argument_repeat1 = 132,
  aux_sym_inline_python_expression_repeat1 = 133,
  alias_sym_python_expression = 134,
  alias_sym_return_value = 135,
  alias_sym_variable_list = 136,
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
  [anon_sym_SPACE] = " ",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_keyword_setting_name_token1] = "keyword_setting_name_token1",
  [aux_sym_keyword_setting_name_token2] = "keyword_setting_name_token2",
  [aux_sym_keyword_setting_name_token3] = "keyword_setting_name_token3",
  [aux_sym_keyword_setting_name_token4] = "keyword_setting_name_token4",
  [aux_sym_keyword_setting_name_token5] = "keyword_setting_name_token5",
  [aux_sym_test_cases_section_token1] = "section_header",
  [aux_sym_test_case_setting_name_token1] = "test_case_setting_name_token1",
  [aux_sym_test_case_setting_name_token2] = "test_case_setting_name_token2",
  [anon_sym_RETURN] = "RETURN",
  [aux_sym_keyword_token1] = "keyword_token1",
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
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [aux_sym_inline_python_expression_token1] = "inline_python_expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_variable_name] = "variable_name",
  [sym_text_chunk] = "text_chunk",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [sym__line_break] = "_line_break",
  [aux_sym__empty_line_token1] = "_empty_line_token1",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_setting_name] = "setting_name",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_name] = "name",
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
  [sym_keyword] = "keyword",
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
  [aux_sym_keyword_name_repeat1] = "keyword_name_repeat1",
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
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_keyword_setting_name_token1] = aux_sym_keyword_setting_name_token1,
  [aux_sym_keyword_setting_name_token2] = aux_sym_keyword_setting_name_token2,
  [aux_sym_keyword_setting_name_token3] = aux_sym_keyword_setting_name_token3,
  [aux_sym_keyword_setting_name_token4] = aux_sym_keyword_setting_name_token4,
  [aux_sym_keyword_setting_name_token5] = aux_sym_keyword_setting_name_token5,
  [aux_sym_test_cases_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_case_setting_name_token1] = aux_sym_test_case_setting_name_token1,
  [aux_sym_test_case_setting_name_token2] = aux_sym_test_case_setting_name_token2,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
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
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [aux_sym_inline_python_expression_token1] = aux_sym_inline_python_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_text_chunk] = sym_text_chunk,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [sym__line_break] = sym__line_break,
  [aux_sym__empty_line_token1] = aux_sym__empty_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_setting_name] = sym_setting_name,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_name] = sym_keyword_name,
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
  [sym_keyword] = sym_keyword,
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
  [aux_sym_keyword_name_repeat1] = aux_sym_keyword_name_repeat1,
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [aux_sym_keyword_token1] = {
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
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__empty_line_token1] = {
    .visible = false,
    .named = false,
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
  [sym_keyword_name] = {
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
  [sym_keyword] = {
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
  [aux_sym_keyword_name_repeat1] = {
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
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 4, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 8, .length = 1},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 2},
  [16] = {.index = 17, .length = 3},
  [17] = {.index = 20, .length = 3},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 4},
  [21] = {.index = 33, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_alternative, 0},
  [4] =
    {field_condition, 1},
  [5] =
    {field_condition, 2},
  [6] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [8] =
    {field_consequence, 3},
  [9] =
    {field_body, 3},
    {field_condition, 1},
  [11] =
    {field_alternative, 4},
    {field_condition, 2},
  [13] =
    {field_condition, 2},
    {field_consequence, 4},
  [15] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [17] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [23] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [26] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [29] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [33] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_keyword_name,
  },
  [3] = {
    [1] = alias_sym_python_expression,
  },
  [4] = {
    [2] = alias_sym_return_value,
  },
  [19] = {
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
  [50] = 41,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 7,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 7,
  [70] = 53,
  [71] = 52,
  [72] = 51,
  [73] = 63,
  [74] = 53,
  [75] = 52,
  [76] = 51,
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
  [96] = 88,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 102,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 97,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 104,
  [129] = 108,
  [130] = 118,
  [131] = 122,
  [132] = 126,
  [133] = 114,
  [134] = 134,
  [135] = 135,
  [136] = 104,
  [137] = 127,
  [138] = 138,
  [139] = 139,
  [140] = 106,
  [141] = 95,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 101,
  [146] = 101,
  [147] = 108,
  [148] = 118,
  [149] = 122,
  [150] = 126,
  [151] = 117,
  [152] = 90,
  [153] = 127,
  [154] = 106,
  [155] = 95,
  [156] = 114,
  [157] = 117,
  [158] = 90,
  [159] = 138,
  [160] = 138,
  [161] = 139,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 163,
  [173] = 143,
  [174] = 174,
  [175] = 163,
  [176] = 176,
  [177] = 177,
  [178] = 164,
  [179] = 164,
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
  [190] = 189,
  [191] = 191,
  [192] = 183,
  [193] = 193,
  [194] = 176,
  [195] = 177,
  [196] = 188,
  [197] = 197,
  [198] = 198,
  [199] = 174,
  [200] = 200,
  [201] = 7,
  [202] = 198,
  [203] = 203,
  [204] = 203,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 191,
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
  [237] = 211,
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
  [257] = 249,
  [258] = 255,
  [259] = 259,
  [260] = 260,
  [261] = 229,
  [262] = 241,
  [263] = 219,
  [264] = 224,
  [265] = 265,
  [266] = 249,
  [267] = 255,
  [268] = 259,
  [269] = 259,
  [270] = 229,
  [271] = 219,
  [272] = 224,
  [273] = 249,
  [274] = 229,
  [275] = 211,
  [276] = 225,
  [277] = 231,
  [278] = 211,
  [279] = 225,
  [280] = 231,
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
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
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
  [331] = 114,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 117,
  [338] = 338,
  [339] = 339,
  [340] = 90,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 310,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 306,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 295,
  [362] = 362,
  [363] = 363,
  [364] = 318,
  [365] = 365,
  [366] = 366,
  [367] = 302,
  [368] = 304,
  [369] = 325,
  [370] = 327,
  [371] = 310,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 366,
  [379] = 295,
  [380] = 380,
  [381] = 318,
  [382] = 382,
  [383] = 366,
  [384] = 302,
  [385] = 325,
  [386] = 327,
  [387] = 310,
  [388] = 388,
  [389] = 389,
  [390] = 295,
  [391] = 302,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 321,
  [396] = 344,
  [397] = 397,
  [398] = 308,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 321,
  [403] = 344,
  [404] = 397,
  [405] = 405,
  [406] = 321,
  [407] = 397,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(319);
      ADVANCE_MAP(
        '\t', 376,
        ' ', 361,
        '#', 391,
        '$', 390,
        '.', 377,
        '=', 353,
        'B', 388,
        'C', 386,
        'E', 383,
        'F', 381,
        'I', 379,
        'R', 378,
        'T', 389,
        'W', 380,
        '[', 363,
        ']', 364,
        '}', 351,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 33,
        ' ', 361,
        '#', 518,
        ']', 364,
        '}', 351,
        'A', 238,
        'a', 238,
        'D', 219,
        'd', 219,
        'R', 157,
        'r', 157,
        'S', 173,
        's', 173,
        'T', 124,
        't', 124,
      );
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '#') ADVANCE(518);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 519,
        '\n', 523,
        '\r', 14,
        ' ', 359,
        '#', 516,
        '$', 114,
        '&', 115,
        '@', 116,
        '{', 113,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(520);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(526);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(520);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '=') ADVANCE(353);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '=') ADVANCE(354);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\t', 11,
        '\n', 523,
        '\r', 14,
        ' ', 360,
        '#', 516,
        '$', 114,
        '{', 113,
        '&', 313,
        '@', 313,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(358);
      if (lookahead == '#') ADVANCE(516);
      if (lookahead == '$') ADVANCE(114);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(113);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(522);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(418);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(326);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 198,
        'K', 158,
        'k', 158,
        'S', 165,
        's', 165,
        'T', 166,
        't', 166,
        'V', 126,
        'v', 126,
      );
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '#', 391,
        '$', 390,
        '.', 377,
        'B', 388,
        'C', 386,
        'F', 387,
        'I', 379,
        'R', 378,
        'T', 389,
        'W', 380,
        '\t', 376,
        ' ', 376,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '#', 391,
        '$', 390,
        'B', 388,
        'C', 386,
        'E', 382,
        'F', 387,
        'I', 379,
        'R', 378,
        'T', 389,
        'W', 380,
        '\t', 376,
        ' ', 376,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '#', 391,
        '$', 390,
        'B', 388,
        'C', 386,
        'E', 385,
        'F', 387,
        'I', 379,
        'R', 378,
        'T', 389,
        'W', 380,
        '\t', 376,
        ' ', 376,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '#', 391,
        '$', 390,
        'B', 388,
        'C', 386,
        'E', 384,
        'F', 381,
        'I', 379,
        'R', 378,
        'T', 389,
        'W', 380,
        '\t', 376,
        ' ', 376,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '#', 391,
        '$', 390,
        'B', 388,
        'C', 386,
        'F', 387,
        'I', 379,
        'R', 378,
        'T', 389,
        'W', 380,
        '[', 363,
        '\t', 376,
        ' ', 376,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '$') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(375);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(414);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(418);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(355);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(322);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(346);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(370);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(466);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(408);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(393);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(406);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(403);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Z') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(394);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'K') ADVANCE(407);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(374);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(402);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'P') ADVANCE(405);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(401);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(398);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 108:
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 110:
      if (lookahead == 'Y') ADVANCE(397);
      END_STATE();
    case 111:
      if (lookahead == 'Y') ADVANCE(399);
      END_STATE();
    case 112:
      if (lookahead == '{') ADVANCE(349);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(461);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(350);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 115:
      if (lookahead == '{') ADVANCE(410);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(409);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 117:
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 118:
      ADVANCE_MAP(
        '{', 434,
        'K', 476,
        'k', 476,
        'S', 477,
        's', 477,
        'T', 478,
        't', 478,
        'V', 471,
        'v', 471,
        '$', 314,
        '&', 314,
        '@', 314,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(501);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(248);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 143:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 186:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 187:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(251);
      END_STATE();
    case 188:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 189:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 190:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 197:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 198:
      ADVANCE_MAP(
        'K', 158,
        'k', 158,
        'S', 165,
        's', 165,
        'T', 166,
        't', 166,
        'V', 126,
        'v', 126,
      );
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 205:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 207:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 219:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 221:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 227:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 228:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 231:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 232:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(372);
      END_STATE();
    case 233:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 234:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 235:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 236:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 237:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 238:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 239:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 240:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 246:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 247:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 248:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 251:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 252:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 253:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 254:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 292:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 293:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 294:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 295:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 296:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 297:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 301:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 302:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 303:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 304:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 305:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 306:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(222);
      END_STATE();
    case 307:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 308:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 309:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 310:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 311:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 312:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 313:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(461);
      END_STATE();
    case 314:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(501);
      END_STATE();
    case 315:
      if (eof) ADVANCE(319);
      ADVANCE_MAP(
        '\t', 519,
        '\n', 523,
        '\r', 14,
        ' ', 525,
        '#', 516,
        '*', 425,
        '{', 113,
        0x0b, 14,
        '\f', 14,
        '$', 313,
        '&', 313,
        '@', 313,
      );
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 316:
      if (eof) ADVANCE(319);
      ADVANCE_MAP(
        '\n', 524,
        '\r', 15,
        '#', 518,
        '$', 112,
        '*', 41,
        'E', 83,
        '\t', 528,
        ' ', 528,
        'D', 160,
        'd', 160,
        'F', 224,
        'f', 224,
        'L', 191,
        'l', 191,
        'M', 172,
        'm', 172,
        'R', 170,
        'r', 170,
        'S', 298,
        's', 298,
        'T', 130,
        't', 130,
        'V', 142,
        'v', 142,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 317:
      if (eof) ADVANCE(319);
      ADVANCE_MAP(
        '\n', 523,
        '\r', 14,
        '#', 516,
        '*', 425,
        '{', 113,
        '\t', 527,
        ' ', 527,
        0x0b, 14,
        '\f', 14,
        '$', 313,
        '&', 313,
        '@', 313,
      );
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 318:
      if (eof) ADVANCE(319);
      ADVANCE_MAP(
        '#', 518,
        '$', 112,
        '*', 41,
        '.', 57,
        'E', 87,
        'F', 79,
        'I', 90,
        ']', 364,
        '}', 351,
        '\t', 320,
        ' ', 320,
        'A', 238,
        'a', 238,
        'D', 219,
        'd', 219,
        'R', 157,
        'r', 157,
        'S', 173,
        's', 173,
        'T', 124,
        't', 124,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(326);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(411);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(415);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(418);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'F') ADVANCE(392);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(110);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(349);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(518);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(518);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(514);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(512);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(516);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(512);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(516);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(512);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(516);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(517);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '{') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '{') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '*') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 118,
        'K', 439,
        'k', 439,
        'S', 440,
        's', 440,
        'T', 441,
        't', 441,
        'V', 435,
        'v', 435,
        '$', 313,
        '&', 313,
        '@', 313,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(313);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(461);
      if (lookahead == '{') ADVANCE(518);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '{') ADVANCE(518);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(518);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(518);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(520);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(520);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(528);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(528);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(528);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(528);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 318},
  [2] = {.lex_state = 316},
  [3] = {.lex_state = 316},
  [4] = {.lex_state = 316},
  [5] = {.lex_state = 316},
  [6] = {.lex_state = 316},
  [7] = {.lex_state = 316},
  [8] = {.lex_state = 316},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 317},
  [17] = {.lex_state = 315},
  [18] = {.lex_state = 315},
  [19] = {.lex_state = 315},
  [20] = {.lex_state = 315},
  [21] = {.lex_state = 317},
  [22] = {.lex_state = 317},
  [23] = {.lex_state = 317},
  [24] = {.lex_state = 317},
  [25] = {.lex_state = 318},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 318},
  [28] = {.lex_state = 318},
  [29] = {.lex_state = 317},
  [30] = {.lex_state = 316},
  [31] = {.lex_state = 318},
  [32] = {.lex_state = 316},
  [33] = {.lex_state = 316},
  [34] = {.lex_state = 316},
  [35] = {.lex_state = 316},
  [36] = {.lex_state = 317},
  [37] = {.lex_state = 317},
  [38] = {.lex_state = 317},
  [39] = {.lex_state = 317},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 318},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 315},
  [55] = {.lex_state = 315},
  [56] = {.lex_state = 315},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 316},
  [59] = {.lex_state = 317},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 317},
  [62] = {.lex_state = 316},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 317},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 318},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 318},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 318},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 34},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 318},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 318},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 316},
  [170] = {.lex_state = 316},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 34},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 34},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 34},
  [180] = {.lex_state = 34},
  [181] = {.lex_state = 316},
  [182] = {.lex_state = 316},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 316},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 316},
  [195] = {.lex_state = 316},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 316},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 318},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 318},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 316},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 318},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 318},
  [282] = {.lex_state = 316},
  [283] = {.lex_state = 316},
  [284] = {.lex_state = 318},
  [285] = {.lex_state = 316},
  [286] = {.lex_state = 316},
  [287] = {.lex_state = 316},
  [288] = {.lex_state = 316},
  [289] = {.lex_state = 316},
  [290] = {.lex_state = 316},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 316},
  [293] = {.lex_state = 316},
  [294] = {.lex_state = 316},
  [295] = {.lex_state = 318},
  [296] = {.lex_state = 316},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 316},
  [299] = {.lex_state = 318},
  [300] = {.lex_state = 316},
  [301] = {.lex_state = 318},
  [302] = {.lex_state = 318},
  [303] = {.lex_state = 316},
  [304] = {.lex_state = 318},
  [305] = {.lex_state = 318},
  [306] = {.lex_state = 318},
  [307] = {.lex_state = 316},
  [308] = {.lex_state = 35},
  [309] = {.lex_state = 316},
  [310] = {.lex_state = 316},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 316},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 316},
  [315] = {.lex_state = 316},
  [316] = {.lex_state = 316},
  [317] = {.lex_state = 316},
  [318] = {.lex_state = 318},
  [319] = {.lex_state = 316},
  [320] = {.lex_state = 318},
  [321] = {.lex_state = 35},
  [322] = {.lex_state = 318},
  [323] = {.lex_state = 318},
  [324] = {.lex_state = 318},
  [325] = {.lex_state = 318},
  [326] = {.lex_state = 9},
  [327] = {.lex_state = 318},
  [328] = {.lex_state = 316},
  [329] = {.lex_state = 316},
  [330] = {.lex_state = 316},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 318},
  [334] = {.lex_state = 318},
  [335] = {.lex_state = 9},
  [336] = {.lex_state = 318},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 316},
  [339] = {.lex_state = 35},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 316},
  [342] = {.lex_state = 318},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 35},
  [345] = {.lex_state = 316},
  [346] = {.lex_state = 316},
  [347] = {.lex_state = 316},
  [348] = {.lex_state = 316},
  [349] = {.lex_state = 316},
  [350] = {.lex_state = 316},
  [351] = {.lex_state = 316},
  [352] = {.lex_state = 318},
  [353] = {.lex_state = 316},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 316},
  [356] = {.lex_state = 316},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 9},
  [360] = {.lex_state = 316},
  [361] = {.lex_state = 318},
  [362] = {.lex_state = 316},
  [363] = {.lex_state = 316},
  [364] = {.lex_state = 318},
  [365] = {.lex_state = 316},
  [366] = {.lex_state = 318},
  [367] = {.lex_state = 318},
  [368] = {.lex_state = 318},
  [369] = {.lex_state = 318},
  [370] = {.lex_state = 318},
  [371] = {.lex_state = 316},
  [372] = {.lex_state = 316},
  [373] = {.lex_state = 318},
  [374] = {.lex_state = 316},
  [375] = {.lex_state = 316},
  [376] = {.lex_state = 316},
  [377] = {.lex_state = 316},
  [378] = {.lex_state = 318},
  [379] = {.lex_state = 318},
  [380] = {.lex_state = 318},
  [381] = {.lex_state = 318},
  [382] = {.lex_state = 316},
  [383] = {.lex_state = 318},
  [384] = {.lex_state = 318},
  [385] = {.lex_state = 318},
  [386] = {.lex_state = 318},
  [387] = {.lex_state = 316},
  [388] = {.lex_state = 316},
  [389] = {.lex_state = 316},
  [390] = {.lex_state = 318},
  [391] = {.lex_state = 318},
  [392] = {.lex_state = 318},
  [393] = {.lex_state = 9},
  [394] = {.lex_state = 318},
  [395] = {.lex_state = 35},
  [396] = {.lex_state = 35},
  [397] = {.lex_state = 35},
  [398] = {.lex_state = 35},
  [399] = {.lex_state = 318},
  [400] = {.lex_state = 316},
  [401] = {.lex_state = 316},
  [402] = {.lex_state = 35},
  [403] = {.lex_state = 35},
  [404] = {.lex_state = 35},
  [405] = {.lex_state = 316},
  [406] = {.lex_state = 35},
  [407] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_EXCEPT] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(334),
    [sym_section] = STATE(25),
    [sym_settings_section] = STATE(142),
    [sym_variables_section] = STATE(142),
    [sym_keywords_section] = STATE(142),
    [sym_test_cases_section] = STATE(142),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_settings_section_token1] = ACTIONS(9),
    [aux_sym_variables_section_token1] = ACTIONS(11),
    [aux_sym_keywords_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_section_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym__line_break,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    STATE(116), 1,
      sym_setting_name,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(21), 17,
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
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(29), 1,
      sym__line_break,
    STATE(116), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(21), 17,
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
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(31), 1,
      sym__line_break,
    STATE(116), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(21), 17,
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
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(31), 1,
      sym__line_break,
    STATE(116), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(21), 17,
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
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__line_break,
    ACTIONS(43), 1,
      aux_sym__empty_line_token1,
    STATE(116), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(37), 17,
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
  [220] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym__empty_line_token1,
    ACTIONS(46), 24,
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
  [253] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(52), 1,
      aux_sym__empty_line_token1,
    ACTIONS(50), 23,
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
  [285] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(62), 1,
      anon_sym_END,
    ACTIONS(64), 1,
      anon_sym_ELSE,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    STATE(102), 1,
      sym_keyword,
    STATE(400), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [342] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    ACTIONS(78), 1,
      anon_sym_END,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    STATE(102), 1,
      sym_keyword,
    STATE(400), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [396] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_keyword,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(345), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [445] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_keyword,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(355), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [494] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    ACTIONS(88), 1,
      anon_sym_END,
    STATE(102), 1,
      sym_keyword,
    STATE(400), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [542] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    ACTIONS(90), 1,
      sym_ellipses,
    STATE(102), 1,
      sym_keyword,
    STATE(400), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [590] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(60), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_WHILE,
    ACTIONS(74), 1,
      anon_sym_FOR,
    STATE(102), 1,
      sym_keyword,
    STATE(400), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(376), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [635] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_text_chunk,
    ACTIONS(99), 1,
      sym__line_break,
    ACTIONS(102), 1,
      aux_sym__empty_line_token1,
    STATE(309), 1,
      sym_keyword_name,
    STATE(16), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(94), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__separator,
    ACTIONS(111), 1,
      sym__line_break,
    ACTIONS(113), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(107), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [695] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym__empty_line_token1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym__separator,
    ACTIONS(121), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(20), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(117), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [725] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym__separator,
    ACTIONS(130), 1,
      sym__line_break,
    ACTIONS(133), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(125), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [755] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym__separator,
    ACTIONS(143), 1,
      sym__line_break,
    ACTIONS(146), 1,
      aux_sym__empty_line_token1,
    STATE(12), 1,
      sym__indentation,
    STATE(20), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(138), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [785] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      sym_text_chunk,
    ACTIONS(155), 1,
      sym__line_break,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    STATE(309), 1,
      sym_keyword_name,
    STATE(16), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(151), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [815] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym__line_break,
    STATE(309), 1,
      sym_keyword_name,
    STATE(24), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(161), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [845] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym__line_break,
    STATE(309), 1,
      sym_keyword_name,
    STATE(21), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(167), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [875] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_text_chunk,
    ACTIONS(155), 1,
      sym__line_break,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(309), 1,
      sym_keyword_name,
    STATE(16), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(167), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [905] = 8,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [934] = 10,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym__separator,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
      sym__indentation,
    STATE(113), 1,
      sym_block,
    STATE(200), 1,
      sym_else_statement,
    STATE(253), 1,
      sym_finally_statement,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(123), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [967] = 8,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [996] = 8,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(187), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(183), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1052] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(194), 1,
      sym__line_break,
    ACTIONS(197), 1,
      aux_sym__empty_line_token1,
    STATE(30), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1077] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym_settings_section_token1,
    ACTIONS(205), 1,
      aux_sym_variables_section_token1,
    ACTIONS(208), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(211), 1,
      aux_sym_test_cases_section_token1,
    STATE(31), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(142), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1106] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(216), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(218), 1,
      sym__line_break,
    STATE(30), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1131] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(216), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(222), 1,
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
  [1156] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(216), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(218), 1,
      sym__line_break,
    STATE(30), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1181] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(216), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(226), 1,
      sym__line_break,
    STATE(32), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__line_break,
    STATE(39), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(230), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1233] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(232), 1,
      sym__line_break,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(39), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(236), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1260] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(236), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym_text_chunk,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(250), 1,
      aux_sym__empty_line_token1,
    STATE(39), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(242), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1314] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(257), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text_chunk,
    STATE(236), 1,
      sym_argument,
    STATE(53), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1342] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(251), 1,
      sym_argument,
    STATE(70), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1370] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(257), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text_chunk,
    STATE(252), 1,
      sym_argument,
    STATE(53), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1398] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_IN,
    ACTIONS(277), 1,
      anon_sym_INRANGE,
    ACTIONS(279), 1,
      anon_sym_INENUMERATE,
    ACTIONS(281), 1,
      anon_sym_INZIP,
    STATE(359), 1,
      sym_scalar_variable,
    STATE(317), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1426] = 10,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(283), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(135), 1,
      aux_sym_if_statement_repeat1,
    STATE(144), 1,
      sym_block,
    STATE(260), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1458] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(257), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text_chunk,
    STATE(226), 1,
      sym_argument,
    STATE(53), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1486] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(286), 1,
      sym_argument,
    STATE(70), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1514] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(257), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text_chunk,
    STATE(233), 1,
      sym_argument,
    STATE(53), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(289), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(293), 1,
      sym_text_chunk,
    STATE(291), 1,
      sym_argument,
    STATE(74), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1570] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(298), 1,
      sym_argument,
    STATE(70), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1598] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(257), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text_chunk,
    STATE(251), 1,
      sym_argument,
    STATE(53), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1626] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(298), 1,
      anon_sym_SPACE,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(304), 1,
      sym_text_chunk,
    ACTIONS(307), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(309), 1,
      anon_sym_SPACE,
    ACTIONS(311), 1,
      sym_text_chunk,
    ACTIONS(313), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(309), 1,
      anon_sym_SPACE,
    ACTIONS(315), 1,
      sym_text_chunk,
    ACTIONS(317), 2,
      sym__separator,
      sym__line_break,
    STATE(52), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1752] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(329), 1,
      anon_sym_RETURN,
    STATE(115), 1,
      sym_keyword,
    STATE(187), 1,
      sym_inline_statement,
    STATE(256), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1776] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym__empty_line_token1,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1808] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(300), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1848] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(351), 1,
      aux_sym__empty_line_token1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1864] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(355), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(218), 1,
      sym_arguments,
    ACTIONS(353), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1888] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(358), 1,
      sym_ellipses,
    ACTIONS(360), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(335), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1914] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_SPACE,
    STATE(240), 1,
      sym_keyword_setting_name,
    ACTIONS(363), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [1932] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SPACE,
    STATE(248), 1,
      sym_test_case_setting_name,
    ACTIONS(367), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [1950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    STATE(102), 1,
      sym_keyword,
    STATE(292), 1,
      sym_inline_statement,
    STATE(256), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(329), 1,
      anon_sym_RETURN,
    STATE(115), 1,
      sym_keyword,
    STATE(235), 1,
      sym_inline_statement,
    STATE(256), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(317), 1,
      sym__line_break,
    ACTIONS(371), 1,
      anon_sym_SPACE,
    ACTIONS(373), 1,
      sym_text_chunk,
    STATE(71), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2038] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym__line_break,
    ACTIONS(371), 1,
      anon_sym_SPACE,
    ACTIONS(375), 1,
      sym_text_chunk,
    STATE(72), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2062] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__line_break,
    ACTIONS(377), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(380), 1,
      anon_sym_SPACE,
    ACTIONS(383), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_text_chunk,
    STATE(72), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2086] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__separator,
    ACTIONS(394), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
    STATE(218), 1,
      sym_arguments,
    ACTIONS(389), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2110] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(317), 1,
      sym__separator,
    ACTIONS(397), 1,
      anon_sym_SPACE,
    ACTIONS(399), 1,
      sym_text_chunk,
    STATE(75), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym__separator,
    ACTIONS(397), 1,
      anon_sym_SPACE,
    ACTIONS(401), 1,
      sym_text_chunk,
    STATE(76), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__separator,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(406), 1,
      anon_sym_SPACE,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(412), 1,
      sym_text_chunk,
    STATE(76), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2182] = 3,
    ACTIONS(17), 1,
      sym_comment,
    STATE(217), 1,
      sym_test_case_setting_name,
    ACTIONS(367), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2197] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym__empty_line_token1,
    ACTIONS(119), 1,
      sym__separator,
    ACTIONS(415), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(61), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2220] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(332), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2243] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(419), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(343), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 1,
      anon_sym_SPACE,
    ACTIONS(426), 1,
      sym_text_chunk,
    ACTIONS(428), 2,
      sym__separator,
      sym__line_break,
    STATE(88), 2,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2287] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(227), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 1,
      anon_sym_SPACE,
    ACTIONS(430), 1,
      sym_text_chunk,
    ACTIONS(432), 2,
      sym__separator,
      sym__line_break,
    STATE(81), 2,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2331] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(434), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(393), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2354] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(297), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2377] = 3,
    ACTIONS(17), 1,
      sym_comment,
    STATE(250), 1,
      sym_keyword_setting_name,
    ACTIONS(363), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2392] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__separator,
    ACTIONS(113), 1,
      aux_sym__empty_line_token1,
    ACTIONS(437), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(59), 1,
      sym_keyword_definition_body,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(442), 1,
      anon_sym_SPACE,
    ACTIONS(445), 1,
      sym_text_chunk,
    ACTIONS(448), 2,
      sym__separator,
      sym__line_break,
    STATE(88), 2,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2436] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(450), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(238), 1,
      sym_block,
    STATE(120), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2473] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(365), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2493] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(346), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2513] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(289), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2533] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(294), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__line_break,
    ACTIONS(460), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(463), 1,
      anon_sym_SPACE,
    ACTIONS(466), 1,
      sym_text_chunk,
    STATE(96), 2,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2587] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(469), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(254), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2607] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(349), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2627] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(350), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2647] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(356), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2681] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(246), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2701] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__separator,
    STATE(167), 1,
      sym__indentation,
    STATE(197), 1,
      sym_else_statement,
    STATE(212), 1,
      sym_finally_statement,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2735] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(487), 1,
      anon_sym_SPACE,
    ACTIONS(489), 1,
      sym_text_chunk,
    ACTIONS(491), 1,
      sym__line_break,
    STATE(96), 2,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2769] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(497), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(303), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(487), 1,
      anon_sym_SPACE,
    ACTIONS(503), 1,
      sym_text_chunk,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(105), 2,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2823] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__separator,
    ACTIONS(510), 1,
      sym__line_break,
    ACTIONS(513), 1,
      aux_sym__empty_line_token1,
    STATE(15), 1,
      sym__indentation,
    STATE(110), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2843] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(353), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2863] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(296), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2883] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__separator,
    STATE(165), 1,
      sym__indentation,
    STATE(205), 1,
      sym_else_statement,
    STATE(216), 1,
      sym_finally_statement,
    STATE(103), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(518), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2917] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
    STATE(246), 1,
      sym_arguments,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2937] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(328), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(528), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(532), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2985] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(338), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3005] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    ACTIONS(536), 1,
      sym__separator,
    ACTIONS(539), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(110), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3025] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__separator,
    ACTIONS(544), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
    STATE(254), 1,
      sym_arguments,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3059] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__separator,
    STATE(165), 1,
      sym__indentation,
    STATE(205), 1,
      sym_else_statement,
    STATE(216), 1,
      sym_finally_statement,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3079] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(351), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3099] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(360), 1,
      sym_arguments,
    STATE(199), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(307), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(553), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(532), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(307), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(518), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3225] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__separator,
    STATE(162), 1,
      aux_sym_if_statement_repeat1,
    STATE(185), 1,
      sym__indentation,
    STATE(230), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
  [3244] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym__separator,
    STATE(162), 1,
      aux_sym_if_statement_repeat1,
    STATE(182), 1,
      sym__indentation,
    STATE(221), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(553), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(561), 1,
      sym_text_chunk,
    STATE(126), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3306] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__separator,
    ACTIONS(566), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
    STATE(176), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3349] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(569), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 3,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3373] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__separator,
    STATE(134), 1,
      aux_sym_if_statement_repeat1,
    STATE(181), 1,
      sym__indentation,
    STATE(220), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
  [3392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(499), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(532), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(547), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(307), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(528), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(553), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(518), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(528), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(575), 1,
      sym_text_chunk,
    STATE(132), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(577), 1,
      sym_text_chunk,
    STATE(150), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3608] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(579), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
    STATE(194), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3625] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__separator,
    STATE(162), 1,
      aux_sym_if_statement_repeat1,
    STATE(354), 1,
      sym_elseif_statement,
    STATE(388), 1,
      sym__indentation,
  [3641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3669] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_ELSE,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(591), 1,
      anon_sym_END,
  [3685] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__separator,
    STATE(323), 1,
      sym__indentation,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3699] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_ELSE,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(596), 1,
      anon_sym_END,
  [3715] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(598), 1,
      sym__line_break,
    STATE(207), 1,
      aux_sym_arguments_repeat1,
    STATE(315), 1,
      sym_arguments_without_continuation,
  [3731] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_ELSEIF,
    ACTIONS(602), 1,
      anon_sym_ELSE,
    STATE(228), 1,
      sym_inline_elseif_statement,
    STATE(362), 1,
      sym_inline_else_statement,
  [3747] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_ELSEIF,
    ACTIONS(602), 1,
      anon_sym_ELSE,
    STATE(228), 1,
      sym_inline_elseif_statement,
    STATE(405), 1,
      sym_inline_else_statement,
  [3763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(604), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_SPACE,
      sym__line_break,
    ACTIONS(571), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3803] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__line_break,
    ACTIONS(611), 1,
      sym__separator,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(178), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3831] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__separator,
    ACTIONS(617), 1,
      sym__line_break,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3845] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__separator,
    ACTIONS(622), 1,
      sym__line_break,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(585), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(629), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3898] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    ACTIONS(633), 1,
      anon_sym_END,
  [3911] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    ACTIONS(635), 1,
      anon_sym_END,
  [3924] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(637), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_arguments_repeat1,
  [3937] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym__separator,
    ACTIONS(642), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_inline_if_statement_repeat1,
  [3950] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    ACTIONS(644), 1,
      anon_sym_END,
  [3963] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    STATE(207), 1,
      aux_sym_arguments_repeat1,
    STATE(314), 1,
      sym_arguments_without_continuation,
  [3976] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__separator,
    ACTIONS(648), 1,
      sym__line_break,
    STATE(209), 1,
      aux_sym_inline_if_statement_repeat1,
  [3989] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(650), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4002] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(652), 1,
      sym__line_break,
    STATE(208), 1,
      aux_sym_arguments_repeat1,
  [4015] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__line_break,
    ACTIONS(654), 1,
      sym__separator,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4028] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__line_break,
    ACTIONS(657), 1,
      sym__separator,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4041] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__line_break,
    ACTIONS(657), 1,
      sym__separator,
    STATE(196), 1,
      aux_sym_arguments_repeat1,
  [4054] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__separator,
    ACTIONS(663), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4067] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__line_break,
    STATE(195), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4078] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__line_break,
    STATE(195), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4089] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__line_break,
    ACTIONS(671), 1,
      sym__separator,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4102] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__separator,
    STATE(222), 1,
      sym_finally_statement,
    STATE(223), 1,
      sym__indentation,
  [4115] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_ellipses,
    ACTIONS(676), 1,
      sym__separator,
    STATE(306), 1,
      sym__indentation,
  [4128] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__line_break,
    STATE(195), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4139] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__separator,
    STATE(216), 1,
      sym_finally_statement,
    STATE(281), 1,
      sym__indentation,
  [4152] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__line_break,
    ACTIONS(48), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4163] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_ellipses,
    ACTIONS(682), 1,
      sym__separator,
    STATE(352), 1,
      sym__indentation,
  [4176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(684), 1,
      sym_text_chunk,
    STATE(173), 1,
      sym_scalar_variable,
  [4189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(686), 1,
      sym_text_chunk,
    STATE(143), 1,
      sym_scalar_variable,
  [4202] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__separator,
    STATE(212), 1,
      sym_finally_statement,
    STATE(213), 1,
      sym__indentation,
  [4215] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__line_break,
    ACTIONS(690), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4226] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(694), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4239] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(637), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4252] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__separator,
    ACTIONS(698), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_inline_if_statement_repeat1,
  [4265] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__separator,
    ACTIONS(702), 1,
      sym__line_break,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_SPACE,
    ACTIONS(706), 1,
      sym_variable_name,
  [4285] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    STATE(320), 1,
      sym__indentation,
  [4295] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(596), 1,
      anon_sym_END,
  [4305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_settings_section_token2,
    ACTIONS(712), 1,
      sym__line_break,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_settings_section_token2,
    ACTIONS(716), 1,
      sym__line_break,
  [4325] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
    STATE(322), 1,
      sym__indentation,
  [4335] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SPACE,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
  [4345] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__separator,
    ACTIONS(726), 1,
      sym__line_break,
  [4355] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(730), 1,
      anon_sym_SPACE,
  [4365] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__separator,
    STATE(373), 1,
      sym__indentation,
  [4375] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__separator,
    STATE(380), 1,
      sym__indentation,
  [4385] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    STATE(392), 1,
      sym__indentation,
  [4395] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(738), 1,
      anon_sym_END,
  [4405] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(742), 1,
      anon_sym_SPACE,
  [4415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SPACE,
    ACTIONS(746), 1,
      sym_variable_name,
  [4425] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym__separator,
    ACTIONS(750), 1,
      sym__line_break,
  [4435] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym__separator,
    STATE(399), 1,
      sym__indentation,
  [4445] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym__line_break,
    ACTIONS(754), 1,
      sym__separator,
  [4455] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      anon_sym_SPACE,
  [4465] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym__separator,
    STATE(284), 1,
      sym__indentation,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SPACE,
    ACTIONS(764), 1,
      sym_variable_name,
  [4485] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_ELSEIF,
    STATE(228), 1,
      sym_inline_elseif_statement,
  [4495] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__separator,
    ACTIONS(768), 1,
      sym__line_break,
  [4505] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__separator,
    STATE(234), 1,
      aux_sym_for_statement_repeat1,
  [4515] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym__separator,
    ACTIONS(775), 1,
      sym__line_break,
  [4525] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__line_break,
    ACTIONS(777), 1,
      sym__separator,
  [4535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SPACE,
    ACTIONS(781), 1,
      sym_variable_name,
  [4545] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__separator,
    STATE(336), 1,
      sym__indentation,
  [4555] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_SPACE,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
  [4565] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SPACE,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
  [4575] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__separator,
    ACTIONS(795), 1,
      sym__line_break,
  [4585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      aux_sym_settings_section_token2,
    ACTIONS(799), 1,
      sym__line_break,
  [4595] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(359), 1,
      sym_scalar_variable,
  [4605] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__separator,
    STATE(234), 1,
      aux_sym_for_statement_repeat1,
  [4615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      aux_sym_settings_section_token2,
    ACTIONS(805), 1,
      sym__line_break,
  [4625] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym__separator,
    ACTIONS(809), 1,
      sym__line_break,
  [4635] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SPACE,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
  [4645] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_SPACE,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
  [4655] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      anon_sym_SPACE,
  [4665] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_SPACE,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
  [4675] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym__separator,
    ACTIONS(829), 1,
      sym__line_break,
  [4685] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym__separator,
    ACTIONS(833), 1,
      sym__line_break,
  [4695] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__separator,
    STATE(305), 1,
      sym__indentation,
  [4705] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym__separator,
    ACTIONS(839), 1,
      sym__line_break,
  [4715] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      anon_sym_SPACE,
  [4725] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym__separator,
    ACTIONS(847), 1,
      sym__line_break,
  [4735] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(851), 1,
      anon_sym_SPACE,
  [4745] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    ACTIONS(855), 1,
      anon_sym_SPACE,
  [4755] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    ACTIONS(859), 1,
      anon_sym_SPACE,
  [4765] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__separator,
    STATE(301), 1,
      sym__indentation,
  [4775] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    ACTIONS(865), 1,
      anon_sym_SPACE,
  [4785] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__line_break,
    ACTIONS(867), 1,
      sym__separator,
  [4795] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
    ACTIONS(871), 1,
      anon_sym_SPACE,
  [4805] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
    ACTIONS(875), 1,
      anon_sym_SPACE,
  [4815] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__separator,
    STATE(244), 1,
      aux_sym_for_statement_repeat1,
  [4825] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    ACTIONS(881), 1,
      anon_sym_SPACE,
  [4835] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
    ACTIONS(885), 1,
      anon_sym_SPACE,
  [4845] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    ACTIONS(889), 1,
      anon_sym_SPACE,
  [4855] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
    ACTIONS(893), 1,
      anon_sym_SPACE,
  [4865] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    ACTIONS(897), 1,
      anon_sym_SPACE,
  [4875] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    ACTIONS(901), 1,
      anon_sym_SPACE,
  [4885] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    ACTIONS(905), 1,
      anon_sym_SPACE,
  [4895] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 1,
      anon_sym_SPACE,
  [4905] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    ACTIONS(913), 1,
      anon_sym_SPACE,
  [4915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_SPACE,
    ACTIONS(917), 1,
      sym_variable_name,
  [4925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_SPACE,
    ACTIONS(921), 1,
      sym_variable_name,
  [4935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_SPACE,
    ACTIONS(925), 1,
      sym_variable_name,
  [4945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_SPACE,
    ACTIONS(929), 1,
      sym_variable_name,
  [4955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_SPACE,
    ACTIONS(933), 1,
      sym_variable_name,
  [4965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_SPACE,
    ACTIONS(937), 1,
      sym_variable_name,
  [4975] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(591), 1,
      anon_sym_END,
  [4985] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__line_break,
  [4992] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__line_break,
  [4999] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_END,
  [5006] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym__line_break,
  [5013] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [5020] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__line_break,
  [5027] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__line_break,
  [5034] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym__line_break,
  [5041] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__line_break,
  [5048] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__separator,
  [5055] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__line_break,
  [5062] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__line_break,
  [5069] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__line_break,
  [5076] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
  [5083] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__line_break,
  [5090] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__separator,
  [5097] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym__line_break,
  [5104] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
  [5111] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__line_break,
  [5118] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_END,
  [5125] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RBRACE,
  [5132] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [5139] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [5146] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_END,
  [5153] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_ellipses,
  [5160] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__line_break,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_variable_name,
  [5174] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__line_break,
  [5181] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__line_break,
  [5188] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__separator,
  [5195] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__line_break,
  [5202] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__separator,
  [5209] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym__line_break,
  [5216] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__line_break,
  [5223] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__line_break,
  [5230] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__line_break,
  [5237] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [5244] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__line_break,
  [5251] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_END,
  [5258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_variable_name,
  [5265] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_END,
  [5272] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
  [5279] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_RBRACK,
  [5286] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
  [5293] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym__separator,
  [5300] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
  [5307] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__line_break,
  [5314] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym__line_break,
  [5321] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym__line_break,
  [5328] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__separator,
  [5335] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__separator,
  [5342] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_RBRACK,
  [5349] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1027), 1,
      ts_builtin_sym_end,
  [5356] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__separator,
  [5363] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_END,
  [5370] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__separator,
  [5377] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__line_break,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_variable_name,
  [5391] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym__separator,
  [5398] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__line_break,
  [5405] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
  [5412] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym__separator,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_variable_name,
  [5426] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym__line_break,
  [5433] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym__line_break,
  [5440] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym__line_break,
  [5447] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym__line_break,
  [5454] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__line_break,
  [5461] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym__line_break,
  [5468] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym__line_break,
  [5475] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_ellipses,
  [5482] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym__line_break,
  [5489] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym__separator,
  [5496] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym__line_break,
  [5503] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym__line_break,
  [5510] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym__separator,
  [5517] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym__separator,
  [5524] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__separator,
  [5531] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym__line_break,
  [5538] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
  [5545] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym__line_break,
  [5552] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__line_break,
  [5559] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
  [5566] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__line_break,
  [5573] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
  [5580] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
  [5587] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
  [5594] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
  [5601] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
  [5608] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__line_break,
  [5615] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__line_break,
  [5622] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_END,
  [5629] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1097), 1,
      sym__line_break,
  [5636] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym__line_break,
  [5643] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym__line_break,
  [5650] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1103), 1,
      sym__line_break,
  [5657] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [5664] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
  [5671] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_END,
  [5678] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
  [5685] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym__line_break,
  [5692] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [5699] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
  [5706] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
  [5713] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
  [5720] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym__line_break,
  [5727] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
  [5734] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1117), 1,
      sym__line_break,
  [5741] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
  [5748] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
  [5755] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_END,
  [5762] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym__separator,
  [5769] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_RBRACK,
  [5776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      sym_variable_name,
  [5783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      sym_variable_name,
  [5790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      sym_variable_name,
  [5797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym_variable_name,
  [5804] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_END,
  [5811] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1137), 1,
      sym__line_break,
  [5818] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1139), 1,
      sym__line_break,
  [5825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym_variable_name,
  [5832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      sym_variable_name,
  [5839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_variable_name,
  [5846] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym__line_break,
  [5853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym_variable_name,
  [5860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 494,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 590,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 665,
  [SMALL_STATE(18)] = 695,
  [SMALL_STATE(19)] = 725,
  [SMALL_STATE(20)] = 755,
  [SMALL_STATE(21)] = 785,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 875,
  [SMALL_STATE(25)] = 905,
  [SMALL_STATE(26)] = 934,
  [SMALL_STATE(27)] = 967,
  [SMALL_STATE(28)] = 996,
  [SMALL_STATE(29)] = 1025,
  [SMALL_STATE(30)] = 1052,
  [SMALL_STATE(31)] = 1077,
  [SMALL_STATE(32)] = 1106,
  [SMALL_STATE(33)] = 1131,
  [SMALL_STATE(34)] = 1156,
  [SMALL_STATE(35)] = 1181,
  [SMALL_STATE(36)] = 1206,
  [SMALL_STATE(37)] = 1233,
  [SMALL_STATE(38)] = 1260,
  [SMALL_STATE(39)] = 1287,
  [SMALL_STATE(40)] = 1314,
  [SMALL_STATE(41)] = 1342,
  [SMALL_STATE(42)] = 1370,
  [SMALL_STATE(43)] = 1398,
  [SMALL_STATE(44)] = 1426,
  [SMALL_STATE(45)] = 1458,
  [SMALL_STATE(46)] = 1486,
  [SMALL_STATE(47)] = 1514,
  [SMALL_STATE(48)] = 1542,
  [SMALL_STATE(49)] = 1570,
  [SMALL_STATE(50)] = 1598,
  [SMALL_STATE(51)] = 1626,
  [SMALL_STATE(52)] = 1651,
  [SMALL_STATE(53)] = 1676,
  [SMALL_STATE(54)] = 1701,
  [SMALL_STATE(55)] = 1718,
  [SMALL_STATE(56)] = 1735,
  [SMALL_STATE(57)] = 1752,
  [SMALL_STATE(58)] = 1776,
  [SMALL_STATE(59)] = 1792,
  [SMALL_STATE(60)] = 1808,
  [SMALL_STATE(61)] = 1832,
  [SMALL_STATE(62)] = 1848,
  [SMALL_STATE(63)] = 1864,
  [SMALL_STATE(64)] = 1888,
  [SMALL_STATE(65)] = 1914,
  [SMALL_STATE(66)] = 1932,
  [SMALL_STATE(67)] = 1950,
  [SMALL_STATE(68)] = 1974,
  [SMALL_STATE(69)] = 1998,
  [SMALL_STATE(70)] = 2014,
  [SMALL_STATE(71)] = 2038,
  [SMALL_STATE(72)] = 2062,
  [SMALL_STATE(73)] = 2086,
  [SMALL_STATE(74)] = 2110,
  [SMALL_STATE(75)] = 2134,
  [SMALL_STATE(76)] = 2158,
  [SMALL_STATE(77)] = 2182,
  [SMALL_STATE(78)] = 2197,
  [SMALL_STATE(79)] = 2220,
  [SMALL_STATE(80)] = 2243,
  [SMALL_STATE(81)] = 2266,
  [SMALL_STATE(82)] = 2287,
  [SMALL_STATE(83)] = 2310,
  [SMALL_STATE(84)] = 2331,
  [SMALL_STATE(85)] = 2354,
  [SMALL_STATE(86)] = 2377,
  [SMALL_STATE(87)] = 2392,
  [SMALL_STATE(88)] = 2415,
  [SMALL_STATE(89)] = 2436,
  [SMALL_STATE(90)] = 2459,
  [SMALL_STATE(91)] = 2473,
  [SMALL_STATE(92)] = 2493,
  [SMALL_STATE(93)] = 2513,
  [SMALL_STATE(94)] = 2533,
  [SMALL_STATE(95)] = 2553,
  [SMALL_STATE(96)] = 2567,
  [SMALL_STATE(97)] = 2587,
  [SMALL_STATE(98)] = 2607,
  [SMALL_STATE(99)] = 2627,
  [SMALL_STATE(100)] = 2647,
  [SMALL_STATE(101)] = 2667,
  [SMALL_STATE(102)] = 2681,
  [SMALL_STATE(103)] = 2701,
  [SMALL_STATE(104)] = 2721,
  [SMALL_STATE(105)] = 2735,
  [SMALL_STATE(106)] = 2755,
  [SMALL_STATE(107)] = 2769,
  [SMALL_STATE(108)] = 2789,
  [SMALL_STATE(109)] = 2803,
  [SMALL_STATE(110)] = 2823,
  [SMALL_STATE(111)] = 2843,
  [SMALL_STATE(112)] = 2863,
  [SMALL_STATE(113)] = 2883,
  [SMALL_STATE(114)] = 2903,
  [SMALL_STATE(115)] = 2917,
  [SMALL_STATE(116)] = 2937,
  [SMALL_STATE(117)] = 2957,
  [SMALL_STATE(118)] = 2971,
  [SMALL_STATE(119)] = 2985,
  [SMALL_STATE(120)] = 3005,
  [SMALL_STATE(121)] = 3025,
  [SMALL_STATE(122)] = 3045,
  [SMALL_STATE(123)] = 3059,
  [SMALL_STATE(124)] = 3079,
  [SMALL_STATE(125)] = 3099,
  [SMALL_STATE(126)] = 3119,
  [SMALL_STATE(127)] = 3133,
  [SMALL_STATE(128)] = 3147,
  [SMALL_STATE(129)] = 3160,
  [SMALL_STATE(130)] = 3173,
  [SMALL_STATE(131)] = 3186,
  [SMALL_STATE(132)] = 3199,
  [SMALL_STATE(133)] = 3212,
  [SMALL_STATE(134)] = 3225,
  [SMALL_STATE(135)] = 3244,
  [SMALL_STATE(136)] = 3263,
  [SMALL_STATE(137)] = 3276,
  [SMALL_STATE(138)] = 3289,
  [SMALL_STATE(139)] = 3306,
  [SMALL_STATE(140)] = 3323,
  [SMALL_STATE(141)] = 3336,
  [SMALL_STATE(142)] = 3349,
  [SMALL_STATE(143)] = 3360,
  [SMALL_STATE(144)] = 3373,
  [SMALL_STATE(145)] = 3392,
  [SMALL_STATE(146)] = 3405,
  [SMALL_STATE(147)] = 3418,
  [SMALL_STATE(148)] = 3431,
  [SMALL_STATE(149)] = 3444,
  [SMALL_STATE(150)] = 3457,
  [SMALL_STATE(151)] = 3470,
  [SMALL_STATE(152)] = 3483,
  [SMALL_STATE(153)] = 3496,
  [SMALL_STATE(154)] = 3509,
  [SMALL_STATE(155)] = 3522,
  [SMALL_STATE(156)] = 3535,
  [SMALL_STATE(157)] = 3548,
  [SMALL_STATE(158)] = 3561,
  [SMALL_STATE(159)] = 3574,
  [SMALL_STATE(160)] = 3591,
  [SMALL_STATE(161)] = 3608,
  [SMALL_STATE(162)] = 3625,
  [SMALL_STATE(163)] = 3641,
  [SMALL_STATE(164)] = 3655,
  [SMALL_STATE(165)] = 3669,
  [SMALL_STATE(166)] = 3685,
  [SMALL_STATE(167)] = 3699,
  [SMALL_STATE(168)] = 3715,
  [SMALL_STATE(169)] = 3731,
  [SMALL_STATE(170)] = 3747,
  [SMALL_STATE(171)] = 3763,
  [SMALL_STATE(172)] = 3777,
  [SMALL_STATE(173)] = 3791,
  [SMALL_STATE(174)] = 3803,
  [SMALL_STATE(175)] = 3817,
  [SMALL_STATE(176)] = 3831,
  [SMALL_STATE(177)] = 3845,
  [SMALL_STATE(178)] = 3859,
  [SMALL_STATE(179)] = 3873,
  [SMALL_STATE(180)] = 3887,
  [SMALL_STATE(181)] = 3898,
  [SMALL_STATE(182)] = 3911,
  [SMALL_STATE(183)] = 3924,
  [SMALL_STATE(184)] = 3937,
  [SMALL_STATE(185)] = 3950,
  [SMALL_STATE(186)] = 3963,
  [SMALL_STATE(187)] = 3976,
  [SMALL_STATE(188)] = 3989,
  [SMALL_STATE(189)] = 4002,
  [SMALL_STATE(190)] = 4015,
  [SMALL_STATE(191)] = 4028,
  [SMALL_STATE(192)] = 4041,
  [SMALL_STATE(193)] = 4054,
  [SMALL_STATE(194)] = 4067,
  [SMALL_STATE(195)] = 4078,
  [SMALL_STATE(196)] = 4089,
  [SMALL_STATE(197)] = 4102,
  [SMALL_STATE(198)] = 4115,
  [SMALL_STATE(199)] = 4128,
  [SMALL_STATE(200)] = 4139,
  [SMALL_STATE(201)] = 4152,
  [SMALL_STATE(202)] = 4163,
  [SMALL_STATE(203)] = 4176,
  [SMALL_STATE(204)] = 4189,
  [SMALL_STATE(205)] = 4202,
  [SMALL_STATE(206)] = 4215,
  [SMALL_STATE(207)] = 4226,
  [SMALL_STATE(208)] = 4239,
  [SMALL_STATE(209)] = 4252,
  [SMALL_STATE(210)] = 4265,
  [SMALL_STATE(211)] = 4275,
  [SMALL_STATE(212)] = 4285,
  [SMALL_STATE(213)] = 4295,
  [SMALL_STATE(214)] = 4305,
  [SMALL_STATE(215)] = 4315,
  [SMALL_STATE(216)] = 4325,
  [SMALL_STATE(217)] = 4335,
  [SMALL_STATE(218)] = 4345,
  [SMALL_STATE(219)] = 4355,
  [SMALL_STATE(220)] = 4365,
  [SMALL_STATE(221)] = 4375,
  [SMALL_STATE(222)] = 4385,
  [SMALL_STATE(223)] = 4395,
  [SMALL_STATE(224)] = 4405,
  [SMALL_STATE(225)] = 4415,
  [SMALL_STATE(226)] = 4425,
  [SMALL_STATE(227)] = 4435,
  [SMALL_STATE(228)] = 4445,
  [SMALL_STATE(229)] = 4455,
  [SMALL_STATE(230)] = 4465,
  [SMALL_STATE(231)] = 4475,
  [SMALL_STATE(232)] = 4485,
  [SMALL_STATE(233)] = 4495,
  [SMALL_STATE(234)] = 4505,
  [SMALL_STATE(235)] = 4515,
  [SMALL_STATE(236)] = 4525,
  [SMALL_STATE(237)] = 4535,
  [SMALL_STATE(238)] = 4545,
  [SMALL_STATE(239)] = 4555,
  [SMALL_STATE(240)] = 4565,
  [SMALL_STATE(241)] = 4575,
  [SMALL_STATE(242)] = 4585,
  [SMALL_STATE(243)] = 4595,
  [SMALL_STATE(244)] = 4605,
  [SMALL_STATE(245)] = 4615,
  [SMALL_STATE(246)] = 4625,
  [SMALL_STATE(247)] = 4635,
  [SMALL_STATE(248)] = 4645,
  [SMALL_STATE(249)] = 4655,
  [SMALL_STATE(250)] = 4665,
  [SMALL_STATE(251)] = 4675,
  [SMALL_STATE(252)] = 4685,
  [SMALL_STATE(253)] = 4695,
  [SMALL_STATE(254)] = 4705,
  [SMALL_STATE(255)] = 4715,
  [SMALL_STATE(256)] = 4725,
  [SMALL_STATE(257)] = 4735,
  [SMALL_STATE(258)] = 4745,
  [SMALL_STATE(259)] = 4755,
  [SMALL_STATE(260)] = 4765,
  [SMALL_STATE(261)] = 4775,
  [SMALL_STATE(262)] = 4785,
  [SMALL_STATE(263)] = 4795,
  [SMALL_STATE(264)] = 4805,
  [SMALL_STATE(265)] = 4815,
  [SMALL_STATE(266)] = 4825,
  [SMALL_STATE(267)] = 4835,
  [SMALL_STATE(268)] = 4845,
  [SMALL_STATE(269)] = 4855,
  [SMALL_STATE(270)] = 4865,
  [SMALL_STATE(271)] = 4875,
  [SMALL_STATE(272)] = 4885,
  [SMALL_STATE(273)] = 4895,
  [SMALL_STATE(274)] = 4905,
  [SMALL_STATE(275)] = 4915,
  [SMALL_STATE(276)] = 4925,
  [SMALL_STATE(277)] = 4935,
  [SMALL_STATE(278)] = 4945,
  [SMALL_STATE(279)] = 4955,
  [SMALL_STATE(280)] = 4965,
  [SMALL_STATE(281)] = 4975,
  [SMALL_STATE(282)] = 4985,
  [SMALL_STATE(283)] = 4992,
  [SMALL_STATE(284)] = 4999,
  [SMALL_STATE(285)] = 5006,
  [SMALL_STATE(286)] = 5013,
  [SMALL_STATE(287)] = 5020,
  [SMALL_STATE(288)] = 5027,
  [SMALL_STATE(289)] = 5034,
  [SMALL_STATE(290)] = 5041,
  [SMALL_STATE(291)] = 5048,
  [SMALL_STATE(292)] = 5055,
  [SMALL_STATE(293)] = 5062,
  [SMALL_STATE(294)] = 5069,
  [SMALL_STATE(295)] = 5076,
  [SMALL_STATE(296)] = 5083,
  [SMALL_STATE(297)] = 5090,
  [SMALL_STATE(298)] = 5097,
  [SMALL_STATE(299)] = 5104,
  [SMALL_STATE(300)] = 5111,
  [SMALL_STATE(301)] = 5118,
  [SMALL_STATE(302)] = 5125,
  [SMALL_STATE(303)] = 5132,
  [SMALL_STATE(304)] = 5139,
  [SMALL_STATE(305)] = 5146,
  [SMALL_STATE(306)] = 5153,
  [SMALL_STATE(307)] = 5160,
  [SMALL_STATE(308)] = 5167,
  [SMALL_STATE(309)] = 5174,
  [SMALL_STATE(310)] = 5181,
  [SMALL_STATE(311)] = 5188,
  [SMALL_STATE(312)] = 5195,
  [SMALL_STATE(313)] = 5202,
  [SMALL_STATE(314)] = 5209,
  [SMALL_STATE(315)] = 5216,
  [SMALL_STATE(316)] = 5223,
  [SMALL_STATE(317)] = 5230,
  [SMALL_STATE(318)] = 5237,
  [SMALL_STATE(319)] = 5244,
  [SMALL_STATE(320)] = 5251,
  [SMALL_STATE(321)] = 5258,
  [SMALL_STATE(322)] = 5265,
  [SMALL_STATE(323)] = 5272,
  [SMALL_STATE(324)] = 5279,
  [SMALL_STATE(325)] = 5286,
  [SMALL_STATE(326)] = 5293,
  [SMALL_STATE(327)] = 5300,
  [SMALL_STATE(328)] = 5307,
  [SMALL_STATE(329)] = 5314,
  [SMALL_STATE(330)] = 5321,
  [SMALL_STATE(331)] = 5328,
  [SMALL_STATE(332)] = 5335,
  [SMALL_STATE(333)] = 5342,
  [SMALL_STATE(334)] = 5349,
  [SMALL_STATE(335)] = 5356,
  [SMALL_STATE(336)] = 5363,
  [SMALL_STATE(337)] = 5370,
  [SMALL_STATE(338)] = 5377,
  [SMALL_STATE(339)] = 5384,
  [SMALL_STATE(340)] = 5391,
  [SMALL_STATE(341)] = 5398,
  [SMALL_STATE(342)] = 5405,
  [SMALL_STATE(343)] = 5412,
  [SMALL_STATE(344)] = 5419,
  [SMALL_STATE(345)] = 5426,
  [SMALL_STATE(346)] = 5433,
  [SMALL_STATE(347)] = 5440,
  [SMALL_STATE(348)] = 5447,
  [SMALL_STATE(349)] = 5454,
  [SMALL_STATE(350)] = 5461,
  [SMALL_STATE(351)] = 5468,
  [SMALL_STATE(352)] = 5475,
  [SMALL_STATE(353)] = 5482,
  [SMALL_STATE(354)] = 5489,
  [SMALL_STATE(355)] = 5496,
  [SMALL_STATE(356)] = 5503,
  [SMALL_STATE(357)] = 5510,
  [SMALL_STATE(358)] = 5517,
  [SMALL_STATE(359)] = 5524,
  [SMALL_STATE(360)] = 5531,
  [SMALL_STATE(361)] = 5538,
  [SMALL_STATE(362)] = 5545,
  [SMALL_STATE(363)] = 5552,
  [SMALL_STATE(364)] = 5559,
  [SMALL_STATE(365)] = 5566,
  [SMALL_STATE(366)] = 5573,
  [SMALL_STATE(367)] = 5580,
  [SMALL_STATE(368)] = 5587,
  [SMALL_STATE(369)] = 5594,
  [SMALL_STATE(370)] = 5601,
  [SMALL_STATE(371)] = 5608,
  [SMALL_STATE(372)] = 5615,
  [SMALL_STATE(373)] = 5622,
  [SMALL_STATE(374)] = 5629,
  [SMALL_STATE(375)] = 5636,
  [SMALL_STATE(376)] = 5643,
  [SMALL_STATE(377)] = 5650,
  [SMALL_STATE(378)] = 5657,
  [SMALL_STATE(379)] = 5664,
  [SMALL_STATE(380)] = 5671,
  [SMALL_STATE(381)] = 5678,
  [SMALL_STATE(382)] = 5685,
  [SMALL_STATE(383)] = 5692,
  [SMALL_STATE(384)] = 5699,
  [SMALL_STATE(385)] = 5706,
  [SMALL_STATE(386)] = 5713,
  [SMALL_STATE(387)] = 5720,
  [SMALL_STATE(388)] = 5727,
  [SMALL_STATE(389)] = 5734,
  [SMALL_STATE(390)] = 5741,
  [SMALL_STATE(391)] = 5748,
  [SMALL_STATE(392)] = 5755,
  [SMALL_STATE(393)] = 5762,
  [SMALL_STATE(394)] = 5769,
  [SMALL_STATE(395)] = 5776,
  [SMALL_STATE(396)] = 5783,
  [SMALL_STATE(397)] = 5790,
  [SMALL_STATE(398)] = 5797,
  [SMALL_STATE(399)] = 5804,
  [SMALL_STATE(400)] = 5811,
  [SMALL_STATE(401)] = 5818,
  [SMALL_STATE(402)] = 5825,
  [SMALL_STATE(403)] = 5832,
  [SMALL_STATE(404)] = 5839,
  [SMALL_STATE(405)] = 5846,
  [SMALL_STATE(406)] = 5853,
  [SMALL_STATE(407)] = 5860,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(198),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(14),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(40),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(202),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(15),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(15),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(198),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(198),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_name, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_name, 1, 0, 0),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(40),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(202),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(15),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(40),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(202),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(40),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(202),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(198),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 10), SHIFT_REPEAT(388),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(323),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(202),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(202),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(40),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(40),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(198),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(198),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 0), SHIFT(40),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 4),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 12),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 17),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 18),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 5),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 19),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 20),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, 0, 6),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 21),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 9),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 11),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1027] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, 0, 5),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 8),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 6),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 6),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 5),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, 0, 5),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 7),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, 0, 6),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 13),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 14),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 15),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_robot(void) {
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
