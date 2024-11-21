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
#define STATE_COUNT 398
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
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
  sym_keyword = 39,
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
  aux_sym__whitespace_token1 = 65,
  sym__line_break = 66,
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
  sym_if_statement = 88,
  sym_elseif_statement = 89,
  sym_else_statement = 90,
  sym_inline_if_statement = 91,
  sym_block = 92,
  sym_inline_elseif_statement = 93,
  sym_inline_else_statement = 94,
  sym_inline_statement = 95,
  sym_try_statement = 96,
  sym_except_statement = 97,
  sym_finally_statement = 98,
  sym_while_statement = 99,
  sym_for_statement = 100,
  sym__for_in = 101,
  sym__for_in_range = 102,
  sym__for_in_enumerate = 103,
  sym__for_in_zip = 104,
  sym_arguments = 105,
  sym_arguments_without_continuation = 106,
  sym_continuation = 107,
  sym_argument = 108,
  sym_scalar_variable = 109,
  sym_list_variable = 110,
  sym_dictionary_variable = 111,
  sym_inline_python_expression = 112,
  sym__indentation = 113,
  sym__empty_line = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_settings_section_repeat1 = 116,
  aux_sym_variables_section_repeat1 = 117,
  aux_sym_keywords_section_repeat1 = 118,
  aux_sym_keyword_definition_body_repeat1 = 119,
  aux_sym_test_cases_section_repeat1 = 120,
  aux_sym_test_case_definition_body_repeat1 = 121,
  aux_sym_if_statement_repeat1 = 122,
  aux_sym_inline_if_statement_repeat1 = 123,
  aux_sym_block_repeat1 = 124,
  aux_sym_try_statement_repeat1 = 125,
  aux_sym_for_statement_repeat1 = 126,
  aux_sym_arguments_repeat1 = 127,
  aux_sym_arguments_repeat2 = 128,
  aux_sym_argument_repeat1 = 129,
  aux_sym_inline_python_expression_repeat1 = 130,
  alias_sym_name = 131,
  alias_sym_python_expression = 132,
  alias_sym_return_value = 133,
  alias_sym_variable_list = 134,
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
  [sym_keyword] = "keyword",
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
  [sym_keyword] = sym_keyword,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
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
  [50] = 49,
  [51] = 51,
  [52] = 7,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 56,
  [60] = 54,
  [61] = 61,
  [62] = 54,
  [63] = 63,
  [64] = 51,
  [65] = 51,
  [66] = 57,
  [67] = 67,
  [68] = 56,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 7,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 90,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 104,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 101,
  [123] = 89,
  [124] = 124,
  [125] = 124,
  [126] = 102,
  [127] = 105,
  [128] = 108,
  [129] = 110,
  [130] = 112,
  [131] = 114,
  [132] = 111,
  [133] = 109,
  [134] = 92,
  [135] = 91,
  [136] = 136,
  [137] = 137,
  [138] = 101,
  [139] = 105,
  [140] = 108,
  [141] = 110,
  [142] = 112,
  [143] = 111,
  [144] = 109,
  [145] = 91,
  [146] = 89,
  [147] = 147,
  [148] = 148,
  [149] = 102,
  [150] = 114,
  [151] = 92,
  [152] = 152,
  [153] = 152,
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 159,
  [164] = 164,
  [165] = 159,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 157,
  [170] = 157,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 158,
  [179] = 177,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 183,
  [187] = 187,
  [188] = 182,
  [189] = 189,
  [190] = 190,
  [191] = 189,
  [192] = 192,
  [193] = 162,
  [194] = 194,
  [195] = 194,
  [196] = 161,
  [197] = 7,
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
  [216] = 205,
  [217] = 203,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 205,
  [222] = 202,
  [223] = 223,
  [224] = 224,
  [225] = 223,
  [226] = 226,
  [227] = 224,
  [228] = 228,
  [229] = 229,
  [230] = 229,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 219,
  [235] = 235,
  [236] = 233,
  [237] = 237,
  [238] = 209,
  [239] = 239,
  [240] = 223,
  [241] = 224,
  [242] = 242,
  [243] = 243,
  [244] = 203,
  [245] = 245,
  [246] = 219,
  [247] = 203,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 219,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 209,
  [259] = 202,
  [260] = 205,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 239,
  [265] = 265,
  [266] = 266,
  [267] = 229,
  [268] = 233,
  [269] = 269,
  [270] = 270,
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
  [323] = 102,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 114,
  [330] = 330,
  [331] = 331,
  [332] = 92,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 298,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 334,
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
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 344,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 298,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 353,
  [371] = 371,
  [372] = 355,
  [373] = 373,
  [374] = 357,
  [375] = 359,
  [376] = 360,
  [377] = 361,
  [378] = 298,
  [379] = 379,
  [380] = 353,
  [381] = 353,
  [382] = 359,
  [383] = 355,
  [384] = 384,
  [385] = 357,
  [386] = 342,
  [387] = 346,
  [388] = 348,
  [389] = 364,
  [390] = 361,
  [391] = 360,
  [392] = 359,
  [393] = 342,
  [394] = 346,
  [395] = 348,
  [396] = 396,
  [397] = 342,
};

