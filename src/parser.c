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
#define STATE_COUNT 448
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 3
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_comments_section_token1 = 2,
  aux_sym_comments_section_token2 = 3,
  aux_sym_settings_section_token1 = 4,
  aux_sym_setting_name_token1 = 5,
  aux_sym_setting_name_token2 = 6,
  aux_sym_setting_name_token3 = 7,
  aux_sym_setting_name_token4 = 8,
  aux_sym_setting_name_token5 = 9,
  aux_sym_setting_name_token6 = 10,
  aux_sym_setting_name_token7 = 11,
  aux_sym_setting_name_token8 = 12,
  aux_sym_setting_name_token9 = 13,
  aux_sym_setting_name_token10 = 14,
  aux_sym_setting_name_token11 = 15,
  aux_sym_setting_name_token12 = 16,
  aux_sym_setting_name_token13 = 17,
  aux_sym_setting_name_token14 = 18,
  aux_sym_setting_name_token15 = 19,
  aux_sym_setting_name_token16 = 20,
  aux_sym_setting_name_token17 = 21,
  aux_sym_setting_name_token18 = 22,
  aux_sym_setting_name_token19 = 23,
  aux_sym_setting_name_token20 = 24,
  aux_sym_variables_section_token1 = 25,
  anon_sym_EQ = 26,
  anon_sym_EQ2 = 27,
  aux_sym_keywords_section_token1 = 28,
  anon_sym_SPACE = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  aux_sym_keyword_setting_name_token1 = 32,
  aux_sym_keyword_setting_name_token2 = 33,
  aux_sym_keyword_setting_name_token3 = 34,
  aux_sym_keyword_setting_name_token4 = 35,
  aux_sym_keyword_setting_name_token5 = 36,
  aux_sym_test_cases_section_token1 = 37,
  aux_sym_test_cases_section_token2 = 38,
  aux_sym_test_case_setting_name_token1 = 39,
  aux_sym_test_case_setting_name_token2 = 40,
  anon_sym_RETURN = 41,
  anon_sym_DOLLAR_LBRACE = 42,
  anon_sym_RBRACE = 43,
  aux_sym_keyword_token1 = 44,
  anon_sym_IF = 45,
  anon_sym_END = 46,
  anon_sym_ELSEIF = 47,
  anon_sym_ELSE = 48,
  anon_sym_TRY = 49,
  anon_sym_EXCEPT = 50,
  anon_sym_FINALLY = 51,
  anon_sym_WHILE = 52,
  anon_sym_FOR = 53,
  anon_sym_IN = 54,
  anon_sym_INRANGE = 55,
  anon_sym_INENUMERATE = 56,
  anon_sym_INZIP = 57,
  sym_continue_statement = 58,
  sym_break_statement = 59,
  sym_ellipses = 60,
  anon_sym_AT_LBRACE = 61,
  anon_sym_AMP_LBRACE = 62,
  anon_sym_DOLLAR_LBRACE_LBRACE = 63,
  aux_sym_inline_python_expression_token1 = 64,
  anon_sym_RBRACE_RBRACE = 65,
  sym_variable_name = 66,
  sym__text_chunk = 67,
  sym_comment = 68,
  sym__separator = 69,
  sym__line_break = 70,
  aux_sym__empty_line_token1 = 71,
  sym_source_file = 72,
  sym_section = 73,
  sym_comments_section = 74,
  sym_settings_section = 75,
  sym_setting_statement = 76,
  sym_setting_name = 77,
  sym_variables_section = 78,
  sym_variable_definition = 79,
  sym_keywords_section = 80,
  sym_keyword_definition = 81,
  sym_keyword_name = 82,
  sym_name_chunk = 83,
  sym_keyword_definition_body = 84,
  sym_keyword_setting = 85,
  sym_keyword_setting_name = 86,
  sym_test_cases_section = 87,
  sym_test_case_definition = 88,
  sym_test_case_definition_body = 89,
  sym_test_case_setting = 90,
  sym_test_case_setting_name = 91,
  sym_statement = 92,
  sym_return_statement = 93,
  sym_variable_assignment = 94,
  sym_keyword_invocation = 95,
  sym_keyword = 96,
  sym_if_statement = 97,
  sym_elseif_statement = 98,
  sym_else_statement = 99,
  sym_inline_if_statement = 100,
  sym_block = 101,
  sym_inline_elseif_statement = 102,
  sym_inline_else_statement = 103,
  sym_inline_statement = 104,
  sym_try_statement = 105,
  sym_except_statement = 106,
  sym_finally_statement = 107,
  sym_while_statement = 108,
  sym_for_statement = 109,
  sym__for_in = 110,
  sym__for_in_range = 111,
  sym__for_in_enumerate = 112,
  sym__for_in_zip = 113,
  sym_arguments = 114,
  sym_arguments_without_continuation = 115,
  sym_continuation = 116,
  sym_argument = 117,
  sym_scalar_variable = 118,
  sym_list_variable = 119,
  sym_dictionary_variable = 120,
  sym_inline_python_expression = 121,
  sym_text_chunk = 122,
  sym__indentation = 123,
  sym__empty_line = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_comments_section_repeat1 = 126,
  aux_sym_settings_section_repeat1 = 127,
  aux_sym_variables_section_repeat1 = 128,
  aux_sym_keywords_section_repeat1 = 129,
  aux_sym_keyword_name_repeat1 = 130,
  aux_sym_keyword_definition_body_repeat1 = 131,
  aux_sym_test_cases_section_repeat1 = 132,
  aux_sym_test_case_definition_body_repeat1 = 133,
  aux_sym_if_statement_repeat1 = 134,
  aux_sym_inline_if_statement_repeat1 = 135,
  aux_sym_block_repeat1 = 136,
  aux_sym_try_statement_repeat1 = 137,
  aux_sym_for_statement_repeat1 = 138,
  aux_sym_arguments_repeat1 = 139,
  aux_sym_arguments_repeat2 = 140,
  aux_sym_argument_repeat1 = 141,
  aux_sym_inline_python_expression_repeat1 = 142,
  alias_sym_python_expression = 143,
  alias_sym_return_value = 144,
  alias_sym_variable_list = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_comments_section_token1] = "section_header",
  [aux_sym_comments_section_token2] = "extra_text",
  [aux_sym_settings_section_token1] = "section_header",
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
  [aux_sym_setting_name_token18] = "setting_name_token18",
  [aux_sym_setting_name_token19] = "setting_name_token19",
  [aux_sym_setting_name_token20] = "setting_name_token20",
  [aux_sym_variables_section_token1] = "section_header",
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
  [aux_sym_test_cases_section_token2] = "section_header",
  [aux_sym_test_case_setting_name_token1] = "test_case_setting_name_token1",
  [aux_sym_test_case_setting_name_token2] = "test_case_setting_name_token2",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
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
  [sym__text_chunk] = "_text_chunk",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [sym__line_break] = "_line_break",
  [aux_sym__empty_line_token1] = "_empty_line_token1",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_comments_section] = "comments_section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_setting_name] = "setting_name",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_name] = "name",
  [sym_name_chunk] = "name_chunk",
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
  [sym_text_chunk] = "text_chunk",
  [sym__indentation] = "_indentation",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comments_section_repeat1] = "comments_section_repeat1",
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
  [aux_sym_comments_section_token1] = aux_sym_comments_section_token1,
  [aux_sym_comments_section_token2] = aux_sym_comments_section_token2,
  [aux_sym_settings_section_token1] = aux_sym_comments_section_token1,
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
  [aux_sym_setting_name_token18] = aux_sym_setting_name_token18,
  [aux_sym_setting_name_token19] = aux_sym_setting_name_token19,
  [aux_sym_setting_name_token20] = aux_sym_setting_name_token20,
  [aux_sym_variables_section_token1] = aux_sym_comments_section_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_comments_section_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_keyword_setting_name_token1] = aux_sym_keyword_setting_name_token1,
  [aux_sym_keyword_setting_name_token2] = aux_sym_keyword_setting_name_token2,
  [aux_sym_keyword_setting_name_token3] = aux_sym_keyword_setting_name_token3,
  [aux_sym_keyword_setting_name_token4] = aux_sym_keyword_setting_name_token4,
  [aux_sym_keyword_setting_name_token5] = aux_sym_keyword_setting_name_token5,
  [aux_sym_test_cases_section_token1] = aux_sym_comments_section_token1,
  [aux_sym_test_cases_section_token2] = aux_sym_comments_section_token1,
  [aux_sym_test_case_setting_name_token1] = aux_sym_test_case_setting_name_token1,
  [aux_sym_test_case_setting_name_token2] = aux_sym_test_case_setting_name_token2,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym__text_chunk] = sym__text_chunk,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [sym__line_break] = sym__line_break,
  [aux_sym__empty_line_token1] = aux_sym__empty_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_comments_section] = sym_comments_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_setting_name] = sym_setting_name,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_name] = sym_keyword_name,
  [sym_name_chunk] = sym_name_chunk,
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
  [sym_text_chunk] = sym_text_chunk,
  [sym__indentation] = sym__indentation,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comments_section_repeat1] = aux_sym_comments_section_repeat1,
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
  [aux_sym_comments_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comments_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token1] = {
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
  [aux_sym_setting_name_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_token1] = {
    .visible = true,
    .named = true,
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
  [aux_sym_test_cases_section_token2] = {
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym__text_chunk] = {
    .visible = false,
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
  [sym_comments_section] = {
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
  [sym_name_chunk] = {
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
  [sym_text_chunk] = {
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
  [aux_sym_comments_section_repeat1] = {
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
  sym_text_chunk, 2,
    sym_text_chunk,
    sym_keyword_name,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 7,
  [58] = 44,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 7,
  [67] = 7,
  [68] = 62,
  [69] = 61,
  [70] = 63,
  [71] = 62,
  [72] = 63,
  [73] = 61,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 75,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 85,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 110,
  [129] = 123,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 111,
  [137] = 111,
  [138] = 138,
  [139] = 118,
  [140] = 140,
  [141] = 141,
  [142] = 130,
  [143] = 143,
  [144] = 107,
  [145] = 132,
  [146] = 100,
  [147] = 135,
  [148] = 133,
  [149] = 149,
  [150] = 115,
  [151] = 141,
  [152] = 152,
  [153] = 118,
  [154] = 107,
  [155] = 121,
  [156] = 122,
  [157] = 100,
  [158] = 135,
  [159] = 125,
  [160] = 126,
  [161] = 115,
  [162] = 162,
  [163] = 117,
  [164] = 121,
  [165] = 122,
  [166] = 125,
  [167] = 126,
  [168] = 130,
  [169] = 132,
  [170] = 133,
  [171] = 117,
  [172] = 122,
  [173] = 130,
  [174] = 125,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 133,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 143,
  [183] = 179,
  [184] = 121,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 117,
  [189] = 118,
  [190] = 126,
  [191] = 191,
  [192] = 192,
  [193] = 177,
  [194] = 194,
  [195] = 195,
  [196] = 181,
  [197] = 140,
  [198] = 198,
  [199] = 177,
  [200] = 181,
  [201] = 132,
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
  [216] = 194,
  [217] = 195,
  [218] = 214,
  [219] = 219,
  [220] = 203,
  [221] = 213,
  [222] = 222,
  [223] = 223,
  [224] = 192,
  [225] = 225,
  [226] = 226,
  [227] = 7,
  [228] = 223,
  [229] = 219,
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
  [240] = 115,
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
  [258] = 255,
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
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 268,
  [279] = 270,
  [280] = 276,
  [281] = 281,
  [282] = 245,
  [283] = 252,
  [284] = 230,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 268,
  [289] = 270,
  [290] = 276,
  [291] = 245,
  [292] = 252,
  [293] = 230,
  [294] = 268,
  [295] = 270,
  [296] = 276,
  [297] = 245,
  [298] = 252,
  [299] = 230,
  [300] = 268,
  [301] = 245,
  [302] = 255,
  [303] = 263,
  [304] = 267,
  [305] = 256,
  [306] = 255,
  [307] = 263,
  [308] = 267,
  [309] = 255,
  [310] = 263,
  [311] = 267,
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
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
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
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 130,
  [356] = 356,
  [357] = 357,
  [358] = 132,
  [359] = 359,
  [360] = 360,
  [361] = 133,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 329,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 315,
  [380] = 380,
  [381] = 326,
  [382] = 382,
  [383] = 335,
  [384] = 384,
  [385] = 385,
  [386] = 313,
  [387] = 387,
  [388] = 322,
  [389] = 389,
  [390] = 390,
  [391] = 329,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 313,
  [396] = 396,
  [397] = 315,
  [398] = 398,
  [399] = 326,
  [400] = 400,
  [401] = 335,
  [402] = 402,
  [403] = 403,
  [404] = 313,
  [405] = 387,
  [406] = 322,
  [407] = 329,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 315,
  [413] = 413,
  [414] = 326,
  [415] = 415,
  [416] = 335,
  [417] = 313,
  [418] = 387,
  [419] = 322,
  [420] = 329,
  [421] = 421,
  [422] = 375,
  [423] = 315,
  [424] = 387,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 349,
  [429] = 353,
  [430] = 362,
  [431] = 431,
  [432] = 327,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 349,
  [437] = 353,
  [438] = 362,
  [439] = 439,
  [440] = 390,
  [441] = 441,
  [442] = 349,
  [443] = 353,
  [444] = 362,
  [445] = 445,
  [446] = 349,
  [447] = 447,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(360);
      ADVANCE_MAP(
        '\t', 426,
        ' ', 404,
        '#', 441,
        '$', 440,
        '.', 427,
        '=', 396,
        'B', 438,
        'C', 436,
        'E', 433,
        'F', 431,
        'I', 429,
        'R', 428,
        'T', 439,
        'W', 430,
        '[', 406,
        ']', 407,
        '}', 423,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 36,
        ' ', 404,
        '#', 600,
        ']', 407,
        '}', 423,
        'A', 269,
        'a', 269,
        'D', 248,
        'd', 248,
        'R', 179,
        'r', 179,
        'S', 195,
        's', 195,
        'T', 140,
        't', 140,
      );
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '#') ADVANCE(600);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 601,
        '\n', 605,
        '\r', 14,
        ' ', 402,
        '#', 598,
        '$', 132,
        '&', 128,
        '@', 130,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(602);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(608);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(602);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '=') ADVANCE(396);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\t', 11,
        '\n', 605,
        '\r', 14,
        ' ', 403,
        '#', 598,
        '$', 132,
        '&', 354,
        '@', 354,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(603);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '#') ADVANCE(598);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(604);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(467);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(367);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(525);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 166,
        'C', 249,
        'c', 249,
        'K', 180,
        'k', 180,
        'S', 187,
        's', 187,
        'T', 141,
        't', 141,
        'V', 143,
        'v', 143,
      );
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(328);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '#', 441,
        '$', 440,
        '.', 427,
        'B', 438,
        'C', 436,
        'F', 437,
        'I', 429,
        'R', 428,
        'T', 439,
        'W', 430,
        '\t', 426,
        ' ', 426,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '#', 441,
        '$', 440,
        'B', 438,
        'C', 436,
        'E', 432,
        'F', 437,
        'I', 429,
        'R', 428,
        'T', 439,
        'W', 430,
        '\t', 426,
        ' ', 426,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '#', 441,
        '$', 440,
        'B', 438,
        'C', 436,
        'E', 435,
        'F', 437,
        'I', 429,
        'R', 428,
        'T', 439,
        'W', 430,
        '\t', 426,
        ' ', 426,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '#', 441,
        '$', 440,
        'B', 438,
        'C', 436,
        'E', 434,
        'F', 431,
        'I', 429,
        'R', 428,
        'T', 439,
        'W', 430,
        '\t', 426,
        ' ', 426,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '#', 441,
        '$', 440,
        'B', 438,
        'C', 436,
        'F', 437,
        'I', 429,
        'R', 428,
        'T', 439,
        'W', 430,
        '[', 406,
        '\t', 426,
        ' ', 426,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == '$') ADVANCE(440);
      if (lookahead == 'R') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(425);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(464);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(415);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(363);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(398);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(370);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(393);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(413);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(535);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(536);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(458);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'D') ADVANCE(443);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(446);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(445);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(75);
      if (lookahead == 'Z') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(444);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'K') ADVANCE(457);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(420);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(452);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(455);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(451);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(448);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 121:
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 122:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 123:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 124:
      if (lookahead == 'Y') ADVANCE(447);
      END_STATE();
    case 125:
      if (lookahead == 'Y') ADVANCE(449);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(421);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(460);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(460);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(459);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(459);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(422);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 133:
      ADVANCE_MAP(
        '{', 488,
        'C', 559,
        'c', 559,
        'K', 545,
        'k', 545,
        'S', 546,
        's', 546,
        'T', 541,
        't', 541,
        'V', 539,
        'v', 539,
        '$', 355,
        '&', 355,
        '@', 355,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(579);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(262);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 163:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 164:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 165:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 166:
      ADVANCE_MAP(
        'C', 249,
        'c', 249,
        'K', 180,
        'k', 180,
        'S', 187,
        's', 187,
        'T', 141,
        't', 141,
        'V', 143,
        'v', 143,
      );
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 169:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 170:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 208:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 222:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 223:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 225:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 231:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 232:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 235:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 237:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 262:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 266:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 267:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 268:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 281:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 282:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(314);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 297:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 298:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      END_STATE();
    case 299:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 300:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 301:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 302:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      END_STATE();
    case 303:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 304:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 321:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 331:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 332:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 333:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 334:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 335:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 336:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 337:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 338:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 339:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 340:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 341:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 342:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 343:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 344:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 345:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 346:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 347:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 348:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 349:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 350:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 351:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 352:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 353:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 354:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(525);
      END_STATE();
    case 355:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(579);
      END_STATE();
    case 356:
      if (eof) ADVANCE(360);
      ADVANCE_MAP(
        '\t', 601,
        '\n', 605,
        '\r', 14,
        ' ', 607,
        '#', 598,
        '*', 475,
        0x0b, 14,
        '\f', 14,
        '$', 354,
        '&', 354,
        '@', 354,
      );
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 357:
      if (eof) ADVANCE(360);
      ADVANCE_MAP(
        '\n', 606,
        '\r', 15,
        '#', 600,
        '$', 126,
        '&', 127,
        '*', 46,
        '@', 129,
        'E', 101,
        'F', 93,
        'f', 254,
        '\t', 610,
        ' ', 610,
        'D', 182,
        'd', 182,
        'K', 202,
        'k', 202,
        'L', 216,
        'l', 216,
        'M', 194,
        'm', 194,
        'N', 156,
        'n', 156,
        'R', 192,
        'r', 192,
        'S', 337,
        's', 337,
        'T', 147,
        't', 147,
        'V', 162,
        'v', 162,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 358:
      if (eof) ADVANCE(360);
      ADVANCE_MAP(
        '\n', 605,
        '\r', 14,
        '#', 598,
        '*', 475,
        '\t', 609,
        ' ', 609,
        0x0b, 14,
        '\f', 14,
        '$', 354,
        '&', 354,
        '@', 354,
      );
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 359:
      if (eof) ADVANCE(360);
      ADVANCE_MAP(
        '#', 600,
        '$', 126,
        '*', 46,
        '.', 70,
        'E', 97,
        'F', 92,
        'I', 104,
        ']', 407,
        '}', 423,
        '\t', 361,
        ' ', 361,
        'A', 269,
        'a', 269,
        'D', 248,
        'd', 248,
        'R', 179,
        'r', 179,
        'S', 195,
        's', 195,
        'T', 140,
        't', 140,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(362);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(361);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_comments_section_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_comments_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_comments_section_token1);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_comments_section_token2);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(367);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_comments_section_token2);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_comments_section_token2);
      if (lookahead == '\r') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_comments_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_setting_name_token18);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_setting_name_token19);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_setting_name_token20);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token2);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token2);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(461);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(465);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'F') ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'H') ADVANCE(90);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'R') ADVANCE(124);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(421);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(464);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(468);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(600);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(596);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(594);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(598);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(594);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(598);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(594);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(598);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(597);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(595);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(599);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(595);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(599);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(595);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(599);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(476);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__text_chunk);
      ADVANCE_MAP(
        ' ', 135,
        'A', 511,
        'a', 511,
        'E', 513,
        'e', 513,
        '$', 354,
        '&', 354,
        '@', 354,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__text_chunk);
      ADVANCE_MAP(
        ' ', 353,
        'A', 563,
        'a', 563,
        'E', 565,
        'e', 565,
        '$', 355,
        '&', 355,
        '@', 355,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__text_chunk);
      ADVANCE_MAP(
        ' ', 133,
        'C', 507,
        'c', 507,
        'K', 494,
        'k', 494,
        'S', 495,
        's', 495,
        'T', 489,
        't', 489,
        'V', 490,
        'v', 490,
        '$', 354,
        '&', 354,
        '@', 354,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__text_chunk);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(578);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '{') ADVANCE(600);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '{') ADVANCE(600);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(595);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(599);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(595);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(599);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(602);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(602);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(525);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(610);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(610);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(610);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(610);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 359},
  [2] = {.lex_state = 357},
  [3] = {.lex_state = 357},
  [4] = {.lex_state = 357},
  [5] = {.lex_state = 357},
  [6] = {.lex_state = 357},
  [7] = {.lex_state = 357},
  [8] = {.lex_state = 357},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 357},
  [17] = {.lex_state = 357},
  [18] = {.lex_state = 357},
  [19] = {.lex_state = 357},
  [20] = {.lex_state = 357},
  [21] = {.lex_state = 358},
  [22] = {.lex_state = 358},
  [23] = {.lex_state = 358},
  [24] = {.lex_state = 358},
  [25] = {.lex_state = 358},
  [26] = {.lex_state = 358},
  [27] = {.lex_state = 359},
  [28] = {.lex_state = 358},
  [29] = {.lex_state = 358},
  [30] = {.lex_state = 358},
  [31] = {.lex_state = 359},
  [32] = {.lex_state = 358},
  [33] = {.lex_state = 356},
  [34] = {.lex_state = 356},
  [35] = {.lex_state = 356},
  [36] = {.lex_state = 356},
  [37] = {.lex_state = 359},
  [38] = {.lex_state = 359},
  [39] = {.lex_state = 357},
  [40] = {.lex_state = 357},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 357},
  [43] = {.lex_state = 357},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 356},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 357},
  [49] = {.lex_state = 356},
  [50] = {.lex_state = 357},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 357},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 356},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 359},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 358},
  [65] = {.lex_state = 358},
  [66] = {.lex_state = 358},
  [67] = {.lex_state = 357},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 359},
  [87] = {.lex_state = 359},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 359},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 359},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 37},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 359},
  [186] = {.lex_state = 357},
  [187] = {.lex_state = 357},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 37},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 37},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 37},
  [199] = {.lex_state = 37},
  [200] = {.lex_state = 37},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 359},
  [209] = {.lex_state = 359},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 359},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 357},
  [217] = {.lex_state = 357},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 357},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 359},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 9},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 359},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 359},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 359},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 13},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 359},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 10},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 359},
  [314] = {.lex_state = 359},
  [315] = {.lex_state = 359},
  [316] = {.lex_state = 357},
  [317] = {.lex_state = 357},
  [318] = {.lex_state = 357},
  [319] = {.lex_state = 359},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 359},
  [322] = {.lex_state = 359},
  [323] = {.lex_state = 357},
  [324] = {.lex_state = 357},
  [325] = {.lex_state = 359},
  [326] = {.lex_state = 359},
  [327] = {.lex_state = 38},
  [328] = {.lex_state = 359},
  [329] = {.lex_state = 357},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 9},
  [332] = {.lex_state = 357},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 359},
  [336] = {.lex_state = 357},
  [337] = {.lex_state = 357},
  [338] = {.lex_state = 357},
  [339] = {.lex_state = 357},
  [340] = {.lex_state = 357},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 357},
  [343] = {.lex_state = 9},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 359},
  [346] = {.lex_state = 357},
  [347] = {.lex_state = 359},
  [348] = {.lex_state = 357},
  [349] = {.lex_state = 38},
  [350] = {.lex_state = 357},
  [351] = {.lex_state = 357},
  [352] = {.lex_state = 357},
  [353] = {.lex_state = 38},
  [354] = {.lex_state = 9},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 357},
  [357] = {.lex_state = 359},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 357},
  [360] = {.lex_state = 359},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 38},
  [363] = {.lex_state = 359},
  [364] = {.lex_state = 359},
  [365] = {.lex_state = 357},
  [366] = {.lex_state = 357},
  [367] = {.lex_state = 357},
  [368] = {.lex_state = 357},
  [369] = {.lex_state = 359},
  [370] = {.lex_state = 357},
  [371] = {.lex_state = 357},
  [372] = {.lex_state = 359},
  [373] = {.lex_state = 357},
  [374] = {.lex_state = 357},
  [375] = {.lex_state = 359},
  [376] = {.lex_state = 359},
  [377] = {.lex_state = 357},
  [378] = {.lex_state = 9},
  [379] = {.lex_state = 359},
  [380] = {.lex_state = 357},
  [381] = {.lex_state = 359},
  [382] = {.lex_state = 359},
  [383] = {.lex_state = 359},
  [384] = {.lex_state = 357},
  [385] = {.lex_state = 357},
  [386] = {.lex_state = 359},
  [387] = {.lex_state = 359},
  [388] = {.lex_state = 359},
  [389] = {.lex_state = 357},
  [390] = {.lex_state = 359},
  [391] = {.lex_state = 357},
  [392] = {.lex_state = 357},
  [393] = {.lex_state = 357},
  [394] = {.lex_state = 359},
  [395] = {.lex_state = 359},
  [396] = {.lex_state = 357},
  [397] = {.lex_state = 359},
  [398] = {.lex_state = 357},
  [399] = {.lex_state = 359},
  [400] = {.lex_state = 357},
  [401] = {.lex_state = 359},
  [402] = {.lex_state = 9},
  [403] = {.lex_state = 357},
  [404] = {.lex_state = 359},
  [405] = {.lex_state = 359},
  [406] = {.lex_state = 359},
  [407] = {.lex_state = 357},
  [408] = {.lex_state = 357},
  [409] = {.lex_state = 357},
  [410] = {.lex_state = 357},
  [411] = {.lex_state = 9},
  [412] = {.lex_state = 359},
  [413] = {.lex_state = 357},
  [414] = {.lex_state = 359},
  [415] = {.lex_state = 357},
  [416] = {.lex_state = 359},
  [417] = {.lex_state = 359},
  [418] = {.lex_state = 359},
  [419] = {.lex_state = 359},
  [420] = {.lex_state = 357},
  [421] = {.lex_state = 357},
  [422] = {.lex_state = 359},
  [423] = {.lex_state = 359},
  [424] = {.lex_state = 359},
  [425] = {.lex_state = 357},
  [426] = {.lex_state = 9},
  [427] = {.lex_state = 357},
  [428] = {.lex_state = 38},
  [429] = {.lex_state = 38},
  [430] = {.lex_state = 38},
  [431] = {.lex_state = 357},
  [432] = {.lex_state = 38},
  [433] = {.lex_state = 357},
  [434] = {.lex_state = 357},
  [435] = {.lex_state = 357},
  [436] = {.lex_state = 38},
  [437] = {.lex_state = 38},
  [438] = {.lex_state = 38},
  [439] = {.lex_state = 357},
  [440] = {.lex_state = 359},
  [441] = {.lex_state = 359},
  [442] = {.lex_state = 38},
  [443] = {.lex_state = 38},
  [444] = {.lex_state = 38},
  [445] = {.lex_state = 357},
  [446] = {.lex_state = 38},
  [447] = {.lex_state = 357},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(319),
    [sym_section] = STATE(27),
    [sym_comments_section] = STATE(93),
    [sym_settings_section] = STATE(93),
    [sym_variables_section] = STATE(93),
    [sym_keywords_section] = STATE(93),
    [sym_test_cases_section] = STATE(93),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_comments_section_token1] = ACTIONS(9),
    [aux_sym_settings_section_token1] = ACTIONS(11),
    [aux_sym_variables_section_token1] = ACTIONS(13),
    [aux_sym_keywords_section_token1] = ACTIONS(15),
    [aux_sym_test_cases_section_token1] = ACTIONS(17),
    [aux_sym_test_cases_section_token2] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__line_break,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    STATE(134), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(21), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    ACTIONS(23), 20,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
  [49] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(31), 1,
      sym__line_break,
    STATE(134), 1,
      sym_setting_name,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    ACTIONS(23), 20,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
  [98] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(33), 1,
      sym__line_break,
    STATE(134), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(21), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    ACTIONS(23), 20,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
  [147] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym__line_break,
    ACTIONS(43), 1,
      aux_sym__empty_line_token1,
    STATE(134), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    ACTIONS(37), 20,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
  [196] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(33), 1,
      sym__line_break,
    STATE(134), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    ACTIONS(23), 20,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
  [245] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym__empty_line_token1,
    ACTIONS(48), 31,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [285] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym__empty_line_token1,
    ACTIONS(52), 28,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
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
      aux_sym_setting_name_token18,
      aux_sym_setting_name_token19,
      aux_sym_setting_name_token20,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__line_break,
  [322] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_END,
    ACTIONS(66), 1,
      anon_sym_ELSE,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_EXCEPT,
    ACTIONS(72), 1,
      anon_sym_FINALLY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    STATE(129), 1,
      sym_keyword,
    STATE(374), 1,
      sym_statement,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [379] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(80), 1,
      anon_sym_END,
    ACTIONS(82), 1,
      anon_sym_ELSEIF,
    ACTIONS(84), 1,
      anon_sym_ELSE,
    STATE(129), 1,
      sym_keyword,
    STATE(374), 1,
      sym_statement,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [433] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      sym_keyword,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(421), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [482] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      sym_keyword,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(332), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [531] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(90), 1,
      anon_sym_END,
    STATE(129), 1,
      sym_keyword,
    STATE(374), 1,
      sym_statement,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [579] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(92), 1,
      sym_ellipses,
    STATE(129), 1,
      sym_keyword,
    STATE(374), 1,
      sym_statement,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [627] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(62), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_TRY,
    ACTIONS(74), 1,
      anon_sym_WHILE,
    ACTIONS(76), 1,
      anon_sym_FOR,
    STATE(129), 1,
      sym_keyword,
    STATE(374), 1,
      sym_statement,
    ACTIONS(78), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(409), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [672] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(100), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(102), 1,
      sym__line_break,
    STATE(19), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    STATE(77), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [710] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(100), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(106), 1,
      sym__line_break,
    STATE(18), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    STATE(77), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [748] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(100), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(108), 1,
      sym__line_break,
    STATE(20), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    STATE(77), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [786] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym__empty_line_token1,
    ACTIONS(96), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(100), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(108), 1,
      sym__line_break,
    STATE(20), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    STATE(77), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [824] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(117), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(120), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(123), 1,
      sym__line_break,
    ACTIONS(126), 1,
      aux_sym__empty_line_token1,
    STATE(20), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    STATE(77), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [862] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__text_chunk,
    ACTIONS(135), 1,
      sym__line_break,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    STATE(88), 1,
      sym_name_chunk,
    STATE(384), 1,
      sym_keyword_name,
    STATE(24), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(131), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [897] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__text_chunk,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym__line_break,
    STATE(88), 1,
      sym_name_chunk,
    STATE(384), 1,
      sym_keyword_name,
    STATE(21), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(141), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [932] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__text_chunk,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(145), 1,
      sym__line_break,
    STATE(88), 1,
      sym_name_chunk,
    STATE(384), 1,
      sym_keyword_name,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(131), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [967] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__text_chunk,
    ACTIONS(154), 1,
      sym__line_break,
    ACTIONS(157), 1,
      aux_sym__empty_line_token1,
    STATE(88), 1,
      sym_name_chunk,
    STATE(384), 1,
      sym_keyword_name,
    STATE(24), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(149), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1002] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__text_chunk,
    ACTIONS(135), 1,
      sym__line_break,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_name_chunk,
    STATE(384), 1,
      sym_keyword_name,
    STATE(24), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(162), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1037] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      sym__text_chunk,
    ACTIONS(170), 1,
      sym__line_break,
    STATE(191), 1,
      sym_text_chunk,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(166), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1069] = 9,
    ACTIONS(9), 1,
      aux_sym_comments_section_token1,
    ACTIONS(11), 1,
      aux_sym_settings_section_token1,
    ACTIONS(13), 1,
      aux_sym_variables_section_token1,
    ACTIONS(15), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(93), 5,
      sym_comments_section,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1103] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(168), 1,
      sym__text_chunk,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym__line_break,
    STATE(191), 1,
      sym_text_chunk,
    STATE(29), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(176), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym__text_chunk,
    ACTIONS(187), 1,
      sym__line_break,
    ACTIONS(190), 1,
      aux_sym__empty_line_token1,
    STATE(191), 1,
      sym_text_chunk,
    STATE(29), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(182), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1167] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(168), 1,
      sym__text_chunk,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(191), 1,
      sym_text_chunk,
    STATE(28), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(195), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1199] = 9,
    ACTIONS(9), 1,
      aux_sym_comments_section_token1,
    ACTIONS(11), 1,
      aux_sym_settings_section_token1,
    ACTIONS(13), 1,
      aux_sym_variables_section_token1,
    ACTIONS(15), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(93), 5,
      sym_comments_section,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1233] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    ACTIONS(168), 1,
      sym__text_chunk,
    ACTIONS(178), 1,
      sym__line_break,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_text_chunk,
    STATE(29), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(195), 6,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1265] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym__separator,
    ACTIONS(207), 1,
      sym__line_break,
    ACTIONS(209), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(36), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(203), 7,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
  [1297] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym__empty_line_token1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym__separator,
    ACTIONS(217), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(35), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(213), 7,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
  [1329] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      sym__separator,
    ACTIONS(226), 1,
      sym__line_break,
    ACTIONS(229), 1,
      aux_sym__empty_line_token1,
    STATE(12), 1,
      sym__indentation,
    STATE(35), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(221), 7,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
  [1361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      sym__separator,
    ACTIONS(239), 1,
      sym__line_break,
    ACTIONS(242), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(36), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(234), 7,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
  [1393] = 9,
    ACTIONS(9), 1,
      aux_sym_comments_section_token1,
    ACTIONS(11), 1,
      aux_sym_settings_section_token1,
    ACTIONS(13), 1,
      aux_sym_variables_section_token1,
    ACTIONS(15), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    STATE(31), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(93), 5,
      sym_comments_section,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1427] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym_comments_section_token1,
    ACTIONS(250), 1,
      aux_sym_settings_section_token1,
    ACTIONS(253), 1,
      aux_sym_variables_section_token1,
    ACTIONS(256), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(259), 2,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(93), 5,
      sym_comments_section,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1461] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym__empty_line_token1,
    ACTIONS(262), 11,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [1481] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym__empty_line_token1,
    ACTIONS(266), 11,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [1501] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(274), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(278), 1,
      sym__text_chunk,
    STATE(411), 1,
      sym_argument,
    STATE(71), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1530] = 4,
    ACTIONS(284), 1,
      aux_sym__empty_line_token1,
    ACTIONS(282), 2,
      sym_comment,
      sym__line_break,
    STATE(50), 2,
      sym__empty_line,
      aux_sym_comments_section_repeat1,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1551] = 4,
    ACTIONS(284), 1,
      aux_sym__empty_line_token1,
    ACTIONS(282), 2,
      sym_comment,
      sym__line_break,
    STATE(50), 2,
      sym__empty_line,
      aux_sym_comments_section_repeat1,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1572] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__text_chunk,
    STATE(257), 1,
      sym_argument,
    STATE(68), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 10,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    STATE(259), 1,
      sym_argument,
    STATE(62), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1649] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__separator,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
      sym__indentation,
    STATE(104), 1,
      sym_block,
    STATE(222), 1,
      sym_else_statement,
    STATE(261), 1,
      sym_finally_statement,
    STATE(102), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1682] = 4,
    ACTIONS(284), 1,
      aux_sym__empty_line_token1,
    ACTIONS(320), 2,
      sym_comment,
      sym__line_break,
    STATE(42), 2,
      sym__empty_line,
      aux_sym_comments_section_repeat1,
    ACTIONS(318), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 10,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1722] = 4,
    ACTIONS(331), 1,
      aux_sym__empty_line_token1,
    ACTIONS(328), 2,
      sym_comment,
      sym__line_break,
    STATE(50), 2,
      sym__empty_line,
      aux_sym_comments_section_repeat1,
    ACTIONS(326), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1743] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    STATE(232), 1,
      sym_argument,
    STATE(62), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1772] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    STATE(273), 1,
      sym_argument,
    STATE(62), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1801] = 4,
    ACTIONS(284), 1,
      aux_sym__empty_line_token1,
    ACTIONS(334), 2,
      sym_comment,
      sym__line_break,
    STATE(43), 2,
      sym__empty_line,
      aux_sym_comments_section_repeat1,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [1822] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__text_chunk,
    STATE(398), 1,
      sym_argument,
    STATE(68), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1851] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    STATE(236), 1,
      sym_argument,
    STATE(62), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1880] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__text_chunk,
    STATE(427), 1,
      sym_argument,
    STATE(68), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 10,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1928] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    STATE(257), 1,
      sym_argument,
    STATE(62), 5,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [1957] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_IN,
    ACTIONS(340), 1,
      anon_sym_INRANGE,
    ACTIONS(342), 1,
      anon_sym_INENUMERATE,
    ACTIONS(344), 1,
      anon_sym_INZIP,
    STATE(341), 1,
      sym_scalar_variable,
    STATE(385), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1985] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(346), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(152), 1,
      aux_sym_if_statement_repeat1,
    STATE(162), 1,
      sym_block,
    STATE(242), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SPACE,
    ACTIONS(351), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(354), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(357), 1,
      sym__text_chunk,
    ACTIONS(360), 2,
      sym__separator,
      sym__line_break,
    STATE(61), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2043] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    ACTIONS(362), 1,
      anon_sym_SPACE,
    ACTIONS(364), 2,
      sym__separator,
      sym__line_break,
    STATE(63), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2069] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    ACTIONS(362), 1,
      anon_sym_SPACE,
    ACTIONS(366), 2,
      sym__separator,
      sym__line_break,
    STATE(61), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 9,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 9,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 9,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym__text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2149] = 2,
    ACTIONS(50), 1,
      aux_sym__empty_line_token1,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
      sym_comment,
      sym__line_break,
  [2164] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__text_chunk,
    ACTIONS(364), 1,
      sym__line_break,
    ACTIONS(376), 1,
      anon_sym_SPACE,
    STATE(70), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2189] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__line_break,
    ACTIONS(378), 1,
      anon_sym_SPACE,
    ACTIONS(381), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(387), 1,
      sym__text_chunk,
    STATE(69), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__text_chunk,
    ACTIONS(366), 1,
      sym__line_break,
    ACTIONS(376), 1,
      anon_sym_SPACE,
    STATE(69), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(278), 1,
      sym__text_chunk,
    ACTIONS(364), 1,
      sym__separator,
    ACTIONS(390), 1,
      anon_sym_SPACE,
    STATE(72), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(278), 1,
      sym__text_chunk,
    ACTIONS(366), 1,
      sym__separator,
    ACTIONS(390), 1,
      anon_sym_SPACE,
    STATE(73), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(392), 1,
      anon_sym_SPACE,
    ACTIONS(395), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(398), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(401), 1,
      sym__text_chunk,
    STATE(73), 4,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
      aux_sym_argument_repeat1,
  [2314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(404), 1,
      anon_sym_RETURN,
    ACTIONS(406), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(123), 1,
      sym_keyword,
    STATE(204), 1,
      sym_inline_statement,
    STATE(287), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2338] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(412), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(269), 1,
      sym_arguments,
    ACTIONS(408), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SPACE,
    ACTIONS(417), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(419), 1,
      sym__text_chunk,
    ACTIONS(421), 2,
      sym__separator,
      sym__line_break,
    STATE(85), 3,
      sym_name_chunk,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2384] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(377), 1,
      sym_arguments,
    ACTIONS(423), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2408] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(427), 1,
      sym_ellipses,
    ACTIONS(429), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(331), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2434] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SPACE,
    ACTIONS(417), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(419), 1,
      sym__text_chunk,
    ACTIONS(432), 2,
      sym__separator,
      sym__line_break,
    STATE(76), 3,
      sym_name_chunk,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2456] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SPACE,
    STATE(241), 1,
      sym_keyword_setting_name,
    ACTIONS(434), 6,
      aux_sym_setting_name_token5,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2474] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    ACTIONS(404), 1,
      anon_sym_RETURN,
    ACTIONS(406), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(123), 1,
      sym_keyword,
    STATE(238), 1,
      sym_inline_statement,
    STATE(287), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2498] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      aux_sym_keyword_token1,
    STATE(129), 1,
      sym_keyword,
    STATE(413), 1,
      sym_inline_statement,
    STATE(287), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2522] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__separator,
    ACTIONS(443), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
    STATE(269), 1,
      sym_arguments,
    ACTIONS(438), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(192), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2546] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SPACE,
    STATE(253), 1,
      sym_test_case_setting_name,
    ACTIONS(446), 6,
      aux_sym_setting_name_token5,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SPACE,
    ACTIONS(453), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(456), 1,
      sym__text_chunk,
    ACTIONS(459), 2,
      sym__separator,
      sym__line_break,
    STATE(85), 3,
      sym_name_chunk,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2586] = 3,
    ACTIONS(19), 1,
      sym_comment,
    STATE(254), 1,
      sym_keyword_setting_name,
    ACTIONS(434), 6,
      aux_sym_setting_name_token5,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2601] = 3,
    ACTIONS(19), 1,
      sym_comment,
    STATE(266), 1,
      sym_test_case_setting_name,
    ACTIONS(446), 6,
      aux_sym_setting_name_token5,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SPACE,
    ACTIONS(463), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(465), 1,
      sym__text_chunk,
    ACTIONS(467), 1,
      sym__line_break,
    STATE(92), 3,
      sym_name_chunk,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2637] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(469), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(286), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2660] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__separator,
    ACTIONS(209), 1,
      aux_sym__empty_line_token1,
    ACTIONS(471), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(65), 1,
      sym_keyword_definition_body,
    STATE(33), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__line_break,
    ACTIONS(473), 1,
      anon_sym_SPACE,
    ACTIONS(476), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(479), 1,
      sym__text_chunk,
    STATE(91), 3,
      sym_name_chunk,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SPACE,
    ACTIONS(463), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(465), 1,
      sym__text_chunk,
    ACTIONS(482), 1,
      sym__line_break,
    STATE(91), 3,
      sym_name_chunk,
      sym_scalar_variable,
      aux_sym_keyword_name_repeat1,
  [2725] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(484), 7,
      ts_builtin_sym_end,
      aux_sym_comments_section_token1,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      aux_sym_test_cases_section_token2,
  [2738] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(486), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(330), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2761] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(488), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(378), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2784] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(486), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(312), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2807] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(491), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(334), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2830] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym__empty_line_token1,
    ACTIONS(215), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(64), 1,
      sym_test_case_definition_body,
    STATE(34), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2853] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__line_break,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(486), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(426), 1,
      sym_block,
    STATE(138), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(496), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [2890] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(434), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2910] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__separator,
    STATE(187), 1,
      sym__indentation,
    STATE(225), 1,
      sym_else_statement,
    STATE(271), 1,
      sym_finally_statement,
    STATE(176), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2930] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(338), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2950] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__separator,
    STATE(187), 1,
      sym__indentation,
    STATE(225), 1,
      sym_else_statement,
    STATE(271), 1,
      sym_finally_statement,
    STATE(113), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2970] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(346), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2990] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(435), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(502), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3024] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(445), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3044] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(342), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3064] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(506), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(234), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__text_chunk,
    STATE(135), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [3102] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(350), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3122] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__separator,
    STATE(186), 1,
      sym__indentation,
    STATE(202), 1,
      sym_else_statement,
    STATE(264), 1,
      sym_finally_statement,
    STATE(176), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3142] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(511), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(340), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(513), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3176] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(433), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(517), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(521), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3224] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(528), 1,
      sym__line_break,
    ACTIONS(531), 1,
      aux_sym__empty_line_token1,
    STATE(15), 1,
      sym__indentation,
    STATE(119), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3244] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(380), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(534), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(538), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3292] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__separator,
    ACTIONS(545), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
    STATE(248), 1,
      sym_arguments,
    STATE(192), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3312] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(447), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(548), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(552), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3360] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(392), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3380] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__separator,
    ACTIONS(559), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
    STATE(234), 1,
      sym_arguments,
    STATE(192), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3400] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(562), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(248), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(565), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3434] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(431), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(569), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(573), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3482] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(339), 1,
      sym_arguments,
    STATE(224), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(360), 4,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
      sym__line_break,
  [3516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__text_chunk,
    STATE(147), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [3534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(278), 1,
      sym__text_chunk,
    STATE(158), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      sym_text_chunk,
  [3552] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__empty_line_token1,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(582), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(119), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(521), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_DOLLAR_LBRACE,
      sym__text_chunk,
    ACTIONS(584), 3,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3598] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__separator,
    ACTIONS(591), 1,
      sym__line_break,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    STATE(194), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(565), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_DOLLAR_LBRACE,
      sym__text_chunk,
    ACTIONS(459), 3,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(502), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(569), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(496), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(360), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(573), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3706] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    STATE(180), 1,
      aux_sym_if_statement_repeat1,
    STATE(212), 1,
      sym__indentation,
    STATE(285), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
  [3725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(513), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3738] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(598), 1,
      sym__line_break,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    STATE(216), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3755] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__separator,
    STATE(180), 1,
      aux_sym_if_statement_repeat1,
    STATE(209), 1,
      sym__indentation,
    STATE(250), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
  [3774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(521), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(502), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(534), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(538), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(496), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(360), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(548), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(552), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(513), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3891] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__separator,
    STATE(149), 1,
      aux_sym_if_statement_repeat1,
    STATE(208), 1,
      sym__indentation,
    STATE(243), 1,
      sym_else_statement,
    STATE(354), 1,
      sym_elseif_statement,
  [3910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(517), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(534), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(538), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(548), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(552), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(565), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(569), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(573), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym__text_chunk,
    ACTIONS(517), 3,
      anon_sym_SPACE,
      anon_sym_DOLLAR_LBRACE,
      sym__line_break,
  [4027] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__separator,
    ACTIONS(540), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4039] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__separator,
    ACTIONS(567), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4051] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__separator,
    ACTIONS(550), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4063] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_ELSEIF,
    ACTIONS(607), 1,
      anon_sym_ELSE,
    STATE(275), 1,
      sym_inline_elseif_statement,
    STATE(351), 1,
      sym_inline_else_statement,
  [4079] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__separator,
    STATE(360), 1,
      sym__indentation,
    STATE(176), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [4093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(181), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4107] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__separator,
    ACTIONS(575), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(419), 1,
      sym__text_chunk,
    STATE(143), 2,
      sym_name_chunk,
      sym_scalar_variable,
  [4133] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym__separator,
    STATE(180), 1,
      aux_sym_if_statement_repeat1,
    STATE(354), 1,
      sym_elseif_statement,
    STATE(372), 1,
      sym__indentation,
  [4149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(198), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_SPACE,
      sym__line_break,
    ACTIONS(594), 2,
      anon_sym_DOLLAR_LBRACE,
      sym__text_chunk,
  [4175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(465), 1,
      sym__text_chunk,
    STATE(182), 2,
      sym_name_chunk,
      sym_scalar_variable,
  [4189] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__separator,
    ACTIONS(536), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4201] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_ELSEIF,
    ACTIONS(607), 1,
      anon_sym_ELSE,
    STATE(275), 1,
      sym_inline_elseif_statement,
    STATE(389), 1,
      sym_inline_else_statement,
  [4217] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_ELSE,
    ACTIONS(70), 1,
      anon_sym_EXCEPT,
    ACTIONS(72), 1,
      anon_sym_FINALLY,
    ACTIONS(621), 1,
      anon_sym_END,
  [4233] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_ELSE,
    ACTIONS(70), 1,
      anon_sym_EXCEPT,
    ACTIONS(72), 1,
      anon_sym_FINALLY,
    ACTIONS(623), 1,
      anon_sym_END,
  [4249] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__separator,
    ACTIONS(519), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4261] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__separator,
    ACTIONS(523), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4273] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__separator,
    ACTIONS(554), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4285] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(625), 1,
      sym__line_break,
    STATE(210), 1,
      aux_sym_arguments_repeat1,
    STATE(323), 1,
      sym_arguments_without_continuation,
  [4301] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__line_break,
    ACTIONS(627), 1,
      sym__separator,
    STATE(195), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(196), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4329] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__separator,
    ACTIONS(633), 1,
      sym__line_break,
    STATE(195), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4343] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
    STATE(195), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(198), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_SPACE,
      sym__line_break,
    ACTIONS(586), 2,
      anon_sym_DOLLAR_LBRACE,
      sym__text_chunk,
  [4383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(198), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(643), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(200), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(198), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4425] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__separator,
    ACTIONS(571), 3,
      anon_sym_EQ,
      anon_sym_EQ2,
      sym__line_break,
  [4437] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__separator,
    STATE(260), 1,
      sym_finally_statement,
    STATE(262), 1,
      sym__indentation,
  [4450] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(654), 1,
      sym__line_break,
    STATE(213), 1,
      aux_sym_arguments_repeat1,
  [4463] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__separator,
    ACTIONS(658), 1,
      sym__line_break,
    STATE(207), 1,
      aux_sym_inline_if_statement_repeat1,
  [4476] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    STATE(210), 1,
      aux_sym_arguments_repeat1,
    STATE(316), 1,
      sym_arguments_without_continuation,
  [4489] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__line_break,
    ACTIONS(660), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4500] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__separator,
    ACTIONS(666), 1,
      sym__line_break,
    STATE(211), 1,
      aux_sym_inline_if_statement_repeat1,
  [4513] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_ELSEIF,
    ACTIONS(84), 1,
      anon_sym_ELSE,
    ACTIONS(668), 1,
      anon_sym_END,
  [4526] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_ELSEIF,
    ACTIONS(84), 1,
      anon_sym_ELSE,
    ACTIONS(670), 1,
      anon_sym_END,
  [4539] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(672), 1,
      sym__line_break,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
  [4552] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__separator,
    ACTIONS(677), 1,
      sym__line_break,
    STATE(211), 1,
      aux_sym_inline_if_statement_repeat1,
  [4565] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_ELSEIF,
    ACTIONS(84), 1,
      anon_sym_ELSE,
    ACTIONS(679), 1,
      anon_sym_END,
  [4578] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(681), 1,
      sym__line_break,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
  [4591] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(683), 1,
      sym__line_break,
    STATE(229), 1,
      aux_sym_arguments_repeat1,
  [4604] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym__separator,
    ACTIONS(688), 1,
      sym__line_break,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
  [4617] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__line_break,
    STATE(217), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4628] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym__line_break,
    STATE(217), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4639] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym__line_break,
    ACTIONS(696), 1,
      sym__separator,
    STATE(219), 1,
      aux_sym_arguments_repeat1,
  [4652] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__line_break,
    ACTIONS(699), 1,
      sym__separator,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
  [4665] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__line_break,
    ACTIONS(699), 1,
      sym__separator,
    STATE(221), 1,
      aux_sym_arguments_repeat1,
  [4678] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym__line_break,
    ACTIONS(702), 1,
      sym__separator,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
  [4691] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__separator,
    STATE(271), 1,
      sym_finally_statement,
    STATE(272), 1,
      sym__indentation,
  [4704] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_ellipses,
    ACTIONS(707), 1,
      sym__separator,
    STATE(422), 1,
      sym__indentation,
  [4717] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__line_break,
    STATE(217), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4728] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__separator,
    STATE(264), 1,
      sym_finally_statement,
    STATE(277), 1,
      sym__indentation,
  [4741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(711), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4752] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym__line_break,
    ACTIONS(50), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4763] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_ellipses,
    ACTIONS(717), 1,
      sym__separator,
    STATE(375), 1,
      sym__indentation,
  [4776] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__separator,
    ACTIONS(654), 1,
      sym__line_break,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
  [4789] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SPACE,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [4799] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__separator,
    ACTIONS(725), 1,
      sym__line_break,
  [4809] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__line_break,
    ACTIONS(727), 1,
      sym__separator,
  [4819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_comments_section_token2,
    ACTIONS(731), 1,
      sym__line_break,
  [4829] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__separator,
    ACTIONS(735), 1,
      sym__line_break,
  [4839] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_ELSEIF,
    STATE(275), 1,
      sym_inline_elseif_statement,
  [4849] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym__separator,
    ACTIONS(739), 1,
      sym__line_break,
  [4859] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__separator,
    STATE(247), 1,
      aux_sym_for_statement_repeat1,
  [4869] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym__separator,
    ACTIONS(745), 1,
      sym__line_break,
  [4879] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SPACE,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
  [4889] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
  [4899] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_SPACE,
    ACTIONS(753), 1,
      anon_sym_RBRACK,
  [4909] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym__separator,
    STATE(441), 1,
      sym__indentation,
  [4919] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym__separator,
    STATE(357), 1,
      sym__indentation,
  [4929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_comments_section_token2,
    ACTIONS(761), 1,
      sym__line_break,
  [4939] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_SPACE,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [4949] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(341), 1,
      sym_scalar_variable,
  [4959] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__separator,
    STATE(265), 1,
      aux_sym_for_statement_repeat1,
  [4969] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__separator,
    ACTIONS(771), 1,
      sym__line_break,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_comments_section_token2,
    ACTIONS(775), 1,
      sym__line_break,
  [4989] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym__separator,
    STATE(369), 1,
      sym__indentation,
  [4999] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SPACE,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
  [5009] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SPACE,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [5019] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_SPACE,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
  [5029] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_SPACE,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
  [5039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SPACE,
    ACTIONS(797), 1,
      sym_variable_name,
  [5049] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym__separator,
    ACTIONS(801), 1,
      sym__line_break,
  [5059] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__separator,
    ACTIONS(805), 1,
      sym__line_break,
  [5069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_SPACE,
    ACTIONS(809), 1,
      sym_variable_name,
  [5079] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym__separator,
    ACTIONS(813), 1,
      sym__line_break,
  [5089] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__separator,
    STATE(376), 1,
      sym__indentation,
  [5099] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym__separator,
    STATE(363), 1,
      sym__indentation,
  [5109] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_FINALLY,
    ACTIONS(819), 1,
      anon_sym_END,
  [5119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SPACE,
    ACTIONS(823), 1,
      sym_variable_name,
  [5129] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym__separator,
    STATE(325), 1,
      sym__indentation,
  [5139] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym__separator,
    STATE(265), 1,
      aux_sym_for_statement_repeat1,
  [5149] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_SPACE,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
  [5159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SPACE,
    ACTIONS(836), 1,
      sym_variable_name,
  [5169] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SPACE,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [5179] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__separator,
    ACTIONS(844), 1,
      sym__line_break,
  [5189] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SPACE,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [5199] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__separator,
    STATE(314), 1,
      sym__indentation,
  [5209] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_FINALLY,
    ACTIONS(623), 1,
      anon_sym_END,
  [5219] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__separator,
    ACTIONS(854), 1,
      sym__line_break,
  [5229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym_comments_section_token2,
    ACTIONS(858), 1,
      sym__line_break,
  [5239] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__line_break,
    ACTIONS(860), 1,
      sym__separator,
  [5249] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SPACE,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [5259] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_FINALLY,
    ACTIONS(621), 1,
      anon_sym_END,
  [5269] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_SPACE,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
  [5279] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_SPACE,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [5289] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_SPACE,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
  [5299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      aux_sym_comments_section_token2,
    ACTIONS(880), 1,
      sym__line_break,
  [5309] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SPACE,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [5319] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_SPACE,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [5329] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_SPACE,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
  [5339] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym__separator,
    STATE(394), 1,
      sym__indentation,
  [5349] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__separator,
    STATE(364), 1,
      sym__indentation,
  [5359] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__separator,
    ACTIONS(900), 1,
      sym__line_break,
  [5369] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_SPACE,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
  [5379] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_SPACE,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
  [5389] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_SPACE,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [5399] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_SPACE,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [5409] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_SPACE,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [5419] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_SPACE,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [5429] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_SPACE,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [5439] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_SPACE,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
  [5449] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_SPACE,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
  [5459] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_SPACE,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
  [5469] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_SPACE,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
  [5479] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_SPACE,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
  [5489] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_SPACE,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
  [5499] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_SPACE,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
  [5509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_SPACE,
    ACTIONS(960), 1,
      sym_variable_name,
  [5519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_SPACE,
    ACTIONS(964), 1,
      sym_variable_name,
  [5529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_SPACE,
    ACTIONS(968), 1,
      sym_variable_name,
  [5539] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__line_break,
    ACTIONS(970), 1,
      sym__separator,
  [5549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_SPACE,
    ACTIONS(974), 1,
      sym_variable_name,
  [5559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SPACE,
    ACTIONS(978), 1,
      sym_variable_name,
  [5569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_SPACE,
    ACTIONS(982), 1,
      sym_variable_name,
  [5579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_SPACE,
    ACTIONS(986), 1,
      sym_variable_name,
  [5589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_SPACE,
    ACTIONS(990), 1,
      sym_variable_name,
  [5599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_SPACE,
    ACTIONS(994), 1,
      sym_variable_name,
  [5609] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym__separator,
    STATE(382), 1,
      sym__indentation,
  [5619] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_RBRACE,
  [5626] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_END,
  [5633] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [5640] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym__line_break,
  [5647] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym__line_break,
  [5654] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym__line_break,
  [5661] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1006), 1,
      ts_builtin_sym_end,
  [5668] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym__separator,
  [5675] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
  [5682] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
  [5689] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym__line_break,
  [5696] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym__line_break,
  [5703] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_END,
  [5710] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_variable_name,
  [5724] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
  [5731] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1022), 1,
      sym__line_break,
  [5738] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym__separator,
  [5745] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__separator,
  [5752] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym__line_break,
  [5759] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym__separator,
  [5766] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1032), 1,
      sym__separator,
  [5773] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [5780] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym__line_break,
  [5787] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym__line_break,
  [5794] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__line_break,
  [5801] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__line_break,
  [5808] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__line_break,
  [5815] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1044), 1,
      sym__separator,
  [5822] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__line_break,
  [5829] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1048), 1,
      sym__separator,
  [5836] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym__separator,
  [5843] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
  [5850] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym__line_break,
  [5857] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_RBRACK,
  [5864] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1058), 1,
      sym__line_break,
  [5871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_variable_name,
  [5878] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__line_break,
  [5885] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1064), 1,
      sym__line_break,
  [5892] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1066), 1,
      sym__line_break,
  [5899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      sym_variable_name,
  [5906] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1070), 1,
      sym__separator,
  [5913] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__separator,
  [5920] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__line_break,
  [5927] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_END,
  [5934] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__separator,
  [5941] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1076), 1,
      sym__line_break,
  [5948] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_EXCEPT,
  [5955] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__separator,
  [5962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_variable_name,
  [5969] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_END,
  [5976] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_END,
  [5983] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym__line_break,
  [5990] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__line_break,
  [5997] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym__line_break,
  [6004] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__line_break,
  [6011] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_END,
  [6018] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym__line_break,
  [6025] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym__line_break,
  [6032] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_ELSEIF,
  [6039] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__line_break,
  [6046] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym__line_break,
  [6053] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym_ellipses,
  [6060] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_END,
  [6067] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym__line_break,
  [6074] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1106), 1,
      sym__separator,
  [6081] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [6088] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1108), 1,
      sym__line_break,
  [6095] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [6102] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_END,
  [6109] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
  [6116] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym__line_break,
  [6123] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1114), 1,
      sym__line_break,
  [6130] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_RBRACE,
  [6137] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
  [6144] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_RBRACE,
  [6151] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__line_break,
  [6158] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
  [6165] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1126), 1,
      sym__line_break,
  [6172] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1128), 1,
      sym__line_break,
  [6179] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym__line_break,
  [6186] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_END,
  [6193] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_RBRACE,
  [6200] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym__line_break,
  [6207] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [6214] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym__line_break,
  [6221] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [6228] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym__line_break,
  [6235] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [6242] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1142), 1,
      sym__separator,
  [6249] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym__line_break,
  [6256] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_RBRACE,
  [6263] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
  [6270] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
  [6277] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1152), 1,
      sym__line_break,
  [6284] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1154), 1,
      sym__line_break,
  [6291] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1156), 1,
      sym__line_break,
  [6298] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1158), 1,
      sym__line_break,
  [6305] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1160), 1,
      sym__separator,
  [6312] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
  [6319] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym__line_break,
  [6326] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
  [6333] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1164), 1,
      sym__line_break,
  [6340] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
  [6347] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
  [6354] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1168), 1,
      anon_sym_RBRACE,
  [6361] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_RBRACE,
  [6368] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1172), 1,
      sym__line_break,
  [6375] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1174), 1,
      sym__line_break,
  [6382] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ellipses,
  [6389] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
  [6396] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RBRACE,
  [6403] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym__line_break,
  [6410] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym__separator,
  [6417] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym__line_break,
  [6424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_variable_name,
  [6431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym_variable_name,
  [6438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      sym_variable_name,
  [6445] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym__line_break,
  [6452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_variable_name,
  [6459] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1194), 1,
      sym__line_break,
  [6466] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1196), 1,
      sym__line_break,
  [6473] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1198), 1,
      sym__line_break,
  [6480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_variable_name,
  [6487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym_variable_name,
  [6494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_variable_name,
  [6501] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1206), 1,
      sym__line_break,
  [6508] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_RBRACE,
  [6515] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_END,
  [6522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      sym_variable_name,
  [6529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym_variable_name,
  [6536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      sym_variable_name,
  [6543] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym__line_break,
  [6550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      sym_variable_name,
  [6557] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym__line_break,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 322,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 433,
  [SMALL_STATE(12)] = 482,
  [SMALL_STATE(13)] = 531,
  [SMALL_STATE(14)] = 579,
  [SMALL_STATE(15)] = 627,
  [SMALL_STATE(16)] = 672,
  [SMALL_STATE(17)] = 710,
  [SMALL_STATE(18)] = 748,
  [SMALL_STATE(19)] = 786,
  [SMALL_STATE(20)] = 824,
  [SMALL_STATE(21)] = 862,
  [SMALL_STATE(22)] = 897,
  [SMALL_STATE(23)] = 932,
  [SMALL_STATE(24)] = 967,
  [SMALL_STATE(25)] = 1002,
  [SMALL_STATE(26)] = 1037,
  [SMALL_STATE(27)] = 1069,
  [SMALL_STATE(28)] = 1103,
  [SMALL_STATE(29)] = 1135,
  [SMALL_STATE(30)] = 1167,
  [SMALL_STATE(31)] = 1199,
  [SMALL_STATE(32)] = 1233,
  [SMALL_STATE(33)] = 1265,
  [SMALL_STATE(34)] = 1297,
  [SMALL_STATE(35)] = 1329,
  [SMALL_STATE(36)] = 1361,
  [SMALL_STATE(37)] = 1393,
  [SMALL_STATE(38)] = 1427,
  [SMALL_STATE(39)] = 1461,
  [SMALL_STATE(40)] = 1481,
  [SMALL_STATE(41)] = 1501,
  [SMALL_STATE(42)] = 1530,
  [SMALL_STATE(43)] = 1551,
  [SMALL_STATE(44)] = 1572,
  [SMALL_STATE(45)] = 1601,
  [SMALL_STATE(46)] = 1620,
  [SMALL_STATE(47)] = 1649,
  [SMALL_STATE(48)] = 1682,
  [SMALL_STATE(49)] = 1703,
  [SMALL_STATE(50)] = 1722,
  [SMALL_STATE(51)] = 1743,
  [SMALL_STATE(52)] = 1772,
  [SMALL_STATE(53)] = 1801,
  [SMALL_STATE(54)] = 1822,
  [SMALL_STATE(55)] = 1851,
  [SMALL_STATE(56)] = 1880,
  [SMALL_STATE(57)] = 1909,
  [SMALL_STATE(58)] = 1928,
  [SMALL_STATE(59)] = 1957,
  [SMALL_STATE(60)] = 1985,
  [SMALL_STATE(61)] = 2017,
  [SMALL_STATE(62)] = 2043,
  [SMALL_STATE(63)] = 2069,
  [SMALL_STATE(64)] = 2095,
  [SMALL_STATE(65)] = 2113,
  [SMALL_STATE(66)] = 2131,
  [SMALL_STATE(67)] = 2149,
  [SMALL_STATE(68)] = 2164,
  [SMALL_STATE(69)] = 2189,
  [SMALL_STATE(70)] = 2214,
  [SMALL_STATE(71)] = 2239,
  [SMALL_STATE(72)] = 2264,
  [SMALL_STATE(73)] = 2289,
  [SMALL_STATE(74)] = 2314,
  [SMALL_STATE(75)] = 2338,
  [SMALL_STATE(76)] = 2362,
  [SMALL_STATE(77)] = 2384,
  [SMALL_STATE(78)] = 2408,
  [SMALL_STATE(79)] = 2434,
  [SMALL_STATE(80)] = 2456,
  [SMALL_STATE(81)] = 2474,
  [SMALL_STATE(82)] = 2498,
  [SMALL_STATE(83)] = 2522,
  [SMALL_STATE(84)] = 2546,
  [SMALL_STATE(85)] = 2564,
  [SMALL_STATE(86)] = 2586,
  [SMALL_STATE(87)] = 2601,
  [SMALL_STATE(88)] = 2616,
  [SMALL_STATE(89)] = 2637,
  [SMALL_STATE(90)] = 2660,
  [SMALL_STATE(91)] = 2683,
  [SMALL_STATE(92)] = 2704,
  [SMALL_STATE(93)] = 2725,
  [SMALL_STATE(94)] = 2738,
  [SMALL_STATE(95)] = 2761,
  [SMALL_STATE(96)] = 2784,
  [SMALL_STATE(97)] = 2807,
  [SMALL_STATE(98)] = 2830,
  [SMALL_STATE(99)] = 2853,
  [SMALL_STATE(100)] = 2876,
  [SMALL_STATE(101)] = 2890,
  [SMALL_STATE(102)] = 2910,
  [SMALL_STATE(103)] = 2930,
  [SMALL_STATE(104)] = 2950,
  [SMALL_STATE(105)] = 2970,
  [SMALL_STATE(106)] = 2990,
  [SMALL_STATE(107)] = 3010,
  [SMALL_STATE(108)] = 3024,
  [SMALL_STATE(109)] = 3044,
  [SMALL_STATE(110)] = 3064,
  [SMALL_STATE(111)] = 3084,
  [SMALL_STATE(112)] = 3102,
  [SMALL_STATE(113)] = 3122,
  [SMALL_STATE(114)] = 3142,
  [SMALL_STATE(115)] = 3162,
  [SMALL_STATE(116)] = 3176,
  [SMALL_STATE(117)] = 3196,
  [SMALL_STATE(118)] = 3210,
  [SMALL_STATE(119)] = 3224,
  [SMALL_STATE(120)] = 3244,
  [SMALL_STATE(121)] = 3264,
  [SMALL_STATE(122)] = 3278,
  [SMALL_STATE(123)] = 3292,
  [SMALL_STATE(124)] = 3312,
  [SMALL_STATE(125)] = 3332,
  [SMALL_STATE(126)] = 3346,
  [SMALL_STATE(127)] = 3360,
  [SMALL_STATE(128)] = 3380,
  [SMALL_STATE(129)] = 3400,
  [SMALL_STATE(130)] = 3420,
  [SMALL_STATE(131)] = 3434,
  [SMALL_STATE(132)] = 3454,
  [SMALL_STATE(133)] = 3468,
  [SMALL_STATE(134)] = 3482,
  [SMALL_STATE(135)] = 3502,
  [SMALL_STATE(136)] = 3516,
  [SMALL_STATE(137)] = 3534,
  [SMALL_STATE(138)] = 3552,
  [SMALL_STATE(139)] = 3572,
  [SMALL_STATE(140)] = 3585,
  [SMALL_STATE(141)] = 3598,
  [SMALL_STATE(142)] = 3615,
  [SMALL_STATE(143)] = 3628,
  [SMALL_STATE(144)] = 3641,
  [SMALL_STATE(145)] = 3654,
  [SMALL_STATE(146)] = 3667,
  [SMALL_STATE(147)] = 3680,
  [SMALL_STATE(148)] = 3693,
  [SMALL_STATE(149)] = 3706,
  [SMALL_STATE(150)] = 3725,
  [SMALL_STATE(151)] = 3738,
  [SMALL_STATE(152)] = 3755,
  [SMALL_STATE(153)] = 3774,
  [SMALL_STATE(154)] = 3787,
  [SMALL_STATE(155)] = 3800,
  [SMALL_STATE(156)] = 3813,
  [SMALL_STATE(157)] = 3826,
  [SMALL_STATE(158)] = 3839,
  [SMALL_STATE(159)] = 3852,
  [SMALL_STATE(160)] = 3865,
  [SMALL_STATE(161)] = 3878,
  [SMALL_STATE(162)] = 3891,
  [SMALL_STATE(163)] = 3910,
  [SMALL_STATE(164)] = 3923,
  [SMALL_STATE(165)] = 3936,
  [SMALL_STATE(166)] = 3949,
  [SMALL_STATE(167)] = 3962,
  [SMALL_STATE(168)] = 3975,
  [SMALL_STATE(169)] = 3988,
  [SMALL_STATE(170)] = 4001,
  [SMALL_STATE(171)] = 4014,
  [SMALL_STATE(172)] = 4027,
  [SMALL_STATE(173)] = 4039,
  [SMALL_STATE(174)] = 4051,
  [SMALL_STATE(175)] = 4063,
  [SMALL_STATE(176)] = 4079,
  [SMALL_STATE(177)] = 4093,
  [SMALL_STATE(178)] = 4107,
  [SMALL_STATE(179)] = 4119,
  [SMALL_STATE(180)] = 4133,
  [SMALL_STATE(181)] = 4149,
  [SMALL_STATE(182)] = 4163,
  [SMALL_STATE(183)] = 4175,
  [SMALL_STATE(184)] = 4189,
  [SMALL_STATE(185)] = 4201,
  [SMALL_STATE(186)] = 4217,
  [SMALL_STATE(187)] = 4233,
  [SMALL_STATE(188)] = 4249,
  [SMALL_STATE(189)] = 4261,
  [SMALL_STATE(190)] = 4273,
  [SMALL_STATE(191)] = 4285,
  [SMALL_STATE(192)] = 4301,
  [SMALL_STATE(193)] = 4315,
  [SMALL_STATE(194)] = 4329,
  [SMALL_STATE(195)] = 4343,
  [SMALL_STATE(196)] = 4357,
  [SMALL_STATE(197)] = 4371,
  [SMALL_STATE(198)] = 4383,
  [SMALL_STATE(199)] = 4397,
  [SMALL_STATE(200)] = 4411,
  [SMALL_STATE(201)] = 4425,
  [SMALL_STATE(202)] = 4437,
  [SMALL_STATE(203)] = 4450,
  [SMALL_STATE(204)] = 4463,
  [SMALL_STATE(205)] = 4476,
  [SMALL_STATE(206)] = 4489,
  [SMALL_STATE(207)] = 4500,
  [SMALL_STATE(208)] = 4513,
  [SMALL_STATE(209)] = 4526,
  [SMALL_STATE(210)] = 4539,
  [SMALL_STATE(211)] = 4552,
  [SMALL_STATE(212)] = 4565,
  [SMALL_STATE(213)] = 4578,
  [SMALL_STATE(214)] = 4591,
  [SMALL_STATE(215)] = 4604,
  [SMALL_STATE(216)] = 4617,
  [SMALL_STATE(217)] = 4628,
  [SMALL_STATE(218)] = 4639,
  [SMALL_STATE(219)] = 4652,
  [SMALL_STATE(220)] = 4665,
  [SMALL_STATE(221)] = 4678,
  [SMALL_STATE(222)] = 4691,
  [SMALL_STATE(223)] = 4704,
  [SMALL_STATE(224)] = 4717,
  [SMALL_STATE(225)] = 4728,
  [SMALL_STATE(226)] = 4741,
  [SMALL_STATE(227)] = 4752,
  [SMALL_STATE(228)] = 4763,
  [SMALL_STATE(229)] = 4776,
  [SMALL_STATE(230)] = 4789,
  [SMALL_STATE(231)] = 4799,
  [SMALL_STATE(232)] = 4809,
  [SMALL_STATE(233)] = 4819,
  [SMALL_STATE(234)] = 4829,
  [SMALL_STATE(235)] = 4839,
  [SMALL_STATE(236)] = 4849,
  [SMALL_STATE(237)] = 4859,
  [SMALL_STATE(238)] = 4869,
  [SMALL_STATE(239)] = 4879,
  [SMALL_STATE(240)] = 4889,
  [SMALL_STATE(241)] = 4899,
  [SMALL_STATE(242)] = 4909,
  [SMALL_STATE(243)] = 4919,
  [SMALL_STATE(244)] = 4929,
  [SMALL_STATE(245)] = 4939,
  [SMALL_STATE(246)] = 4949,
  [SMALL_STATE(247)] = 4959,
  [SMALL_STATE(248)] = 4969,
  [SMALL_STATE(249)] = 4979,
  [SMALL_STATE(250)] = 4989,
  [SMALL_STATE(251)] = 4999,
  [SMALL_STATE(252)] = 5009,
  [SMALL_STATE(253)] = 5019,
  [SMALL_STATE(254)] = 5029,
  [SMALL_STATE(255)] = 5039,
  [SMALL_STATE(256)] = 5049,
  [SMALL_STATE(257)] = 5059,
  [SMALL_STATE(258)] = 5069,
  [SMALL_STATE(259)] = 5079,
  [SMALL_STATE(260)] = 5089,
  [SMALL_STATE(261)] = 5099,
  [SMALL_STATE(262)] = 5109,
  [SMALL_STATE(263)] = 5119,
  [SMALL_STATE(264)] = 5129,
  [SMALL_STATE(265)] = 5139,
  [SMALL_STATE(266)] = 5149,
  [SMALL_STATE(267)] = 5159,
  [SMALL_STATE(268)] = 5169,
  [SMALL_STATE(269)] = 5179,
  [SMALL_STATE(270)] = 5189,
  [SMALL_STATE(271)] = 5199,
  [SMALL_STATE(272)] = 5209,
  [SMALL_STATE(273)] = 5219,
  [SMALL_STATE(274)] = 5229,
  [SMALL_STATE(275)] = 5239,
  [SMALL_STATE(276)] = 5249,
  [SMALL_STATE(277)] = 5259,
  [SMALL_STATE(278)] = 5269,
  [SMALL_STATE(279)] = 5279,
  [SMALL_STATE(280)] = 5289,
  [SMALL_STATE(281)] = 5299,
  [SMALL_STATE(282)] = 5309,
  [SMALL_STATE(283)] = 5319,
  [SMALL_STATE(284)] = 5329,
  [SMALL_STATE(285)] = 5339,
  [SMALL_STATE(286)] = 5349,
  [SMALL_STATE(287)] = 5359,
  [SMALL_STATE(288)] = 5369,
  [SMALL_STATE(289)] = 5379,
  [SMALL_STATE(290)] = 5389,
  [SMALL_STATE(291)] = 5399,
  [SMALL_STATE(292)] = 5409,
  [SMALL_STATE(293)] = 5419,
  [SMALL_STATE(294)] = 5429,
  [SMALL_STATE(295)] = 5439,
  [SMALL_STATE(296)] = 5449,
  [SMALL_STATE(297)] = 5459,
  [SMALL_STATE(298)] = 5469,
  [SMALL_STATE(299)] = 5479,
  [SMALL_STATE(300)] = 5489,
  [SMALL_STATE(301)] = 5499,
  [SMALL_STATE(302)] = 5509,
  [SMALL_STATE(303)] = 5519,
  [SMALL_STATE(304)] = 5529,
  [SMALL_STATE(305)] = 5539,
  [SMALL_STATE(306)] = 5549,
  [SMALL_STATE(307)] = 5559,
  [SMALL_STATE(308)] = 5569,
  [SMALL_STATE(309)] = 5579,
  [SMALL_STATE(310)] = 5589,
  [SMALL_STATE(311)] = 5599,
  [SMALL_STATE(312)] = 5609,
  [SMALL_STATE(313)] = 5619,
  [SMALL_STATE(314)] = 5626,
  [SMALL_STATE(315)] = 5633,
  [SMALL_STATE(316)] = 5640,
  [SMALL_STATE(317)] = 5647,
  [SMALL_STATE(318)] = 5654,
  [SMALL_STATE(319)] = 5661,
  [SMALL_STATE(320)] = 5668,
  [SMALL_STATE(321)] = 5675,
  [SMALL_STATE(322)] = 5682,
  [SMALL_STATE(323)] = 5689,
  [SMALL_STATE(324)] = 5696,
  [SMALL_STATE(325)] = 5703,
  [SMALL_STATE(326)] = 5710,
  [SMALL_STATE(327)] = 5717,
  [SMALL_STATE(328)] = 5724,
  [SMALL_STATE(329)] = 5731,
  [SMALL_STATE(330)] = 5738,
  [SMALL_STATE(331)] = 5745,
  [SMALL_STATE(332)] = 5752,
  [SMALL_STATE(333)] = 5759,
  [SMALL_STATE(334)] = 5766,
  [SMALL_STATE(335)] = 5773,
  [SMALL_STATE(336)] = 5780,
  [SMALL_STATE(337)] = 5787,
  [SMALL_STATE(338)] = 5794,
  [SMALL_STATE(339)] = 5801,
  [SMALL_STATE(340)] = 5808,
  [SMALL_STATE(341)] = 5815,
  [SMALL_STATE(342)] = 5822,
  [SMALL_STATE(343)] = 5829,
  [SMALL_STATE(344)] = 5836,
  [SMALL_STATE(345)] = 5843,
  [SMALL_STATE(346)] = 5850,
  [SMALL_STATE(347)] = 5857,
  [SMALL_STATE(348)] = 5864,
  [SMALL_STATE(349)] = 5871,
  [SMALL_STATE(350)] = 5878,
  [SMALL_STATE(351)] = 5885,
  [SMALL_STATE(352)] = 5892,
  [SMALL_STATE(353)] = 5899,
  [SMALL_STATE(354)] = 5906,
  [SMALL_STATE(355)] = 5913,
  [SMALL_STATE(356)] = 5920,
  [SMALL_STATE(357)] = 5927,
  [SMALL_STATE(358)] = 5934,
  [SMALL_STATE(359)] = 5941,
  [SMALL_STATE(360)] = 5948,
  [SMALL_STATE(361)] = 5955,
  [SMALL_STATE(362)] = 5962,
  [SMALL_STATE(363)] = 5969,
  [SMALL_STATE(364)] = 5976,
  [SMALL_STATE(365)] = 5983,
  [SMALL_STATE(366)] = 5990,
  [SMALL_STATE(367)] = 5997,
  [SMALL_STATE(368)] = 6004,
  [SMALL_STATE(369)] = 6011,
  [SMALL_STATE(370)] = 6018,
  [SMALL_STATE(371)] = 6025,
  [SMALL_STATE(372)] = 6032,
  [SMALL_STATE(373)] = 6039,
  [SMALL_STATE(374)] = 6046,
  [SMALL_STATE(375)] = 6053,
  [SMALL_STATE(376)] = 6060,
  [SMALL_STATE(377)] = 6067,
  [SMALL_STATE(378)] = 6074,
  [SMALL_STATE(379)] = 6081,
  [SMALL_STATE(380)] = 6088,
  [SMALL_STATE(381)] = 6095,
  [SMALL_STATE(382)] = 6102,
  [SMALL_STATE(383)] = 6109,
  [SMALL_STATE(384)] = 6116,
  [SMALL_STATE(385)] = 6123,
  [SMALL_STATE(386)] = 6130,
  [SMALL_STATE(387)] = 6137,
  [SMALL_STATE(388)] = 6144,
  [SMALL_STATE(389)] = 6151,
  [SMALL_STATE(390)] = 6158,
  [SMALL_STATE(391)] = 6165,
  [SMALL_STATE(392)] = 6172,
  [SMALL_STATE(393)] = 6179,
  [SMALL_STATE(394)] = 6186,
  [SMALL_STATE(395)] = 6193,
  [SMALL_STATE(396)] = 6200,
  [SMALL_STATE(397)] = 6207,
  [SMALL_STATE(398)] = 6214,
  [SMALL_STATE(399)] = 6221,
  [SMALL_STATE(400)] = 6228,
  [SMALL_STATE(401)] = 6235,
  [SMALL_STATE(402)] = 6242,
  [SMALL_STATE(403)] = 6249,
  [SMALL_STATE(404)] = 6256,
  [SMALL_STATE(405)] = 6263,
  [SMALL_STATE(406)] = 6270,
  [SMALL_STATE(407)] = 6277,
  [SMALL_STATE(408)] = 6284,
  [SMALL_STATE(409)] = 6291,
  [SMALL_STATE(410)] = 6298,
  [SMALL_STATE(411)] = 6305,
  [SMALL_STATE(412)] = 6312,
  [SMALL_STATE(413)] = 6319,
  [SMALL_STATE(414)] = 6326,
  [SMALL_STATE(415)] = 6333,
  [SMALL_STATE(416)] = 6340,
  [SMALL_STATE(417)] = 6347,
  [SMALL_STATE(418)] = 6354,
  [SMALL_STATE(419)] = 6361,
  [SMALL_STATE(420)] = 6368,
  [SMALL_STATE(421)] = 6375,
  [SMALL_STATE(422)] = 6382,
  [SMALL_STATE(423)] = 6389,
  [SMALL_STATE(424)] = 6396,
  [SMALL_STATE(425)] = 6403,
  [SMALL_STATE(426)] = 6410,
  [SMALL_STATE(427)] = 6417,
  [SMALL_STATE(428)] = 6424,
  [SMALL_STATE(429)] = 6431,
  [SMALL_STATE(430)] = 6438,
  [SMALL_STATE(431)] = 6445,
  [SMALL_STATE(432)] = 6452,
  [SMALL_STATE(433)] = 6459,
  [SMALL_STATE(434)] = 6466,
  [SMALL_STATE(435)] = 6473,
  [SMALL_STATE(436)] = 6480,
  [SMALL_STATE(437)] = 6487,
  [SMALL_STATE(438)] = 6494,
  [SMALL_STATE(439)] = 6501,
  [SMALL_STATE(440)] = 6508,
  [SMALL_STATE(441)] = 6515,
  [SMALL_STATE(442)] = 6522,
  [SMALL_STATE(443)] = 6529,
  [SMALL_STATE(444)] = 6536,
  [SMALL_STATE(445)] = 6543,
  [SMALL_STATE(446)] = 6550,
  [SMALL_STATE(447)] = 6557,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments_section, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments_section, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comments_section, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comments_section_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comments_section_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comments_section_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(223),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(14),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(51),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(228),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_name, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_name, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(15),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(15),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(223),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_chunk, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_chunk, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(51),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(228),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(51),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(228),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(223),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(15),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_chunk, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_chunk, 1, 0, 0),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(51),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(228),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_name_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(223),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 10), SHIFT_REPEAT(372),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(228),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(228),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(223),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(223),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(51),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(51),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 0), SHIFT(51),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 4),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 4),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [827] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 9),
  [1006] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 11),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 12),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, 0, 6),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, 0, 5),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, 0, 5),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 7),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 13),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 14),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 8),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 15),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 0),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 17),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 18),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 19),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 20),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 21),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 6),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 5),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, 0, 6),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 6),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 5),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
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
