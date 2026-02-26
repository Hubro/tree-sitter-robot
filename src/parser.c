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
#define STATE_COUNT 403
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 4
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
  anon_sym_LBRACK = 27,
  anon_sym_SPACE = 28,
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
  sym_keyword_definition_body = 76,
  sym_keyword_setting = 77,
  sym_keyword_setting_name = 78,
  sym_test_cases_section = 79,
  sym_test_case_definition = 80,
  sym_test_case_definition_body = 81,
  sym_test_case_setting = 82,
  sym_test_case_setting_name = 83,
  sym_statement = 84,
  sym_return_statement = 85,
  sym_variable_assignment = 86,
  sym_keyword_invocation = 87,
  sym_keyword = 88,
  sym_if_statement = 89,
  sym_elseif_statement = 90,
  sym_else_statement = 91,
  sym_inline_if_statement = 92,
  sym_block = 93,
  sym_inline_elseif_statement = 94,
  sym_inline_else_statement = 95,
  sym_inline_statement = 96,
  sym_try_statement = 97,
  sym_except_statement = 98,
  sym_finally_statement = 99,
  sym_while_statement = 100,
  sym_for_statement = 101,
  sym__for_in = 102,
  sym__for_in_range = 103,
  sym__for_in_enumerate = 104,
  sym__for_in_zip = 105,
  sym_arguments = 106,
  sym_arguments_without_continuation = 107,
  sym_continuation = 108,
  sym_argument = 109,
  sym_scalar_variable = 110,
  sym_list_variable = 111,
  sym_dictionary_variable = 112,
  sym_inline_python_expression = 113,
  sym__indentation = 114,
  sym__empty_line = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_settings_section_repeat1 = 117,
  aux_sym_variables_section_repeat1 = 118,
  aux_sym_keywords_section_repeat1 = 119,
  aux_sym_keyword_definition_body_repeat1 = 120,
  aux_sym_test_cases_section_repeat1 = 121,
  aux_sym_test_case_definition_body_repeat1 = 122,
  aux_sym_keyword_repeat1 = 123,
  aux_sym_if_statement_repeat1 = 124,
  aux_sym_inline_if_statement_repeat1 = 125,
  aux_sym_block_repeat1 = 126,
  aux_sym_try_statement_repeat1 = 127,
  aux_sym_for_statement_repeat1 = 128,
  aux_sym_arguments_repeat1 = 129,
  aux_sym_arguments_repeat2 = 130,
  aux_sym_argument_repeat1 = 131,
  aux_sym_inline_python_expression_repeat1 = 132,
  alias_sym_name = 133,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_SPACE] = " ",
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
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_test_cases_section_repeat1] = "test_cases_section_repeat1",
  [aux_sym_test_case_definition_body_repeat1] = "test_case_definition_body_repeat1",
  [aux_sym_keyword_repeat1] = "keyword_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_inline_if_statement_repeat1] = "inline_if_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_inline_python_expression_repeat1] = "inline_python_expression_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SPACE] = anon_sym_SPACE,
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
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_test_cases_section_repeat1] = aux_sym_test_cases_section_repeat1,
  [aux_sym_test_case_definition_body_repeat1] = aux_sym_test_case_definition_body_repeat1,
  [aux_sym_keyword_repeat1] = aux_sym_keyword_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_inline_if_statement_repeat1] = aux_sym_inline_if_statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_try_statement_repeat1] = aux_sym_try_statement_repeat1,
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_inline_python_expression_repeat1] = aux_sym_inline_python_expression_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
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
  [aux_sym_keyword_repeat1] = {
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
    [0] = alias_sym_name,
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
  [50] = 45,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 7,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 52,
  [66] = 66,
  [67] = 57,
  [68] = 68,
  [69] = 69,
  [70] = 7,
  [71] = 52,
  [72] = 53,
  [73] = 51,
  [74] = 74,
  [75] = 53,
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
  [96] = 96,
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
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 100,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 97,
  [123] = 123,
  [124] = 124,
  [125] = 96,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 117,
  [131] = 131,
  [132] = 110,
  [133] = 111,
  [134] = 112,
  [135] = 113,
  [136] = 114,
  [137] = 137,
  [138] = 119,
  [139] = 120,
  [140] = 121,
  [141] = 131,
  [142] = 90,
  [143] = 96,
  [144] = 144,
  [145] = 117,
  [146] = 111,
  [147] = 112,
  [148] = 113,
  [149] = 114,
  [150] = 150,
  [151] = 120,
  [152] = 121,
  [153] = 90,
  [154] = 110,
  [155] = 119,
  [156] = 95,
  [157] = 131,
  [158] = 95,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 159,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 166,
  [173] = 159,
  [174] = 166,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 170,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 177,
  [189] = 189,
  [190] = 7,
  [191] = 191,
  [192] = 192,
  [193] = 178,
  [194] = 183,
  [195] = 195,
  [196] = 187,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 168,
  [203] = 171,
  [204] = 200,
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
  [237] = 237,
  [238] = 238,
  [239] = 205,
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
  [252] = 249,
  [253] = 251,
  [254] = 206,
  [255] = 255,
  [256] = 256,
  [257] = 228,
  [258] = 205,
  [259] = 259,
  [260] = 245,
  [261] = 249,
  [262] = 251,
  [263] = 206,
  [264] = 264,
  [265] = 259,
  [266] = 245,
  [267] = 249,
  [268] = 205,
  [269] = 210,
  [270] = 213,
  [271] = 216,
  [272] = 210,
  [273] = 213,
  [274] = 216,
  [275] = 210,
  [276] = 259,
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
  [315] = 277,
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
  [327] = 110,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 119,
  [334] = 334,
  [335] = 335,
  [336] = 95,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 341,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 343,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 277,
  [358] = 358,
  [359] = 319,
  [360] = 360,
  [361] = 324,
  [362] = 342,
  [363] = 304,
  [364] = 316,
  [365] = 338,
  [366] = 343,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 277,
  [375] = 375,
  [376] = 319,
  [377] = 377,
  [378] = 324,
  [379] = 304,
  [380] = 316,
  [381] = 338,
  [382] = 343,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 304,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 335,
  [391] = 391,
  [392] = 373,
  [393] = 346,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 335,
  [398] = 391,
  [399] = 373,
  [400] = 400,
  [401] = 335,
  [402] = 391,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(320);
      ADVANCE_MAP(
        '\t', 377,
        ' ', 363,
        '#', 392,
        '$', 391,
        '.', 378,
        '=', 354,
        'B', 389,
        'C', 387,
        'E', 384,
        'F', 382,
        'I', 380,
        'R', 379,
        'T', 390,
        'W', 381,
        '[', 359,
        ']', 365,
        '}', 352,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 33,
        ' ', 363,
        '#', 519,
        ']', 365,
        '}', 352,
        'A', 239,
        'a', 239,
        'D', 220,
        'd', 220,
        'R', 158,
        'r', 158,
        'S', 174,
        's', 174,
        'T', 125,
        't', 125,
      );
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(523);
      if (lookahead == '#') ADVANCE(519);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 520,
        '\n', 524,
        '\r', 14,
        ' ', 361,
        '#', 517,
        '$', 115,
        '&', 116,
        '@', 117,
        '{', 114,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(527);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '=') ADVANCE(354);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(522);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '#') ADVANCE(517);
      if (lookahead == '$') ADVANCE(115);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(114);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\t', 11,
        '\n', 524,
        '\r', 14,
        ' ', 362,
        '#', 517,
        '$', 115,
        '{', 114,
        '&', 314,
        '@', 314,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(327);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 199,
        'K', 159,
        'k', 159,
        'S', 166,
        's', 166,
        'T', 167,
        't', 167,
        'V', 127,
        'v', 127,
      );
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(290);
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
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '#', 392,
        '$', 391,
        '.', 378,
        'B', 389,
        'C', 387,
        'F', 388,
        'I', 380,
        'R', 379,
        'T', 390,
        'W', 381,
        '\t', 377,
        ' ', 377,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '#', 392,
        '$', 391,
        'B', 389,
        'C', 387,
        'E', 383,
        'F', 388,
        'I', 380,
        'R', 379,
        'T', 390,
        'W', 381,
        '\t', 377,
        ' ', 377,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '#', 392,
        '$', 391,
        'B', 389,
        'C', 387,
        'E', 386,
        'F', 388,
        'I', 380,
        'R', 379,
        'T', 390,
        'W', 381,
        '\t', 377,
        ' ', 377,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '#', 392,
        '$', 391,
        'B', 389,
        'C', 387,
        'E', 385,
        'F', 382,
        'I', 380,
        'R', 379,
        'T', 390,
        'W', 381,
        '\t', 377,
        ' ', 377,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '#', 392,
        '$', 391,
        'B', 389,
        'C', 387,
        'F', 388,
        'I', 380,
        'R', 379,
        'T', 390,
        'W', 381,
        '[', 359,
        '\t', 377,
        ' ', 377,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '$') ADVANCE(391);
      if (lookahead == 'R') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(376);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '}') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(415);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(356);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(323);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(347);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(371);
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
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
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
      if (lookahead == '.') ADVANCE(409);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(394);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(397);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(401);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(407);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(405);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Z') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(395);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(408);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(375);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(403);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(406);
      END_STATE();
    case 98:
      if (lookahead == 'P') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(402);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(399);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 110:
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'Y') ADVANCE(398);
      END_STATE();
    case 112:
      if (lookahead == 'Y') ADVANCE(400);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(350);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(462);
      END_STATE();
    case 115:
      if (lookahead == '{') ADVANCE(351);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(411);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 117:
      if (lookahead == '{') ADVANCE(410);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 119:
      ADVANCE_MAP(
        '{', 435,
        'K', 477,
        'k', 477,
        'S', 478,
        's', 478,
        'T', 479,
        't', 479,
        'V', 472,
        'v', 472,
        '$', 315,
        '&', 315,
        '@', 315,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(502);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
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
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(246);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 186:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 187:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 188:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 189:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 190:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 191:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 198:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 199:
      ADVANCE_MAP(
        'K', 159,
        'k', 159,
        'S', 166,
        's', 166,
        'T', 167,
        't', 167,
        'V', 127,
        'v', 127,
      );
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 210:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 220:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 221:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 227:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 228:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 233:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 234:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 235:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 236:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 237:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 238:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 239:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 240:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 246:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 247:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 248:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 252:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 253:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(367);
      END_STATE();
    case 254:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(332);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(269);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 293:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 294:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 295:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 296:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 297:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
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
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 303:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 304:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 305:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 306:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 307:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
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
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 311:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 312:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 313:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 314:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(462);
      END_STATE();
    case 315:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(502);
      END_STATE();
    case 316:
      if (eof) ADVANCE(320);
      ADVANCE_MAP(
        '\t', 520,
        '\n', 524,
        '\r', 14,
        ' ', 526,
        '#', 517,
        '*', 426,
        '{', 114,
        0x0b, 14,
        '\f', 14,
        '$', 314,
        '&', 314,
        '@', 314,
      );
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 317:
      if (eof) ADVANCE(320);
      ADVANCE_MAP(
        '\n', 525,
        '\r', 15,
        '#', 519,
        '$', 113,
        '*', 41,
        'E', 88,
        'F', 80,
        'f', 225,
        '\t', 529,
        ' ', 529,
        'D', 161,
        'd', 161,
        'L', 192,
        'l', 192,
        'M', 173,
        'm', 173,
        'R', 171,
        'r', 171,
        'S', 299,
        's', 299,
        'T', 131,
        't', 131,
        'V', 143,
        'v', 143,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 318:
      if (eof) ADVANCE(320);
      ADVANCE_MAP(
        '\n', 524,
        '\r', 14,
        '#', 517,
        '*', 426,
        '{', 114,
        '\t', 528,
        ' ', 528,
        0x0b, 14,
        '\f', 14,
        '$', 314,
        '&', 314,
        '@', 314,
      );
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 319:
      if (eof) ADVANCE(320);
      ADVANCE_MAP(
        '#', 519,
        '$', 113,
        '*', 41,
        '.', 57,
        'E', 84,
        'F', 79,
        'I', 91,
        ']', 365,
        '}', 352,
        '\t', 321,
        ' ', 321,
        'A', 239,
        'a', 239,
        'D', 220,
        'd', 220,
        'R', 158,
        'r', 158,
        'S', 174,
        's', 174,
        'T', 125,
        't', 125,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(322);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(327);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(412);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(416);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(523);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'F') ADVANCE(393);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(350);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(519);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '{') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(517);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(517);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '{') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(518);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(518);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(518);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(427);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '{') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 119,
        'K', 440,
        'k', 440,
        'S', 441,
        's', 441,
        'T', 442,
        't', 442,
        'V', 436,
        'v', 436,
        '$', 314,
        '&', 314,
        '@', 314,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(314);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(315);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '{') ADVANCE(519);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(502);
      if (lookahead == '{') ADVANCE(519);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '{') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(529);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(529);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(521);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '{') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 319},
  [2] = {.lex_state = 317},
  [3] = {.lex_state = 317},
  [4] = {.lex_state = 317},
  [5] = {.lex_state = 317},
  [6] = {.lex_state = 317},
  [7] = {.lex_state = 317},
  [8] = {.lex_state = 317},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 316},
  [17] = {.lex_state = 316},
  [18] = {.lex_state = 316},
  [19] = {.lex_state = 316},
  [20] = {.lex_state = 319},
  [21] = {.lex_state = 318},
  [22] = {.lex_state = 318},
  [23] = {.lex_state = 318},
  [24] = {.lex_state = 318},
  [25] = {.lex_state = 317},
  [26] = {.lex_state = 317},
  [27] = {.lex_state = 318},
  [28] = {.lex_state = 318},
  [29] = {.lex_state = 318},
  [30] = {.lex_state = 318},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 318},
  [33] = {.lex_state = 319},
  [34] = {.lex_state = 317},
  [35] = {.lex_state = 317},
  [36] = {.lex_state = 317},
  [37] = {.lex_state = 319},
  [38] = {.lex_state = 318},
  [39] = {.lex_state = 319},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 319},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 316},
  [55] = {.lex_state = 316},
  [56] = {.lex_state = 316},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 318},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 317},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 318},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 317},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 318},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 319},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 319},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 319},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 319},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 319},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 317},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 317},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 34},
  [173] = {.lex_state = 34},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 317},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 319},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 34},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 319},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 319},
  [202] = {.lex_state = 317},
  [203] = {.lex_state = 317},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 319},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 319},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 319},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 319},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 319},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 13},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 319},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 317},
  [280] = {.lex_state = 317},
  [281] = {.lex_state = 317},
  [282] = {.lex_state = 319},
  [283] = {.lex_state = 317},
  [284] = {.lex_state = 317},
  [285] = {.lex_state = 317},
  [286] = {.lex_state = 317},
  [287] = {.lex_state = 317},
  [288] = {.lex_state = 317},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 317},
  [291] = {.lex_state = 317},
  [292] = {.lex_state = 317},
  [293] = {.lex_state = 317},
  [294] = {.lex_state = 35},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 317},
  [297] = {.lex_state = 317},
  [298] = {.lex_state = 319},
  [299] = {.lex_state = 317},
  [300] = {.lex_state = 317},
  [301] = {.lex_state = 317},
  [302] = {.lex_state = 317},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 319},
  [305] = {.lex_state = 317},
  [306] = {.lex_state = 317},
  [307] = {.lex_state = 319},
  [308] = {.lex_state = 319},
  [309] = {.lex_state = 317},
  [310] = {.lex_state = 317},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 317},
  [313] = {.lex_state = 319},
  [314] = {.lex_state = 319},
  [315] = {.lex_state = 319},
  [316] = {.lex_state = 319},
  [317] = {.lex_state = 317},
  [318] = {.lex_state = 317},
  [319] = {.lex_state = 319},
  [320] = {.lex_state = 317},
  [321] = {.lex_state = 319},
  [322] = {.lex_state = 319},
  [323] = {.lex_state = 317},
  [324] = {.lex_state = 319},
  [325] = {.lex_state = 319},
  [326] = {.lex_state = 317},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 317},
  [329] = {.lex_state = 317},
  [330] = {.lex_state = 317},
  [331] = {.lex_state = 317},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 317},
  [335] = {.lex_state = 35},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 319},
  [339] = {.lex_state = 317},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 319},
  [342] = {.lex_state = 319},
  [343] = {.lex_state = 317},
  [344] = {.lex_state = 317},
  [345] = {.lex_state = 319},
  [346] = {.lex_state = 35},
  [347] = {.lex_state = 319},
  [348] = {.lex_state = 8},
  [349] = {.lex_state = 317},
  [350] = {.lex_state = 317},
  [351] = {.lex_state = 317},
  [352] = {.lex_state = 317},
  [353] = {.lex_state = 317},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 317},
  [357] = {.lex_state = 319},
  [358] = {.lex_state = 317},
  [359] = {.lex_state = 319},
  [360] = {.lex_state = 319},
  [361] = {.lex_state = 319},
  [362] = {.lex_state = 319},
  [363] = {.lex_state = 319},
  [364] = {.lex_state = 319},
  [365] = {.lex_state = 319},
  [366] = {.lex_state = 317},
  [367] = {.lex_state = 317},
  [368] = {.lex_state = 317},
  [369] = {.lex_state = 317},
  [370] = {.lex_state = 319},
  [371] = {.lex_state = 317},
  [372] = {.lex_state = 317},
  [373] = {.lex_state = 35},
  [374] = {.lex_state = 319},
  [375] = {.lex_state = 319},
  [376] = {.lex_state = 319},
  [377] = {.lex_state = 319},
  [378] = {.lex_state = 319},
  [379] = {.lex_state = 319},
  [380] = {.lex_state = 319},
  [381] = {.lex_state = 319},
  [382] = {.lex_state = 317},
  [383] = {.lex_state = 317},
  [384] = {.lex_state = 319},
  [385] = {.lex_state = 8},
  [386] = {.lex_state = 319},
  [387] = {.lex_state = 317},
  [388] = {.lex_state = 319},
  [389] = {.lex_state = 317},
  [390] = {.lex_state = 35},
  [391] = {.lex_state = 35},
  [392] = {.lex_state = 35},
  [393] = {.lex_state = 35},
  [394] = {.lex_state = 319},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 317},
  [397] = {.lex_state = 35},
  [398] = {.lex_state = 35},
  [399] = {.lex_state = 35},
  [400] = {.lex_state = 319},
  [401] = {.lex_state = 35},
  [402] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(360),
    [sym_section] = STATE(20),
    [sym_settings_section] = STATE(127),
    [sym_variables_section] = STATE(127),
    [sym_keywords_section] = STATE(127),
    [sym_test_cases_section] = STATE(127),
    [aux_sym_source_file_repeat1] = STATE(20),
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
    STATE(100), 1,
      sym_keyword,
    STATE(331), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(300), 8,
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
    STATE(100), 1,
      sym_keyword,
    STATE(331), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(300), 8,
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
    STATE(100), 1,
      sym_keyword,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(301), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(300), 8,
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
    STATE(100), 1,
      sym_keyword,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(309), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(300), 8,
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
    STATE(100), 1,
      sym_keyword,
    STATE(331), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(300), 8,
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
    STATE(100), 1,
      sym_keyword,
    STATE(331), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(300), 8,
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
    STATE(100), 1,
      sym_keyword,
    STATE(331), 1,
      sym_statement,
    ACTIONS(76), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(300), 8,
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
      sym__separator,
    ACTIONS(98), 1,
      sym__line_break,
    ACTIONS(100), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(94), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym__separator,
    ACTIONS(109), 1,
      sym__line_break,
    ACTIONS(112), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(104), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [695] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym__empty_line_token1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym__separator,
    ACTIONS(121), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(19), 2,
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
    STATE(12), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(125), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [755] = 8,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(127), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [784] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      sym_text_chunk,
    ACTIONS(145), 1,
      sym__line_break,
    ACTIONS(148), 1,
      aux_sym__empty_line_token1,
    STATE(21), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(140), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__line_break,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    STATE(23), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(153), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [838] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym_text_chunk,
    ACTIONS(168), 1,
      sym__line_break,
    ACTIONS(171), 1,
      aux_sym__empty_line_token1,
    STATE(23), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(163), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [865] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(180), 1,
      sym__line_break,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(176), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [892] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [917] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(188), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [942] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__line_break,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(192), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [969] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(21), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(192), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [996] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym__line_break,
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1023] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(157), 1,
      sym__line_break,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1050] = 10,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__separator,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
      sym__indentation,
    STATE(106), 1,
      sym_block,
    STATE(189), 1,
      sym_else_statement,
    STATE(234), 1,
      sym_finally_statement,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(93), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1083] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_text_chunk,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym__line_break,
    STATE(30), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(212), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1110] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      aux_sym_settings_section_token1,
    ACTIONS(221), 1,
      aux_sym_variables_section_token1,
    ACTIONS(224), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(227), 1,
      aux_sym_test_cases_section_token1,
    STATE(33), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(127), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1139] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(232), 1,
      sym__line_break,
    STATE(26), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1164] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(188), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1189] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1214] = 8,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(127), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1243] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__empty_line_token1,
    ACTIONS(178), 1,
      sym_text_chunk,
    ACTIONS(196), 1,
      sym__line_break,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(21), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(249), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1270] = 8,
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
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(127), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1299] = 8,
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
    STATE(296), 1,
      sym_argument,
    STATE(71), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1327] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      anon_sym_IN,
    ACTIONS(267), 1,
      anon_sym_INRANGE,
    ACTIONS(269), 1,
      anon_sym_INENUMERATE,
    ACTIONS(271), 1,
      anon_sym_INZIP,
    STATE(303), 1,
      sym_scalar_variable,
    STATE(344), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1355] = 8,
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
    STATE(284), 1,
      sym_argument,
    STATE(71), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1383] = 10,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(273), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(137), 1,
      sym_block,
    STATE(144), 1,
      aux_sym_if_statement_repeat1,
    STATE(241), 1,
      sym_else_statement,
    STATE(385), 1,
      sym_elseif_statement,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1415] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(283), 1,
      sym_text_chunk,
    STATE(219), 1,
      sym_argument,
    STATE(52), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1443] = 8,
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
    STATE(229), 1,
      sym_argument,
    STATE(71), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(283), 1,
      sym_text_chunk,
    STATE(232), 1,
      sym_argument,
    STATE(52), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(283), 1,
      sym_text_chunk,
    STATE(223), 1,
      sym_argument,
    STATE(52), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(283), 1,
      sym_text_chunk,
    STATE(231), 1,
      sym_argument,
    STATE(52), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1555] = 8,
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
    STATE(289), 1,
      sym_argument,
    STATE(65), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1583] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(283), 1,
      sym_text_chunk,
    STATE(229), 1,
      sym_argument,
    STATE(52), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1611] = 7,
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
  [1636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(309), 1,
      anon_sym_SPACE,
    ACTIONS(311), 1,
      sym_text_chunk,
    ACTIONS(313), 2,
      sym__separator,
      sym__line_break,
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1661] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(309), 1,
      anon_sym_SPACE,
    ACTIONS(315), 1,
      sym_text_chunk,
    ACTIONS(317), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1686] = 3,
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
  [1703] = 3,
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
  [1720] = 3,
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
  [1737] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__separator,
    ACTIONS(332), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(240), 1,
      sym_arguments,
    ACTIONS(327), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1761] = 3,
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
  [1777] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(318), 1,
      sym_arguments,
    ACTIONS(339), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(345), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      anon_sym_RETURN,
    STATE(118), 1,
      sym_keyword,
    STATE(186), 1,
      sym_inline_statement,
    STATE(264), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1825] = 3,
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
  [1841] = 8,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(353), 1,
      sym_ellipses,
    ACTIONS(355), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(337), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1883] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_SPACE,
    STATE(256), 1,
      sym_keyword_setting_name,
    ACTIONS(362), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [1901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym__separator,
    ACTIONS(366), 1,
      anon_sym_SPACE,
    ACTIONS(368), 1,
      sym_text_chunk,
    STATE(75), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1925] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    STATE(100), 1,
      sym_keyword,
    STATE(290), 1,
      sym_inline_statement,
    STATE(264), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1949] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(372), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(240), 1,
      sym_arguments,
    ACTIONS(370), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1973] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(377), 1,
      aux_sym__empty_line_token1,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_keyword_token1,
    ACTIONS(345), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      anon_sym_RETURN,
    STATE(118), 1,
      sym_keyword,
    STATE(233), 1,
      sym_inline_statement,
    STATE(264), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2013] = 3,
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
  [2029] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym__line_break,
    ACTIONS(379), 1,
      anon_sym_SPACE,
    ACTIONS(381), 1,
      sym_text_chunk,
    STATE(72), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2053] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(317), 1,
      sym__line_break,
    ACTIONS(379), 1,
      anon_sym_SPACE,
    ACTIONS(383), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__line_break,
    ACTIONS(385), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(388), 1,
      anon_sym_SPACE,
    ACTIONS(391), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(394), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2101] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SPACE,
    STATE(217), 1,
      sym_test_case_setting_name,
    ACTIONS(397), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2119] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(317), 1,
      sym__separator,
    ACTIONS(366), 1,
      anon_sym_SPACE,
    ACTIONS(401), 1,
      sym_text_chunk,
    STATE(76), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2143] = 7,
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
  [2167] = 3,
    ACTIONS(17), 1,
      sym_comment,
    STATE(226), 1,
      sym_keyword_setting_name,
    ACTIONS(362), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2182] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(332), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2205] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(348), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2228] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym__empty_line_token1,
    ACTIONS(119), 1,
      sym__separator,
    ACTIONS(420), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(58), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2251] = 6,
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
    STATE(87), 2,
      sym_scalar_variable,
      aux_sym_keyword_repeat1,
  [2272] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(224), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2295] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(430), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(395), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 1,
      anon_sym_SPACE,
    ACTIONS(433), 1,
      sym_text_chunk,
    ACTIONS(435), 2,
      sym__separator,
      sym__line_break,
    STATE(81), 2,
      sym_scalar_variable,
      aux_sym_keyword_repeat1,
  [2339] = 3,
    ACTIONS(17), 1,
      sym_comment,
    STATE(238), 1,
      sym_test_case_setting_name,
    ACTIONS(397), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2354] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(295), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(440), 1,
      anon_sym_SPACE,
    ACTIONS(443), 1,
      sym_text_chunk,
    ACTIONS(446), 2,
      sym__separator,
      sym__line_break,
    STATE(87), 2,
      sym_scalar_variable,
      aux_sym_keyword_repeat1,
  [2398] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__separator,
    ACTIONS(100), 1,
      aux_sym__empty_line_token1,
    ACTIONS(448), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(63), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2421] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(450), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(248), 1,
      sym_block,
    STATE(92), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2444] = 3,
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
  [2458] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(339), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2478] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym__empty_line_token1,
    ACTIONS(456), 1,
      sym__separator,
    ACTIONS(459), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(103), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2498] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__separator,
    STATE(167), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(243), 1,
      sym_finally_statement,
    STATE(175), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2518] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(349), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2566] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(471), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(255), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2586] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(367), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2606] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(371), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2626] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(474), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(214), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2646] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__separator,
    STATE(169), 1,
      sym__indentation,
    STATE(180), 1,
      sym_else_statement,
    STATE(208), 1,
      sym_finally_statement,
    STATE(175), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2666] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(479), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(383), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2686] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__separator,
    ACTIONS(484), 1,
      sym__line_break,
    ACTIONS(487), 1,
      aux_sym__empty_line_token1,
    STATE(15), 1,
      sym__indentation,
    STATE(103), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2706] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(351), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2726] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(356), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2746] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__separator,
    STATE(167), 1,
      sym__indentation,
    STATE(191), 1,
      sym_else_statement,
    STATE(243), 1,
      sym_finally_statement,
    STATE(101), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2766] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(396), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2786] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(280), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2806] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(287), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(490), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(494), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(498), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(502), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(307), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2896] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(353), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2916] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(297), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(508), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2950] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(214), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2970] = 3,
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
  [2984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(522), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(526), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3012] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym__separator,
    ACTIONS(533), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(255), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3032] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(317), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3052] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(343), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
    STATE(368), 1,
      sym_arguments,
    STATE(202), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3085] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym__separator,
    STATE(161), 1,
      aux_sym_if_statement_repeat1,
    STATE(201), 1,
      sym__indentation,
    STATE(227), 1,
      sym_else_statement,
    STATE(385), 1,
      sym_elseif_statement,
  [3104] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(538), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3115] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(540), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
    STATE(179), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3132] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__separator,
    ACTIONS(546), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
    STATE(170), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(508), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(549), 1,
      sym_text_chunk,
    STATE(114), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(490), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(494), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(498), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(502), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(307), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3244] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__separator,
    STATE(126), 1,
      aux_sym_if_statement_repeat1,
    STATE(197), 1,
      sym__indentation,
    STATE(218), 1,
      sym_else_statement,
    STATE(385), 1,
      sym_elseif_statement,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(518), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(522), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(526), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(553), 1,
      sym_text_chunk,
    STATE(149), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3345] = 6,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym__separator,
    STATE(161), 1,
      aux_sym_if_statement_repeat1,
    STATE(182), 1,
      sym__indentation,
    STATE(220), 1,
      sym_else_statement,
    STATE(385), 1,
      sym_elseif_statement,
  [3364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(508), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(494), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(498), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(502), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(307), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 3,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(522), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(526), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(490), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(518), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3520] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(559), 1,
      sym_text_chunk,
    STATE(136), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(172), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3564] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_ELSEIF,
    ACTIONS(567), 1,
      anon_sym_ELSE,
    STATE(225), 1,
      sym_inline_elseif_statement,
    STATE(358), 1,
      sym_inline_else_statement,
  [3580] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__separator,
    STATE(161), 1,
      aux_sym_if_statement_repeat1,
    STATE(385), 1,
      sym_elseif_statement,
    STATE(388), 1,
      sym__indentation,
  [3596] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_ELSEIF,
    ACTIONS(567), 1,
      anon_sym_ELSE,
    STATE(225), 1,
      sym_inline_elseif_statement,
    STATE(279), 1,
      sym_inline_else_statement,
  [3612] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(572), 1,
      sym__line_break,
    STATE(176), 1,
      aux_sym_arguments_repeat1,
    STATE(334), 1,
      sym_arguments_without_continuation,
  [3628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(576), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3670] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_ELSE,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(583), 1,
      anon_sym_END,
  [3686] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__line_break,
    ACTIONS(585), 1,
      sym__separator,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3700] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_ELSE,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(587), 1,
      anon_sym_END,
  [3716] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__separator,
    ACTIONS(591), 1,
      sym__line_break,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3730] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__separator,
    ACTIONS(596), 1,
      sym__line_break,
    STATE(171), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(174), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(561), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3786] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__separator,
    STATE(313), 1,
      sym__indentation,
    STATE(175), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3800] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(608), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [3813] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(178), 1,
      aux_sym_arguments_repeat1,
  [3826] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(612), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [3839] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__line_break,
    STATE(203), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3850] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__separator,
    STATE(221), 1,
      sym_finally_statement,
    STATE(222), 1,
      sym__indentation,
  [3863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(619), 1,
      sym_text_chunk,
    STATE(150), 1,
      sym_scalar_variable,
  [3876] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    ACTIONS(621), 1,
      anon_sym_END,
  [3889] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_ellipses,
    ACTIONS(623), 1,
      sym__separator,
    STATE(341), 1,
      sym__indentation,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(625), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3913] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__line_break,
    ACTIONS(629), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [3924] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__separator,
    ACTIONS(635), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_inline_if_statement_repeat1,
  [3937] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__separator,
    ACTIONS(640), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [3950] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym__line_break,
    ACTIONS(642), 1,
      sym__separator,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [3963] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym__separator,
    STATE(243), 1,
      sym_finally_statement,
    STATE(244), 1,
      sym__indentation,
  [3976] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__line_break,
    ACTIONS(48), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [3987] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__separator,
    STATE(208), 1,
      sym_finally_statement,
    STATE(209), 1,
      sym__indentation,
  [4000] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym__separator,
    ACTIONS(651), 1,
      sym__line_break,
    STATE(199), 1,
      aux_sym_inline_if_statement_repeat1,
  [4013] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__line_break,
    ACTIONS(653), 1,
      sym__separator,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [4026] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_ellipses,
    ACTIONS(658), 1,
      sym__separator,
    STATE(347), 1,
      sym__indentation,
  [4039] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    STATE(176), 1,
      aux_sym_arguments_repeat1,
    STATE(305), 1,
      sym_arguments_without_continuation,
  [4052] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(640), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [4065] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    ACTIONS(660), 1,
      anon_sym_END,
  [4078] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__separator,
    ACTIONS(665), 1,
      sym__line_break,
    STATE(198), 1,
      aux_sym_arguments_repeat1,
  [4091] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__separator,
    ACTIONS(670), 1,
      sym__line_break,
    STATE(199), 1,
      aux_sym_inline_if_statement_repeat1,
  [4104] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__line_break,
    ACTIONS(653), 1,
      sym__separator,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
  [4117] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    ACTIONS(82), 1,
      anon_sym_ELSE,
    ACTIONS(672), 1,
      anon_sym_END,
  [4130] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__line_break,
    STATE(203), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4141] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__line_break,
    STATE(203), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4152] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__separator,
    ACTIONS(612), 1,
      sym__line_break,
    STATE(196), 1,
      aux_sym_arguments_repeat1,
  [4165] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 1,
      anon_sym_SPACE,
  [4175] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 1,
      anon_sym_SPACE,
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      aux_sym_settings_section_token2,
    ACTIONS(687), 1,
      sym__line_break,
  [4195] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__separator,
    STATE(321), 1,
      sym__indentation,
  [4205] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(587), 1,
      anon_sym_END,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SPACE,
    ACTIONS(693), 1,
      sym_variable_name,
  [4225] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(303), 1,
      sym_scalar_variable,
  [4235] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym__separator,
    STATE(237), 1,
      aux_sym_for_statement_repeat1,
  [4245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_SPACE,
    ACTIONS(699), 1,
      sym_variable_name,
  [4255] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__separator,
    ACTIONS(703), 1,
      sym__line_break,
  [4265] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SPACE,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SPACE,
    ACTIONS(711), 1,
      sym_variable_name,
  [4285] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SPACE,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
  [4295] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym__separator,
    STATE(370), 1,
      sym__indentation,
  [4305] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym__line_break,
    ACTIONS(719), 1,
      sym__separator,
  [4315] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym__separator,
    STATE(384), 1,
      sym__indentation,
  [4325] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__separator,
    STATE(394), 1,
      sym__indentation,
  [4335] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(725), 1,
      anon_sym_END,
  [4345] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__separator,
    ACTIONS(729), 1,
      sym__line_break,
  [4355] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym__separator,
    STATE(400), 1,
      sym__indentation,
  [4365] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__line_break,
    ACTIONS(733), 1,
      sym__separator,
  [4375] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SPACE,
    ACTIONS(737), 1,
      anon_sym_RBRACK,
  [4385] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__separator,
    STATE(282), 1,
      sym__indentation,
  [4395] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__separator,
    ACTIONS(743), 1,
      sym__line_break,
  [4405] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym__separator,
    ACTIONS(747), 1,
      sym__line_break,
  [4415] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_ELSEIF,
    STATE(225), 1,
      sym_inline_elseif_statement,
  [4425] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym__separator,
    ACTIONS(751), 1,
      sym__line_break,
  [4435] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym__separator,
    ACTIONS(755), 1,
      sym__line_break,
  [4445] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym__separator,
    ACTIONS(759), 1,
      sym__line_break,
  [4455] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__separator,
    STATE(325), 1,
      sym__indentation,
  [4465] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym__separator,
    STATE(212), 1,
      aux_sym_for_statement_repeat1,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      aux_sym_settings_section_token2,
    ACTIONS(767), 1,
      sym__line_break,
  [4485] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__separator,
    STATE(237), 1,
      aux_sym_for_statement_repeat1,
  [4495] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SPACE,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
  [4505] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(778), 1,
      anon_sym_SPACE,
  [4515] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__separator,
    ACTIONS(782), 1,
      sym__line_break,
  [4525] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym__separator,
    STATE(298), 1,
      sym__indentation,
  [4535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      aux_sym_settings_section_token2,
    ACTIONS(788), 1,
      sym__line_break,
  [4545] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__separator,
    STATE(375), 1,
      sym__indentation,
  [4555] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_FINALLY,
    ACTIONS(583), 1,
      anon_sym_END,
  [4565] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    ACTIONS(794), 1,
      anon_sym_SPACE,
  [4575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym_settings_section_token2,
    ACTIONS(798), 1,
      sym__line_break,
  [4585] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__separator,
    ACTIONS(802), 1,
      sym__line_break,
  [4595] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__separator,
    STATE(322), 1,
      sym__indentation,
  [4605] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    ACTIONS(808), 1,
      anon_sym_SPACE,
  [4615] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SPACE,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
  [4625] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    ACTIONS(816), 1,
      anon_sym_SPACE,
  [4635] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(820), 1,
      anon_sym_SPACE,
  [4645] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(824), 1,
      anon_sym_SPACE,
  [4655] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    ACTIONS(828), 1,
      anon_sym_SPACE,
  [4665] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__separator,
    ACTIONS(832), 1,
      sym__line_break,
  [4675] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SPACE,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
  [4685] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym__line_break,
    ACTIONS(838), 1,
      sym__separator,
  [4695] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    ACTIONS(842), 1,
      anon_sym_SPACE,
  [4705] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    ACTIONS(846), 1,
      anon_sym_SPACE,
  [4715] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    ACTIONS(850), 1,
      anon_sym_SPACE,
  [4725] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    ACTIONS(854), 1,
      anon_sym_SPACE,
  [4735] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    ACTIONS(858), 1,
      anon_sym_SPACE,
  [4745] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    ACTIONS(862), 1,
      anon_sym_SPACE,
  [4755] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__separator,
    ACTIONS(866), 1,
      sym__line_break,
  [4765] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
    ACTIONS(870), 1,
      anon_sym_SPACE,
  [4775] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
    ACTIONS(874), 1,
      anon_sym_SPACE,
  [4785] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    ACTIONS(878), 1,
      anon_sym_SPACE,
  [4795] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    ACTIONS(882), 1,
      anon_sym_SPACE,
  [4805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SPACE,
    ACTIONS(886), 1,
      sym_variable_name,
  [4815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_SPACE,
    ACTIONS(890), 1,
      sym_variable_name,
  [4825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_SPACE,
    ACTIONS(894), 1,
      sym_variable_name,
  [4835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SPACE,
    ACTIONS(898), 1,
      sym_variable_name,
  [4845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_SPACE,
    ACTIONS(902), 1,
      sym_variable_name,
  [4855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_SPACE,
    ACTIONS(906), 1,
      sym_variable_name,
  [4865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_SPACE,
    ACTIONS(910), 1,
      sym_variable_name,
  [4875] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    ACTIONS(914), 1,
      anon_sym_SPACE,
  [4885] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
  [4892] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym__separator,
  [4899] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__line_break,
  [4906] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__line_break,
  [4913] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__line_break,
  [4920] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_END,
  [4927] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym__line_break,
  [4934] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym__line_break,
  [4941] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym__line_break,
  [4948] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym__line_break,
  [4955] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym__line_break,
  [4962] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym__line_break,
  [4969] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym__separator,
  [4976] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym__line_break,
  [4983] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym__line_break,
  [4990] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym__line_break,
  [4997] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__line_break,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_variable_name,
  [5011] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym__separator,
  [5018] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym__line_break,
  [5025] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym__line_break,
  [5032] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_END,
  [5039] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym__line_break,
  [5046] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym__line_break,
  [5053] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym__line_break,
  [5060] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym__line_break,
  [5067] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__separator,
  [5074] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
  [5081] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym__line_break,
  [5088] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym__line_break,
  [5095] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
  [5102] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
  [5109] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(978), 1,
      sym__line_break,
  [5116] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(980), 1,
      sym__line_break,
  [5123] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym__separator,
  [5130] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym__line_break,
  [5137] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_EXCEPT,
  [5144] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
  [5151] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
  [5158] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
  [5165] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym__line_break,
  [5172] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym__line_break,
  [5179] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [5186] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(994), 1,
      sym__line_break,
  [5193] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_END,
  [5200] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_END,
  [5207] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym__line_break,
  [5214] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
  [5221] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_END,
  [5228] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym__line_break,
  [5235] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym__separator,
  [5242] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym__line_break,
  [5249] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym__line_break,
  [5256] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym__line_break,
  [5263] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym__line_break,
  [5270] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym__separator,
  [5277] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__separator,
  [5284] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1012), 1,
      sym__line_break,
  [5291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_variable_name,
  [5298] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__separator,
  [5305] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym__separator,
  [5312] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
  [5319] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym__line_break,
  [5326] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym__separator,
  [5333] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_ellipses,
  [5340] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
  [5347] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__line_break,
  [5354] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym__line_break,
  [5361] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
  [5368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym_variable_name,
  [5375] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_ellipses,
  [5382] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym__separator,
  [5389] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__line_break,
  [5396] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__line_break,
  [5403] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__line_break,
  [5410] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym__line_break,
  [5417] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__line_break,
  [5424] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym__separator,
  [5431] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym__separator,
  [5438] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__line_break,
  [5445] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [5452] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym__line_break,
  [5459] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
  [5466] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1056), 1,
      ts_builtin_sym_end,
  [5473] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [5480] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
  [5487] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
  [5494] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
  [5501] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
  [5508] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym__line_break,
  [5515] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym__line_break,
  [5522] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym__line_break,
  [5529] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__line_break,
  [5536] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_END,
  [5543] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym__line_break,
  [5550] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym__line_break,
  [5557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_variable_name,
  [5564] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
  [5571] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_END,
  [5578] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
  [5585] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_RBRACK,
  [5592] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [5599] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
  [5606] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
  [5613] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_RBRACE,
  [5620] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym__line_break,
  [5627] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym__line_break,
  [5634] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_END,
  [5641] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__separator,
  [5648] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_RBRACE,
  [5655] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__line_break,
  [5662] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
  [5669] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym__line_break,
  [5676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym_variable_name,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym_variable_name,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym_variable_name,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_variable_name,
  [5704] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_END,
  [5711] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym__separator,
  [5718] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1116), 1,
      sym__line_break,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      sym_variable_name,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      sym_variable_name,
  [5739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym_variable_name,
  [5746] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_END,
  [5753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym_variable_name,
  [5760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
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
  [SMALL_STATE(21)] = 784,
  [SMALL_STATE(22)] = 811,
  [SMALL_STATE(23)] = 838,
  [SMALL_STATE(24)] = 865,
  [SMALL_STATE(25)] = 892,
  [SMALL_STATE(26)] = 917,
  [SMALL_STATE(27)] = 942,
  [SMALL_STATE(28)] = 969,
  [SMALL_STATE(29)] = 996,
  [SMALL_STATE(30)] = 1023,
  [SMALL_STATE(31)] = 1050,
  [SMALL_STATE(32)] = 1083,
  [SMALL_STATE(33)] = 1110,
  [SMALL_STATE(34)] = 1139,
  [SMALL_STATE(35)] = 1164,
  [SMALL_STATE(36)] = 1189,
  [SMALL_STATE(37)] = 1214,
  [SMALL_STATE(38)] = 1243,
  [SMALL_STATE(39)] = 1270,
  [SMALL_STATE(40)] = 1299,
  [SMALL_STATE(41)] = 1327,
  [SMALL_STATE(42)] = 1355,
  [SMALL_STATE(43)] = 1383,
  [SMALL_STATE(44)] = 1415,
  [SMALL_STATE(45)] = 1443,
  [SMALL_STATE(46)] = 1471,
  [SMALL_STATE(47)] = 1499,
  [SMALL_STATE(48)] = 1527,
  [SMALL_STATE(49)] = 1555,
  [SMALL_STATE(50)] = 1583,
  [SMALL_STATE(51)] = 1611,
  [SMALL_STATE(52)] = 1636,
  [SMALL_STATE(53)] = 1661,
  [SMALL_STATE(54)] = 1686,
  [SMALL_STATE(55)] = 1703,
  [SMALL_STATE(56)] = 1720,
  [SMALL_STATE(57)] = 1737,
  [SMALL_STATE(58)] = 1761,
  [SMALL_STATE(59)] = 1777,
  [SMALL_STATE(60)] = 1801,
  [SMALL_STATE(61)] = 1825,
  [SMALL_STATE(62)] = 1841,
  [SMALL_STATE(63)] = 1867,
  [SMALL_STATE(64)] = 1883,
  [SMALL_STATE(65)] = 1901,
  [SMALL_STATE(66)] = 1925,
  [SMALL_STATE(67)] = 1949,
  [SMALL_STATE(68)] = 1973,
  [SMALL_STATE(69)] = 1989,
  [SMALL_STATE(70)] = 2013,
  [SMALL_STATE(71)] = 2029,
  [SMALL_STATE(72)] = 2053,
  [SMALL_STATE(73)] = 2077,
  [SMALL_STATE(74)] = 2101,
  [SMALL_STATE(75)] = 2119,
  [SMALL_STATE(76)] = 2143,
  [SMALL_STATE(77)] = 2167,
  [SMALL_STATE(78)] = 2182,
  [SMALL_STATE(79)] = 2205,
  [SMALL_STATE(80)] = 2228,
  [SMALL_STATE(81)] = 2251,
  [SMALL_STATE(82)] = 2272,
  [SMALL_STATE(83)] = 2295,
  [SMALL_STATE(84)] = 2318,
  [SMALL_STATE(85)] = 2339,
  [SMALL_STATE(86)] = 2354,
  [SMALL_STATE(87)] = 2377,
  [SMALL_STATE(88)] = 2398,
  [SMALL_STATE(89)] = 2421,
  [SMALL_STATE(90)] = 2444,
  [SMALL_STATE(91)] = 2458,
  [SMALL_STATE(92)] = 2478,
  [SMALL_STATE(93)] = 2498,
  [SMALL_STATE(94)] = 2518,
  [SMALL_STATE(95)] = 2538,
  [SMALL_STATE(96)] = 2552,
  [SMALL_STATE(97)] = 2566,
  [SMALL_STATE(98)] = 2586,
  [SMALL_STATE(99)] = 2606,
  [SMALL_STATE(100)] = 2626,
  [SMALL_STATE(101)] = 2646,
  [SMALL_STATE(102)] = 2666,
  [SMALL_STATE(103)] = 2686,
  [SMALL_STATE(104)] = 2706,
  [SMALL_STATE(105)] = 2726,
  [SMALL_STATE(106)] = 2746,
  [SMALL_STATE(107)] = 2766,
  [SMALL_STATE(108)] = 2786,
  [SMALL_STATE(109)] = 2806,
  [SMALL_STATE(110)] = 2826,
  [SMALL_STATE(111)] = 2840,
  [SMALL_STATE(112)] = 2854,
  [SMALL_STATE(113)] = 2868,
  [SMALL_STATE(114)] = 2882,
  [SMALL_STATE(115)] = 2896,
  [SMALL_STATE(116)] = 2916,
  [SMALL_STATE(117)] = 2936,
  [SMALL_STATE(118)] = 2950,
  [SMALL_STATE(119)] = 2970,
  [SMALL_STATE(120)] = 2984,
  [SMALL_STATE(121)] = 2998,
  [SMALL_STATE(122)] = 3012,
  [SMALL_STATE(123)] = 3032,
  [SMALL_STATE(124)] = 3052,
  [SMALL_STATE(125)] = 3072,
  [SMALL_STATE(126)] = 3085,
  [SMALL_STATE(127)] = 3104,
  [SMALL_STATE(128)] = 3115,
  [SMALL_STATE(129)] = 3132,
  [SMALL_STATE(130)] = 3149,
  [SMALL_STATE(131)] = 3162,
  [SMALL_STATE(132)] = 3179,
  [SMALL_STATE(133)] = 3192,
  [SMALL_STATE(134)] = 3205,
  [SMALL_STATE(135)] = 3218,
  [SMALL_STATE(136)] = 3231,
  [SMALL_STATE(137)] = 3244,
  [SMALL_STATE(138)] = 3263,
  [SMALL_STATE(139)] = 3276,
  [SMALL_STATE(140)] = 3289,
  [SMALL_STATE(141)] = 3302,
  [SMALL_STATE(142)] = 3319,
  [SMALL_STATE(143)] = 3332,
  [SMALL_STATE(144)] = 3345,
  [SMALL_STATE(145)] = 3364,
  [SMALL_STATE(146)] = 3377,
  [SMALL_STATE(147)] = 3390,
  [SMALL_STATE(148)] = 3403,
  [SMALL_STATE(149)] = 3416,
  [SMALL_STATE(150)] = 3429,
  [SMALL_STATE(151)] = 3442,
  [SMALL_STATE(152)] = 3455,
  [SMALL_STATE(153)] = 3468,
  [SMALL_STATE(154)] = 3481,
  [SMALL_STATE(155)] = 3494,
  [SMALL_STATE(156)] = 3507,
  [SMALL_STATE(157)] = 3520,
  [SMALL_STATE(158)] = 3537,
  [SMALL_STATE(159)] = 3550,
  [SMALL_STATE(160)] = 3564,
  [SMALL_STATE(161)] = 3580,
  [SMALL_STATE(162)] = 3596,
  [SMALL_STATE(163)] = 3612,
  [SMALL_STATE(164)] = 3628,
  [SMALL_STATE(165)] = 3642,
  [SMALL_STATE(166)] = 3656,
  [SMALL_STATE(167)] = 3670,
  [SMALL_STATE(168)] = 3686,
  [SMALL_STATE(169)] = 3700,
  [SMALL_STATE(170)] = 3716,
  [SMALL_STATE(171)] = 3730,
  [SMALL_STATE(172)] = 3744,
  [SMALL_STATE(173)] = 3758,
  [SMALL_STATE(174)] = 3772,
  [SMALL_STATE(175)] = 3786,
  [SMALL_STATE(176)] = 3800,
  [SMALL_STATE(177)] = 3813,
  [SMALL_STATE(178)] = 3826,
  [SMALL_STATE(179)] = 3839,
  [SMALL_STATE(180)] = 3850,
  [SMALL_STATE(181)] = 3863,
  [SMALL_STATE(182)] = 3876,
  [SMALL_STATE(183)] = 3889,
  [SMALL_STATE(184)] = 3902,
  [SMALL_STATE(185)] = 3913,
  [SMALL_STATE(186)] = 3924,
  [SMALL_STATE(187)] = 3937,
  [SMALL_STATE(188)] = 3950,
  [SMALL_STATE(189)] = 3963,
  [SMALL_STATE(190)] = 3976,
  [SMALL_STATE(191)] = 3987,
  [SMALL_STATE(192)] = 4000,
  [SMALL_STATE(193)] = 4013,
  [SMALL_STATE(194)] = 4026,
  [SMALL_STATE(195)] = 4039,
  [SMALL_STATE(196)] = 4052,
  [SMALL_STATE(197)] = 4065,
  [SMALL_STATE(198)] = 4078,
  [SMALL_STATE(199)] = 4091,
  [SMALL_STATE(200)] = 4104,
  [SMALL_STATE(201)] = 4117,
  [SMALL_STATE(202)] = 4130,
  [SMALL_STATE(203)] = 4141,
  [SMALL_STATE(204)] = 4152,
  [SMALL_STATE(205)] = 4165,
  [SMALL_STATE(206)] = 4175,
  [SMALL_STATE(207)] = 4185,
  [SMALL_STATE(208)] = 4195,
  [SMALL_STATE(209)] = 4205,
  [SMALL_STATE(210)] = 4215,
  [SMALL_STATE(211)] = 4225,
  [SMALL_STATE(212)] = 4235,
  [SMALL_STATE(213)] = 4245,
  [SMALL_STATE(214)] = 4255,
  [SMALL_STATE(215)] = 4265,
  [SMALL_STATE(216)] = 4275,
  [SMALL_STATE(217)] = 4285,
  [SMALL_STATE(218)] = 4295,
  [SMALL_STATE(219)] = 4305,
  [SMALL_STATE(220)] = 4315,
  [SMALL_STATE(221)] = 4325,
  [SMALL_STATE(222)] = 4335,
  [SMALL_STATE(223)] = 4345,
  [SMALL_STATE(224)] = 4355,
  [SMALL_STATE(225)] = 4365,
  [SMALL_STATE(226)] = 4375,
  [SMALL_STATE(227)] = 4385,
  [SMALL_STATE(228)] = 4395,
  [SMALL_STATE(229)] = 4405,
  [SMALL_STATE(230)] = 4415,
  [SMALL_STATE(231)] = 4425,
  [SMALL_STATE(232)] = 4435,
  [SMALL_STATE(233)] = 4445,
  [SMALL_STATE(234)] = 4455,
  [SMALL_STATE(235)] = 4465,
  [SMALL_STATE(236)] = 4475,
  [SMALL_STATE(237)] = 4485,
  [SMALL_STATE(238)] = 4495,
  [SMALL_STATE(239)] = 4505,
  [SMALL_STATE(240)] = 4515,
  [SMALL_STATE(241)] = 4525,
  [SMALL_STATE(242)] = 4535,
  [SMALL_STATE(243)] = 4545,
  [SMALL_STATE(244)] = 4555,
  [SMALL_STATE(245)] = 4565,
  [SMALL_STATE(246)] = 4575,
  [SMALL_STATE(247)] = 4585,
  [SMALL_STATE(248)] = 4595,
  [SMALL_STATE(249)] = 4605,
  [SMALL_STATE(250)] = 4615,
  [SMALL_STATE(251)] = 4625,
  [SMALL_STATE(252)] = 4635,
  [SMALL_STATE(253)] = 4645,
  [SMALL_STATE(254)] = 4655,
  [SMALL_STATE(255)] = 4665,
  [SMALL_STATE(256)] = 4675,
  [SMALL_STATE(257)] = 4685,
  [SMALL_STATE(258)] = 4695,
  [SMALL_STATE(259)] = 4705,
  [SMALL_STATE(260)] = 4715,
  [SMALL_STATE(261)] = 4725,
  [SMALL_STATE(262)] = 4735,
  [SMALL_STATE(263)] = 4745,
  [SMALL_STATE(264)] = 4755,
  [SMALL_STATE(265)] = 4765,
  [SMALL_STATE(266)] = 4775,
  [SMALL_STATE(267)] = 4785,
  [SMALL_STATE(268)] = 4795,
  [SMALL_STATE(269)] = 4805,
  [SMALL_STATE(270)] = 4815,
  [SMALL_STATE(271)] = 4825,
  [SMALL_STATE(272)] = 4835,
  [SMALL_STATE(273)] = 4845,
  [SMALL_STATE(274)] = 4855,
  [SMALL_STATE(275)] = 4865,
  [SMALL_STATE(276)] = 4875,
  [SMALL_STATE(277)] = 4885,
  [SMALL_STATE(278)] = 4892,
  [SMALL_STATE(279)] = 4899,
  [SMALL_STATE(280)] = 4906,
  [SMALL_STATE(281)] = 4913,
  [SMALL_STATE(282)] = 4920,
  [SMALL_STATE(283)] = 4927,
  [SMALL_STATE(284)] = 4934,
  [SMALL_STATE(285)] = 4941,
  [SMALL_STATE(286)] = 4948,
  [SMALL_STATE(287)] = 4955,
  [SMALL_STATE(288)] = 4962,
  [SMALL_STATE(289)] = 4969,
  [SMALL_STATE(290)] = 4976,
  [SMALL_STATE(291)] = 4983,
  [SMALL_STATE(292)] = 4990,
  [SMALL_STATE(293)] = 4997,
  [SMALL_STATE(294)] = 5004,
  [SMALL_STATE(295)] = 5011,
  [SMALL_STATE(296)] = 5018,
  [SMALL_STATE(297)] = 5025,
  [SMALL_STATE(298)] = 5032,
  [SMALL_STATE(299)] = 5039,
  [SMALL_STATE(300)] = 5046,
  [SMALL_STATE(301)] = 5053,
  [SMALL_STATE(302)] = 5060,
  [SMALL_STATE(303)] = 5067,
  [SMALL_STATE(304)] = 5074,
  [SMALL_STATE(305)] = 5081,
  [SMALL_STATE(306)] = 5088,
  [SMALL_STATE(307)] = 5095,
  [SMALL_STATE(308)] = 5102,
  [SMALL_STATE(309)] = 5109,
  [SMALL_STATE(310)] = 5116,
  [SMALL_STATE(311)] = 5123,
  [SMALL_STATE(312)] = 5130,
  [SMALL_STATE(313)] = 5137,
  [SMALL_STATE(314)] = 5144,
  [SMALL_STATE(315)] = 5151,
  [SMALL_STATE(316)] = 5158,
  [SMALL_STATE(317)] = 5165,
  [SMALL_STATE(318)] = 5172,
  [SMALL_STATE(319)] = 5179,
  [SMALL_STATE(320)] = 5186,
  [SMALL_STATE(321)] = 5193,
  [SMALL_STATE(322)] = 5200,
  [SMALL_STATE(323)] = 5207,
  [SMALL_STATE(324)] = 5214,
  [SMALL_STATE(325)] = 5221,
  [SMALL_STATE(326)] = 5228,
  [SMALL_STATE(327)] = 5235,
  [SMALL_STATE(328)] = 5242,
  [SMALL_STATE(329)] = 5249,
  [SMALL_STATE(330)] = 5256,
  [SMALL_STATE(331)] = 5263,
  [SMALL_STATE(332)] = 5270,
  [SMALL_STATE(333)] = 5277,
  [SMALL_STATE(334)] = 5284,
  [SMALL_STATE(335)] = 5291,
  [SMALL_STATE(336)] = 5298,
  [SMALL_STATE(337)] = 5305,
  [SMALL_STATE(338)] = 5312,
  [SMALL_STATE(339)] = 5319,
  [SMALL_STATE(340)] = 5326,
  [SMALL_STATE(341)] = 5333,
  [SMALL_STATE(342)] = 5340,
  [SMALL_STATE(343)] = 5347,
  [SMALL_STATE(344)] = 5354,
  [SMALL_STATE(345)] = 5361,
  [SMALL_STATE(346)] = 5368,
  [SMALL_STATE(347)] = 5375,
  [SMALL_STATE(348)] = 5382,
  [SMALL_STATE(349)] = 5389,
  [SMALL_STATE(350)] = 5396,
  [SMALL_STATE(351)] = 5403,
  [SMALL_STATE(352)] = 5410,
  [SMALL_STATE(353)] = 5417,
  [SMALL_STATE(354)] = 5424,
  [SMALL_STATE(355)] = 5431,
  [SMALL_STATE(356)] = 5438,
  [SMALL_STATE(357)] = 5445,
  [SMALL_STATE(358)] = 5452,
  [SMALL_STATE(359)] = 5459,
  [SMALL_STATE(360)] = 5466,
  [SMALL_STATE(361)] = 5473,
  [SMALL_STATE(362)] = 5480,
  [SMALL_STATE(363)] = 5487,
  [SMALL_STATE(364)] = 5494,
  [SMALL_STATE(365)] = 5501,
  [SMALL_STATE(366)] = 5508,
  [SMALL_STATE(367)] = 5515,
  [SMALL_STATE(368)] = 5522,
  [SMALL_STATE(369)] = 5529,
  [SMALL_STATE(370)] = 5536,
  [SMALL_STATE(371)] = 5543,
  [SMALL_STATE(372)] = 5550,
  [SMALL_STATE(373)] = 5557,
  [SMALL_STATE(374)] = 5564,
  [SMALL_STATE(375)] = 5571,
  [SMALL_STATE(376)] = 5578,
  [SMALL_STATE(377)] = 5585,
  [SMALL_STATE(378)] = 5592,
  [SMALL_STATE(379)] = 5599,
  [SMALL_STATE(380)] = 5606,
  [SMALL_STATE(381)] = 5613,
  [SMALL_STATE(382)] = 5620,
  [SMALL_STATE(383)] = 5627,
  [SMALL_STATE(384)] = 5634,
  [SMALL_STATE(385)] = 5641,
  [SMALL_STATE(386)] = 5648,
  [SMALL_STATE(387)] = 5655,
  [SMALL_STATE(388)] = 5662,
  [SMALL_STATE(389)] = 5669,
  [SMALL_STATE(390)] = 5676,
  [SMALL_STATE(391)] = 5683,
  [SMALL_STATE(392)] = 5690,
  [SMALL_STATE(393)] = 5697,
  [SMALL_STATE(394)] = 5704,
  [SMALL_STATE(395)] = 5711,
  [SMALL_STATE(396)] = 5718,
  [SMALL_STATE(397)] = 5725,
  [SMALL_STATE(398)] = 5732,
  [SMALL_STATE(399)] = 5739,
  [SMALL_STATE(400)] = 5746,
  [SMALL_STATE(401)] = 5753,
  [SMALL_STATE(402)] = 5760,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(343),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(44),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(194),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(14),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(183),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(15),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(15),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(15),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(183),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(183),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(44),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(194),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(44),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(194),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(183),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(44),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(194),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 10), SHIFT_REPEAT(388),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(194),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(194),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(183),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 0),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 0), SHIFT(44),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 0),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(44),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 0),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(44),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(183),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 4),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 5),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 17),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 18),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, 0, 6),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 19),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 20),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 21),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 9),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, 0, 5),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 8),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 11),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, 0, 5),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 12),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, 0, 6),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 6),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 13),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 5),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 14),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 7),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 15),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 6),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
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