static inline bool sym_text_chunk_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(338);
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(379);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(590);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(584);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(587);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(482);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(306);
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
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'B') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'F') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == '[') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == 'B') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead == 'F') ADVANCE(414);
      if (lookahead == 'I') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == 'B') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == 'F') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == 'B') ADVANCE(432);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(422);
      if (lookahead == 'F') ADVANCE(428);
      if (lookahead == 'I') ADVANCE(410);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(479);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(374);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(341);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(365);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(390);
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
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(473);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(447);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(461);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(451);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Z') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(445);
      if (lookahead == 'N') ADVANCE(465);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(449);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(471);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(468);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(459);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(369);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(369);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(475);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(475);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(474);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(474);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(500);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(539);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(536);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(247);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 159:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 213:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 223:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 247:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 251:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(312);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 322:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 323:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 324:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 325:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 326:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 327:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 328:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 330:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(566);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 331:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(500);
      END_STATE();
    case 333:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(536);
      END_STATE();
    case 334:
      if (eof) ADVANCE(338);
      if (lookahead == '\t') ADVANCE(585);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(589);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 335:
      if (eof) ADVANCE(338);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(592);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(136);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 336:
      if (eof) ADVANCE(338);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 337:
      if (eof) ADVANCE(338);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(584);
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
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(476);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(480);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'C') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'D') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'E') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'F') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'F') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'H') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == 'O') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'K') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(402);
      if (lookahead == 'X') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(435);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'N') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'O') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'P') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'R') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'S') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'S') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'U') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'U') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'Y') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == 'Y') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (lookahead == '{') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(479);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(483);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(584);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(581);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(581);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(581);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(582);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(582);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(582);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(526);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(526);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(526);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(526);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(526);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(526);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(526);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(526);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(526);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(526);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(526);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(526);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(526);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(526);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(526);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(526);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(526);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(526);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(526);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(526);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(526);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(526);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(526);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(526);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(526);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(566);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(566);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(566);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(566);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(566);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(566);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(566);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(566);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(566);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(566);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(566);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(566);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(128);
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(526);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(503);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '{') ADVANCE(584);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '{') ADVANCE(584);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(592);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(592);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(592);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(500);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(594);
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
  [1] = {.lex_state = 337},
  [2] = {.lex_state = 335},
  [3] = {.lex_state = 335},
  [4] = {.lex_state = 335},
  [5] = {.lex_state = 335},
  [6] = {.lex_state = 335},
  [7] = {.lex_state = 335},
  [8] = {.lex_state = 335},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 334},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 334},
  [20] = {.lex_state = 336},
  [21] = {.lex_state = 335},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 336},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 336},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 336},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 335},
  [30] = {.lex_state = 336},
  [31] = {.lex_state = 335},
  [32] = {.lex_state = 336},
  [33] = {.lex_state = 336},
  [34] = {.lex_state = 336},
  [35] = {.lex_state = 336},
  [36] = {.lex_state = 335},
  [37] = {.lex_state = 336},
  [38] = {.lex_state = 335},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 334},
  [53] = {.lex_state = 334},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 334},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 335},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 335},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 336},
  [71] = {.lex_state = 336},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 336},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 337},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 337},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 34},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 34},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 337},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 13},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 337},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 35},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 8},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 8},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 35},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 337},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 35},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 35},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 337},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 337},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 337},
  [358] = {.lex_state = 337},
  [359] = {.lex_state = 337},
  [360] = {.lex_state = 337},
  [361] = {.lex_state = 337},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 35},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 8},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 337},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 337},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 337},
  [375] = {.lex_state = 337},
  [376] = {.lex_state = 337},
  [377] = {.lex_state = 337},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 337},
  [381] = {.lex_state = 337},
  [382] = {.lex_state = 337},
  [383] = {.lex_state = 337},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 337},
  [386] = {.lex_state = 35},
  [387] = {.lex_state = 35},
  [388] = {.lex_state = 35},
  [389] = {.lex_state = 35},
  [390] = {.lex_state = 337},
  [391] = {.lex_state = 337},
  [392] = {.lex_state = 337},
  [393] = {.lex_state = 35},
  [394] = {.lex_state = 35},
  [395] = {.lex_state = 35},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 35},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token5] = ACTIONS(1),
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
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(319),
    [sym_section] = STATE(28),
    [sym_settings_section] = STATE(137),
    [sym_variables_section] = STATE(137),
    [sym_keywords_section] = STATE(137),
    [sym_test_cases_section] = STATE(137),
    [aux_sym_source_file_repeat1] = STATE(28),
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
    STATE(117), 1,
      sym_setting_name,
    STATE(6), 3,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(27), 1,
      sym__line_break,
    STATE(117), 1,
      sym_setting_name,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
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
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(29), 1,
      sym__line_break,
    STATE(117), 1,
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
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__whitespace_token1,
    ACTIONS(39), 1,
      sym__line_break,
    STATE(117), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(33), 17,
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
    ACTIONS(29), 1,
      sym__line_break,
    STATE(117), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(42), 5,
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
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__whitespace_token1,
    ACTIONS(44), 24,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym__whitespace_token1,
    ACTIONS(48), 23,
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
  [285] = 15,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_END,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_EXCEPT,
    ACTIONS(68), 1,
      anon_sym_FINALLY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    STATE(349), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [339] = 14,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_END,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    STATE(349), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [390] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(379), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [436] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(373), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [482] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_END,
    STATE(349), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [527] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
    STATE(349), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [572] = 11,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    STATE(349), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(369), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [614] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(97), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [644] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__separator,
    ACTIONS(110), 1,
      aux_sym__whitespace_token1,
    ACTIONS(113), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(105), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [674] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym__separator,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(118), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [704] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(132), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(128), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [734] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      sym__line_break,
    STATE(27), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(148), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [786] = 8,
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
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(137), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [815] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(158), 1,
      sym__line_break,
    STATE(34), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(154), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [842] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__separator,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(103), 1,
      sym_block,
    STATE(198), 1,
      sym_else_statement,
    STATE(207), 1,
      sym_finally_statement,
    STATE(96), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [875] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(168), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [902] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      aux_sym_settings_section_token1,
    ACTIONS(177), 1,
      aux_sym_variables_section_token1,
    ACTIONS(180), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(183), 1,
      aux_sym_test_cases_section_token1,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(137), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [931] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(188), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [958] = 8,
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
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(137), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [987] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1012] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym_text_chunk,
    ACTIONS(205), 1,
      aux_sym__whitespace_token1,
    ACTIONS(208), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(211), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1064] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(215), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1091] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(221), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1118] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      sym_text_chunk,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(215), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1145] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      sym_text_chunk,
    ACTIONS(232), 1,
      aux_sym__whitespace_token1,
    ACTIONS(235), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(227), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(246), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1197] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      aux_sym__whitespace_token1,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(35), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(211), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1249] = 8,
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
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(137), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1278] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(251), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(147), 1,
      aux_sym_if_statement_repeat1,
    STATE(148), 1,
      sym_block,
    STATE(206), 1,
      sym_else_statement,
    STATE(337), 1,
      sym_elseif_statement,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1310] = 8,
    ACTIONS(76), 1,
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
    STATE(285), 1,
      sym_argument,
    STATE(59), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1338] = 8,
    ACTIONS(76), 1,
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
    STATE(201), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1366] = 8,
    ACTIONS(76), 1,
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
    STATE(215), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1394] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(280), 1,
      sym_argument,
    STATE(68), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1422] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(292), 1,
      sym_argument,
    STATE(68), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1450] = 8,
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
    STATE(371), 1,
      sym_scalar_variable,
    STATE(345), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1478] = 8,
    ACTIONS(76), 1,
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
    STATE(250), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1506] = 8,
    ACTIONS(76), 1,
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
    STATE(200), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1534] = 8,
    ACTIONS(76), 1,
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
    STATE(214), 1,
      sym_argument,
    STATE(56), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1562] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(214), 1,
      sym_argument,
    STATE(68), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1590] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(296), 1,
      anon_sym_SPACE,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(302), 1,
      sym_text_chunk,
    ACTIONS(305), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1615] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
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
  [1632] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1649] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(311), 1,
      anon_sym_SPACE,
    ACTIONS(313), 1,
      sym_text_chunk,
    ACTIONS(315), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1674] = 3,
    ACTIONS(76), 1,
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
  [1691] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(311), 1,
      anon_sym_SPACE,
    ACTIONS(321), 1,
      sym_text_chunk,
    ACTIONS(323), 2,
      sym__separator,
      sym__line_break,
    STATE(54), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__separator,
    ACTIONS(330), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(263), 1,
      sym_arguments,
    ACTIONS(325), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(158), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym__whitespace_token1,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1756] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__separator,
    ACTIONS(337), 1,
      anon_sym_SPACE,
    ACTIONS(339), 1,
      sym_text_chunk,
    STATE(62), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1780] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(341), 1,
      anon_sym_SPACE,
    ACTIONS(343), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SPACE,
    STATE(245), 1,
      sym_test_case_setting_name,
    ACTIONS(345), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [1822] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym__separator,
    ACTIONS(337), 1,
      anon_sym_SPACE,
    ACTIONS(349), 1,
      sym_text_chunk,
    STATE(64), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1846] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(351), 1,
      sym_ellipses,
    ACTIONS(353), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(312), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1872] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__separator,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(359), 1,
      anon_sym_SPACE,
    ACTIONS(362), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(365), 1,
      sym_text_chunk,
    STATE(64), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1896] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__line_break,
    ACTIONS(368), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(371), 1,
      anon_sym_SPACE,
    ACTIONS(374), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(377), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1920] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(384), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(263), 1,
      sym_arguments,
    ACTIONS(380), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1944] = 3,
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
  [1960] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__line_break,
    ACTIONS(341), 1,
      anon_sym_SPACE,
    ACTIONS(391), 1,
      sym_text_chunk,
    STATE(60), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1984] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(363), 1,
      sym_arguments,
    ACTIONS(393), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2008] = 3,
    ACTIONS(76), 1,
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
  [2024] = 3,
    ACTIONS(76), 1,
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
  [2040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SPACE,
    STATE(265), 1,
      sym_keyword_setting_name,
    ACTIONS(405), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2058] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [2074] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__separator,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(409), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(71), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2097] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(413), 1,
      anon_sym_RETURN,
    ACTIONS(415), 1,
      sym_keyword,
    STATE(266), 1,
      sym_inline_statement,
    STATE(204), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(220), 1,
      sym_keyword_setting_name,
    ACTIONS(405), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(213), 1,
      sym_test_case_setting_name,
    ACTIONS(345), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2148] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(313), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(419), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(311), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(251), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(422), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(70), 1,
      sym_keyword_definition_body,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2240] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(76), 1,
      sym_comment,
    STATE(286), 1,
      sym_inline_statement,
    STATE(204), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2261] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(413), 1,
      anon_sym_RETURN,
    ACTIONS(415), 1,
      sym_keyword,
    STATE(173), 1,
      sym_inline_statement,
    STATE(204), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2282] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(424), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(274), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(427), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(231), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2328] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(417), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(291), 1,
      sym_block,
    STATE(99), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2351] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(327), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(356), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2391] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(429), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(433), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(256), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2425] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(436), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2439] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(440), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(341), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(307), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(340), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym__separator,
    STATE(171), 1,
      sym__indentation,
    STATE(174), 1,
      sym_else_statement,
    STATE(257), 1,
      sym_finally_statement,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(396), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2553] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(338), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__whitespace_token1,
    ACTIONS(446), 1,
      sym__separator,
    ACTIONS(449), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(113), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2593] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__separator,
    STATE(156), 1,
      sym__indentation,
    STATE(199), 1,
      sym_else_statement,
    STATE(210), 1,
      sym_finally_statement,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2613] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2627] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym__separator,
    STATE(171), 1,
      sym__indentation,
    STATE(174), 1,
      sym_else_statement,
    STATE(257), 1,
      sym_finally_statement,
    STATE(100), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2681] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(464), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(468), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(333), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__separator,
    ACTIONS(473), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(256), 1,
      sym_arguments,
    STATE(158), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2735] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2749] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2763] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2777] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2791] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(305), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__separator,
    ACTIONS(497), 1,
      aux_sym__whitespace_token1,
    ACTIONS(500), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(113), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2825] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(503), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__separator,
    ACTIONS(510), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(158), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(326), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2879] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(288), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2899] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(325), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(324), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(322), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_arguments_repeat1,
    STATE(321), 1,
      sym_arguments,
    STATE(178), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2979] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2992] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(429), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(513), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
    STATE(196), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__separator,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
    STATE(161), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3039] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3052] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(464), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3065] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3078] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3091] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(305), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3104] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(503), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3117] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3130] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3143] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(440), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3156] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(436), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__separator,
    STATE(155), 1,
      aux_sym_if_statement_repeat1,
    STATE(190), 1,
      sym__indentation,
    STATE(262), 1,
      sym_else_statement,
    STATE(337), 1,
      sym_elseif_statement,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3199] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3212] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(464), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3225] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3238] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3251] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(305), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3264] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3277] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3290] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(436), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3303] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(429), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3316] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym__separator,
    STATE(155), 1,
      aux_sym_if_statement_repeat1,
    STATE(176), 1,
      sym__indentation,
    STATE(237), 1,
      sym_else_statement,
    STATE(337), 1,
      sym_elseif_statement,
  [3335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__separator,
    STATE(136), 1,
      aux_sym_if_statement_repeat1,
    STATE(180), 1,
      sym__indentation,
    STATE(232), 1,
      sym_else_statement,
    STATE(337), 1,
      sym_elseif_statement,
  [3354] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3367] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(503), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3380] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(440), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3393] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(530), 1,
      sym_text_chunk,
    STATE(130), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3410] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(532), 1,
      sym_text_chunk,
    STATE(112), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3427] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(534), 1,
      sym_text_chunk,
    STATE(142), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3444] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym__separator,
    STATE(155), 1,
      aux_sym_if_statement_repeat1,
    STATE(293), 1,
      sym__indentation,
    STATE(337), 1,
      sym_elseif_statement,
  [3460] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_END,
    ACTIONS(541), 1,
      anon_sym_ELSE,
    ACTIONS(543), 1,
      anon_sym_EXCEPT,
    ACTIONS(545), 1,
      anon_sym_FINALLY,
  [3476] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__line_break,
    ACTIONS(551), 1,
      sym__separator,
    STATE(162), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3504] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(169), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(555), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_arguments_repeat1,
    STATE(299), 1,
      sym_arguments_without_continuation,
  [3534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__separator,
    ACTIONS(559), 1,
      sym__line_break,
    STATE(162), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym__separator,
    ACTIONS(564), 1,
      sym__line_break,
    STATE(162), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3562] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(170), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_ELSEIF,
    ACTIONS(571), 1,
      anon_sym_ELSE,
    STATE(255), 1,
      sym_inline_elseif_statement,
    STATE(289), 1,
      sym_inline_else_statement,
  [3592] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(157), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__separator,
    STATE(331), 1,
      sym__indentation,
    STATE(166), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_ELSEIF,
    ACTIONS(571), 1,
      anon_sym_ELSE,
    STATE(255), 1,
      sym_inline_elseif_statement,
    STATE(275), 1,
      sym_inline_else_statement,
  [3636] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(578), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3650] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3664] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(547), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_ELSE,
    ACTIONS(543), 1,
      anon_sym_EXCEPT,
    ACTIONS(545), 1,
      anon_sym_FINALLY,
    ACTIONS(587), 1,
      anon_sym_END,
  [3694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__separator,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(172), 1,
      aux_sym_inline_if_statement_repeat1,
  [3707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__separator,
    ACTIONS(596), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_inline_if_statement_repeat1,
  [3720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__separator,
    STATE(210), 1,
      sym_finally_statement,
    STATE(211), 1,
      sym__indentation,
  [3733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym__separator,
    ACTIONS(603), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(605), 1,
      anon_sym_END,
    ACTIONS(607), 1,
      anon_sym_ELSEIF,
  [3759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__line_break,
    STATE(193), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__line_break,
    ACTIONS(611), 1,
      sym__separator,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(607), 1,
      anon_sym_ELSEIF,
    ACTIONS(614), 1,
      anon_sym_END,
  [3809] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(616), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(620), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(620), 1,
      sym__line_break,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__separator,
    ACTIONS(624), 1,
      sym__line_break,
    STATE(172), 1,
      aux_sym_inline_if_statement_repeat1,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(626), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__line_break,
    ACTIONS(628), 1,
      sym__separator,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__line_break,
    ACTIONS(631), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__line_break,
    ACTIONS(628), 1,
      sym__separator,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(635), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(607), 1,
      anon_sym_ELSEIF,
    ACTIONS(637), 1,
      anon_sym_END,
  [3935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym__line_break,
    ACTIONS(639), 1,
      sym__separator,
    STATE(188), 1,
      aux_sym_arguments_repeat1,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    STATE(185), 1,
      aux_sym_arguments_repeat1,
    STATE(304), 1,
      sym_arguments_without_continuation,
  [3961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym__line_break,
    STATE(193), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_ellipses,
    ACTIONS(647), 1,
      sym__separator,
    STATE(343), 1,
      sym__indentation,
  [3985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_ellipses,
    ACTIONS(649), 1,
      sym__separator,
    STATE(334), 1,
      sym__indentation,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__line_break,
    STATE(193), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [4020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
    STATE(248), 1,
      sym__indentation,
    STATE(257), 1,
      sym_finally_statement,
  [4033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__separator,
    STATE(242), 1,
      sym_finally_statement,
    STATE(243), 1,
      sym__indentation,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__separator,
    ACTIONS(660), 1,
      sym__line_break,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
  [4066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_SPACE,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_SPACE,
  [4086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__separator,
    ACTIONS(676), 1,
      sym__line_break,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(680), 1,
      anon_sym_SPACE,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__separator,
    STATE(320), 1,
      sym__indentation,
  [4116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__separator,
    STATE(354), 1,
      sym__indentation,
  [4126] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_settings_section_token2,
    ACTIONS(688), 1,
      sym__line_break,
  [4136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      anon_sym_SPACE,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__separator,
    STATE(315), 1,
      sym__indentation,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_END,
    ACTIONS(545), 1,
      anon_sym_FINALLY,
  [4166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__separator,
    STATE(212), 1,
      aux_sym_for_statement_repeat1,
  [4176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SPACE,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym__separator,
    ACTIONS(705), 1,
      sym__line_break,
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__line_break,
    ACTIONS(707), 1,
      sym__separator,
  [4206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      anon_sym_SPACE,
  [4216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 1,
      anon_sym_SPACE,
  [4226] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(717), 1,
      aux_sym_settings_section_token2,
    ACTIONS(719), 1,
      sym__line_break,
  [4236] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_SPACE,
    ACTIONS(723), 1,
      sym_variable_name,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SPACE,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 1,
      anon_sym_SPACE,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      anon_sym_SPACE,
  [4276] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SPACE,
    ACTIONS(739), 1,
      sym_variable_name,
  [4286] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_SPACE,
    ACTIONS(743), 1,
      sym_variable_name,
  [4296] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SPACE,
    ACTIONS(747), 1,
      sym_variable_name,
  [4306] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_settings_section_token2,
    ACTIONS(751), 1,
      sym__line_break,
  [4316] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_SPACE,
    ACTIONS(755), 1,
      sym_variable_name,
  [4326] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_settings_section_token2,
    ACTIONS(759), 1,
      sym__line_break,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(763), 1,
      anon_sym_SPACE,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 1,
      anon_sym_SPACE,
  [4356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__separator,
    STATE(330), 1,
      sym__indentation,
  [4366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym__separator,
    STATE(301), 1,
      sym__indentation,
  [4376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 1,
      anon_sym_SPACE,
  [4386] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_SPACE,
    ACTIONS(779), 1,
      sym_variable_name,
  [4396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__separator,
    ACTIONS(783), 1,
      sym__line_break,
  [4406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(787), 1,
      anon_sym_SPACE,
  [4416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym__separator,
    STATE(297), 1,
      sym__indentation,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    ACTIONS(793), 1,
      anon_sym_SPACE,
  [4436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__separator,
    ACTIONS(797), 1,
      sym__line_break,
  [4446] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SPACE,
    ACTIONS(801), 1,
      sym_variable_name,
  [4456] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SPACE,
    ACTIONS(805), 1,
      sym_variable_name,
  [4466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym__separator,
    STATE(273), 1,
      sym__indentation,
  [4476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_FINALLY,
    ACTIONS(809), 1,
      anon_sym_END,
  [4486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(813), 1,
      anon_sym_SPACE,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_SPACE,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
  [4506] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SPACE,
    ACTIONS(821), 1,
      sym_variable_name,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    ACTIONS(825), 1,
      anon_sym_SPACE,
  [4526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_FINALLY,
    ACTIONS(587), 1,
      anon_sym_END,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SPACE,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
  [4546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym__separator,
    ACTIONS(833), 1,
      sym__line_break,
  [4556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__separator,
    STATE(283), 1,
      sym__indentation,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym__separator,
    STATE(212), 1,
      aux_sym_for_statement_repeat1,
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(371), 1,
      sym_scalar_variable,
  [4586] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SPACE,
    ACTIONS(841), 1,
      sym_variable_name,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__line_break,
    ACTIONS(843), 1,
      sym__separator,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym__separator,
    ACTIONS(847), 1,
      sym__line_break,
  [4616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym__separator,
    STATE(336), 1,
      sym__indentation,
  [4626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_SPACE,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
    ACTIONS(857), 1,
      anon_sym_SPACE,
  [4646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    ACTIONS(861), 1,
      anon_sym_SPACE,
  [4656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__separator,
    ACTIONS(865), 1,
      sym__line_break,
  [4666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym__separator,
    STATE(278), 1,
      sym__indentation,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__separator,
    ACTIONS(871), 1,
      sym__line_break,
  [4686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym__line_break,
    ACTIONS(873), 1,
      sym__separator,
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SPACE,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
  [4706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym__separator,
    ACTIONS(881), 1,
      sym__line_break,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
    ACTIONS(885), 1,
      anon_sym_SPACE,
  [4726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    ACTIONS(889), 1,
      anon_sym_SPACE,
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__separator,
    STATE(252), 1,
      aux_sym_for_statement_repeat1,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_SPACE,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
  [4756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_ELSEIF,
    STATE(255), 1,
      sym_inline_elseif_statement,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_END,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym__separator,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__line_break,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__line_break,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_END,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__line_break,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__line_break,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym__line_break,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__line_break,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_END,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__separator,
  [4864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__line_break,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__line_break,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__line_break,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym__line_break,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym__line_break,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__separator,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__line_break,
  [4913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_ELSEIF,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__line_break,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__line_break,
  [4934] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym_variable_name,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_END,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__line_break,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__line_break,
  [4969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_END,
  [4976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__line_break,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__line_break,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__line_break,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__separator,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__separator,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__line_break,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__line_break,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym__line_break,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym__line_break,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__separator,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym__separator,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__separator,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_END,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__line_break,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__separator,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__line_break,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_END,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__line_break,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__line_break,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__separator,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__line_break,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym__line_break,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__line_break,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__line_break,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__line_break,
  [5165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__separator,
  [5172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_END,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_EXCEPT,
  [5186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__separator,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__line_break,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__line_break,
  [5214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_END,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__separator,
  [5228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym__line_break,
  [5235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__line_break,
  [5242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__line_break,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym__line_break,
  [5256] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_variable_name,
  [5263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym_ellipses,
  [5270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
  [5277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym__line_break,
  [5284] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_variable_name,
  [5291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym__separator,
  [5298] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym_variable_name,
  [5305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__line_break,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__line_break,
  [5319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym__line_break,
  [5326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym__line_break,
  [5333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
  [5340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_END,
  [5347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [5354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym__line_break,
  [5361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
  [5368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
  [5382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
  [5396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__line_break,
  [5403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym__line_break,
  [5410] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym_variable_name,
  [5417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_RBRACK,
  [5424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym__separator,
  [5431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym__line_break,
  [5438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
  [5445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym__line_break,
  [5452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
  [5459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym__separator,
  [5466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym__line_break,
  [5480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [5487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
  [5494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
  [5501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_RBRACE,
  [5508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__line_break,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__line_break,
  [5522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
  [5529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
  [5536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
  [5543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
  [5550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_RBRACK,
  [5557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
  [5564] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1087), 1,
      sym_variable_name,
  [5571] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1089), 1,
      sym_variable_name,
  [5578] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym_variable_name,
  [5585] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym_variable_name,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_RBRACE,
  [5599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
  [5606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_RBRACE,
  [5613] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym_variable_name,
  [5620] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1103), 1,
      sym_variable_name,
  [5627] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym_variable_name,
  [5634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym__line_break,
  [5641] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1109), 1,
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
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 482,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 572,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 761,
  [SMALL_STATE(22)] = 786,
  [SMALL_STATE(23)] = 815,
  [SMALL_STATE(24)] = 842,
  [SMALL_STATE(25)] = 875,
  [SMALL_STATE(26)] = 902,
  [SMALL_STATE(27)] = 931,
  [SMALL_STATE(28)] = 958,
  [SMALL_STATE(29)] = 987,
  [SMALL_STATE(30)] = 1012,
  [SMALL_STATE(31)] = 1039,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1091,
  [SMALL_STATE(34)] = 1118,
  [SMALL_STATE(35)] = 1145,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1197,
  [SMALL_STATE(38)] = 1224,
  [SMALL_STATE(39)] = 1249,
  [SMALL_STATE(40)] = 1278,
  [SMALL_STATE(41)] = 1310,
  [SMALL_STATE(42)] = 1338,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1422,
  [SMALL_STATE(46)] = 1450,
  [SMALL_STATE(47)] = 1478,
  [SMALL_STATE(48)] = 1506,
  [SMALL_STATE(49)] = 1534,
  [SMALL_STATE(50)] = 1562,
  [SMALL_STATE(51)] = 1590,
  [SMALL_STATE(52)] = 1615,
  [SMALL_STATE(53)] = 1632,
  [SMALL_STATE(54)] = 1649,
  [SMALL_STATE(55)] = 1674,
  [SMALL_STATE(56)] = 1691,
  [SMALL_STATE(57)] = 1716,
  [SMALL_STATE(58)] = 1740,
  [SMALL_STATE(59)] = 1756,
  [SMALL_STATE(60)] = 1780,
  [SMALL_STATE(61)] = 1804,
  [SMALL_STATE(62)] = 1822,
  [SMALL_STATE(63)] = 1846,
  [SMALL_STATE(64)] = 1872,
  [SMALL_STATE(65)] = 1896,
  [SMALL_STATE(66)] = 1920,
  [SMALL_STATE(67)] = 1944,
  [SMALL_STATE(68)] = 1960,
  [SMALL_STATE(69)] = 1984,
  [SMALL_STATE(70)] = 2008,
  [SMALL_STATE(71)] = 2024,
  [SMALL_STATE(72)] = 2040,
  [SMALL_STATE(73)] = 2058,
  [SMALL_STATE(74)] = 2074,
  [SMALL_STATE(75)] = 2097,
  [SMALL_STATE(76)] = 2118,
  [SMALL_STATE(77)] = 2133,
  [SMALL_STATE(78)] = 2148,
  [SMALL_STATE(79)] = 2171,
  [SMALL_STATE(80)] = 2194,
  [SMALL_STATE(81)] = 2217,
  [SMALL_STATE(82)] = 2240,
  [SMALL_STATE(83)] = 2261,
  [SMALL_STATE(84)] = 2282,
  [SMALL_STATE(85)] = 2305,
  [SMALL_STATE(86)] = 2328,
  [SMALL_STATE(87)] = 2351,
  [SMALL_STATE(88)] = 2371,
  [SMALL_STATE(89)] = 2391,
  [SMALL_STATE(90)] = 2405,
  [SMALL_STATE(91)] = 2425,
  [SMALL_STATE(92)] = 2439,
  [SMALL_STATE(93)] = 2453,
  [SMALL_STATE(94)] = 2473,
  [SMALL_STATE(95)] = 2493,
  [SMALL_STATE(96)] = 2513,
  [SMALL_STATE(97)] = 2533,
  [SMALL_STATE(98)] = 2553,
  [SMALL_STATE(99)] = 2573,
  [SMALL_STATE(100)] = 2593,
  [SMALL_STATE(101)] = 2613,
  [SMALL_STATE(102)] = 2627,
  [SMALL_STATE(103)] = 2641,
  [SMALL_STATE(104)] = 2661,
  [SMALL_STATE(105)] = 2681,
  [SMALL_STATE(106)] = 2695,
  [SMALL_STATE(107)] = 2715,
  [SMALL_STATE(108)] = 2735,
  [SMALL_STATE(109)] = 2749,
  [SMALL_STATE(110)] = 2763,
  [SMALL_STATE(111)] = 2777,
  [SMALL_STATE(112)] = 2791,
  [SMALL_STATE(113)] = 2805,
  [SMALL_STATE(114)] = 2825,
  [SMALL_STATE(115)] = 2839,
  [SMALL_STATE(116)] = 2859,
  [SMALL_STATE(117)] = 2879,
  [SMALL_STATE(118)] = 2899,
  [SMALL_STATE(119)] = 2919,
  [SMALL_STATE(120)] = 2939,
  [SMALL_STATE(121)] = 2959,
  [SMALL_STATE(122)] = 2979,
  [SMALL_STATE(123)] = 2992,
  [SMALL_STATE(124)] = 3005,
  [SMALL_STATE(125)] = 3022,
  [SMALL_STATE(126)] = 3039,
  [SMALL_STATE(127)] = 3052,
  [SMALL_STATE(128)] = 3065,
  [SMALL_STATE(129)] = 3078,
  [SMALL_STATE(130)] = 3091,
  [SMALL_STATE(131)] = 3104,
  [SMALL_STATE(132)] = 3117,
  [SMALL_STATE(133)] = 3130,
  [SMALL_STATE(134)] = 3143,
  [SMALL_STATE(135)] = 3156,
  [SMALL_STATE(136)] = 3169,
  [SMALL_STATE(137)] = 3188,
  [SMALL_STATE(138)] = 3199,
  [SMALL_STATE(139)] = 3212,
  [SMALL_STATE(140)] = 3225,
  [SMALL_STATE(141)] = 3238,
  [SMALL_STATE(142)] = 3251,
  [SMALL_STATE(143)] = 3264,
  [SMALL_STATE(144)] = 3277,
  [SMALL_STATE(145)] = 3290,
  [SMALL_STATE(146)] = 3303,
  [SMALL_STATE(147)] = 3316,
  [SMALL_STATE(148)] = 3335,
  [SMALL_STATE(149)] = 3354,
  [SMALL_STATE(150)] = 3367,
  [SMALL_STATE(151)] = 3380,
  [SMALL_STATE(152)] = 3393,
  [SMALL_STATE(153)] = 3410,
  [SMALL_STATE(154)] = 3427,
  [SMALL_STATE(155)] = 3444,
  [SMALL_STATE(156)] = 3460,
  [SMALL_STATE(157)] = 3476,
  [SMALL_STATE(158)] = 3490,
  [SMALL_STATE(159)] = 3504,
  [SMALL_STATE(160)] = 3518,
  [SMALL_STATE(161)] = 3534,
  [SMALL_STATE(162)] = 3548,
  [SMALL_STATE(163)] = 3562,
  [SMALL_STATE(164)] = 3576,
  [SMALL_STATE(165)] = 3592,
  [SMALL_STATE(166)] = 3606,
  [SMALL_STATE(167)] = 3620,
  [SMALL_STATE(168)] = 3636,
  [SMALL_STATE(169)] = 3650,
  [SMALL_STATE(170)] = 3664,
  [SMALL_STATE(171)] = 3678,
  [SMALL_STATE(172)] = 3694,
  [SMALL_STATE(173)] = 3707,
  [SMALL_STATE(174)] = 3720,
  [SMALL_STATE(175)] = 3733,
  [SMALL_STATE(176)] = 3746,
  [SMALL_STATE(177)] = 3759,
  [SMALL_STATE(178)] = 3772,
  [SMALL_STATE(179)] = 3783,
  [SMALL_STATE(180)] = 3796,
  [SMALL_STATE(181)] = 3809,
  [SMALL_STATE(182)] = 3820,
  [SMALL_STATE(183)] = 3833,
  [SMALL_STATE(184)] = 3846,
  [SMALL_STATE(185)] = 3859,
  [SMALL_STATE(186)] = 3872,
  [SMALL_STATE(187)] = 3885,
  [SMALL_STATE(188)] = 3896,
  [SMALL_STATE(189)] = 3909,
  [SMALL_STATE(190)] = 3922,
  [SMALL_STATE(191)] = 3935,
  [SMALL_STATE(192)] = 3948,
  [SMALL_STATE(193)] = 3961,
  [SMALL_STATE(194)] = 3972,
  [SMALL_STATE(195)] = 3985,
  [SMALL_STATE(196)] = 3998,
  [SMALL_STATE(197)] = 4009,
  [SMALL_STATE(198)] = 4020,
  [SMALL_STATE(199)] = 4033,
  [SMALL_STATE(200)] = 4046,
  [SMALL_STATE(201)] = 4056,
  [SMALL_STATE(202)] = 4066,
  [SMALL_STATE(203)] = 4076,
  [SMALL_STATE(204)] = 4086,
  [SMALL_STATE(205)] = 4096,
  [SMALL_STATE(206)] = 4106,
  [SMALL_STATE(207)] = 4116,
  [SMALL_STATE(208)] = 4126,
  [SMALL_STATE(209)] = 4136,
  [SMALL_STATE(210)] = 4146,
  [SMALL_STATE(211)] = 4156,
  [SMALL_STATE(212)] = 4166,
  [SMALL_STATE(213)] = 4176,
  [SMALL_STATE(214)] = 4186,
  [SMALL_STATE(215)] = 4196,
  [SMALL_STATE(216)] = 4206,
  [SMALL_STATE(217)] = 4216,
  [SMALL_STATE(218)] = 4226,
  [SMALL_STATE(219)] = 4236,
  [SMALL_STATE(220)] = 4246,
  [SMALL_STATE(221)] = 4256,
  [SMALL_STATE(222)] = 4266,
  [SMALL_STATE(223)] = 4276,
  [SMALL_STATE(224)] = 4286,
  [SMALL_STATE(225)] = 4296,
  [SMALL_STATE(226)] = 4306,
  [SMALL_STATE(227)] = 4316,
  [SMALL_STATE(228)] = 4326,
  [SMALL_STATE(229)] = 4336,
  [SMALL_STATE(230)] = 4346,
  [SMALL_STATE(231)] = 4356,
  [SMALL_STATE(232)] = 4366,
  [SMALL_STATE(233)] = 4376,
  [SMALL_STATE(234)] = 4386,
  [SMALL_STATE(235)] = 4396,
  [SMALL_STATE(236)] = 4406,
  [SMALL_STATE(237)] = 4416,
  [SMALL_STATE(238)] = 4426,
  [SMALL_STATE(239)] = 4436,
  [SMALL_STATE(240)] = 4446,
  [SMALL_STATE(241)] = 4456,
  [SMALL_STATE(242)] = 4466,
  [SMALL_STATE(243)] = 4476,
  [SMALL_STATE(244)] = 4486,
  [SMALL_STATE(245)] = 4496,
  [SMALL_STATE(246)] = 4506,
  [SMALL_STATE(247)] = 4516,
  [SMALL_STATE(248)] = 4526,
  [SMALL_STATE(249)] = 4536,
  [SMALL_STATE(250)] = 4546,
  [SMALL_STATE(251)] = 4556,
  [SMALL_STATE(252)] = 4566,
  [SMALL_STATE(253)] = 4576,
  [SMALL_STATE(254)] = 4586,
  [SMALL_STATE(255)] = 4596,
  [SMALL_STATE(256)] = 4606,
  [SMALL_STATE(257)] = 4616,
  [SMALL_STATE(258)] = 4626,
  [SMALL_STATE(259)] = 4636,
  [SMALL_STATE(260)] = 4646,
  [SMALL_STATE(261)] = 4656,
  [SMALL_STATE(262)] = 4666,
  [SMALL_STATE(263)] = 4676,
  [SMALL_STATE(264)] = 4686,
  [SMALL_STATE(265)] = 4696,
  [SMALL_STATE(266)] = 4706,
  [SMALL_STATE(267)] = 4716,
  [SMALL_STATE(268)] = 4726,
  [SMALL_STATE(269)] = 4736,
  [SMALL_STATE(270)] = 4746,
  [SMALL_STATE(271)] = 4756,
  [SMALL_STATE(272)] = 4766,
  [SMALL_STATE(273)] = 4773,
  [SMALL_STATE(274)] = 4780,
  [SMALL_STATE(275)] = 4787,
  [SMALL_STATE(276)] = 4794,
  [SMALL_STATE(277)] = 4801,
  [SMALL_STATE(278)] = 4808,
  [SMALL_STATE(279)] = 4815,
  [SMALL_STATE(280)] = 4822,
  [SMALL_STATE(281)] = 4829,
  [SMALL_STATE(282)] = 4836,
  [SMALL_STATE(283)] = 4843,
  [SMALL_STATE(284)] = 4850,
  [SMALL_STATE(285)] = 4857,
  [SMALL_STATE(286)] = 4864,
  [SMALL_STATE(287)] = 4871,
  [SMALL_STATE(288)] = 4878,
  [SMALL_STATE(289)] = 4885,
  [SMALL_STATE(290)] = 4892,
  [SMALL_STATE(291)] = 4899,
  [SMALL_STATE(292)] = 4906,
  [SMALL_STATE(293)] = 4913,
  [SMALL_STATE(294)] = 4920,
  [SMALL_STATE(295)] = 4927,
  [SMALL_STATE(296)] = 4934,
  [SMALL_STATE(297)] = 4941,
  [SMALL_STATE(298)] = 4948,
  [SMALL_STATE(299)] = 4955,
  [SMALL_STATE(300)] = 4962,
  [SMALL_STATE(301)] = 4969,
  [SMALL_STATE(302)] = 4976,
  [SMALL_STATE(303)] = 4983,
  [SMALL_STATE(304)] = 4990,
  [SMALL_STATE(305)] = 4997,
  [SMALL_STATE(306)] = 5004,
  [SMALL_STATE(307)] = 5011,
  [SMALL_STATE(308)] = 5018,
  [SMALL_STATE(309)] = 5025,
  [SMALL_STATE(310)] = 5032,
  [SMALL_STATE(311)] = 5039,
  [SMALL_STATE(312)] = 5046,
  [SMALL_STATE(313)] = 5053,
  [SMALL_STATE(314)] = 5060,
  [SMALL_STATE(315)] = 5067,
  [SMALL_STATE(316)] = 5074,
  [SMALL_STATE(317)] = 5081,
  [SMALL_STATE(318)] = 5088,
  [SMALL_STATE(319)] = 5095,
  [SMALL_STATE(320)] = 5102,
  [SMALL_STATE(321)] = 5109,
  [SMALL_STATE(322)] = 5116,
  [SMALL_STATE(323)] = 5123,
  [SMALL_STATE(324)] = 5130,
  [SMALL_STATE(325)] = 5137,
  [SMALL_STATE(326)] = 5144,
  [SMALL_STATE(327)] = 5151,
  [SMALL_STATE(328)] = 5158,
  [SMALL_STATE(329)] = 5165,
  [SMALL_STATE(330)] = 5172,
  [SMALL_STATE(331)] = 5179,
  [SMALL_STATE(332)] = 5186,
  [SMALL_STATE(333)] = 5193,
  [SMALL_STATE(334)] = 5200,
  [SMALL_STATE(335)] = 5207,
  [SMALL_STATE(336)] = 5214,
  [SMALL_STATE(337)] = 5221,
  [SMALL_STATE(338)] = 5228,
  [SMALL_STATE(339)] = 5235,
  [SMALL_STATE(340)] = 5242,
  [SMALL_STATE(341)] = 5249,
  [SMALL_STATE(342)] = 5256,
  [SMALL_STATE(343)] = 5263,
  [SMALL_STATE(344)] = 5270,
  [SMALL_STATE(345)] = 5277,
  [SMALL_STATE(346)] = 5284,
  [SMALL_STATE(347)] = 5291,
  [SMALL_STATE(348)] = 5298,
  [SMALL_STATE(349)] = 5305,
  [SMALL_STATE(350)] = 5312,
  [SMALL_STATE(351)] = 5319,
  [SMALL_STATE(352)] = 5326,
  [SMALL_STATE(353)] = 5333,
  [SMALL_STATE(354)] = 5340,
  [SMALL_STATE(355)] = 5347,
  [SMALL_STATE(356)] = 5354,
  [SMALL_STATE(357)] = 5361,
  [SMALL_STATE(358)] = 5368,
  [SMALL_STATE(359)] = 5375,
  [SMALL_STATE(360)] = 5382,
  [SMALL_STATE(361)] = 5389,
  [SMALL_STATE(362)] = 5396,
  [SMALL_STATE(363)] = 5403,
  [SMALL_STATE(364)] = 5410,
  [SMALL_STATE(365)] = 5417,
  [SMALL_STATE(366)] = 5424,
  [SMALL_STATE(367)] = 5431,
  [SMALL_STATE(368)] = 5438,
  [SMALL_STATE(369)] = 5445,
  [SMALL_STATE(370)] = 5452,
  [SMALL_STATE(371)] = 5459,
  [SMALL_STATE(372)] = 5466,
  [SMALL_STATE(373)] = 5473,
  [SMALL_STATE(374)] = 5480,
  [SMALL_STATE(375)] = 5487,
  [SMALL_STATE(376)] = 5494,
  [SMALL_STATE(377)] = 5501,
  [SMALL_STATE(378)] = 5508,
  [SMALL_STATE(379)] = 5515,
  [SMALL_STATE(380)] = 5522,
  [SMALL_STATE(381)] = 5529,
  [SMALL_STATE(382)] = 5536,
  [SMALL_STATE(383)] = 5543,
  [SMALL_STATE(384)] = 5550,
  [SMALL_STATE(385)] = 5557,
  [SMALL_STATE(386)] = 5564,
  [SMALL_STATE(387)] = 5571,
  [SMALL_STATE(388)] = 5578,
  [SMALL_STATE(389)] = 5585,
  [SMALL_STATE(390)] = 5592,
  [SMALL_STATE(391)] = 5599,
  [SMALL_STATE(392)] = 5606,
  [SMALL_STATE(393)] = 5613,
  [SMALL_STATE(394)] = 5620,
  [SMALL_STATE(395)] = 5627,
  [SMALL_STATE(396)] = 5634,
  [SMALL_STATE(397)] = 5641,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(261),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(298),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(11),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(362),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(12),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(362),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(294),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(339),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(30),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(160),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(339),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(35),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(296),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(298),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(36),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(246),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(153),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(163),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(51),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(43),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(194),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(14),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(254),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(154),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(165),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(64),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(219),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(152),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(159),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(65),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(195),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(195),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(195),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1), SHIFT(43),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1), SHIFT(194),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, .production_id = 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(378),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(43),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(194),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(195),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(43),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(194),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 10), SHIFT_REPEAT(293),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(194),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(194),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(331),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2), SHIFT_REPEAT(181),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(271),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(43),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(43),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(43),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(43),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(195),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(195),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(253),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 16),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 17),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 18),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 19),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 20),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 21),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 15),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 14),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 13),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, .production_id = 6),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 12),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 11),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 9),
  [987] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, .production_id = 6),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 5),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, .production_id = 6),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 8),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 7),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 5),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, .production_id = 6),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, .production_id = 5),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, .production_id = 5),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
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
