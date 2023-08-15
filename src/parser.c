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
#define STATE_COUNT 357
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 4
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

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
  anon_sym_ = 53,
  anon_sym_AT_LBRACE = 54,
  anon_sym_AMP_LBRACE = 55,
  sym_variable_name = 56,
  sym_text_chunk = 57,
  sym_comment = 58,
  sym__separator = 59,
  aux_sym__whitespace_token1 = 60,
  sym__line_break = 61,
  sym_source_file = 62,
  sym_section = 63,
  sym_settings_section = 64,
  sym_setting_statement = 65,
  sym_variables_section = 66,
  sym_variable_definition = 67,
  sym_keywords_section = 68,
  sym_keyword_definition = 69,
  sym_keyword_definition_body = 70,
  sym_keyword_setting = 71,
  sym_test_cases_section = 72,
  sym_test_case_definition = 73,
  sym_test_case_definition_body = 74,
  sym_test_case_setting = 75,
  sym_statement = 76,
  sym_return_statement = 77,
  sym_variable_assignment = 78,
  sym_keyword_invocation = 79,
  sym_if_statement = 80,
  sym_elseif_statement = 81,
  sym_else_statement = 82,
  sym_inline_if_statement = 83,
  sym_block = 84,
  sym_inline_elseif_statement = 85,
  sym_inline_else_statement = 86,
  sym_inline_statement = 87,
  sym_try_statement = 88,
  sym_except_statement = 89,
  sym_finally_statement = 90,
  sym_while_statement = 91,
  sym_for_statement = 92,
  sym__for_in = 93,
  sym__for_in_range = 94,
  sym__for_in_enumerate = 95,
  sym__for_in_zip = 96,
  sym_arguments = 97,
  sym_arguments_without_continuation = 98,
  sym_continuation = 99,
  sym_argument = 100,
  sym_scalar_variable = 101,
  sym_list_variable = 102,
  sym_dictionary_variable = 103,
  sym__indentation = 104,
  sym__empty_line = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_settings_section_repeat1 = 107,
  aux_sym_variables_section_repeat1 = 108,
  aux_sym_keywords_section_repeat1 = 109,
  aux_sym_keyword_definition_body_repeat1 = 110,
  aux_sym_test_cases_section_repeat1 = 111,
  aux_sym_test_case_definition_body_repeat1 = 112,
  aux_sym_if_statement_repeat1 = 113,
  aux_sym_inline_if_statement_repeat1 = 114,
  aux_sym_block_repeat1 = 115,
  aux_sym_try_statement_repeat1 = 116,
  aux_sym_for_statement_repeat1 = 117,
  aux_sym_arguments_repeat1 = 118,
  aux_sym_arguments_repeat2 = 119,
  aux_sym_argument_repeat1 = 120,
  alias_sym_keyword = 121,
  alias_sym_name = 122,
  alias_sym_return_value = 123,
  alias_sym_variable_list = 124,
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
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
  [alias_sym_return_value] = "return_value",
  [alias_sym_variable_list] = "variable_list",
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
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_name] = alias_sym_name,
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
  [alias_sym_variable_list] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_left = 5,
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 2},
  [8] = {.index = 5, .length = 1},
  [9] = {.index = 6, .length = 2},
  [10] = {.index = 8, .length = 2},
  [11] = {.index = 10, .length = 2},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 3},
  [14] = {.index = 17, .length = 3},
  [15] = {.index = 20, .length = 3},
  [16] = {.index = 23, .length = 3},
  [17] = {.index = 26, .length = 4},
  [18] = {.index = 30, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alternative, 0},
  [1] =
    {field_condition, 1},
  [2] =
    {field_condition, 2},
  [3] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [5] =
    {field_consequence, 3},
  [6] =
    {field_body, 3},
    {field_condition, 1},
  [8] =
    {field_alternative, 4},
    {field_condition, 2},
  [10] =
    {field_condition, 2},
    {field_consequence, 4},
  [12] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [14] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [17] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [23] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [26] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [30] =
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
  [16] = {
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
  [42] = 8,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 8,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 47,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 63,
  [78] = 78,
  [79] = 79,
  [80] = 71,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 84,
  [85] = 85,
  [86] = 65,
  [87] = 87,
  [88] = 81,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 63,
  [97] = 90,
  [98] = 98,
  [99] = 71,
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
  [113] = 110,
  [114] = 114,
  [115] = 115,
  [116] = 114,
  [117] = 106,
  [118] = 103,
  [119] = 105,
  [120] = 120,
  [121] = 111,
  [122] = 122,
  [123] = 101,
  [124] = 124,
  [125] = 111,
  [126] = 104,
  [127] = 106,
  [128] = 100,
  [129] = 103,
  [130] = 130,
  [131] = 131,
  [132] = 112,
  [133] = 105,
  [134] = 112,
  [135] = 114,
  [136] = 136,
  [137] = 137,
  [138] = 109,
  [139] = 101,
  [140] = 100,
  [141] = 141,
  [142] = 104,
  [143] = 109,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 8,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 137,
  [158] = 158,
  [159] = 159,
  [160] = 147,
  [161] = 161,
  [162] = 144,
  [163] = 163,
  [164] = 122,
  [165] = 159,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 155,
  [170] = 170,
  [171] = 167,
  [172] = 172,
  [173] = 146,
  [174] = 155,
  [175] = 168,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 178,
  [183] = 179,
  [184] = 184,
  [185] = 185,
  [186] = 180,
  [187] = 187,
  [188] = 178,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 189,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 192,
  [200] = 200,
  [201] = 201,
  [202] = 193,
  [203] = 194,
  [204] = 189,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 197,
  [213] = 198,
  [214] = 214,
  [215] = 215,
  [216] = 192,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 178,
  [221] = 180,
  [222] = 222,
  [223] = 179,
  [224] = 224,
  [225] = 225,
  [226] = 192,
  [227] = 198,
  [228] = 197,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 208,
  [233] = 189,
  [234] = 194,
  [235] = 193,
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
  [287] = 104,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 109,
  [293] = 293,
  [294] = 294,
  [295] = 111,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 299,
  [303] = 303,
  [304] = 304,
  [305] = 286,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 270,
  [315] = 315,
  [316] = 268,
  [317] = 317,
  [318] = 266,
  [319] = 264,
  [320] = 247,
  [321] = 246,
  [322] = 244,
  [323] = 299,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 270,
  [330] = 330,
  [331] = 268,
  [332] = 332,
  [333] = 266,
  [334] = 247,
  [335] = 246,
  [336] = 244,
  [337] = 299,
  [338] = 338,
  [339] = 339,
  [340] = 270,
  [341] = 247,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 285,
  [346] = 283,
  [347] = 281,
  [348] = 278,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 285,
  [353] = 283,
  [354] = 281,
  [355] = 355,
  [356] = 285,
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
      if (eof) ADVANCE(377);
      if (lookahead == '\t') ADVANCE(747);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '=') ADVANCE(408);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '}') ADVANCE(407);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(747);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(750);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(747);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '=') ADVANCE(408);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(747);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '=') ADVANCE(409);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(749);
      if (lookahead == '#') ADVANCE(745);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(475);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '}') ADVANCE(407);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(746);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(472);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '&') ADVANCE(157);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(474);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(749);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(748);
      if (lookahead == ' ') ADVANCE(473);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(476);
      if (lookahead == '#') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(481);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == ']') ADVANCE(416);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ']') ADVANCE(433);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == ']') ADVANCE(422);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == ']') ADVANCE(428);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ']') ADVANCE(425);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == ']') ADVANCE(436);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == ']') ADVANCE(413);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(333);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '.') ADVANCE(496);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(513);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(521);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '[') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '[') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'B') ADVANCE(528);
      if (lookahead == 'C') ADVANCE(525);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(481);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(410);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(380);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(403);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(431);
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
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(625);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(626);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(627);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(469);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(443);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(457);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(462);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(447);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'Z') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(441);
      if (lookahead == 'N') ADVANCE(461);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(445);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(629);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(467);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead == 'X') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead == 'X') ADVANCE(74);
      END_STATE();
    case 104:
      if (lookahead == 'M') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(439);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(464);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(453);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 125:
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 126:
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'Y') ADVANCE(451);
      END_STATE();
    case 129:
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(416);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(433);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(422);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(428);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(425);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(436);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(413);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(435);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 146:
      if (lookahead == ']') ADVANCE(438);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 147:
      if (lookahead == ']') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 149:
      if (lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 150:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 151:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 153:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 154:
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 155:
      if (lookahead == '{') ADVANCE(406);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 156:
      if (lookahead == '{') ADVANCE(478);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(478);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 158:
      if (lookahead == '{') ADVANCE(477);
      END_STATE();
    case 159:
      if (lookahead == '{') ADVANCE(477);
      if (lookahead != 0) ADVANCE(543);
      END_STATE();
    case 160:
      if (lookahead == '{') ADVANCE(543);
      END_STATE();
    case 161:
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(667);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 162:
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 163:
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(667);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 164:
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(641);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 165:
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 166:
      if (lookahead == '{') ADVANCE(631);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 172:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 191:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 192:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 193:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 196:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 234:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 235:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 236:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 237:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 238:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 239:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 247:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 248:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 255:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 256:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 257:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 258:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 262:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 263:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 285:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 286:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 287:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 288:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 290:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 291:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 292:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 293:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 294:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 305:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      END_STATE();
    case 306:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 307:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      END_STATE();
    case 308:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(393);
      END_STATE();
    case 309:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      END_STATE();
    case 311:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(347);
      END_STATE();
    case 312:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      END_STATE();
    case 313:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      END_STATE();
    case 314:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 315:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 316:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 317:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 319:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(354);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(349);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(351);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 348:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 349:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 350:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 351:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 352:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 353:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 354:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 355:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 356:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 357:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 358:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 359:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 360:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 361:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 362:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(261);
      END_STATE();
    case 363:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 364:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(264);
      END_STATE();
    case 365:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(278);
      END_STATE();
    case 366:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      END_STATE();
    case 367:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 368:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(386);
      END_STATE();
    case 369:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(711);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 370:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 371:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(543);
      END_STATE();
    case 372:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(631);
      END_STATE();
    case 373:
      if (eof) ADVANCE(377);
      if (lookahead == '\t') ADVANCE(746);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(751);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 374:
      if (eof) ADVANCE(377);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '$') ADVANCE(154);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(753);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(272);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(348);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 375:
      if (eof) ADVANCE(377);
      if (lookahead == '\n') ADVANCE(754);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(743);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '{') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead != 0) ADVANCE(541);
      END_STATE();
    case 376:
      if (eof) ADVANCE(377);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == 'F') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(747);
      if (lookahead == '#') ADVANCE(745);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(747);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(749);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(481);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(745);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(741);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(739);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(739);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(739);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == ' ') ADVANCE(742);
      if (lookahead == '{') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(740);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == ' ') ADVANCE(742);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(740);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == ' ') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(740);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '.') ADVANCE(497);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'C') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'D') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'F') ADVANCE(442);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(511);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(523);
      if (lookahead == 'O') ADVANCE(530);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'K') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == 'X') ADVANCE(500);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(533);
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(522);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(530);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'R') ADVANCE(503);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'R') ADVANCE(539);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'R') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'R') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'S') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'S') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'Y') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'Y') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(619);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(619);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(619);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(619);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(619);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(619);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(619);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(619);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(619);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(619);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(619);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(619);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(619);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(619);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(619);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(619);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(619);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(619);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(619);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(720);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(619);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(619);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(619);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(718);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(619);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(619);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(619);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(619);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(736);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(619);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(619);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(619);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(619);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(619);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '*') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(166);
      if (lookahead != 0) ADVANCE(711);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(711);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(711);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(711);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(711);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(711);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(711);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(711);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(683);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(711);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(711);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(711);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(711);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(711);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(711);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(711);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(711);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(711);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(711);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(711);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(711);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(711);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(711);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(711);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(711);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(711);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(711);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(711);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(688);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(738);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(711);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(711);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(711);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(711);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(711);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(711);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(711);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(711);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(711);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(711);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(711);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == ']') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '{') ADVANCE(619);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(578);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(164);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(619);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(553);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == ']') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == ']') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ']') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == ']') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == ']') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == ']') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == ']') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(160);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(166);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(543);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead != 0) ADVANCE(483);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '{') ADVANCE(745);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '{') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(740);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(740);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(745);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(745);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(749);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(749);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(753);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(747);
      if (lookahead == '#') ADVANCE(745);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(753);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(747);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(753);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(755);
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
  [1] = {.lex_state = 376},
  [2] = {.lex_state = 374},
  [3] = {.lex_state = 374},
  [4] = {.lex_state = 374},
  [5] = {.lex_state = 374},
  [6] = {.lex_state = 374},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 374},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 374},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 373},
  [17] = {.lex_state = 373},
  [18] = {.lex_state = 373},
  [19] = {.lex_state = 373},
  [20] = {.lex_state = 374},
  [21] = {.lex_state = 374},
  [22] = {.lex_state = 375},
  [23] = {.lex_state = 375},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 374},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 375},
  [28] = {.lex_state = 375},
  [29] = {.lex_state = 375},
  [30] = {.lex_state = 375},
  [31] = {.lex_state = 375},
  [32] = {.lex_state = 375},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 374},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 375},
  [37] = {.lex_state = 374},
  [38] = {.lex_state = 375},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 373},
  [43] = {.lex_state = 373},
  [44] = {.lex_state = 373},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 375},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 375},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 374},
  [60] = {.lex_state = 375},
  [61] = {.lex_state = 374},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 376},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 376},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 46},
  [243] = {.lex_state = 8},
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
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 8},
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
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 46},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 46},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 46},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 46},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
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
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 8},
  [345] = {.lex_state = 46},
  [346] = {.lex_state = 46},
  [347] = {.lex_state = 46},
  [348] = {.lex_state = 46},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 46},
  [353] = {.lex_state = 46},
  [354] = {.lex_state = 46},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 46},
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
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(306),
    [sym_section] = STATE(26),
    [sym_settings_section] = STATE(108),
    [sym_variables_section] = STATE(108),
    [sym_keywords_section] = STATE(108),
    [sym_test_cases_section] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(26),
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
    ACTIONS(38), 1,
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
  [205] = 12,
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
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(272), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(46), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym__whitespace_token1,
    ACTIONS(64), 24,
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
  [289] = 12,
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
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(273), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(68), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym__whitespace_token1,
    ACTIONS(70), 23,
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
  [372] = 15,
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
    STATE(351), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [426] = 14,
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
    STATE(351), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [477] = 12,
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
    STATE(351), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [522] = 12,
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
    STATE(351), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [567] = 11,
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
    STATE(351), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(274), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [609] = 8,
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
    STATE(9), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [639] = 8,
    ACTIONS(62), 1,
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
  [669] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__separator,
    ACTIONS(119), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(115), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [699] = 8,
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
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(123), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(138), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(142), 1,
      sym__line_break,
    STATE(20), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [779] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(23), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(146), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [806] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym_text_chunk,
    ACTIONS(161), 1,
      aux_sym__whitespace_token1,
    ACTIONS(164), 1,
      sym__line_break,
    STATE(23), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(156), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [833] = 8,
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
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(108), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(169), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [887] = 8,
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
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(108), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [916] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__line_break,
    STATE(22), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(173), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [943] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(183), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(179), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [970] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(152), 1,
      sym__line_break,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(173), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [997] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym__line_break,
    STATE(38), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(187), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1024] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(193), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1051] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(187), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1078] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      aux_sym_settings_section_token1,
    ACTIONS(204), 1,
      aux_sym_variables_section_token1,
    ACTIONS(207), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(210), 1,
      aux_sym_test_cases_section_token1,
    STATE(33), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(108), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(218), 1,
      aux_sym__whitespace_token1,
    ACTIONS(221), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1132] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__separator,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(92), 1,
      sym_block,
    STATE(153), 1,
      sym_else_statement,
    STATE(225), 1,
      sym_finally_statement,
    STATE(78), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1165] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      sym_text_chunk,
    ACTIONS(237), 1,
      aux_sym__whitespace_token1,
    ACTIONS(240), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(232), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(138), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1217] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      sym_text_chunk,
    ACTIONS(197), 1,
      sym__line_break,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(247), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1244] = 8,
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
    STATE(33), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(108), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1273] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(251), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(102), 1,
      aux_sym_if_statement_repeat1,
    STATE(107), 1,
      sym_block,
    STATE(187), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1305] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_IN,
    ACTIONS(257), 1,
      anon_sym_INRANGE,
    ACTIONS(259), 1,
      anon_sym_INENUMERATE,
    ACTIONS(261), 1,
      anon_sym_INZIP,
    STATE(289), 1,
      sym_scalar_variable,
    STATE(349), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1333] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1350] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1367] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1384] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      sym_text_chunk,
    STATE(239), 1,
      sym_argument,
    STATE(65), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1408] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1424] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      sym_text_chunk,
    STATE(231), 1,
      sym_argument,
    STATE(65), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1448] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__separator,
    ACTIONS(284), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(214), 1,
      sym_arguments,
    ACTIONS(279), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(137), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(287), 1,
      sym_ellipses,
    ACTIONS(289), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(310), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1498] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(296), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(298), 1,
      sym_text_chunk,
    STATE(256), 1,
      sym_argument,
    STATE(83), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1522] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      sym_text_chunk,
    STATE(218), 1,
      sym_argument,
    STATE(65), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1546] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1562] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(310), 1,
      sym_text_chunk,
    STATE(261), 1,
      sym_argument,
    STATE(86), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1586] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(316), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(214), 1,
      sym_arguments,
    ACTIONS(312), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1610] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      sym_text_chunk,
    STATE(224), 1,
      sym_argument,
    STATE(65), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1634] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(310), 1,
      sym_text_chunk,
    STATE(252), 1,
      sym_argument,
    STATE(86), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1658] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(277), 1,
      sym_text_chunk,
    STATE(201), 1,
      sym_argument,
    STATE(65), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1682] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(308), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(310), 1,
      sym_text_chunk,
    STATE(231), 1,
      sym_argument,
    STATE(86), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym__whitespace_token1,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1722] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1754] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(279), 1,
      sym_arguments,
    ACTIONS(331), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1778] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_,
    ACTIONS(341), 1,
      sym_text_chunk,
    ACTIONS(344), 2,
      sym__separator,
      sym__line_break,
    STATE(63), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1799] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(346), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(60), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1822] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(348), 1,
      anon_sym_,
    ACTIONS(350), 1,
      sym_text_chunk,
    ACTIONS(352), 2,
      sym__separator,
      sym__line_break,
    STATE(71), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1843] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(356), 1,
      anon_sym_RETURN,
    ACTIONS(358), 1,
      sym_text_chunk,
    STATE(238), 1,
      sym_inline_statement,
    STATE(185), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(360), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(260), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(362), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(181), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1910] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(364), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(243), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1933] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(356), 1,
      anon_sym_RETURN,
    ACTIONS(358), 1,
      sym_text_chunk,
    STATE(172), 1,
      sym_inline_statement,
    STATE(185), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1954] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(348), 1,
      anon_sym_,
    ACTIONS(367), 1,
      sym_text_chunk,
    ACTIONS(369), 2,
      sym__separator,
      sym__line_break,
    STATE(63), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(360), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(311), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1998] = 6,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(257), 1,
      sym_inline_statement,
    STATE(185), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2019] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(360), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(219), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym__whitespace_token1,
    ACTIONS(117), 1,
      sym__separator,
    ACTIONS(371), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(52), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(373), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(309), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2088] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__line_break,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(379), 1,
      anon_sym_,
    ACTIONS(382), 1,
      sym_text_chunk,
    STATE(77), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__separator,
    STATE(145), 1,
      sym__indentation,
    STATE(151), 1,
      sym_else_statement,
    STATE(207), 1,
      sym_finally_statement,
    STATE(124), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(387), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(339), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2148] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(369), 1,
      sym__separator,
    ACTIONS(389), 1,
      anon_sym_,
    ACTIONS(391), 1,
      sym_text_chunk,
    STATE(96), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(393), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(184), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(265), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2208] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      sym__separator,
    ACTIONS(389), 1,
      anon_sym_,
    ACTIONS(396), 1,
      sym_text_chunk,
    STATE(80), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym__separator,
    ACTIONS(401), 1,
      aux_sym__whitespace_token1,
    ACTIONS(404), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(263), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2268] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      sym__line_break,
    ACTIONS(407), 1,
      anon_sym_,
    ACTIONS(409), 1,
      sym_text_chunk,
    STATE(99), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2288] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(296), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__separator,
    ACTIONS(414), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(184), 1,
      sym_arguments,
    STATE(137), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(326), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(417), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__whitespace_token1,
    ACTIONS(420), 1,
      sym__separator,
    ACTIONS(423), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(84), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__separator,
    STATE(145), 1,
      sym__indentation,
    STATE(151), 1,
      sym_else_statement,
    STATE(207), 1,
      sym_finally_statement,
    STATE(95), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(259), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(328), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
    STATE(136), 1,
      sym__indentation,
    STATE(166), 1,
      sym_else_statement,
    STATE(190), 1,
      sym_finally_statement,
    STATE(124), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2468] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__separator,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(430), 1,
      anon_sym_,
    ACTIONS(433), 1,
      sym_text_chunk,
    STATE(96), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      sym_arguments,
    STATE(137), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(333), 1,
      sym__line_break,
    STATE(110), 1,
      aux_sym_arguments_repeat1,
    STATE(327), 1,
      sym_arguments,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2528] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(369), 1,
      sym__line_break,
    ACTIONS(407), 1,
      anon_sym_,
    ACTIONS(442), 1,
      sym_text_chunk,
    STATE(77), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2548] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2561] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(450), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_if_statement_repeat1,
    STATE(149), 1,
      sym__indentation,
    STATE(205), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
  [2593] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2606] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(460), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2619] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(344), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2632] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2645] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym__separator,
    STATE(115), 1,
      aux_sym_if_statement_repeat1,
    STATE(154), 1,
      sym__indentation,
    STATE(200), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
  [2664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2675] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(162), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2705] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2718] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__separator,
    ACTIONS(490), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
    STATE(144), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2748] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_if_statement_repeat1,
    STATE(148), 1,
      sym__indentation,
    STATE(229), 1,
      sym_else_statement,
    STATE(344), 1,
      sym_elseif_statement,
  [2780] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 2,
      anon_sym_,
      sym__line_break,
  [2792] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 2,
      anon_sym_,
      sym__separator,
  [2804] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 2,
      anon_sym_,
      sym__separator,
  [2816] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(462), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_ELSEIF,
    ACTIONS(501), 1,
      anon_sym_ELSE,
    STATE(222), 1,
      sym_inline_elseif_statement,
    STATE(290), 1,
      sym_inline_else_statement,
  [2844] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 2,
      anon_sym_,
      sym__separator,
  [2856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__separator,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(122), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2870] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(450), 2,
      anon_sym_,
      sym__separator,
  [2882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__separator,
    STATE(338), 1,
      sym__indentation,
    STATE(124), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2896] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 2,
      anon_sym_,
      sym__line_break,
  [2908] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(460), 2,
      anon_sym_,
      sym__line_break,
  [2920] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 2,
      anon_sym_,
      sym__line_break,
  [2932] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 2,
      anon_sym_,
      sym__separator,
  [2944] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 2,
      anon_sym_,
      sym__line_break,
  [2956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_ELSEIF,
    ACTIONS(501), 1,
      anon_sym_ELSE,
    STATE(222), 1,
      sym_inline_elseif_statement,
    STATE(248), 1,
      sym_inline_else_statement,
  [2972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(511), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
    STATE(293), 1,
      sym_arguments_without_continuation,
  [2988] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 2,
      anon_sym_,
      sym__line_break,
  [3000] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(462), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3012] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 2,
      anon_sym_,
      sym__separator,
  [3024] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(495), 2,
      anon_sym_,
      sym__separator,
  [3036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_END,
    ACTIONS(515), 1,
      anon_sym_ELSE,
    ACTIONS(517), 1,
      anon_sym_EXCEPT,
    ACTIONS(519), 1,
      anon_sym_FINALLY,
  [3052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym__line_break,
    ACTIONS(521), 1,
      sym__separator,
    STATE(122), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3066] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 2,
      anon_sym_,
      sym__line_break,
  [3078] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(450), 2,
      anon_sym_,
      sym__line_break,
  [3090] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(446), 2,
      anon_sym_,
      sym__line_break,
  [3102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_if_statement_repeat1,
    STATE(271), 1,
      sym__indentation,
    STATE(344), 1,
      sym_elseif_statement,
  [3118] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(460), 2,
      anon_sym_,
      sym__separator,
  [3130] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 2,
      anon_sym_,
      sym__separator,
  [3142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym__separator,
    ACTIONS(528), 1,
      sym__line_break,
    STATE(122), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_ELSE,
    ACTIONS(517), 1,
      anon_sym_EXCEPT,
    ACTIONS(519), 1,
      anon_sym_FINALLY,
    ACTIONS(531), 1,
      anon_sym_END,
  [3172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(171), 1,
      aux_sym_arguments_repeat1,
  [3185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_ellipses,
    ACTIONS(538), 1,
      sym__separator,
    STATE(286), 1,
      sym__indentation,
  [3198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(540), 1,
      anon_sym_END,
    ACTIONS(542), 1,
      anon_sym_ELSEIF,
  [3211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(542), 1,
      anon_sym_ELSEIF,
    ACTIONS(544), 1,
      anon_sym_END,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__separator,
    ACTIONS(549), 1,
      sym__line_break,
    STATE(150), 1,
      aux_sym_inline_if_statement_repeat1,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__separator,
    STATE(190), 1,
      sym_finally_statement,
    STATE(191), 1,
      sym__indentation,
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym__line_break,
    ACTIONS(66), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__separator,
    STATE(206), 1,
      sym__indentation,
    STATE(207), 1,
      sym_finally_statement,
  [3274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(542), 1,
      anon_sym_ELSEIF,
    ACTIONS(555), 1,
      anon_sym_END,
  [3287] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(557), 1,
      sym_text_chunk,
    STATE(105), 1,
      sym_scalar_variable,
  [3300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__line_break,
    ACTIONS(559), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(164), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(563), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(565), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [3348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_ellipses,
    ACTIONS(569), 1,
      sym__separator,
    STATE(305), 1,
      sym__indentation,
  [3361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__line_break,
    STATE(164), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(581), 1,
      sym__line_break,
    STATE(150), 1,
      aux_sym_inline_if_statement_repeat1,
  [3398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__line_break,
    STATE(164), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__line_break,
    ACTIONS(586), 1,
      sym__separator,
    STATE(168), 1,
      aux_sym_arguments_repeat1,
  [3422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__separator,
    STATE(210), 1,
      sym_finally_statement,
    STATE(211), 1,
      sym__indentation,
  [3435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(591), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3461] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(593), 1,
      sym_text_chunk,
    STATE(119), 1,
      sym_scalar_variable,
  [3474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
    STATE(262), 1,
      sym_arguments_without_continuation,
  [3487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__line_break,
    ACTIONS(595), 1,
      sym__separator,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__separator,
    ACTIONS(600), 1,
      sym__line_break,
    STATE(163), 1,
      aux_sym_inline_if_statement_repeat1,
  [3513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(167), 1,
      aux_sym_arguments_repeat1,
  [3526] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(602), 1,
      sym_text_chunk,
    STATE(133), 1,
      sym_scalar_variable,
  [3539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__separator,
    STATE(236), 1,
      aux_sym_for_statement_repeat1,
  [3562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__separator,
    ACTIONS(608), 1,
      sym__line_break,
  [3572] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_,
    ACTIONS(612), 1,
      sym_variable_name,
  [3582] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_,
    ACTIONS(616), 1,
      sym_variable_name,
  [3592] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      sym_variable_name,
  [3602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__separator,
    STATE(332), 1,
      sym__indentation,
  [3612] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_,
    ACTIONS(626), 1,
      sym_variable_name,
  [3622] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_,
    ACTIONS(630), 1,
      sym_variable_name,
  [3632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__separator,
    ACTIONS(634), 1,
      sym__line_break,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
  [3652] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_,
    ACTIONS(642), 1,
      sym_variable_name,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__separator,
    STATE(325), 1,
      sym__indentation,
  [3672] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_,
    ACTIONS(648), 1,
      sym_variable_name,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_,
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
    STATE(312), 1,
      sym__indentation,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_END,
    ACTIONS(519), 1,
      anon_sym_FINALLY,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      anon_sym_,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    ACTIONS(662), 1,
      anon_sym_,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    ACTIONS(666), 1,
      anon_sym_,
  [3742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(670), 1,
      anon_sym_,
  [3752] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(672), 1,
      aux_sym_settings_section_token2,
    ACTIONS(674), 1,
      sym__line_break,
  [3762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
    ACTIONS(678), 1,
      anon_sym_,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    ACTIONS(682), 1,
      anon_sym_,
  [3782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_,
  [3792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__separator,
    STATE(284), 1,
      sym__indentation,
  [3802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__separator,
    ACTIONS(692), 1,
      sym__line_break,
  [3812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 1,
      anon_sym_,
  [3822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_,
  [3832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(704), 1,
      anon_sym_,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym__separator,
    STATE(280), 1,
      sym__indentation,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_FINALLY,
    ACTIONS(531), 1,
      anon_sym_END,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    STATE(343), 1,
      sym__indentation,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__separator,
    ACTIONS(712), 1,
      sym__line_break,
  [3882] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_settings_section_token2,
    ACTIONS(716), 1,
      sym__line_break,
  [3892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
    STATE(298), 1,
      sym__indentation,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_FINALLY,
    ACTIONS(720), 1,
      anon_sym_END,
  [3912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(724), 1,
      anon_sym_,
  [3922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    ACTIONS(728), 1,
      anon_sym_,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__separator,
    ACTIONS(732), 1,
      sym__line_break,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym__separator,
    STATE(215), 1,
      aux_sym_for_statement_repeat1,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    ACTIONS(739), 1,
      anon_sym_,
  [3962] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_settings_section_token2,
    ACTIONS(743), 1,
      sym__line_break,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym__separator,
    ACTIONS(747), 1,
      sym__line_break,
  [3982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym__separator,
    STATE(245), 1,
      sym__indentation,
  [3992] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_,
    ACTIONS(753), 1,
      sym_variable_name,
  [4002] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_,
    ACTIONS(757), 1,
      sym_variable_name,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__line_break,
    ACTIONS(759), 1,
      sym__separator,
  [4022] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_,
    ACTIONS(763), 1,
      sym_variable_name,
  [4032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__line_break,
    ACTIONS(765), 1,
      sym__separator,
  [4042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__separator,
    STATE(324), 1,
      sym__indentation,
  [4052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(771), 1,
      anon_sym_,
  [4062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 1,
      anon_sym_,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      anon_sym_,
  [4082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__separator,
    STATE(250), 1,
      sym__indentation,
  [4092] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(783), 1,
      aux_sym_settings_section_token2,
    ACTIONS(785), 1,
      sym__line_break,
  [4102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym__separator,
    ACTIONS(789), 1,
      sym__line_break,
  [4112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__line_break,
    ACTIONS(791), 1,
      sym__separator,
  [4122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 1,
      anon_sym_,
  [4132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      anon_sym_,
  [4142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_,
  [4152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym__separator,
    STATE(215), 1,
      aux_sym_for_statement_repeat1,
  [4162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_ELSEIF,
    STATE(222), 1,
      sym_inline_elseif_statement,
  [4172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym__separator,
    ACTIONS(809), 1,
      sym__line_break,
  [4182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym__separator,
    ACTIONS(813), 1,
      sym__line_break,
  [4192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(289), 1,
      sym_scalar_variable,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__separator,
  [4209] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_variable_name,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym__separator,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_END,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym__line_break,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym__line_break,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_END,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__line_break,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym__line_break,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym__line_break,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym__line_break,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__line_break,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym__separator,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym__line_break,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym__line_break,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym__line_break,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym__separator,
  [4342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__line_break,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__line_break,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__line_break,
  [4363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__line_break,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__line_break,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
  [4398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym__line_break,
  [4405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
  [4412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_ELSEIF,
  [4419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__line_break,
  [4426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__line_break,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__line_break,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__line_break,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__separator,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym__line_break,
  [4461] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_variable_name,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_END,
  [4482] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_variable_name,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__line_break,
  [4496] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym_variable_name,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_END,
  [4510] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_variable_name,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym_ellipses,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym__separator,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym__line_break,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym__separator,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__line_break,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__line_break,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__line_break,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__separator,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__line_break,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__line_break,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_END,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__line_break,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__line_break,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__line_break,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__line_break,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__line_break,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_ellipses,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      ts_builtin_sym_end,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym__separator,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__line_break,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__separator,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__separator,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__separator,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_END,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__line_break,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym__separator,
  [4727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
  [4734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [4741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [4748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [4769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__line_break,
  [4783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_END,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_END,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__line_break,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__line_break,
  [4811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__line_break,
  [4818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__line_break,
  [4832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_END,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [4853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__line_break,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_EXCEPT,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [4895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [4902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [4909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__line_break,
  [4916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_END,
  [4923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__separator,
  [4930] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym_variable_name,
  [4937] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_variable_name,
  [4944] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_variable_name,
  [4951] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_variable_name,
  [4958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__line_break,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym__separator,
  [4972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__line_break,
  [4979] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_variable_name,
  [4986] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym_variable_name,
  [4993] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_variable_name,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__line_break,
  [5007] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 426,
  [SMALL_STATE(13)] = 477,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 699,
  [SMALL_STATE(20)] = 729,
  [SMALL_STATE(21)] = 754,
  [SMALL_STATE(22)] = 779,
  [SMALL_STATE(23)] = 806,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 862,
  [SMALL_STATE(26)] = 887,
  [SMALL_STATE(27)] = 916,
  [SMALL_STATE(28)] = 943,
  [SMALL_STATE(29)] = 970,
  [SMALL_STATE(30)] = 997,
  [SMALL_STATE(31)] = 1024,
  [SMALL_STATE(32)] = 1051,
  [SMALL_STATE(33)] = 1078,
  [SMALL_STATE(34)] = 1107,
  [SMALL_STATE(35)] = 1132,
  [SMALL_STATE(36)] = 1165,
  [SMALL_STATE(37)] = 1192,
  [SMALL_STATE(38)] = 1217,
  [SMALL_STATE(39)] = 1244,
  [SMALL_STATE(40)] = 1273,
  [SMALL_STATE(41)] = 1305,
  [SMALL_STATE(42)] = 1333,
  [SMALL_STATE(43)] = 1350,
  [SMALL_STATE(44)] = 1367,
  [SMALL_STATE(45)] = 1384,
  [SMALL_STATE(46)] = 1408,
  [SMALL_STATE(47)] = 1424,
  [SMALL_STATE(48)] = 1448,
  [SMALL_STATE(49)] = 1472,
  [SMALL_STATE(50)] = 1498,
  [SMALL_STATE(51)] = 1522,
  [SMALL_STATE(52)] = 1546,
  [SMALL_STATE(53)] = 1562,
  [SMALL_STATE(54)] = 1586,
  [SMALL_STATE(55)] = 1610,
  [SMALL_STATE(56)] = 1634,
  [SMALL_STATE(57)] = 1658,
  [SMALL_STATE(58)] = 1682,
  [SMALL_STATE(59)] = 1706,
  [SMALL_STATE(60)] = 1722,
  [SMALL_STATE(61)] = 1738,
  [SMALL_STATE(62)] = 1754,
  [SMALL_STATE(63)] = 1778,
  [SMALL_STATE(64)] = 1799,
  [SMALL_STATE(65)] = 1822,
  [SMALL_STATE(66)] = 1843,
  [SMALL_STATE(67)] = 1864,
  [SMALL_STATE(68)] = 1887,
  [SMALL_STATE(69)] = 1910,
  [SMALL_STATE(70)] = 1933,
  [SMALL_STATE(71)] = 1954,
  [SMALL_STATE(72)] = 1975,
  [SMALL_STATE(73)] = 1998,
  [SMALL_STATE(74)] = 2019,
  [SMALL_STATE(75)] = 2042,
  [SMALL_STATE(76)] = 2065,
  [SMALL_STATE(77)] = 2088,
  [SMALL_STATE(78)] = 2108,
  [SMALL_STATE(79)] = 2128,
  [SMALL_STATE(80)] = 2148,
  [SMALL_STATE(81)] = 2168,
  [SMALL_STATE(82)] = 2188,
  [SMALL_STATE(83)] = 2208,
  [SMALL_STATE(84)] = 2228,
  [SMALL_STATE(85)] = 2248,
  [SMALL_STATE(86)] = 2268,
  [SMALL_STATE(87)] = 2288,
  [SMALL_STATE(88)] = 2308,
  [SMALL_STATE(89)] = 2328,
  [SMALL_STATE(90)] = 2348,
  [SMALL_STATE(91)] = 2368,
  [SMALL_STATE(92)] = 2388,
  [SMALL_STATE(93)] = 2408,
  [SMALL_STATE(94)] = 2428,
  [SMALL_STATE(95)] = 2448,
  [SMALL_STATE(96)] = 2468,
  [SMALL_STATE(97)] = 2488,
  [SMALL_STATE(98)] = 2508,
  [SMALL_STATE(99)] = 2528,
  [SMALL_STATE(100)] = 2548,
  [SMALL_STATE(101)] = 2561,
  [SMALL_STATE(102)] = 2574,
  [SMALL_STATE(103)] = 2593,
  [SMALL_STATE(104)] = 2606,
  [SMALL_STATE(105)] = 2619,
  [SMALL_STATE(106)] = 2632,
  [SMALL_STATE(107)] = 2645,
  [SMALL_STATE(108)] = 2664,
  [SMALL_STATE(109)] = 2675,
  [SMALL_STATE(110)] = 2688,
  [SMALL_STATE(111)] = 2705,
  [SMALL_STATE(112)] = 2718,
  [SMALL_STATE(113)] = 2731,
  [SMALL_STATE(114)] = 2748,
  [SMALL_STATE(115)] = 2761,
  [SMALL_STATE(116)] = 2780,
  [SMALL_STATE(117)] = 2792,
  [SMALL_STATE(118)] = 2804,
  [SMALL_STATE(119)] = 2816,
  [SMALL_STATE(120)] = 2828,
  [SMALL_STATE(121)] = 2844,
  [SMALL_STATE(122)] = 2856,
  [SMALL_STATE(123)] = 2870,
  [SMALL_STATE(124)] = 2882,
  [SMALL_STATE(125)] = 2896,
  [SMALL_STATE(126)] = 2908,
  [SMALL_STATE(127)] = 2920,
  [SMALL_STATE(128)] = 2932,
  [SMALL_STATE(129)] = 2944,
  [SMALL_STATE(130)] = 2956,
  [SMALL_STATE(131)] = 2972,
  [SMALL_STATE(132)] = 2988,
  [SMALL_STATE(133)] = 3000,
  [SMALL_STATE(134)] = 3012,
  [SMALL_STATE(135)] = 3024,
  [SMALL_STATE(136)] = 3036,
  [SMALL_STATE(137)] = 3052,
  [SMALL_STATE(138)] = 3066,
  [SMALL_STATE(139)] = 3078,
  [SMALL_STATE(140)] = 3090,
  [SMALL_STATE(141)] = 3102,
  [SMALL_STATE(142)] = 3118,
  [SMALL_STATE(143)] = 3130,
  [SMALL_STATE(144)] = 3142,
  [SMALL_STATE(145)] = 3156,
  [SMALL_STATE(146)] = 3172,
  [SMALL_STATE(147)] = 3185,
  [SMALL_STATE(148)] = 3198,
  [SMALL_STATE(149)] = 3211,
  [SMALL_STATE(150)] = 3224,
  [SMALL_STATE(151)] = 3237,
  [SMALL_STATE(152)] = 3250,
  [SMALL_STATE(153)] = 3261,
  [SMALL_STATE(154)] = 3274,
  [SMALL_STATE(155)] = 3287,
  [SMALL_STATE(156)] = 3300,
  [SMALL_STATE(157)] = 3311,
  [SMALL_STATE(158)] = 3322,
  [SMALL_STATE(159)] = 3335,
  [SMALL_STATE(160)] = 3348,
  [SMALL_STATE(161)] = 3361,
  [SMALL_STATE(162)] = 3374,
  [SMALL_STATE(163)] = 3385,
  [SMALL_STATE(164)] = 3398,
  [SMALL_STATE(165)] = 3409,
  [SMALL_STATE(166)] = 3422,
  [SMALL_STATE(167)] = 3435,
  [SMALL_STATE(168)] = 3448,
  [SMALL_STATE(169)] = 3461,
  [SMALL_STATE(170)] = 3474,
  [SMALL_STATE(171)] = 3487,
  [SMALL_STATE(172)] = 3500,
  [SMALL_STATE(173)] = 3513,
  [SMALL_STATE(174)] = 3526,
  [SMALL_STATE(175)] = 3539,
  [SMALL_STATE(176)] = 3552,
  [SMALL_STATE(177)] = 3562,
  [SMALL_STATE(178)] = 3572,
  [SMALL_STATE(179)] = 3582,
  [SMALL_STATE(180)] = 3592,
  [SMALL_STATE(181)] = 3602,
  [SMALL_STATE(182)] = 3612,
  [SMALL_STATE(183)] = 3622,
  [SMALL_STATE(184)] = 3632,
  [SMALL_STATE(185)] = 3642,
  [SMALL_STATE(186)] = 3652,
  [SMALL_STATE(187)] = 3662,
  [SMALL_STATE(188)] = 3672,
  [SMALL_STATE(189)] = 3682,
  [SMALL_STATE(190)] = 3692,
  [SMALL_STATE(191)] = 3702,
  [SMALL_STATE(192)] = 3712,
  [SMALL_STATE(193)] = 3722,
  [SMALL_STATE(194)] = 3732,
  [SMALL_STATE(195)] = 3742,
  [SMALL_STATE(196)] = 3752,
  [SMALL_STATE(197)] = 3762,
  [SMALL_STATE(198)] = 3772,
  [SMALL_STATE(199)] = 3782,
  [SMALL_STATE(200)] = 3792,
  [SMALL_STATE(201)] = 3802,
  [SMALL_STATE(202)] = 3812,
  [SMALL_STATE(203)] = 3822,
  [SMALL_STATE(204)] = 3832,
  [SMALL_STATE(205)] = 3842,
  [SMALL_STATE(206)] = 3852,
  [SMALL_STATE(207)] = 3862,
  [SMALL_STATE(208)] = 3872,
  [SMALL_STATE(209)] = 3882,
  [SMALL_STATE(210)] = 3892,
  [SMALL_STATE(211)] = 3902,
  [SMALL_STATE(212)] = 3912,
  [SMALL_STATE(213)] = 3922,
  [SMALL_STATE(214)] = 3932,
  [SMALL_STATE(215)] = 3942,
  [SMALL_STATE(216)] = 3952,
  [SMALL_STATE(217)] = 3962,
  [SMALL_STATE(218)] = 3972,
  [SMALL_STATE(219)] = 3982,
  [SMALL_STATE(220)] = 3992,
  [SMALL_STATE(221)] = 4002,
  [SMALL_STATE(222)] = 4012,
  [SMALL_STATE(223)] = 4022,
  [SMALL_STATE(224)] = 4032,
  [SMALL_STATE(225)] = 4042,
  [SMALL_STATE(226)] = 4052,
  [SMALL_STATE(227)] = 4062,
  [SMALL_STATE(228)] = 4072,
  [SMALL_STATE(229)] = 4082,
  [SMALL_STATE(230)] = 4092,
  [SMALL_STATE(231)] = 4102,
  [SMALL_STATE(232)] = 4112,
  [SMALL_STATE(233)] = 4122,
  [SMALL_STATE(234)] = 4132,
  [SMALL_STATE(235)] = 4142,
  [SMALL_STATE(236)] = 4152,
  [SMALL_STATE(237)] = 4162,
  [SMALL_STATE(238)] = 4172,
  [SMALL_STATE(239)] = 4182,
  [SMALL_STATE(240)] = 4192,
  [SMALL_STATE(241)] = 4202,
  [SMALL_STATE(242)] = 4209,
  [SMALL_STATE(243)] = 4216,
  [SMALL_STATE(244)] = 4223,
  [SMALL_STATE(245)] = 4230,
  [SMALL_STATE(246)] = 4237,
  [SMALL_STATE(247)] = 4244,
  [SMALL_STATE(248)] = 4251,
  [SMALL_STATE(249)] = 4258,
  [SMALL_STATE(250)] = 4265,
  [SMALL_STATE(251)] = 4272,
  [SMALL_STATE(252)] = 4279,
  [SMALL_STATE(253)] = 4286,
  [SMALL_STATE(254)] = 4293,
  [SMALL_STATE(255)] = 4300,
  [SMALL_STATE(256)] = 4307,
  [SMALL_STATE(257)] = 4314,
  [SMALL_STATE(258)] = 4321,
  [SMALL_STATE(259)] = 4328,
  [SMALL_STATE(260)] = 4335,
  [SMALL_STATE(261)] = 4342,
  [SMALL_STATE(262)] = 4349,
  [SMALL_STATE(263)] = 4356,
  [SMALL_STATE(264)] = 4363,
  [SMALL_STATE(265)] = 4370,
  [SMALL_STATE(266)] = 4377,
  [SMALL_STATE(267)] = 4384,
  [SMALL_STATE(268)] = 4391,
  [SMALL_STATE(269)] = 4398,
  [SMALL_STATE(270)] = 4405,
  [SMALL_STATE(271)] = 4412,
  [SMALL_STATE(272)] = 4419,
  [SMALL_STATE(273)] = 4426,
  [SMALL_STATE(274)] = 4433,
  [SMALL_STATE(275)] = 4440,
  [SMALL_STATE(276)] = 4447,
  [SMALL_STATE(277)] = 4454,
  [SMALL_STATE(278)] = 4461,
  [SMALL_STATE(279)] = 4468,
  [SMALL_STATE(280)] = 4475,
  [SMALL_STATE(281)] = 4482,
  [SMALL_STATE(282)] = 4489,
  [SMALL_STATE(283)] = 4496,
  [SMALL_STATE(284)] = 4503,
  [SMALL_STATE(285)] = 4510,
  [SMALL_STATE(286)] = 4517,
  [SMALL_STATE(287)] = 4524,
  [SMALL_STATE(288)] = 4531,
  [SMALL_STATE(289)] = 4538,
  [SMALL_STATE(290)] = 4545,
  [SMALL_STATE(291)] = 4552,
  [SMALL_STATE(292)] = 4559,
  [SMALL_STATE(293)] = 4566,
  [SMALL_STATE(294)] = 4573,
  [SMALL_STATE(295)] = 4580,
  [SMALL_STATE(296)] = 4587,
  [SMALL_STATE(297)] = 4594,
  [SMALL_STATE(298)] = 4601,
  [SMALL_STATE(299)] = 4608,
  [SMALL_STATE(300)] = 4615,
  [SMALL_STATE(301)] = 4622,
  [SMALL_STATE(302)] = 4629,
  [SMALL_STATE(303)] = 4636,
  [SMALL_STATE(304)] = 4643,
  [SMALL_STATE(305)] = 4650,
  [SMALL_STATE(306)] = 4657,
  [SMALL_STATE(307)] = 4664,
  [SMALL_STATE(308)] = 4671,
  [SMALL_STATE(309)] = 4678,
  [SMALL_STATE(310)] = 4685,
  [SMALL_STATE(311)] = 4692,
  [SMALL_STATE(312)] = 4699,
  [SMALL_STATE(313)] = 4706,
  [SMALL_STATE(314)] = 4713,
  [SMALL_STATE(315)] = 4720,
  [SMALL_STATE(316)] = 4727,
  [SMALL_STATE(317)] = 4734,
  [SMALL_STATE(318)] = 4741,
  [SMALL_STATE(319)] = 4748,
  [SMALL_STATE(320)] = 4755,
  [SMALL_STATE(321)] = 4762,
  [SMALL_STATE(322)] = 4769,
  [SMALL_STATE(323)] = 4776,
  [SMALL_STATE(324)] = 4783,
  [SMALL_STATE(325)] = 4790,
  [SMALL_STATE(326)] = 4797,
  [SMALL_STATE(327)] = 4804,
  [SMALL_STATE(328)] = 4811,
  [SMALL_STATE(329)] = 4818,
  [SMALL_STATE(330)] = 4825,
  [SMALL_STATE(331)] = 4832,
  [SMALL_STATE(332)] = 4839,
  [SMALL_STATE(333)] = 4846,
  [SMALL_STATE(334)] = 4853,
  [SMALL_STATE(335)] = 4860,
  [SMALL_STATE(336)] = 4867,
  [SMALL_STATE(337)] = 4874,
  [SMALL_STATE(338)] = 4881,
  [SMALL_STATE(339)] = 4888,
  [SMALL_STATE(340)] = 4895,
  [SMALL_STATE(341)] = 4902,
  [SMALL_STATE(342)] = 4909,
  [SMALL_STATE(343)] = 4916,
  [SMALL_STATE(344)] = 4923,
  [SMALL_STATE(345)] = 4930,
  [SMALL_STATE(346)] = 4937,
  [SMALL_STATE(347)] = 4944,
  [SMALL_STATE(348)] = 4951,
  [SMALL_STATE(349)] = 4958,
  [SMALL_STATE(350)] = 4965,
  [SMALL_STATE(351)] = 4972,
  [SMALL_STATE(352)] = 4979,
  [SMALL_STATE(353)] = 4986,
  [SMALL_STATE(354)] = 4993,
  [SMALL_STATE(355)] = 5000,
  [SMALL_STATE(356)] = 5007,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(87),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(299),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(323),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(7),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(323),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(297),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(302),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(242),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(299),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(34),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(131),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(302),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(55),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(160),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(147),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(220),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(155),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(63),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, .dynamic_precedence = 100), SHIFT(15),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(188),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(174),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(77),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(147),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(337),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(55),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(160),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(147),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(178),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(169),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(96),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(55),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(160),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(147),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(55),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(160),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(160),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(338),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(271),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(160),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(55),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(237),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(55),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(147),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(55),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(55),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(240),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 14),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, .dynamic_precedence = 200),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 16),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 17),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 18),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, .dynamic_precedence = 200),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 12),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, .dynamic_precedence = 200),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [931] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 9),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, .dynamic_precedence = 100),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 8),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, .dynamic_precedence = 200),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, .dynamic_precedence = 200),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
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
