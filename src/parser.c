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
#define STATE_COUNT 414
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 4
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 65

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
  aux_sym_arguments_without_continuation_repeat1 = 129,
  aux_sym_argument_repeat1 = 130,
  aux_sym_inline_python_expression_repeat1 = 131,
  alias_sym_name = 132,
  alias_sym_python_expression = 133,
  alias_sym_return_value = 134,
  alias_sym_variable_list = 135,
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
  [aux_sym_arguments_without_continuation_repeat1] = "arguments_without_continuation_repeat1",
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
  [aux_sym_arguments_without_continuation_repeat1] = aux_sym_arguments_without_continuation_repeat1,
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
  [aux_sym_arguments_without_continuation_repeat1] = {
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
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_continuation = 6,
  field_keyword = 7,
  field_keywords = 8,
  field_left = 9,
  field_name = 10,
  field_right = 11,
  field_section = 12,
  field_setting = 13,
  field_settings = 14,
  field_statement = 15,
  field_test_case = 16,
  field_test_cases = 17,
  field_value = 18,
  field_values = 19,
  field_variables = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_continuation] = "continuation",
  [field_keyword] = "keyword",
  [field_keywords] = "keywords",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_section] = "section",
  [field_setting] = "setting",
  [field_settings] = "settings",
  [field_statement] = "statement",
  [field_test_case] = "test_case",
  [field_test_cases] = "test_cases",
  [field_value] = "value",
  [field_values] = "values",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
  [16] = {.index = 16, .length = 1},
  [17] = {.index = 17, .length = 1},
  [18] = {.index = 18, .length = 1},
  [19] = {.index = 19, .length = 2},
  [20] = {.index = 21, .length = 1},
  [21] = {.index = 22, .length = 2},
  [22] = {.index = 24, .length = 1},
  [23] = {.index = 25, .length = 2},
  [24] = {.index = 27, .length = 1},
  [25] = {.index = 28, .length = 2},
  [26] = {.index = 30, .length = 2},
  [27] = {.index = 32, .length = 2},
  [28] = {.index = 34, .length = 2},
  [29] = {.index = 36, .length = 2},
  [30] = {.index = 38, .length = 2},
  [31] = {.index = 40, .length = 2},
  [32] = {.index = 42, .length = 1},
  [33] = {.index = 43, .length = 4},
  [35] = {.index = 47, .length = 1},
  [36] = {.index = 48, .length = 2},
  [37] = {.index = 50, .length = 2},
  [38] = {.index = 52, .length = 1},
  [39] = {.index = 53, .length = 1},
  [40] = {.index = 54, .length = 2},
  [41] = {.index = 56, .length = 1},
  [42] = {.index = 57, .length = 1},
  [43] = {.index = 58, .length = 2},
  [44] = {.index = 60, .length = 2},
  [45] = {.index = 62, .length = 1},
  [46] = {.index = 63, .length = 1},
  [47] = {.index = 64, .length = 2},
  [48] = {.index = 66, .length = 3},
  [49] = {.index = 69, .length = 1},
  [50] = {.index = 70, .length = 2},
  [51] = {.index = 72, .length = 1},
  [52] = {.index = 73, .length = 2},
  [53] = {.index = 75, .length = 1},
  [54] = {.index = 76, .length = 3},
  [55] = {.index = 79, .length = 2},
  [56] = {.index = 81, .length = 2},
  [57] = {.index = 83, .length = 2},
  [58] = {.index = 85, .length = 4},
  [59] = {.index = 89, .length = 3},
  [60] = {.index = 92, .length = 3},
  [61] = {.index = 95, .length = 3},
  [62] = {.index = 98, .length = 3},
  [63] = {.index = 101, .length = 4},
  [64] = {.index = 105, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_section, 0},
  [1] =
    {field_settings, 0},
  [2] =
    {field_variables, 0},
  [3] =
    {field_keywords, 0},
  [4] =
    {field_test_cases, 0},
  [5] =
    {field_section, 0, .inherited = true},
  [6] =
    {field_section, 1, .inherited = true},
  [7] =
    {field_section, 0, .inherited = true},
    {field_section, 1, .inherited = true},
  [9] =
    {field_setting, 0},
  [10] =
    {field_setting, 2, .inherited = true},
  [11] =
    {field_keyword, 0},
  [12] =
    {field_keyword, 2, .inherited = true},
  [13] =
    {field_test_case, 0},
  [14] =
    {field_test_case, 2, .inherited = true},
  [15] =
    {field_setting, 3, .inherited = true},
  [16] =
    {field_continuation, 0},
  [17] =
    {field_value, 0, .inherited = true},
  [18] =
    {field_continuation, 0, .inherited = true},
  [19] =
    {field_setting, 0, .inherited = true},
    {field_setting, 1, .inherited = true},
  [21] =
    {field_keyword, 3, .inherited = true},
  [22] =
    {field_keyword, 0, .inherited = true},
    {field_keyword, 1, .inherited = true},
  [24] =
    {field_test_case, 3, .inherited = true},
  [25] =
    {field_test_case, 0, .inherited = true},
    {field_test_case, 1, .inherited = true},
  [27] =
    {field_value, 1},
  [28] =
    {field_name, 0},
    {field_values, 1},
  [30] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_continuation, 1, .inherited = true},
    {field_value, 0, .inherited = true},
  [34] =
    {field_continuation, 0, .inherited = true},
    {field_continuation, 1, .inherited = true},
  [36] =
    {field_body, 2},
    {field_name, 0},
  [38] =
    {field_setting, 0, .inherited = true},
    {field_statement, 0, .inherited = true},
  [40] =
    {field_arguments, 1},
    {field_name, 0},
  [42] =
    {field_value, 2, .inherited = true},
  [43] =
    {field_setting, 0, .inherited = true},
    {field_setting, 1, .inherited = true},
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
  [47] =
    {field_value, 3, .inherited = true},
  [48] =
    {field_name, 1},
    {field_values, 3},
  [50] =
    {field_keyword, 0},
    {field_values, 1},
  [52] =
    {field_setting, 1},
  [53] =
    {field_statement, 1},
  [54] =
    {field_name, 1},
    {field_values, 4},
  [56] =
    {field_name, 1},
  [57] =
    {field_value, 2},
  [58] =
    {field_name, 2},
    {field_values, 4},
  [60] =
    {field_condition, 2},
    {field_statement, 4},
  [62] =
    {field_alternative, 0},
  [63] =
    {field_condition, 1},
  [64] =
    {field_name, 2},
    {field_values, 5},
  [66] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_statement, 4},
  [69] =
    {field_condition, 2},
  [70] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [72] =
    {field_consequence, 3},
  [73] =
    {field_body, 3},
    {field_condition, 1},
  [75] =
    {field_alternative, 1},
  [76] =
    {field_alternative, 6},
    {field_condition, 2},
    {field_statement, 4},
  [79] =
    {field_alternative, 4},
    {field_condition, 2},
  [81] =
    {field_condition, 2},
    {field_consequence, 4},
  [83] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [85] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 7},
    {field_condition, 2},
    {field_statement, 4},
  [89] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [92] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [95] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [98] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [101] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [105] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [29] = {
    [0] = alias_sym_name,
  },
  [31] = {
    [0] = alias_sym_name,
  },
  [34] = {
    [1] = alias_sym_python_expression,
  },
  [42] = {
    [2] = alias_sym_return_value,
  },
  [62] = {
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
  [50] = 50,
  [51] = 51,
  [52] = 42,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 7,
  [61] = 61,
  [62] = 62,
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
  [73] = 53,
  [74] = 57,
  [75] = 7,
  [76] = 61,
  [77] = 58,
  [78] = 57,
  [79] = 58,
  [80] = 53,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 95,
  [126] = 113,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 129,
  [140] = 127,
  [141] = 96,
  [142] = 97,
  [143] = 98,
  [144] = 99,
  [145] = 102,
  [146] = 103,
  [147] = 104,
  [148] = 128,
  [149] = 111,
  [150] = 112,
  [151] = 127,
  [152] = 130,
  [153] = 97,
  [154] = 98,
  [155] = 99,
  [156] = 100,
  [157] = 103,
  [158] = 104,
  [159] = 111,
  [160] = 112,
  [161] = 96,
  [162] = 102,
  [163] = 128,
  [164] = 130,
  [165] = 100,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 166,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 171,
  [179] = 179,
  [180] = 180,
  [181] = 166,
  [182] = 171,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 186,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 179,
  [197] = 7,
  [198] = 190,
  [199] = 199,
  [200] = 200,
  [201] = 192,
  [202] = 180,
  [203] = 203,
  [204] = 204,
  [205] = 177,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 184,
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
  [224] = 212,
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
  [252] = 243,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 242,
  [263] = 245,
  [264] = 250,
  [265] = 223,
  [266] = 212,
  [267] = 237,
  [268] = 244,
  [269] = 269,
  [270] = 242,
  [271] = 245,
  [272] = 250,
  [273] = 273,
  [274] = 212,
  [275] = 237,
  [276] = 244,
  [277] = 242,
  [278] = 278,
  [279] = 243,
  [280] = 246,
  [281] = 247,
  [282] = 243,
  [283] = 246,
  [284] = 247,
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
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 96,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 102,
  [345] = 345,
  [346] = 346,
  [347] = 128,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 351,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 357,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 312,
  [371] = 371,
  [372] = 322,
  [373] = 339,
  [374] = 363,
  [375] = 310,
  [376] = 317,
  [377] = 351,
  [378] = 378,
  [379] = 379,
  [380] = 368,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 368,
  [386] = 386,
  [387] = 312,
  [388] = 388,
  [389] = 322,
  [390] = 363,
  [391] = 310,
  [392] = 317,
  [393] = 351,
  [394] = 394,
  [395] = 395,
  [396] = 368,
  [397] = 363,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 305,
  [402] = 311,
  [403] = 323,
  [404] = 286,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 305,
  [409] = 311,
  [410] = 323,
  [411] = 411,
  [412] = 305,
  [413] = 413,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\t', 586,
        '\n', 590,
        '\r', 15,
        ' ', 379,
        '#', 584,
        '$', 119,
        '&', 121,
        '*', 41,
        '.', 58,
        '=', 372,
        '@', 123,
        'B', 103,
        'C', 100,
        'E', 88,
        'F', 83,
        'I', 76,
        'R', 65,
        'T', 104,
        'W', 79,
        '[', 377,
        ']', 384,
        'f', 237,
        'r', 171,
        't', 131,
        '}', 371,
        'A', 255,
        'a', 255,
        'D', 172,
        'd', 172,
        'L', 208,
        'l', 208,
        'M', 173,
        'm', 173,
        'S', 181,
        's', 181,
        'V', 136,
        'v', 136,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(592);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 27,
        ' ', 382,
        '#', 584,
        ']', 384,
        '}', 370,
        'A', 255,
        'a', 255,
        'D', 236,
        'd', 236,
        'R', 190,
        'r', 190,
        'S', 180,
        's', 180,
        'T', 138,
        't', 138,
      );
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(584);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 585,
        '\n', 589,
        '\r', 14,
        ' ', 378,
        '#', 581,
        '$', 120,
        '&', 122,
        '@', 124,
        '{', 126,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\t', 11,
        '\n', 589,
        '\r', 14,
        ' ', 381,
        '#', 581,
        '$', 120,
        '{', 126,
        '&', 332,
        '@', 332,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 8:
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
    case 9:
      if (lookahead == '\t') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '.') ADVANCE(58);
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
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(526);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 215,
        'K', 174,
        'k', 174,
        'S', 188,
        's', 188,
        'T', 182,
        't', 182,
        'V', 156,
        'v', 156,
      );
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(307);
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
      if (lookahead == ' ') ADVANCE(281);
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
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        '.', 398,
        'B', 432,
        'C', 427,
        'F', 428,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '[', 377,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(444);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        'B', 432,
        'C', 427,
        'E', 417,
        'F', 414,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(444);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        'B', 432,
        'C', 427,
        'E', 421,
        'F', 428,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(444);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        'B', 432,
        'C', 427,
        'E', 422,
        'F', 428,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(444);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '{') ADVANCE(444);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
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
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
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
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
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
      if (lookahead == 'e') ADVANCE(276);
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
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(227);
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
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
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
      if (lookahead == 'u') ADVANCE(257);
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
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(475);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(475);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(474);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(474);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(526);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        '{', 499,
        'K', 541,
        'k', 541,
        'S', 542,
        's', 542,
        'T', 543,
        't', 543,
        'V', 536,
        'v', 536,
        '$', 333,
        '&', 333,
        '@', 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(566);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 159:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 215:
      ADVANCE_MAP(
        'K', 174,
        'k', 174,
        'S', 188,
        's', 188,
        'T', 182,
        't', 182,
        'V', 156,
        'v', 156,
      );
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 223:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 251:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
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
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
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
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
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
          lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
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
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
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
          lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 326:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 327:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 328:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 330:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(526);
      END_STATE();
    case 333:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(566);
      END_STATE();
    case 334:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\t', 585,
        '\n', 589,
        '\r', 14,
        ' ', 591,
        '#', 581,
        '*', 490,
        '{', 126,
        0x0b, 14,
        '\f', 14,
        '$', 332,
        '&', 332,
        '@', 332,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 335:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\n', 590,
        '\r', 15,
        '#', 584,
        '$', 125,
        '*', 41,
        '\t', 594,
        ' ', 594,
        'D', 172,
        'd', 172,
        'F', 237,
        'f', 237,
        'L', 208,
        'l', 208,
        'M', 173,
        'm', 173,
        'R', 189,
        'r', 189,
        'S', 310,
        's', 310,
        'T', 145,
        't', 145,
        'V', 136,
        'v', 136,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 336:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\n', 589,
        '\r', 14,
        '#', 581,
        '*', 490,
        '{', 126,
        '\t', 593,
        ' ', 593,
        0x0b, 14,
        '\f', 14,
        '$', 332,
        '&', 332,
        '@', 332,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 337:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '#', 584,
        '*', 41,
        'E', 92,
        'F', 82,
        '}', 370,
        '\t', 339,
        ' ', 339,
        'A', 255,
        'a', 255,
        'D', 236,
        'd', 236,
        'R', 190,
        'r', 190,
        'T', 137,
        't', 137,
      );
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
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(590);
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
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
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
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
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
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
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
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'C') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'D') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'H') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == 'O') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'K') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(402);
      if (lookahead == 'X') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(435);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'O') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'O') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'P') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'U') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'U') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'Y') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'Y') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '{') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
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
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
          lookahead != '\t' &&
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
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(581);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(581);
      if (lookahead != 0) ADVANCE(485);
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
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 128,
        'K', 504,
        'k', 504,
        'S', 505,
        's', 505,
        'T', 506,
        't', 506,
        'V', 500,
        'v', 500,
        '$', 332,
        '&', 332,
        '@', 332,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '{') ADVANCE(584);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '{') ADVANCE(584);
      if (lookahead != 0) ADVANCE(489);
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
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
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
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(526);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(594);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(594);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
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
  [9] = {.lex_state = 335},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 334},
  [20] = {.lex_state = 334},
  [21] = {.lex_state = 336},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 336},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 336},
  [26] = {.lex_state = 336},
  [27] = {.lex_state = 336},
  [28] = {.lex_state = 335},
  [29] = {.lex_state = 336},
  [30] = {.lex_state = 335},
  [31] = {.lex_state = 335},
  [32] = {.lex_state = 336},
  [33] = {.lex_state = 336},
  [34] = {.lex_state = 336},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 336},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 335},
  [40] = {.lex_state = 335},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 334},
  [55] = {.lex_state = 334},
  [56] = {.lex_state = 334},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 334},
  [60] = {.lex_state = 334},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 335},
  [63] = {.lex_state = 336},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 336},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 336},
  [70] = {.lex_state = 335},
  [71] = {.lex_state = 336},
  [72] = {.lex_state = 336},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 336},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 337},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 337},
  [169] = {.lex_state = 337},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 34},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 34},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 34},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
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
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 35},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 35},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 337},
  [311] = {.lex_state = 35},
  [312] = {.lex_state = 337},
  [313] = {.lex_state = 35},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 337},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 337},
  [323] = {.lex_state = 35},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 337},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 337},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 9},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 337},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 337},
  [369] = {.lex_state = 9},
  [370] = {.lex_state = 337},
  [371] = {.lex_state = 9},
  [372] = {.lex_state = 337},
  [373] = {.lex_state = 337},
  [374] = {.lex_state = 337},
  [375] = {.lex_state = 337},
  [376] = {.lex_state = 337},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 337},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 337},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 337},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 337},
  [390] = {.lex_state = 337},
  [391] = {.lex_state = 337},
  [392] = {.lex_state = 337},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 337},
  [397] = {.lex_state = 337},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 35},
  [402] = {.lex_state = 35},
  [403] = {.lex_state = 35},
  [404] = {.lex_state = 35},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 9},
  [408] = {.lex_state = 35},
  [409] = {.lex_state = 35},
  [410] = {.lex_state = 35},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 35},
  [413] = {.lex_state = 9},
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
    [sym_source_file] = STATE(411),
    [sym_section] = STATE(137),
    [sym_settings_section] = STATE(138),
    [sym_variables_section] = STATE(135),
    [sym_keywords_section] = STATE(131),
    [sym_test_cases_section] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(22),
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
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym__line_break,
    ACTIONS(25), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
      sym_setting_statement,
    STATE(101), 1,
      sym_setting_name,
    STATE(2), 2,
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
  [46] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym__line_break,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
      sym_setting_statement,
    STATE(101), 1,
      sym_setting_name,
    STATE(6), 2,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [92] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(38), 1,
      sym__line_break,
    STATE(9), 1,
      sym_setting_statement,
    STATE(101), 1,
      sym_setting_name,
    STATE(5), 2,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(9), 1,
      sym_setting_statement,
    STATE(101), 1,
      sym_setting_name,
    STATE(2), 2,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [184] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(9), 1,
      sym_setting_statement,
    STATE(101), 1,
      sym_setting_name,
    STATE(2), 2,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [230] = 3,
    ACTIONS(3), 1,
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
  [263] = 3,
    ACTIONS(3), 1,
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
  [295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym__empty_line_token1,
    ACTIONS(54), 23,
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
  [327] = 15,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(66), 1,
      anon_sym_END,
    ACTIONS(68), 1,
      anon_sym_ELSE,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(72), 1,
      anon_sym_EXCEPT,
    ACTIONS(74), 1,
      anon_sym_FINALLY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    STATE(348), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [381] = 14,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(68), 1,
      anon_sym_ELSE,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_END,
    ACTIONS(86), 1,
      anon_sym_ELSEIF,
    STATE(348), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [432] = 13,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    STATE(330), 1,
      sym_keyword_setting,
    STATE(331), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [480] = 13,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(291), 1,
      sym_test_case_setting,
    STATE(349), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [528] = 12,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ellipses,
    STATE(348), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [573] = 12,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_END,
    STATE(348), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [618] = 11,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(70), 1,
      anon_sym_TRY,
    ACTIONS(76), 1,
      anon_sym_WHILE,
    ACTIONS(78), 1,
      anon_sym_FOR,
    ACTIONS(82), 1,
      sym_comment,
    STATE(348), 1,
      sym_statement,
    ACTIONS(80), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(327), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [660] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__separator,
    ACTIONS(103), 1,
      sym__line_break,
    ACTIONS(106), 1,
      aux_sym__empty_line_token1,
    STATE(12), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(98), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [690] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__separator,
    ACTIONS(115), 1,
      sym__line_break,
    ACTIONS(117), 1,
      aux_sym__empty_line_token1,
    STATE(13), 1,
      sym__indentation,
    STATE(20), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(111), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [720] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__empty_line_token1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym__separator,
    ACTIONS(125), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(121), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [750] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym__separator,
    ACTIONS(134), 1,
      sym__line_break,
    ACTIONS(137), 1,
      aux_sym__empty_line_token1,
    STATE(13), 1,
      sym__indentation,
    STATE(20), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(129), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [780] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym_text_chunk,
    ACTIONS(147), 1,
      sym__line_break,
    ACTIONS(150), 1,
      aux_sym__empty_line_token1,
    STATE(71), 1,
      sym_keyword_definition,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(142), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [809] = 12,
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
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym_source_file_repeat1,
    STATE(131), 1,
      sym_keywords_section,
    STATE(132), 1,
      sym_test_cases_section,
    STATE(135), 1,
      sym_variables_section,
    STATE(137), 1,
      sym_section,
    STATE(138), 1,
      sym_settings_section,
  [846] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(161), 1,
      sym__line_break,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    STATE(71), 1,
      sym_keyword_definition,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(157), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [875] = 12,
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
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(131), 1,
      sym_keywords_section,
    STATE(132), 1,
      sym_test_cases_section,
    STATE(135), 1,
      sym_variables_section,
    STATE(137), 1,
      sym_section,
    STATE(138), 1,
      sym_settings_section,
  [912] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(173), 1,
      sym__line_break,
    STATE(63), 1,
      sym_test_case_definition,
    STATE(27), 2,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(169), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [941] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(161), 1,
      sym__line_break,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_keyword_definition,
    STATE(21), 2,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(177), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [970] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_text_chunk,
    ACTIONS(186), 1,
      sym__line_break,
    ACTIONS(189), 1,
      aux_sym__empty_line_token1,
    STATE(63), 1,
      sym_test_case_definition,
    STATE(27), 2,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(181), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1024] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym__line_break,
    STATE(71), 1,
      sym_keyword_definition,
    STATE(26), 2,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      sym__line_break,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      sym__line_break,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1103] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym__line_break,
    STATE(71), 1,
      sym_keyword_definition,
    STATE(23), 2,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(212), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1132] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 1,
      sym__line_break,
    STATE(63), 1,
      sym_test_case_definition,
    STATE(25), 2,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(218), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1161] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(173), 1,
      sym__line_break,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_test_case_definition,
    STATE(27), 2,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(224), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1190] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      aux_sym_settings_section_token1,
    ACTIONS(231), 1,
      aux_sym_variables_section_token1,
    ACTIONS(234), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(237), 1,
      aux_sym_test_cases_section_token1,
    STATE(35), 1,
      aux_sym_source_file_repeat1,
    STATE(131), 1,
      sym_keywords_section,
    STATE(132), 1,
      sym_test_cases_section,
    STATE(135), 1,
      sym_variables_section,
    STATE(137), 1,
      sym_section,
    STATE(138), 1,
      sym_settings_section,
  [1227] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__separator,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    STATE(10), 1,
      sym__indentation,
    STATE(106), 1,
      sym_block,
    STATE(185), 1,
      sym_else_statement,
    STATE(240), 1,
      sym_finally_statement,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(108), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1260] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym__empty_line_token1,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      sym__line_break,
    STATE(63), 1,
      sym_test_case_definition,
    STATE(34), 2,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(248), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1289] = 12,
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
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym_source_file_repeat1,
    STATE(131), 1,
      sym_keywords_section,
    STATE(132), 1,
      sym_test_cases_section,
    STATE(135), 1,
      sym_variables_section,
    STATE(137), 1,
      sym_section,
    STATE(138), 1,
      sym_settings_section,
  [1326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym__empty_line_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      sym__line_break,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1351] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(261), 1,
      sym__line_break,
    ACTIONS(264), 1,
      aux_sym__empty_line_token1,
    STATE(40), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1376] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_text_chunk,
    STATE(236), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1404] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(281), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(285), 1,
      sym_text_chunk,
    STATE(233), 1,
      sym_argument,
    STATE(74), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1432] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(287), 1,
      sym__separator,
    STATE(11), 1,
      sym__indentation,
    STATE(133), 1,
      sym_block,
    STATE(134), 1,
      aux_sym_if_statement_repeat1,
    STATE(214), 1,
      sym_else_statement,
    STATE(298), 1,
      sym_elseif_statement,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1464] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_text_chunk,
    STATE(235), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1492] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      anon_sym_IN,
    ACTIONS(293), 1,
      anon_sym_INRANGE,
    ACTIONS(295), 1,
      anon_sym_INENUMERATE,
    ACTIONS(297), 1,
      anon_sym_INZIP,
    STATE(316), 1,
      sym_scalar_variable,
    STATE(360), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1520] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_text_chunk,
    STATE(230), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1548] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_text_chunk,
    STATE(257), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1576] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(281), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(285), 1,
      sym_text_chunk,
    STATE(295), 1,
      sym_argument,
    STATE(74), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1604] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_text_chunk,
    STATE(239), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1632] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(301), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(303), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(307), 1,
      sym_text_chunk,
    STATE(300), 1,
      sym_argument,
    STATE(78), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1660] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(281), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(285), 1,
      sym_text_chunk,
    STATE(307), 1,
      sym_argument,
    STATE(74), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1688] = 8,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(271), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_text_chunk,
    STATE(233), 1,
      sym_argument,
    STATE(57), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1716] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_SPACE,
    ACTIONS(315), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(318), 1,
      sym_text_chunk,
    ACTIONS(321), 2,
      sym__separator,
      sym__line_break,
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1741] = 3,
    ACTIONS(82), 1,
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
  [1758] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1775] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1792] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(335), 1,
      anon_sym_SPACE,
    ACTIONS(337), 1,
      sym_text_chunk,
    ACTIONS(339), 2,
      sym__separator,
      sym__line_break,
    STATE(58), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1817] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(335), 1,
      anon_sym_SPACE,
    ACTIONS(341), 1,
      sym_text_chunk,
    ACTIONS(343), 2,
      sym__separator,
      sym__line_break,
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1842] = 3,
    ACTIONS(82), 1,
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
      sym__line_break,
      aux_sym__empty_line_token1,
  [1859] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(48), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1876] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__separator,
    ACTIONS(354), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(285), 1,
      sym_arguments,
    ACTIONS(349), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [1902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      aux_sym__empty_line_token1,
    ACTIONS(357), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1918] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1934] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(365), 1,
      sym_ellipses,
    ACTIONS(367), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(352), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1960] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SPACE,
    STATE(220), 1,
      sym_test_case_setting_name,
    ACTIONS(374), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [1994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SPACE,
    STATE(258), 1,
      sym_keyword_setting_name,
    ACTIONS(378), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2012] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(318), 1,
      sym_arguments,
    ACTIONS(382), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2038] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__empty_line_token1,
    ACTIONS(392), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [2070] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2086] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2102] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__line_break,
    ACTIONS(404), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(407), 1,
      anon_sym_SPACE,
    ACTIONS(410), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(413), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2126] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym__line_break,
    ACTIONS(416), 1,
      anon_sym_SPACE,
    ACTIONS(418), 1,
      sym_text_chunk,
    STATE(77), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2150] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(48), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [2166] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(422), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(285), 1,
      sym_arguments,
    ACTIONS(420), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2192] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(343), 1,
      sym__line_break,
    ACTIONS(416), 1,
      anon_sym_SPACE,
    ACTIONS(425), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2216] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(427), 1,
      anon_sym_SPACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    STATE(79), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2240] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(343), 1,
      sym__separator,
    ACTIONS(427), 1,
      anon_sym_SPACE,
    ACTIONS(431), 1,
      sym_text_chunk,
    STATE(80), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2264] = 7,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__separator,
    ACTIONS(433), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(436), 1,
      anon_sym_SPACE,
    ACTIONS(439), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(442), 1,
      sym_text_chunk,
    STATE(80), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(249), 1,
      sym_test_case_setting_name,
    ACTIONS(374), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2303] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(445), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(259), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2326] = 6,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(449), 1,
      anon_sym_RETURN,
    ACTIONS(451), 1,
      sym_keyword,
    STATE(210), 1,
      sym_inline_statement,
    STATE(213), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2347] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(453), 1,
      sym__separator,
    STATE(16), 1,
      sym__indentation,
    STATE(361), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(456), 1,
      sym__separator,
    STATE(16), 1,
      sym__indentation,
    STATE(413), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(456), 1,
      sym__separator,
    STATE(16), 1,
      sym__indentation,
    STATE(231), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2416] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(458), 1,
      sym__separator,
    STATE(16), 1,
      sym__indentation,
    STATE(407), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2439] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__separator,
    ACTIONS(117), 1,
      aux_sym__empty_line_token1,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(13), 1,
      sym__indentation,
    STATE(72), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2462] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__line_break,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(456), 1,
      sym__separator,
    STATE(16), 1,
      sym__indentation,
    STATE(306), 1,
      sym_block,
    STATE(107), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2485] = 6,
    ACTIONS(58), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RETURN,
    ACTIONS(62), 1,
      sym_keyword,
    ACTIONS(82), 1,
      sym_comment,
    STATE(301), 1,
      sym_inline_statement,
    STATE(213), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym__empty_line_token1,
    ACTIONS(123), 1,
      sym__separator,
    ACTIONS(463), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(69), 1,
      sym_keyword_definition_body,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2529] = 6,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(449), 1,
      anon_sym_RETURN,
    ACTIONS(451), 1,
      sym_keyword,
    STATE(241), 1,
      sym_inline_statement,
    STATE(213), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(227), 1,
      sym_keyword_setting_name,
    ACTIONS(378), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2565] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(395), 1,
      sym_arguments,
  [2587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(465), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(260), 1,
      sym_arguments,
    STATE(261), 1,
      sym_continuation,
  [2609] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2623] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2637] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2651] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2665] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(321), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2679] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(359), 1,
      sym_arguments,
  [2701] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(486), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2715] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(490), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2729] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(494), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(332), 1,
      sym_arguments,
  [2765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__separator,
    STATE(169), 1,
      sym__indentation,
    STATE(209), 1,
      sym_else_statement,
    STATE(253), 1,
      sym_finally_statement,
    STATE(116), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__empty_line_token1,
    ACTIONS(500), 1,
      sym__separator,
    ACTIONS(503), 1,
      sym__line_break,
    STATE(16), 1,
      sym__indentation,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__separator,
    STATE(169), 1,
      sym__indentation,
    STATE(209), 1,
      sym_else_statement,
    STATE(253), 1,
      sym_finally_statement,
    STATE(167), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2825] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(382), 1,
      sym_arguments,
  [2847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(333), 1,
      sym_arguments,
  [2869] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2883] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2897] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(513), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(273), 1,
      sym_arguments,
  [2919] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(324), 1,
      sym_arguments,
  [2941] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(350), 1,
      sym_arguments,
  [2963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__separator,
    STATE(168), 1,
      sym__indentation,
    STATE(208), 1,
      sym_else_statement,
    STATE(218), 1,
      sym_finally_statement,
    STATE(167), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2983] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(518), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(340), 1,
      sym_arguments,
  [3005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    ACTIONS(526), 1,
      aux_sym__empty_line_token1,
    STATE(16), 1,
      sym__indentation,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [3025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(388), 1,
      sym_arguments,
  [3047] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(289), 1,
      sym_arguments,
  [3069] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(304), 1,
      sym_arguments,
  [3091] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(308), 1,
      sym_arguments,
  [3113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(309), 1,
      sym_arguments,
  [3135] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
    STATE(205), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(367), 1,
      sym_arguments,
  [3157] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__separator,
    ACTIONS(532), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      aux_sym_arguments_repeat2,
    STATE(260), 1,
      sym_arguments,
    STATE(261), 1,
      sym_continuation,
  [3179] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym__separator,
    ACTIONS(538), 1,
      sym__line_break,
    STATE(139), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
    STATE(273), 1,
      sym_arguments,
  [3201] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(541), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3215] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(545), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [3229] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(549), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
    STATE(196), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [3248] = 5,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(305), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(552), 1,
      sym_text_chunk,
    STATE(156), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__separator,
    STATE(136), 1,
      aux_sym_if_statement_repeat1,
    STATE(187), 1,
      sym__indentation,
    STATE(225), 1,
      sym_else_statement,
    STATE(298), 1,
      sym_elseif_statement,
  [3306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__separator,
    STATE(173), 1,
      aux_sym_if_statement_repeat1,
    STATE(189), 1,
      sym__indentation,
    STATE(226), 1,
      sym_else_statement,
    STATE(298), 1,
      sym_elseif_statement,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    STATE(173), 1,
      aux_sym_if_statement_repeat1,
    STATE(195), 1,
      sym__indentation,
    STATE(234), 1,
      sym_else_statement,
    STATE(298), 1,
      sym_elseif_statement,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__separator,
    ACTIONS(573), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat2,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
    STATE(261), 1,
      sym_continuation,
  [3396] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(541), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3409] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3422] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3435] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3448] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3461] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(486), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3474] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(490), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3487] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(494), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3500] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(545), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3513] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3526] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3539] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(541), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3552] = 5,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(576), 1,
      sym_text_chunk,
    STATE(100), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3569] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3582] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3595] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3608] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(321), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3621] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(490), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3634] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(494), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3647] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3660] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3673] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3686] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(486), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3699] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(545), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3712] = 5,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(578), 1,
      sym_text_chunk,
    STATE(165), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3729] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(321), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3742] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(580), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__separator,
    STATE(366), 1,
      sym__indentation,
    STATE(167), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_END,
    ACTIONS(589), 1,
      anon_sym_ELSE,
    ACTIONS(591), 1,
      anon_sym_EXCEPT,
    ACTIONS(593), 1,
      anon_sym_FINALLY,
  [3786] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_ELSE,
    ACTIONS(591), 1,
      anon_sym_EXCEPT,
    ACTIONS(593), 1,
      anon_sym_FINALLY,
    ACTIONS(595), 1,
      anon_sym_END,
  [3802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
    ACTIONS(599), 1,
      anon_sym_ELSE,
    STATE(232), 1,
      sym_inline_elseif_statement,
    STATE(379), 1,
      sym_inline_else_statement,
  [3818] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(172), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(580), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3832] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(580), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__separator,
    STATE(173), 1,
      aux_sym_if_statement_repeat1,
    STATE(298), 1,
      sym_elseif_statement,
    STATE(400), 1,
      sym__indentation,
  [3862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(200), 1,
      aux_sym_arguments_without_continuation_repeat1,
    STATE(335), 1,
      sym_arguments_without_continuation,
  [3878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
    ACTIONS(599), 1,
      anon_sym_ELSE,
    STATE(232), 1,
      sym_inline_elseif_statement,
    STATE(290), 1,
      sym_inline_else_statement,
  [3894] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(612), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__separator,
    ACTIONS(619), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [3924] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(181), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(580), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__separator,
    ACTIONS(626), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [3954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__separator,
    ACTIONS(631), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [3970] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(580), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3984] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(580), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__separator,
    ACTIONS(640), 1,
      sym__line_break,
    STATE(194), 1,
      aux_sym_inline_if_statement_repeat1,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym__separator,
    ACTIONS(645), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__separator,
    STATE(253), 1,
      sym_finally_statement,
    STATE(254), 1,
      sym__indentation,
  [4037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(649), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_ELSE,
    ACTIONS(651), 1,
      anon_sym_END,
    ACTIONS(653), 1,
      anon_sym_ELSEIF,
  [4063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__separator,
    STATE(200), 1,
      aux_sym_arguments_without_continuation_repeat1,
    STATE(365), 1,
      sym_arguments_without_continuation,
  [4076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_ELSE,
    ACTIONS(653), 1,
      anon_sym_ELSEIF,
    ACTIONS(655), 1,
      anon_sym_END,
  [4089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__separator,
    ACTIONS(660), 1,
      sym__line_break,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym__line_break,
    ACTIONS(662), 1,
      sym__separator,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_ellipses,
    ACTIONS(665), 1,
      sym__separator,
    STATE(357), 1,
      sym__indentation,
  [4128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__separator,
    ACTIONS(670), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__separator,
    ACTIONS(675), 1,
      sym__line_break,
    STATE(194), 1,
      aux_sym_inline_if_statement_repeat1,
  [4154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_ELSE,
    ACTIONS(653), 1,
      anon_sym_ELSEIF,
    ACTIONS(677), 1,
      anon_sym_END,
  [4167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym__line_break,
    STATE(202), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__line_break,
    ACTIONS(48), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(660), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [4204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__separator,
    ACTIONS(685), 1,
      sym__line_break,
    STATE(199), 1,
      aux_sym_arguments_without_continuation_repeat1,
  [4217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__separator,
    ACTIONS(687), 1,
      sym__line_break,
    STATE(199), 1,
      aux_sym_arguments_without_continuation_repeat1,
  [4230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_ellipses,
    ACTIONS(691), 1,
      sym__separator,
    STATE(358), 1,
      sym__indentation,
  [4243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym__line_break,
    STATE(202), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [4256] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(696), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__line_break,
    ACTIONS(700), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__line_break,
    STATE(202), 1,
      aux_sym_arguments_repeat2,
    STATE(261), 1,
      sym_continuation,
  [4291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(707), 1,
      sym__line_break,
    STATE(211), 1,
      aux_sym_arguments_repeat1,
  [4304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym__line_break,
    ACTIONS(709), 1,
      sym__separator,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [4317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__separator,
    STATE(228), 1,
      sym_finally_statement,
    STATE(229), 1,
      sym__indentation,
  [4330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__separator,
    STATE(218), 1,
      sym_finally_statement,
    STATE(219), 1,
      sym__indentation,
  [4343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym__separator,
    ACTIONS(718), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_inline_if_statement_repeat1,
  [4356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(645), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(722), 1,
      anon_sym_SPACE,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__separator,
    ACTIONS(726), 1,
      sym__line_break,
  [4389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__separator,
    STATE(314), 1,
      sym__indentation,
  [4399] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(730), 1,
      aux_sym_settings_section_token2,
    ACTIONS(732), 1,
      sym__line_break,
  [4409] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(734), 1,
      aux_sym_settings_section_token2,
    ACTIONS(736), 1,
      sym__line_break,
  [4419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SPACE,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
  [4429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym__separator,
    STATE(337), 1,
      sym__indentation,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_END,
    ACTIONS(593), 1,
      anon_sym_FINALLY,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SPACE,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
  [4459] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(748), 1,
      aux_sym_settings_section_token2,
    ACTIONS(750), 1,
      sym__line_break,
  [4469] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_settings_section_token2,
    ACTIONS(754), 1,
      sym__line_break,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym__separator,
    ACTIONS(758), 1,
      sym__line_break,
  [4489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      anon_sym_SPACE,
  [4499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__separator,
    STATE(384), 1,
      sym__indentation,
  [4509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__separator,
    STATE(398), 1,
      sym__indentation,
  [4519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SPACE,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
  [4529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym__separator,
    STATE(406), 1,
      sym__indentation,
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_FINALLY,
    ACTIONS(774), 1,
      anon_sym_END,
  [4549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym__separator,
    ACTIONS(778), 1,
      sym__line_break,
  [4559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__separator,
    STATE(287), 1,
      sym__indentation,
  [4569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym__separator,
    ACTIONS(784), 1,
      sym__line_break,
  [4579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__separator,
    ACTIONS(788), 1,
      sym__line_break,
  [4589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__separator,
    STATE(293), 1,
      sym__indentation,
  [4599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__separator,
    ACTIONS(794), 1,
      sym__line_break,
  [4609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym__line_break,
    ACTIONS(796), 1,
      sym__separator,
  [4619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(800), 1,
      anon_sym_SPACE,
  [4629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
    STATE(232), 1,
      sym_inline_elseif_statement,
  [4639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__separator,
    ACTIONS(804), 1,
      sym__line_break,
  [4649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__separator,
    STATE(341), 1,
      sym__indentation,
  [4659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__separator,
    ACTIONS(810), 1,
      sym__line_break,
  [4669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(814), 1,
      anon_sym_SPACE,
  [4679] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_SPACE,
    ACTIONS(818), 1,
      sym_variable_name,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    ACTIONS(822), 1,
      anon_sym_SPACE,
  [4699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    ACTIONS(826), 1,
      anon_sym_SPACE,
  [4709] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_SPACE,
    ACTIONS(830), 1,
      sym_variable_name,
  [4719] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_SPACE,
    ACTIONS(834), 1,
      sym_variable_name,
  [4729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__separator,
    STATE(248), 1,
      aux_sym_for_statement_repeat1,
  [4739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_SPACE,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
  [4749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    ACTIONS(845), 1,
      anon_sym_SPACE,
  [4759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym__separator,
    STATE(278), 1,
      aux_sym_for_statement_repeat1,
  [4769] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_SPACE,
    ACTIONS(851), 1,
      sym_variable_name,
  [4779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym__separator,
    STATE(315), 1,
      sym__indentation,
  [4789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_FINALLY,
    ACTIONS(595), 1,
      anon_sym_END,
  [4799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__separator,
    ACTIONS(857), 1,
      sym__line_break,
  [4809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SPACE,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
  [4819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__separator,
    ACTIONS(865), 1,
      sym__line_break,
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_SPACE,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
  [4839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__separator,
    STATE(378), 1,
      sym__indentation,
  [4849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__separator,
    ACTIONS(875), 1,
      sym__line_break,
  [4859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__separator,
    ACTIONS(879), 1,
      sym__line_break,
  [4869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    ACTIONS(883), 1,
      anon_sym_SPACE,
  [4879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    ACTIONS(887), 1,
      anon_sym_SPACE,
  [4889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
    ACTIONS(891), 1,
      anon_sym_SPACE,
  [4899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__line_break,
    ACTIONS(893), 1,
      sym__separator,
  [4909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
    ACTIONS(897), 1,
      anon_sym_SPACE,
  [4919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
    ACTIONS(901), 1,
      anon_sym_SPACE,
  [4929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    ACTIONS(905), 1,
      anon_sym_SPACE,
  [4939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(316), 1,
      sym_scalar_variable,
  [4949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 1,
      anon_sym_SPACE,
  [4959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    ACTIONS(913), 1,
      anon_sym_SPACE,
  [4969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
    ACTIONS(917), 1,
      anon_sym_SPACE,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__separator,
    ACTIONS(921), 1,
      sym__line_break,
  [4989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    ACTIONS(925), 1,
      anon_sym_SPACE,
  [4999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    ACTIONS(929), 1,
      anon_sym_SPACE,
  [5009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_RBRACE,
    ACTIONS(933), 1,
      anon_sym_SPACE,
  [5019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(937), 1,
      anon_sym_SPACE,
  [5029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__separator,
    STATE(248), 1,
      aux_sym_for_statement_repeat1,
  [5039] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_SPACE,
    ACTIONS(943), 1,
      sym_variable_name,
  [5049] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_SPACE,
    ACTIONS(947), 1,
      sym_variable_name,
  [5059] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_SPACE,
    ACTIONS(951), 1,
      sym_variable_name,
  [5069] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_SPACE,
    ACTIONS(955), 1,
      sym_variable_name,
  [5079] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_SPACE,
    ACTIONS(959), 1,
      sym_variable_name,
  [5089] = 3,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_SPACE,
    ACTIONS(963), 1,
      sym_variable_name,
  [5099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__separator,
    ACTIONS(967), 1,
      sym__line_break,
  [5109] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_variable_name,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_END,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__line_break,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym__line_break,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__line_break,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__line_break,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_END,
  [5165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__line_break,
  [5172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__line_break,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__line_break,
  [5186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__line_break,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__separator,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__line_break,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym__separator,
  [5214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__line_break,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__line_break,
  [5228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__separator,
  [5235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__line_break,
  [5242] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_variable_name,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__separator,
  [5256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__line_break,
  [5263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym__line_break,
  [5270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__line_break,
  [5277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
  [5284] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym_variable_name,
  [5291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
  [5298] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_variable_name,
  [5305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_END,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_END,
  [5319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__separator,
  [5326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
  [5333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__line_break,
  [5340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym__line_break,
  [5347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
  [5354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__line_break,
  [5361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [5368] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_variable_name,
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym__line_break,
  [5382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym__separator,
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym__line_break,
  [5396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym__line_break,
  [5403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym__line_break,
  [5410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
  [5417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym__line_break,
  [5424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__line_break,
  [5431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym__line_break,
  [5438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym__line_break,
  [5445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym__line_break,
  [5452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym__line_break,
  [5459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym__line_break,
  [5466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_END,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym__separator,
  [5480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_RBRACE,
  [5487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym__line_break,
  [5494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_END,
  [5501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym__line_break,
  [5508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym__line_break,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__separator,
  [5522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RBRACE,
  [5529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      sym__line_break,
  [5536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__separator,
  [5543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym__line_break,
  [5550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__line_break,
  [5557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__line_break,
  [5564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      sym__line_break,
  [5571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym__separator,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_RBRACK,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      sym__line_break,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__line_break,
  [5599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__separator,
  [5606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_ellipses,
  [5613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      sym_ellipses,
  [5620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      sym__line_break,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym__line_break,
  [5634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym__separator,
  [5641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      sym__line_break,
  [5648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_RBRACK,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym__line_break,
  [5669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_EXCEPT,
  [5676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      sym__line_break,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      sym__separator,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
  [5704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym__separator,
  [5711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [5718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_RBRACE,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_RBRACE,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_RBRACE,
  [5739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      sym__line_break,
  [5753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_END,
  [5760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      sym__line_break,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
  [5774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      sym__line_break,
  [5781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym__line_break,
  [5788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      sym__line_break,
  [5795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_END,
  [5802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [5809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      sym__line_break,
  [5816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
  [5823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      sym__line_break,
  [5830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_RBRACE,
  [5837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
  [5844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
  [5851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_RBRACE,
  [5858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym__line_break,
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym__line_break,
  [5872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      sym__line_break,
  [5879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [5886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_RBRACE,
  [5893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_END,
  [5900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      sym__line_break,
  [5907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_ELSEIF,
  [5914] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_variable_name,
  [5921] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1163), 1,
      sym_variable_name,
  [5928] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym_variable_name,
  [5935] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_variable_name,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym__line_break,
  [5949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_END,
  [5956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym__separator,
  [5963] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_variable_name,
  [5970] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1177), 1,
      sym_variable_name,
  [5977] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1179), 1,
      sym_variable_name,
  [5984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      ts_builtin_sym_end,
  [5991] = 2,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym_variable_name,
  [5998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      sym__separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 327,
  [SMALL_STATE(11)] = 381,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 480,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 618,
  [SMALL_STATE(17)] = 660,
  [SMALL_STATE(18)] = 690,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 750,
  [SMALL_STATE(21)] = 780,
  [SMALL_STATE(22)] = 809,
  [SMALL_STATE(23)] = 846,
  [SMALL_STATE(24)] = 875,
  [SMALL_STATE(25)] = 912,
  [SMALL_STATE(26)] = 941,
  [SMALL_STATE(27)] = 970,
  [SMALL_STATE(28)] = 999,
  [SMALL_STATE(29)] = 1024,
  [SMALL_STATE(30)] = 1053,
  [SMALL_STATE(31)] = 1078,
  [SMALL_STATE(32)] = 1103,
  [SMALL_STATE(33)] = 1132,
  [SMALL_STATE(34)] = 1161,
  [SMALL_STATE(35)] = 1190,
  [SMALL_STATE(36)] = 1227,
  [SMALL_STATE(37)] = 1260,
  [SMALL_STATE(38)] = 1289,
  [SMALL_STATE(39)] = 1326,
  [SMALL_STATE(40)] = 1351,
  [SMALL_STATE(41)] = 1376,
  [SMALL_STATE(42)] = 1404,
  [SMALL_STATE(43)] = 1432,
  [SMALL_STATE(44)] = 1464,
  [SMALL_STATE(45)] = 1492,
  [SMALL_STATE(46)] = 1520,
  [SMALL_STATE(47)] = 1548,
  [SMALL_STATE(48)] = 1576,
  [SMALL_STATE(49)] = 1604,
  [SMALL_STATE(50)] = 1632,
  [SMALL_STATE(51)] = 1660,
  [SMALL_STATE(52)] = 1688,
  [SMALL_STATE(53)] = 1716,
  [SMALL_STATE(54)] = 1741,
  [SMALL_STATE(55)] = 1758,
  [SMALL_STATE(56)] = 1775,
  [SMALL_STATE(57)] = 1792,
  [SMALL_STATE(58)] = 1817,
  [SMALL_STATE(59)] = 1842,
  [SMALL_STATE(60)] = 1859,
  [SMALL_STATE(61)] = 1876,
  [SMALL_STATE(62)] = 1902,
  [SMALL_STATE(63)] = 1918,
  [SMALL_STATE(64)] = 1934,
  [SMALL_STATE(65)] = 1960,
  [SMALL_STATE(66)] = 1976,
  [SMALL_STATE(67)] = 1994,
  [SMALL_STATE(68)] = 2012,
  [SMALL_STATE(69)] = 2038,
  [SMALL_STATE(70)] = 2054,
  [SMALL_STATE(71)] = 2070,
  [SMALL_STATE(72)] = 2086,
  [SMALL_STATE(73)] = 2102,
  [SMALL_STATE(74)] = 2126,
  [SMALL_STATE(75)] = 2150,
  [SMALL_STATE(76)] = 2166,
  [SMALL_STATE(77)] = 2192,
  [SMALL_STATE(78)] = 2216,
  [SMALL_STATE(79)] = 2240,
  [SMALL_STATE(80)] = 2264,
  [SMALL_STATE(81)] = 2288,
  [SMALL_STATE(82)] = 2303,
  [SMALL_STATE(83)] = 2326,
  [SMALL_STATE(84)] = 2347,
  [SMALL_STATE(85)] = 2370,
  [SMALL_STATE(86)] = 2393,
  [SMALL_STATE(87)] = 2416,
  [SMALL_STATE(88)] = 2439,
  [SMALL_STATE(89)] = 2462,
  [SMALL_STATE(90)] = 2485,
  [SMALL_STATE(91)] = 2506,
  [SMALL_STATE(92)] = 2529,
  [SMALL_STATE(93)] = 2550,
  [SMALL_STATE(94)] = 2565,
  [SMALL_STATE(95)] = 2587,
  [SMALL_STATE(96)] = 2609,
  [SMALL_STATE(97)] = 2623,
  [SMALL_STATE(98)] = 2637,
  [SMALL_STATE(99)] = 2651,
  [SMALL_STATE(100)] = 2665,
  [SMALL_STATE(101)] = 2679,
  [SMALL_STATE(102)] = 2701,
  [SMALL_STATE(103)] = 2715,
  [SMALL_STATE(104)] = 2729,
  [SMALL_STATE(105)] = 2743,
  [SMALL_STATE(106)] = 2765,
  [SMALL_STATE(107)] = 2785,
  [SMALL_STATE(108)] = 2805,
  [SMALL_STATE(109)] = 2825,
  [SMALL_STATE(110)] = 2847,
  [SMALL_STATE(111)] = 2869,
  [SMALL_STATE(112)] = 2883,
  [SMALL_STATE(113)] = 2897,
  [SMALL_STATE(114)] = 2919,
  [SMALL_STATE(115)] = 2941,
  [SMALL_STATE(116)] = 2963,
  [SMALL_STATE(117)] = 2983,
  [SMALL_STATE(118)] = 3005,
  [SMALL_STATE(119)] = 3025,
  [SMALL_STATE(120)] = 3047,
  [SMALL_STATE(121)] = 3069,
  [SMALL_STATE(122)] = 3091,
  [SMALL_STATE(123)] = 3113,
  [SMALL_STATE(124)] = 3135,
  [SMALL_STATE(125)] = 3157,
  [SMALL_STATE(126)] = 3179,
  [SMALL_STATE(127)] = 3201,
  [SMALL_STATE(128)] = 3215,
  [SMALL_STATE(129)] = 3229,
  [SMALL_STATE(130)] = 3248,
  [SMALL_STATE(131)] = 3265,
  [SMALL_STATE(132)] = 3276,
  [SMALL_STATE(133)] = 3287,
  [SMALL_STATE(134)] = 3306,
  [SMALL_STATE(135)] = 3325,
  [SMALL_STATE(136)] = 3336,
  [SMALL_STATE(137)] = 3355,
  [SMALL_STATE(138)] = 3366,
  [SMALL_STATE(139)] = 3377,
  [SMALL_STATE(140)] = 3396,
  [SMALL_STATE(141)] = 3409,
  [SMALL_STATE(142)] = 3422,
  [SMALL_STATE(143)] = 3435,
  [SMALL_STATE(144)] = 3448,
  [SMALL_STATE(145)] = 3461,
  [SMALL_STATE(146)] = 3474,
  [SMALL_STATE(147)] = 3487,
  [SMALL_STATE(148)] = 3500,
  [SMALL_STATE(149)] = 3513,
  [SMALL_STATE(150)] = 3526,
  [SMALL_STATE(151)] = 3539,
  [SMALL_STATE(152)] = 3552,
  [SMALL_STATE(153)] = 3569,
  [SMALL_STATE(154)] = 3582,
  [SMALL_STATE(155)] = 3595,
  [SMALL_STATE(156)] = 3608,
  [SMALL_STATE(157)] = 3621,
  [SMALL_STATE(158)] = 3634,
  [SMALL_STATE(159)] = 3647,
  [SMALL_STATE(160)] = 3660,
  [SMALL_STATE(161)] = 3673,
  [SMALL_STATE(162)] = 3686,
  [SMALL_STATE(163)] = 3699,
  [SMALL_STATE(164)] = 3712,
  [SMALL_STATE(165)] = 3729,
  [SMALL_STATE(166)] = 3742,
  [SMALL_STATE(167)] = 3756,
  [SMALL_STATE(168)] = 3770,
  [SMALL_STATE(169)] = 3786,
  [SMALL_STATE(170)] = 3802,
  [SMALL_STATE(171)] = 3818,
  [SMALL_STATE(172)] = 3832,
  [SMALL_STATE(173)] = 3846,
  [SMALL_STATE(174)] = 3862,
  [SMALL_STATE(175)] = 3878,
  [SMALL_STATE(176)] = 3894,
  [SMALL_STATE(177)] = 3908,
  [SMALL_STATE(178)] = 3924,
  [SMALL_STATE(179)] = 3938,
  [SMALL_STATE(180)] = 3954,
  [SMALL_STATE(181)] = 3970,
  [SMALL_STATE(182)] = 3984,
  [SMALL_STATE(183)] = 3998,
  [SMALL_STATE(184)] = 4011,
  [SMALL_STATE(185)] = 4024,
  [SMALL_STATE(186)] = 4037,
  [SMALL_STATE(187)] = 4050,
  [SMALL_STATE(188)] = 4063,
  [SMALL_STATE(189)] = 4076,
  [SMALL_STATE(190)] = 4089,
  [SMALL_STATE(191)] = 4102,
  [SMALL_STATE(192)] = 4115,
  [SMALL_STATE(193)] = 4128,
  [SMALL_STATE(194)] = 4141,
  [SMALL_STATE(195)] = 4154,
  [SMALL_STATE(196)] = 4167,
  [SMALL_STATE(197)] = 4180,
  [SMALL_STATE(198)] = 4191,
  [SMALL_STATE(199)] = 4204,
  [SMALL_STATE(200)] = 4217,
  [SMALL_STATE(201)] = 4230,
  [SMALL_STATE(202)] = 4243,
  [SMALL_STATE(203)] = 4256,
  [SMALL_STATE(204)] = 4267,
  [SMALL_STATE(205)] = 4278,
  [SMALL_STATE(206)] = 4291,
  [SMALL_STATE(207)] = 4304,
  [SMALL_STATE(208)] = 4317,
  [SMALL_STATE(209)] = 4330,
  [SMALL_STATE(210)] = 4343,
  [SMALL_STATE(211)] = 4356,
  [SMALL_STATE(212)] = 4369,
  [SMALL_STATE(213)] = 4379,
  [SMALL_STATE(214)] = 4389,
  [SMALL_STATE(215)] = 4399,
  [SMALL_STATE(216)] = 4409,
  [SMALL_STATE(217)] = 4419,
  [SMALL_STATE(218)] = 4429,
  [SMALL_STATE(219)] = 4439,
  [SMALL_STATE(220)] = 4449,
  [SMALL_STATE(221)] = 4459,
  [SMALL_STATE(222)] = 4469,
  [SMALL_STATE(223)] = 4479,
  [SMALL_STATE(224)] = 4489,
  [SMALL_STATE(225)] = 4499,
  [SMALL_STATE(226)] = 4509,
  [SMALL_STATE(227)] = 4519,
  [SMALL_STATE(228)] = 4529,
  [SMALL_STATE(229)] = 4539,
  [SMALL_STATE(230)] = 4549,
  [SMALL_STATE(231)] = 4559,
  [SMALL_STATE(232)] = 4569,
  [SMALL_STATE(233)] = 4579,
  [SMALL_STATE(234)] = 4589,
  [SMALL_STATE(235)] = 4599,
  [SMALL_STATE(236)] = 4609,
  [SMALL_STATE(237)] = 4619,
  [SMALL_STATE(238)] = 4629,
  [SMALL_STATE(239)] = 4639,
  [SMALL_STATE(240)] = 4649,
  [SMALL_STATE(241)] = 4659,
  [SMALL_STATE(242)] = 4669,
  [SMALL_STATE(243)] = 4679,
  [SMALL_STATE(244)] = 4689,
  [SMALL_STATE(245)] = 4699,
  [SMALL_STATE(246)] = 4709,
  [SMALL_STATE(247)] = 4719,
  [SMALL_STATE(248)] = 4729,
  [SMALL_STATE(249)] = 4739,
  [SMALL_STATE(250)] = 4749,
  [SMALL_STATE(251)] = 4759,
  [SMALL_STATE(252)] = 4769,
  [SMALL_STATE(253)] = 4779,
  [SMALL_STATE(254)] = 4789,
  [SMALL_STATE(255)] = 4799,
  [SMALL_STATE(256)] = 4809,
  [SMALL_STATE(257)] = 4819,
  [SMALL_STATE(258)] = 4829,
  [SMALL_STATE(259)] = 4839,
  [SMALL_STATE(260)] = 4849,
  [SMALL_STATE(261)] = 4859,
  [SMALL_STATE(262)] = 4869,
  [SMALL_STATE(263)] = 4879,
  [SMALL_STATE(264)] = 4889,
  [SMALL_STATE(265)] = 4899,
  [SMALL_STATE(266)] = 4909,
  [SMALL_STATE(267)] = 4919,
  [SMALL_STATE(268)] = 4929,
  [SMALL_STATE(269)] = 4939,
  [SMALL_STATE(270)] = 4949,
  [SMALL_STATE(271)] = 4959,
  [SMALL_STATE(272)] = 4969,
  [SMALL_STATE(273)] = 4979,
  [SMALL_STATE(274)] = 4989,
  [SMALL_STATE(275)] = 4999,
  [SMALL_STATE(276)] = 5009,
  [SMALL_STATE(277)] = 5019,
  [SMALL_STATE(278)] = 5029,
  [SMALL_STATE(279)] = 5039,
  [SMALL_STATE(280)] = 5049,
  [SMALL_STATE(281)] = 5059,
  [SMALL_STATE(282)] = 5069,
  [SMALL_STATE(283)] = 5079,
  [SMALL_STATE(284)] = 5089,
  [SMALL_STATE(285)] = 5099,
  [SMALL_STATE(286)] = 5109,
  [SMALL_STATE(287)] = 5116,
  [SMALL_STATE(288)] = 5123,
  [SMALL_STATE(289)] = 5130,
  [SMALL_STATE(290)] = 5137,
  [SMALL_STATE(291)] = 5144,
  [SMALL_STATE(292)] = 5151,
  [SMALL_STATE(293)] = 5158,
  [SMALL_STATE(294)] = 5165,
  [SMALL_STATE(295)] = 5172,
  [SMALL_STATE(296)] = 5179,
  [SMALL_STATE(297)] = 5186,
  [SMALL_STATE(298)] = 5193,
  [SMALL_STATE(299)] = 5200,
  [SMALL_STATE(300)] = 5207,
  [SMALL_STATE(301)] = 5214,
  [SMALL_STATE(302)] = 5221,
  [SMALL_STATE(303)] = 5228,
  [SMALL_STATE(304)] = 5235,
  [SMALL_STATE(305)] = 5242,
  [SMALL_STATE(306)] = 5249,
  [SMALL_STATE(307)] = 5256,
  [SMALL_STATE(308)] = 5263,
  [SMALL_STATE(309)] = 5270,
  [SMALL_STATE(310)] = 5277,
  [SMALL_STATE(311)] = 5284,
  [SMALL_STATE(312)] = 5291,
  [SMALL_STATE(313)] = 5298,
  [SMALL_STATE(314)] = 5305,
  [SMALL_STATE(315)] = 5312,
  [SMALL_STATE(316)] = 5319,
  [SMALL_STATE(317)] = 5326,
  [SMALL_STATE(318)] = 5333,
  [SMALL_STATE(319)] = 5340,
  [SMALL_STATE(320)] = 5347,
  [SMALL_STATE(321)] = 5354,
  [SMALL_STATE(322)] = 5361,
  [SMALL_STATE(323)] = 5368,
  [SMALL_STATE(324)] = 5375,
  [SMALL_STATE(325)] = 5382,
  [SMALL_STATE(326)] = 5389,
  [SMALL_STATE(327)] = 5396,
  [SMALL_STATE(328)] = 5403,
  [SMALL_STATE(329)] = 5410,
  [SMALL_STATE(330)] = 5417,
  [SMALL_STATE(331)] = 5424,
  [SMALL_STATE(332)] = 5431,
  [SMALL_STATE(333)] = 5438,
  [SMALL_STATE(334)] = 5445,
  [SMALL_STATE(335)] = 5452,
  [SMALL_STATE(336)] = 5459,
  [SMALL_STATE(337)] = 5466,
  [SMALL_STATE(338)] = 5473,
  [SMALL_STATE(339)] = 5480,
  [SMALL_STATE(340)] = 5487,
  [SMALL_STATE(341)] = 5494,
  [SMALL_STATE(342)] = 5501,
  [SMALL_STATE(343)] = 5508,
  [SMALL_STATE(344)] = 5515,
  [SMALL_STATE(345)] = 5522,
  [SMALL_STATE(346)] = 5529,
  [SMALL_STATE(347)] = 5536,
  [SMALL_STATE(348)] = 5543,
  [SMALL_STATE(349)] = 5550,
  [SMALL_STATE(350)] = 5557,
  [SMALL_STATE(351)] = 5564,
  [SMALL_STATE(352)] = 5571,
  [SMALL_STATE(353)] = 5578,
  [SMALL_STATE(354)] = 5585,
  [SMALL_STATE(355)] = 5592,
  [SMALL_STATE(356)] = 5599,
  [SMALL_STATE(357)] = 5606,
  [SMALL_STATE(358)] = 5613,
  [SMALL_STATE(359)] = 5620,
  [SMALL_STATE(360)] = 5627,
  [SMALL_STATE(361)] = 5634,
  [SMALL_STATE(362)] = 5641,
  [SMALL_STATE(363)] = 5648,
  [SMALL_STATE(364)] = 5655,
  [SMALL_STATE(365)] = 5662,
  [SMALL_STATE(366)] = 5669,
  [SMALL_STATE(367)] = 5676,
  [SMALL_STATE(368)] = 5683,
  [SMALL_STATE(369)] = 5690,
  [SMALL_STATE(370)] = 5697,
  [SMALL_STATE(371)] = 5704,
  [SMALL_STATE(372)] = 5711,
  [SMALL_STATE(373)] = 5718,
  [SMALL_STATE(374)] = 5725,
  [SMALL_STATE(375)] = 5732,
  [SMALL_STATE(376)] = 5739,
  [SMALL_STATE(377)] = 5746,
  [SMALL_STATE(378)] = 5753,
  [SMALL_STATE(379)] = 5760,
  [SMALL_STATE(380)] = 5767,
  [SMALL_STATE(381)] = 5774,
  [SMALL_STATE(382)] = 5781,
  [SMALL_STATE(383)] = 5788,
  [SMALL_STATE(384)] = 5795,
  [SMALL_STATE(385)] = 5802,
  [SMALL_STATE(386)] = 5809,
  [SMALL_STATE(387)] = 5816,
  [SMALL_STATE(388)] = 5823,
  [SMALL_STATE(389)] = 5830,
  [SMALL_STATE(390)] = 5837,
  [SMALL_STATE(391)] = 5844,
  [SMALL_STATE(392)] = 5851,
  [SMALL_STATE(393)] = 5858,
  [SMALL_STATE(394)] = 5865,
  [SMALL_STATE(395)] = 5872,
  [SMALL_STATE(396)] = 5879,
  [SMALL_STATE(397)] = 5886,
  [SMALL_STATE(398)] = 5893,
  [SMALL_STATE(399)] = 5900,
  [SMALL_STATE(400)] = 5907,
  [SMALL_STATE(401)] = 5914,
  [SMALL_STATE(402)] = 5921,
  [SMALL_STATE(403)] = 5928,
  [SMALL_STATE(404)] = 5935,
  [SMALL_STATE(405)] = 5942,
  [SMALL_STATE(406)] = 5949,
  [SMALL_STATE(407)] = 5956,
  [SMALL_STATE(408)] = 5963,
  [SMALL_STATE(409)] = 5970,
  [SMALL_STATE(410)] = 5977,
  [SMALL_STATE(411)] = 5984,
  [SMALL_STATE(412)] = 5991,
  [SMALL_STATE(413)] = 5998,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 19),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 19), SHIFT_REPEAT(255),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 19), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 19), SHIFT_REPEAT(351),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 15),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 10),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 25),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 25),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 1, 0, 9),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 1, 0, 9),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 33),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 33),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 33), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 33), SHIFT_REPEAT(17),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 33), SHIFT_REPEAT(377),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 30),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 30),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 30),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 30),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 33),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 33),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 33), SHIFT_REPEAT(13),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 33), SHIFT_REPEAT(20),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 33), SHIFT_REPEAT(377),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 21),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 21),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 21), SHIFT_REPEAT(334),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 21), SHIFT_REPEAT(21),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 21), SHIFT_REPEAT(354),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 20),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 20),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 22),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 22),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 12),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 23),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 23),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 23), SHIFT_REPEAT(174),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 23), SHIFT_REPEAT(27),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 23), SHIFT_REPEAT(354),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 14),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 8),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 8), SHIFT_REPEAT(215),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 8), SHIFT_REPEAT(221),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 8), SHIFT_REPEAT(216),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 8), SHIFT_REPEAT(222),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 7),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 39),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 39),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 38),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 38),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 39),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 39),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 38),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 38),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 41), SHIFT(47),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 41), SHIFT(201),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 40),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, 0, 40),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 1, 0, 13),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 1, 0, 13),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(14),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 31),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 31),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 29),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 29),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 36),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 36),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 1, 0, 11),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 1, 0, 11),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 29),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 29),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 41), SHIFT(192),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(16),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(16),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 11), SHIFT(192),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 34),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 34),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(16),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 41), SHIFT(192),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 11), SHIFT(47),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 11), SHIFT(201),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 41), SHIFT(47),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 41), SHIFT(201),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 17), SHIFT(192),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 5),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 2),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 17), SHIFT(47),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 17), SHIFT(201),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 50), SHIFT_REPEAT(400),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 18),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 18), SHIFT(201),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 27),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 27), SHIFT(201),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 28),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 28), SHIFT_REPEAT(201),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 48),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 32), SHIFT(47),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 32),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 35),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(47),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 35), SHIFT(47),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 26), SHIFT_REPEAT(47),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 26),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 50), SHIFT_REPEAT(238),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 50),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 27), SHIFT(192),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_without_continuation_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_without_continuation_repeat1, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 28), SHIFT_REPEAT(192),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 18), SHIFT(192),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(47),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 44),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 53),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 53),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 42),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 42),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_without_continuation_repeat1, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 24),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 24),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 37),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 37),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 1, 0, 16),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 1, 0, 16),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 40),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 40),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 36),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 36),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 58),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 59),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 60),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 61),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 45),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 62),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 63),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 43),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 64),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 40),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, 0, 47),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 49),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 43),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, 0, 36),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 40),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 52),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, 0, 47),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 54),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 46),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, 0, 36),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 55),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 56),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 57),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 51),
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
