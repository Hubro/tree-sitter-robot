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
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 4
#define TOKEN_COUNT 58
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
  anon_sym_WHILE = 43,
  anon_sym_FOR = 44,
  anon_sym_IN = 45,
  anon_sym_INRANGE = 46,
  anon_sym_INENUMERATE = 47,
  sym_ellipses = 48,
  anon_sym_ = 49,
  anon_sym_AT_LBRACE = 50,
  anon_sym_AMP_LBRACE = 51,
  sym_variable_name = 52,
  sym_text_chunk = 53,
  sym_comment = 54,
  sym__separator = 55,
  aux_sym__whitespace_token1 = 56,
  sym__line_break = 57,
  sym_source_file = 58,
  sym_section = 59,
  sym_settings_section = 60,
  sym_setting_statement = 61,
  sym_variables_section = 62,
  sym_variable_definition = 63,
  sym_keywords_section = 64,
  sym_keyword_definition = 65,
  sym_keyword_definition_body = 66,
  sym_keyword_setting = 67,
  sym_test_cases_section = 68,
  sym_test_case_definition = 69,
  sym_test_case_definition_body = 70,
  sym_test_case_setting = 71,
  sym_statement = 72,
  sym_return_statement = 73,
  sym_variable_assignment = 74,
  sym_keyword_invocation = 75,
  sym_if_statement = 76,
  sym_elseif_statement = 77,
  sym_else_statement = 78,
  sym_inline_if_statement = 79,
  sym_block = 80,
  sym_inline_elseif_statement = 81,
  sym_inline_else_statement = 82,
  sym_inline_statement = 83,
  sym_try_statement = 84,
  sym_except_statement = 85,
  sym_while_statement = 86,
  sym_for_statement = 87,
  sym__for_in = 88,
  sym__for_in_range = 89,
  sym__for_in_enumerate = 90,
  sym_arguments = 91,
  sym_arguments_without_continuation = 92,
  sym_continuation = 93,
  sym_argument = 94,
  sym_scalar_variable = 95,
  sym_list_variable = 96,
  sym_dictionary_variable = 97,
  sym__indentation = 98,
  sym__empty_line = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_settings_section_repeat1 = 101,
  aux_sym_variables_section_repeat1 = 102,
  aux_sym_keywords_section_repeat1 = 103,
  aux_sym_keyword_definition_body_repeat1 = 104,
  aux_sym_test_cases_section_repeat1 = 105,
  aux_sym_test_case_definition_body_repeat1 = 106,
  aux_sym_if_statement_repeat1 = 107,
  aux_sym_inline_if_statement_repeat1 = 108,
  aux_sym_block_repeat1 = 109,
  aux_sym_try_statement_repeat1 = 110,
  aux_sym_for_statement_repeat1 = 111,
  aux_sym_arguments_repeat1 = 112,
  aux_sym_arguments_repeat2 = 113,
  aux_sym_argument_repeat1 = 114,
  alias_sym_keyword = 115,
  alias_sym_name = 116,
  alias_sym_return_value = 117,
  alias_sym_variable_list = 118,
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
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_INRANGE] = "IN RANGE",
  [anon_sym_INENUMERATE] = "IN ENUMERATE",
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
  [sym_for_statement] = "for_statement",
  [sym__for_in] = "in",
  [sym__for_in_range] = "in_range",
  [sym__for_in_enumerate] = "in",
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
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_INRANGE] = anon_sym_INRANGE,
  [anon_sym_INENUMERATE] = anon_sym_INENUMERATE,
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
  [sym_for_statement] = sym_for_statement,
  [sym__for_in] = sym__for_in,
  [sym__for_in_range] = sym__for_in_range,
  [sym__for_in_enumerate] = sym__for_in,
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
  [8] = {.index = 5, .length = 2},
  [9] = {.index = 7, .length = 2},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 3},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 1},
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
    {field_body, 3},
    {field_condition, 1},
  [7] =
    {field_alternative, 4},
    {field_condition, 2},
  [9] =
    {field_condition, 2},
    {field_consequence, 4},
  [11] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [13] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [16] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [19] =
    {field_consequence, 3},
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
  [42] = 42,
  [43] = 7,
  [44] = 44,
  [45] = 45,
  [46] = 7,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 44,
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
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 68,
  [86] = 72,
  [87] = 87,
  [88] = 74,
  [89] = 78,
  [90] = 72,
  [91] = 91,
  [92] = 92,
  [93] = 68,
  [94] = 74,
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
  [108] = 96,
  [109] = 109,
  [110] = 110,
  [111] = 105,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 99,
  [116] = 116,
  [117] = 101,
  [118] = 97,
  [119] = 107,
  [120] = 97,
  [121] = 100,
  [122] = 103,
  [123] = 123,
  [124] = 101,
  [125] = 125,
  [126] = 104,
  [127] = 110,
  [128] = 99,
  [129] = 95,
  [130] = 130,
  [131] = 95,
  [132] = 132,
  [133] = 107,
  [134] = 134,
  [135] = 135,
  [136] = 110,
  [137] = 100,
  [138] = 103,
  [139] = 105,
  [140] = 104,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 148,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 148,
  [157] = 123,
  [158] = 158,
  [159] = 116,
  [160] = 7,
  [161] = 155,
  [162] = 152,
  [163] = 163,
  [164] = 153,
  [165] = 114,
  [166] = 166,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 172,
  [179] = 174,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 173,
  [186] = 186,
  [187] = 187,
  [188] = 183,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 172,
  [196] = 174,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 180,
  [202] = 202,
  [203] = 173,
  [204] = 204,
  [205] = 205,
  [206] = 187,
  [207] = 193,
  [208] = 172,
  [209] = 209,
  [210] = 173,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 171,
  [217] = 217,
  [218] = 217,
  [219] = 171,
  [220] = 212,
  [221] = 171,
  [222] = 222,
  [223] = 217,
  [224] = 224,
  [225] = 193,
  [226] = 226,
  [227] = 212,
  [228] = 187,
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
  [266] = 97,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 101,
  [272] = 272,
  [273] = 273,
  [274] = 99,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 251,
  [282] = 282,
  [283] = 283,
  [284] = 268,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 245,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 251,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 245,
  [309] = 309,
  [310] = 295,
  [311] = 301,
  [312] = 297,
  [313] = 299,
  [314] = 300,
  [315] = 301,
  [316] = 251,
  [317] = 300,
  [318] = 299,
  [319] = 245,
  [320] = 299,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 285,
  [325] = 229,
  [326] = 289,
  [327] = 296,
  [328] = 298,
  [329] = 329,
  [330] = 297,
  [331] = 285,
  [332] = 229,
  [333] = 289,
  [334] = 295,
  [335] = 285,
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
      if (eof) ADVANCE(355);
      if (lookahead == '\t') ADVANCE(697);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == 'W') ADVANCE(85);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '}') ADVANCE(385);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(697);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(700);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(697);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '=') ADVANCE(386);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(697);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '=') ADVANCE(387);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(699);
      if (lookahead == '#') ADVANCE(695);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(444);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '}') ADVANCE(385);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(696);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(698);
      if (lookahead == ' ') ADVANCE(442);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(699);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(443);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(449);
      if (lookahead == ' ') ADVANCE(445);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == ']') ADVANCE(394);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ']') ADVANCE(411);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ']') ADVANCE(400);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == ']') ADVANCE(406);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ']') ADVANCE(403);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == ']') ADVANCE(414);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == ']') ADVANCE(397);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == ']') ADVANCE(391);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(322);
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
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == '.') ADVANCE(465);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(477);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(479);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(480);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '[') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '[') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(481);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(483);
      if (lookahead == 'W') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '$') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(388);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(358);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(381);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(409);
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
      if (lookahead == '*') ADVANCE(575);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(576);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(577);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(438);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(421);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(426);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(431);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(436);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(437);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'F') ADVANCE(419);
      if (lookahead == 'N') ADVANCE(435);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(423);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'H') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == 'X') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'M') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(417);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 96:
      if (lookahead == 'P') ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(429);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'Y') ADVANCE(427);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(394);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(411);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(400);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(406);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(403);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(414);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(397);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(391);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(396);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 117:
      if (lookahead == ']') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 119:
      if (lookahead == ']') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 121:
      if (lookahead == ']') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(405);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(393);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 127:
      if (lookahead == ']') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(416);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(384);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(384);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(447);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(447);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(446);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(446);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(493);
      END_STATE();
    case 139:
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(589);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 140:
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 141:
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 142:
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(590);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(594);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 143:
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 144:
      if (lookahead == '{') ADVANCE(581);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 171:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 172:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 181:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 182:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 212:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 217:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 225:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 226:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 228:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 230:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 233:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 235:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 236:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 237:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 238:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 266:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 267:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 268:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 269:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 281:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 282:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(225);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 294:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 295:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 297:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 298:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 299:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 321:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 327:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 328:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 329:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 330:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 331:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 332:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 333:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 334:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 335:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 336:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 337:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 338:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 339:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 340:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 341:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 342:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 343:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(256);
      END_STATE();
    case 344:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(244);
      END_STATE();
    case 345:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 346:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 347:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(661);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 348:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 349:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(493);
      END_STATE();
    case 350:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(581);
      END_STATE();
    case 351:
      if (eof) ADVANCE(355);
      if (lookahead == '\t') ADVANCE(696);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(701);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '*') ADVANCE(457);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 352:
      if (eof) ADVANCE(355);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(250);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 353:
      if (eof) ADVANCE(355);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '*') ADVANCE(457);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 354:
      if (eof) ADVANCE(355);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(361);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(697);
      if (lookahead == '#') ADVANCE(695);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(697);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(699);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(695);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(689);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(689);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(689);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == ' ') ADVANCE(692);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(690);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == ' ') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(690);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(690);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(458);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '*') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'C') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(487);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'F') ADVANCE(420);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(475);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'L') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'L') ADVANCE(486);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'N') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == 'X') ADVANCE(467);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'N') ADVANCE(468);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(484);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(490);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == 'Y') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '{') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(569);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(569);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(569);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(569);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(569);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(569);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(569);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(569);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(569);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(569);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(569);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(569);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(569);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(569);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(569);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(569);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(569);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(569);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(569);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(569);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(569);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(569);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(569);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(501);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '{') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(144);
      if (lookahead != 0) ADVANCE(661);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(661);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(661);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(661);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(661);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(661);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(661);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(661);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(661);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(661);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(661);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(661);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(661);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(661);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(661);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(661);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(661);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(661);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(688);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(661);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(661);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(661);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(661);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(661);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(661);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(661);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(661);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(661);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(661);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == ']') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == ']') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(569);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(142);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(569);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(502);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == ']') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == ']') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == ']') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == ']') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ']') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ']') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ']') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(144);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead == '{') ADVANCE(695);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '{') ADVANCE(695);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(690);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(690);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(695);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(695);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(703);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(697);
      if (lookahead == '#') ADVANCE(695);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(703);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(697);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(705);
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
  [1] = {.lex_state = 354},
  [2] = {.lex_state = 352},
  [3] = {.lex_state = 352},
  [4] = {.lex_state = 352},
  [5] = {.lex_state = 352},
  [6] = {.lex_state = 352},
  [7] = {.lex_state = 352},
  [8] = {.lex_state = 352},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 351},
  [17] = {.lex_state = 351},
  [18] = {.lex_state = 351},
  [19] = {.lex_state = 351},
  [20] = {.lex_state = 353},
  [21] = {.lex_state = 353},
  [22] = {.lex_state = 352},
  [23] = {.lex_state = 353},
  [24] = {.lex_state = 353},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 353},
  [27] = {.lex_state = 352},
  [28] = {.lex_state = 352},
  [29] = {.lex_state = 353},
  [30] = {.lex_state = 353},
  [31] = {.lex_state = 353},
  [32] = {.lex_state = 353},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 353},
  [35] = {.lex_state = 352},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 352},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 351},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 351},
  [43] = {.lex_state = 351},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 353},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 353},
  [56] = {.lex_state = 352},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 353},
  [62] = {.lex_state = 352},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 8},
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
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
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
  [285] = {.lex_state = 46},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 46},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 46},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 46},
  [325] = {.lex_state = 46},
  [326] = {.lex_state = 46},
  [327] = {.lex_state = 46},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 46},
  [332] = {.lex_state = 46},
  [333] = {.lex_state = 46},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 46},
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
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_INRANGE] = ACTIONS(1),
    [anon_sym_INENUMERATE] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(263),
    [sym_section] = STATE(36),
    [sym_settings_section] = STATE(102),
    [sym_variables_section] = STATE(102),
    [sym_keywords_section] = STATE(102),
    [sym_test_cases_section] = STATE(102),
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
    ACTIONS(42), 1,
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
  [270] = 11,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    STATE(304), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [317] = 11,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    STATE(307), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(70), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [364] = 13,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_END,
    ACTIONS(74), 1,
      anon_sym_ELSEIF,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    STATE(291), 1,
      sym_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [411] = 12,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_END,
    ACTIONS(80), 1,
      anon_sym_EXCEPT,
    STATE(291), 1,
      sym_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [455] = 11,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_ellipses,
    STATE(291), 1,
      sym_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [496] = 11,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_END,
    STATE(291), 1,
      sym_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [537] = 10,
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
      anon_sym_FOR,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    STATE(291), 1,
      sym_statement,
    STATE(306), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [575] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym__separator,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(94), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(88), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [605] = 8,
    ACTIONS(68), 1,
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
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(98), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [635] = 8,
    ACTIONS(68), 1,
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
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(111), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [665] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      sym__separator,
    ACTIONS(128), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(124), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [695] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(138), 1,
      sym__line_break,
    STATE(26), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(132), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [722] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym_text_chunk,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    ACTIONS(150), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(142), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [749] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(157), 1,
      sym__line_break,
    STATE(28), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [774] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(30), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(161), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [801] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(169), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [828] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      aux_sym_settings_section_token1,
    ACTIONS(178), 1,
      aux_sym_variables_section_token1,
    ACTIONS(181), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(184), 1,
      aux_sym_test_cases_section_token1,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(102), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [857] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(189), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [934] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym__line_break,
    STATE(34), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(201), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [961] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(201), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [988] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym_text_chunk,
    ACTIONS(214), 1,
      aux_sym__whitespace_token1,
    ACTIONS(217), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(209), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1015] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(132), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1042] = 8,
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
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(102), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1071] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(205), 1,
      sym__line_break,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(224), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      aux_sym__whitespace_token1,
    ACTIONS(234), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1123] = 8,
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
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(102), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1152] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1177] = 8,
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
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(102), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1206] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__separator,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(98), 1,
      aux_sym_if_statement_repeat1,
    STATE(109), 1,
      sym_block,
    STATE(175), 1,
      sym_else_statement,
    STATE(287), 1,
      sym_elseif_statement,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1238] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1255] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(251), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(132), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(135), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1282] = 3,
    ACTIONS(68), 1,
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
  [1299] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
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
  [1316] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(191), 1,
      sym_arguments,
    ACTIONS(257), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1340] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(268), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(270), 1,
      sym_text_chunk,
    STATE(211), 1,
      sym_argument,
    STATE(68), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1364] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1380] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(268), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(270), 1,
      sym_text_chunk,
    STATE(224), 1,
      sym_argument,
    STATE(68), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1404] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(268), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(270), 1,
      sym_text_chunk,
    STATE(204), 1,
      sym_argument,
    STATE(68), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1428] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(276), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(278), 1,
      sym_text_chunk,
    STATE(238), 1,
      sym_argument,
    STATE(93), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1452] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(268), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(270), 1,
      sym_text_chunk,
    STATE(205), 1,
      sym_argument,
    STATE(68), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1476] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(282), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(284), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(286), 1,
      sym_text_chunk,
    STATE(231), 1,
      sym_argument,
    STATE(85), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1500] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(276), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(278), 1,
      sym_text_chunk,
    STATE(205), 1,
      sym_argument,
    STATE(93), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1524] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_IN,
    ACTIONS(292), 1,
      anon_sym_INRANGE,
    ACTIONS(294), 1,
      anon_sym_INENUMERATE,
    STATE(305), 1,
      sym_scalar_variable,
    STATE(288), 3,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
  [1548] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(276), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(278), 1,
      sym_text_chunk,
    STATE(239), 1,
      sym_argument,
    STATE(93), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1572] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(300), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1604] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__separator,
    ACTIONS(309), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
    STATE(191), 1,
      sym_arguments,
    ACTIONS(304), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(114), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1628] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(268), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(270), 1,
      sym_text_chunk,
    STATE(170), 1,
      sym_argument,
    STATE(68), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1652] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(312), 1,
      sym_ellipses,
    ACTIONS(314), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(269), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1678] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(292), 1,
      sym_arguments,
    ACTIONS(317), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1702] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      aux_sym__whitespace_token1,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1734] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(329), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(241), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1757] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(329), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(237), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1780] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(331), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(250), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(329), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(199), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1826] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(334), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(182), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1849] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(336), 1,
      anon_sym_,
    ACTIONS(338), 1,
      sym_text_chunk,
    ACTIONS(340), 2,
      sym__separator,
      sym__line_break,
    STATE(74), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1870] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    STATE(232), 1,
      sym_inline_statement,
    STATE(176), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1891] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(344), 1,
      anon_sym_RETURN,
    ACTIONS(346), 1,
      sym_text_chunk,
    STATE(226), 1,
      sym_inline_statement,
    STATE(176), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1912] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__separator,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(348), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(55), 1,
      sym_test_case_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1935] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(356), 1,
      sym_text_chunk,
    ACTIONS(359), 2,
      sym__separator,
      sym__line_break,
    STATE(72), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1956] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(344), 1,
      anon_sym_RETURN,
    ACTIONS(346), 1,
      sym_text_chunk,
    STATE(163), 1,
      sym_inline_statement,
    STATE(176), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1977] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(336), 1,
      anon_sym_,
    ACTIONS(361), 1,
      sym_text_chunk,
    ACTIONS(363), 2,
      sym__separator,
      sym__line_break,
    STATE(72), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1998] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(126), 1,
      sym__separator,
    ACTIONS(365), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(61), 1,
      sym_keyword_definition_body,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__separator,
    ACTIONS(370), 1,
      aux_sym__whitespace_token1,
    ACTIONS(373), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(76), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(278), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2061] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym__separator,
    ACTIONS(379), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
    STATE(213), 1,
      sym_arguments,
    STATE(114), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(382), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(283), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2101] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(329), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__separator,
    ACTIONS(387), 1,
      sym__line_break,
    STATE(96), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      sym_arguments,
    STATE(114), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(323), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(177), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2201] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(393), 1,
      anon_sym_,
    ACTIONS(395), 1,
      sym_text_chunk,
    STATE(88), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2221] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__line_break,
    ACTIONS(397), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(400), 1,
      anon_sym_,
    ACTIONS(403), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(240), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2261] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(363), 1,
      sym__separator,
    ACTIONS(393), 1,
      anon_sym_,
    ACTIONS(406), 1,
      sym_text_chunk,
    STATE(90), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(213), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2301] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__separator,
    ACTIONS(411), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(414), 1,
      anon_sym_,
    ACTIONS(417), 1,
      sym_text_chunk,
    STATE(90), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(420), 1,
      sym__separator,
    ACTIONS(423), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(76), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(321), 1,
      sym_arguments,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2361] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(340), 1,
      sym__line_break,
    ACTIONS(425), 1,
      anon_sym_,
    ACTIONS(427), 1,
      sym_text_chunk,
    STATE(94), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2381] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(363), 1,
      sym__line_break,
    ACTIONS(425), 1,
      anon_sym_,
    ACTIONS(429), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2401] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(433), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2414] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__separator,
    ACTIONS(438), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    STATE(123), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2431] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(443), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_if_statement_repeat1,
    STATE(143), 1,
      sym__indentation,
    STATE(190), 1,
      sym_else_statement,
    STATE(287), 1,
      sym_elseif_statement,
  [2463] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(449), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2476] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2489] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2513] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2526] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2539] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(359), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_if_statement_repeat1,
    STATE(154), 1,
      sym__indentation,
    STATE(209), 1,
      sym_else_statement,
    STATE(287), 1,
      sym_elseif_statement,
  [2571] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(475), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(477), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    STATE(157), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2601] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__separator,
    STATE(106), 1,
      aux_sym_if_statement_repeat1,
    STATE(147), 1,
      sym__indentation,
    STATE(184), 1,
      sym_else_statement,
    STATE(287), 1,
      sym_elseif_statement,
  [2620] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2633] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_ELSEIF,
    ACTIONS(488), 1,
      anon_sym_ELSE,
    STATE(202), 1,
      sym_inline_elseif_statement,
    STATE(261), 1,
      sym_inline_else_statement,
  [2661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(490), 1,
      sym__line_break,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
    STATE(234), 1,
      sym_arguments_without_continuation,
  [2677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym__line_break,
    ACTIONS(492), 1,
      sym__separator,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2691] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(449), 2,
      anon_sym_,
      sym__separator,
  [2703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__separator,
    ACTIONS(496), 1,
      sym__line_break,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2717] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 2,
      anon_sym_,
      sym__separator,
  [2729] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(443), 2,
      anon_sym_,
      sym__separator,
  [2741] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(475), 2,
      anon_sym_,
      sym__separator,
  [2753] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(443), 2,
      anon_sym_,
      sym__line_break,
  [2765] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 2,
      anon_sym_,
      sym__line_break,
  [2777] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 2,
      anon_sym_,
      sym__line_break,
  [2789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__separator,
    ACTIONS(501), 1,
      sym__line_break,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2803] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 2,
      anon_sym_,
      sym__line_break,
  [2815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym__separator,
    STATE(282), 1,
      sym__indentation,
    STATE(125), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2829] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 2,
      anon_sym_,
      sym__line_break,
  [2841] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 2,
      anon_sym_,
      sym__line_break,
  [2853] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(449), 2,
      anon_sym_,
      sym__line_break,
  [2865] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(433), 2,
      anon_sym_,
      sym__separator,
  [2877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_ELSEIF,
    ACTIONS(488), 1,
      anon_sym_ELSE,
    STATE(202), 1,
      sym_inline_elseif_statement,
    STATE(248), 1,
      sym_inline_else_statement,
  [2893] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(433), 2,
      anon_sym_,
      sym__line_break,
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__separator,
    STATE(186), 1,
      sym__indentation,
    STATE(134), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2919] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(475), 2,
      anon_sym_,
      sym__line_break,
  [2931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym__separator,
    STATE(198), 1,
      sym__indentation,
    STATE(125), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__separator,
    STATE(186), 1,
      sym__indentation,
    STATE(125), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2959] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 2,
      anon_sym_,
      sym__separator,
  [2971] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 2,
      anon_sym_,
      sym__separator,
  [2983] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(463), 2,
      anon_sym_,
      sym__separator,
  [2995] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(469), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3007] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(467), 2,
      anon_sym_,
      sym__separator,
  [3019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_if_statement_repeat1,
    STATE(253), 1,
      sym__indentation,
    STATE(287), 1,
      sym_elseif_statement,
  [3035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
    STATE(322), 1,
      sym_arguments_without_continuation,
  [3048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(514), 1,
      anon_sym_END,
    ACTIONS(516), 1,
      anon_sym_ELSEIF,
  [3061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__separator,
    ACTIONS(521), 1,
      sym__line_break,
    STATE(164), 1,
      aux_sym_arguments_repeat1,
  [3074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(521), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__separator,
    ACTIONS(526), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(516), 1,
      anon_sym_ELSEIF,
    ACTIONS(528), 1,
      anon_sym_END,
  [3113] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(530), 1,
      sym_text_chunk,
    STATE(139), 1,
      sym_scalar_variable,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__separator,
    ACTIONS(535), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_inline_if_statement_repeat1,
  [3139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__separator,
    ACTIONS(539), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_inline_if_statement_repeat1,
  [3152] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(541), 1,
      sym_text_chunk,
    STATE(111), 1,
      sym_scalar_variable,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(543), 1,
      sym__line_break,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(543), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(516), 1,
      anon_sym_ELSEIF,
    ACTIONS(545), 1,
      anon_sym_END,
  [3204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__separator,
    ACTIONS(550), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3217] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(552), 1,
      sym_text_chunk,
    STATE(105), 1,
      sym_scalar_variable,
  [3230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(557), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(550), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__line_break,
    ACTIONS(562), 1,
      sym__separator,
    STATE(155), 1,
      aux_sym_arguments_repeat1,
  [3302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__separator,
    ACTIONS(567), 1,
      sym__line_break,
    STATE(150), 1,
      aux_sym_inline_if_statement_repeat1,
  [3315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__line_break,
    ACTIONS(562), 1,
      sym__separator,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__line_break,
    ACTIONS(569), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_ellipses,
    ACTIONS(575), 1,
      sym__separator,
    STATE(284), 1,
      sym__indentation,
  [3363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_ellipses,
    ACTIONS(577), 1,
      sym__separator,
    STATE(268), 1,
      sym__indentation,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    STATE(214), 1,
      aux_sym_for_statement_repeat1,
  [3386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__separator,
    ACTIONS(583), 1,
      sym__line_break,
  [3396] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 1,
      sym_variable_name,
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_,
  [3416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(595), 1,
      anon_sym_,
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_,
  [3436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__separator,
    STATE(276), 1,
      sym__indentation,
  [3446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__separator,
    ACTIONS(605), 1,
      sym__line_break,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
  [3466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      anon_sym_,
  [3476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      anon_sym_,
  [3486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 1,
      anon_sym_,
  [3496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_,
  [3506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__separator,
    STATE(280), 1,
      sym__indentation,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__separator,
    ACTIONS(631), 1,
      sym__line_break,
  [3526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__separator,
    STATE(259), 1,
      sym__indentation,
  [3536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_,
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_END,
    ACTIONS(641), 1,
      anon_sym_EXCEPT,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      anon_sym_,
  [3566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__line_break,
    ACTIONS(647), 1,
      sym__separator,
  [3576] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_settings_section_token2,
    ACTIONS(651), 1,
      sym__line_break,
  [3586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__separator,
    STATE(256), 1,
      sym__indentation,
  [3596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__separator,
    ACTIONS(657), 1,
      sym__line_break,
  [3606] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(659), 1,
      aux_sym_settings_section_token2,
    ACTIONS(661), 1,
      sym__line_break,
  [3616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      anon_sym_,
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__separator,
    STATE(194), 1,
      aux_sym_for_statement_repeat1,
  [3636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_,
  [3646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_,
  [3656] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(678), 1,
      aux_sym_settings_section_token2,
    ACTIONS(680), 1,
      sym__line_break,
  [3666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_EXCEPT,
    ACTIONS(682), 1,
      anon_sym_END,
  [3676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym__separator,
    STATE(249), 1,
      sym__indentation,
  [3686] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(686), 1,
      aux_sym_settings_section_token2,
    ACTIONS(688), 1,
      sym__line_break,
  [3696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      anon_sym_,
  [3706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym__line_break,
    ACTIONS(694), 1,
      sym__separator,
  [3716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 1,
      anon_sym_,
  [3726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__separator,
    ACTIONS(702), 1,
      sym__line_break,
  [3736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
    ACTIONS(706), 1,
      sym__line_break,
  [3746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_,
  [3756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      anon_sym_,
  [3766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_,
  [3776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym__separator,
    STATE(243), 1,
      sym__indentation,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(724), 1,
      anon_sym_,
  [3796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym__line_break,
    ACTIONS(726), 1,
      sym__separator,
  [3806] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      sym_variable_name,
  [3816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__separator,
    ACTIONS(734), 1,
      sym__line_break,
  [3826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    STATE(194), 1,
      aux_sym_for_statement_repeat1,
  [3836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(305), 1,
      sym_scalar_variable,
  [3846] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_,
    ACTIONS(740), 1,
      sym_variable_name,
  [3856] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_,
    ACTIONS(744), 1,
      sym_variable_name,
  [3866] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_,
    ACTIONS(748), 1,
      sym_variable_name,
  [3876] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_,
    ACTIONS(752), 1,
      sym_variable_name,
  [3886] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_,
    ACTIONS(756), 1,
      sym_variable_name,
  [3896] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 1,
      sym_variable_name,
  [3906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_ELSEIF,
    STATE(202), 1,
      sym_inline_elseif_statement,
  [3916] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_,
    ACTIONS(764), 1,
      sym_variable_name,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym__separator,
    ACTIONS(768), 1,
      sym__line_break,
  [3936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      anon_sym_,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__separator,
    ACTIONS(776), 1,
      sym__line_break,
  [3956] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_,
    ACTIONS(780), 1,
      sym_variable_name,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(784), 1,
      anon_sym_,
  [3976] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_variable_name,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__line_break,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__separator,
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__line_break,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__line_break,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__line_break,
  [4018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__line_break,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__separator,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__line_break,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__line_break,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__line_break,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__separator,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__line_break,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_END,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__line_break,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__line_break,
  [4102] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_variable_name,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__line_break,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_END,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__separator,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__line_break,
  [4137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__line_break,
  [4144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_ELSEIF,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__line_break,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__line_break,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_END,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__line_break,
  [4179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__line_break,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_END,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__line_break,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__line_break,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__line_break,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__separator,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__separator,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__separator,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__line_break,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_ellipses,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__separator,
  [4263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__line_break,
  [4270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__separator,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__line_break,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__separator,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__separator,
  [4298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__line_break,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_END,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__line_break,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__line_break,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__line_break,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_END,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__line_break,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_EXCEPT,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__line_break,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_ellipses,
  [4368] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_variable_name,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__line_break,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__separator,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__line_break,
  [4396] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_variable_name,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__separator,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__line_break,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym__line_break,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym__line_break,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [4445] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym_variable_name,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym__line_break,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym__line_break,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__line_break,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__separator,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__line_break,
  [4522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym__line_break,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym__separator,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym__line_break,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
  [4606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
  [4620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym__line_break,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__line_break,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym__line_break,
  [4641] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_variable_name,
  [4648] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_variable_name,
  [4655] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_variable_name,
  [4662] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_variable_name,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym__line_break,
  [4683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
  [4690] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym_variable_name,
  [4697] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_variable_name,
  [4704] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_variable_name,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
  [4718] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(968), 1,
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
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 411,
  [SMALL_STATE(13)] = 455,
  [SMALL_STATE(14)] = 496,
  [SMALL_STATE(15)] = 537,
  [SMALL_STATE(16)] = 575,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 695,
  [SMALL_STATE(21)] = 722,
  [SMALL_STATE(22)] = 749,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 801,
  [SMALL_STATE(25)] = 828,
  [SMALL_STATE(26)] = 857,
  [SMALL_STATE(27)] = 884,
  [SMALL_STATE(28)] = 909,
  [SMALL_STATE(29)] = 934,
  [SMALL_STATE(30)] = 961,
  [SMALL_STATE(31)] = 988,
  [SMALL_STATE(32)] = 1015,
  [SMALL_STATE(33)] = 1042,
  [SMALL_STATE(34)] = 1071,
  [SMALL_STATE(35)] = 1098,
  [SMALL_STATE(36)] = 1123,
  [SMALL_STATE(37)] = 1152,
  [SMALL_STATE(38)] = 1177,
  [SMALL_STATE(39)] = 1206,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1255,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1299,
  [SMALL_STATE(44)] = 1316,
  [SMALL_STATE(45)] = 1340,
  [SMALL_STATE(46)] = 1364,
  [SMALL_STATE(47)] = 1380,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1428,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1476,
  [SMALL_STATE(52)] = 1500,
  [SMALL_STATE(53)] = 1524,
  [SMALL_STATE(54)] = 1548,
  [SMALL_STATE(55)] = 1572,
  [SMALL_STATE(56)] = 1588,
  [SMALL_STATE(57)] = 1604,
  [SMALL_STATE(58)] = 1628,
  [SMALL_STATE(59)] = 1652,
  [SMALL_STATE(60)] = 1678,
  [SMALL_STATE(61)] = 1702,
  [SMALL_STATE(62)] = 1718,
  [SMALL_STATE(63)] = 1734,
  [SMALL_STATE(64)] = 1757,
  [SMALL_STATE(65)] = 1780,
  [SMALL_STATE(66)] = 1803,
  [SMALL_STATE(67)] = 1826,
  [SMALL_STATE(68)] = 1849,
  [SMALL_STATE(69)] = 1870,
  [SMALL_STATE(70)] = 1891,
  [SMALL_STATE(71)] = 1912,
  [SMALL_STATE(72)] = 1935,
  [SMALL_STATE(73)] = 1956,
  [SMALL_STATE(74)] = 1977,
  [SMALL_STATE(75)] = 1998,
  [SMALL_STATE(76)] = 2021,
  [SMALL_STATE(77)] = 2041,
  [SMALL_STATE(78)] = 2061,
  [SMALL_STATE(79)] = 2081,
  [SMALL_STATE(80)] = 2101,
  [SMALL_STATE(81)] = 2121,
  [SMALL_STATE(82)] = 2141,
  [SMALL_STATE(83)] = 2161,
  [SMALL_STATE(84)] = 2181,
  [SMALL_STATE(85)] = 2201,
  [SMALL_STATE(86)] = 2221,
  [SMALL_STATE(87)] = 2241,
  [SMALL_STATE(88)] = 2261,
  [SMALL_STATE(89)] = 2281,
  [SMALL_STATE(90)] = 2301,
  [SMALL_STATE(91)] = 2321,
  [SMALL_STATE(92)] = 2341,
  [SMALL_STATE(93)] = 2361,
  [SMALL_STATE(94)] = 2381,
  [SMALL_STATE(95)] = 2401,
  [SMALL_STATE(96)] = 2414,
  [SMALL_STATE(97)] = 2431,
  [SMALL_STATE(98)] = 2444,
  [SMALL_STATE(99)] = 2463,
  [SMALL_STATE(100)] = 2476,
  [SMALL_STATE(101)] = 2489,
  [SMALL_STATE(102)] = 2502,
  [SMALL_STATE(103)] = 2513,
  [SMALL_STATE(104)] = 2526,
  [SMALL_STATE(105)] = 2539,
  [SMALL_STATE(106)] = 2552,
  [SMALL_STATE(107)] = 2571,
  [SMALL_STATE(108)] = 2584,
  [SMALL_STATE(109)] = 2601,
  [SMALL_STATE(110)] = 2620,
  [SMALL_STATE(111)] = 2633,
  [SMALL_STATE(112)] = 2645,
  [SMALL_STATE(113)] = 2661,
  [SMALL_STATE(114)] = 2677,
  [SMALL_STATE(115)] = 2691,
  [SMALL_STATE(116)] = 2703,
  [SMALL_STATE(117)] = 2717,
  [SMALL_STATE(118)] = 2729,
  [SMALL_STATE(119)] = 2741,
  [SMALL_STATE(120)] = 2753,
  [SMALL_STATE(121)] = 2765,
  [SMALL_STATE(122)] = 2777,
  [SMALL_STATE(123)] = 2789,
  [SMALL_STATE(124)] = 2803,
  [SMALL_STATE(125)] = 2815,
  [SMALL_STATE(126)] = 2829,
  [SMALL_STATE(127)] = 2841,
  [SMALL_STATE(128)] = 2853,
  [SMALL_STATE(129)] = 2865,
  [SMALL_STATE(130)] = 2877,
  [SMALL_STATE(131)] = 2893,
  [SMALL_STATE(132)] = 2905,
  [SMALL_STATE(133)] = 2919,
  [SMALL_STATE(134)] = 2931,
  [SMALL_STATE(135)] = 2945,
  [SMALL_STATE(136)] = 2959,
  [SMALL_STATE(137)] = 2971,
  [SMALL_STATE(138)] = 2983,
  [SMALL_STATE(139)] = 2995,
  [SMALL_STATE(140)] = 3007,
  [SMALL_STATE(141)] = 3019,
  [SMALL_STATE(142)] = 3035,
  [SMALL_STATE(143)] = 3048,
  [SMALL_STATE(144)] = 3061,
  [SMALL_STATE(145)] = 3074,
  [SMALL_STATE(146)] = 3087,
  [SMALL_STATE(147)] = 3100,
  [SMALL_STATE(148)] = 3113,
  [SMALL_STATE(149)] = 3126,
  [SMALL_STATE(150)] = 3139,
  [SMALL_STATE(151)] = 3152,
  [SMALL_STATE(152)] = 3165,
  [SMALL_STATE(153)] = 3178,
  [SMALL_STATE(154)] = 3191,
  [SMALL_STATE(155)] = 3204,
  [SMALL_STATE(156)] = 3217,
  [SMALL_STATE(157)] = 3230,
  [SMALL_STATE(158)] = 3241,
  [SMALL_STATE(159)] = 3254,
  [SMALL_STATE(160)] = 3265,
  [SMALL_STATE(161)] = 3276,
  [SMALL_STATE(162)] = 3289,
  [SMALL_STATE(163)] = 3302,
  [SMALL_STATE(164)] = 3315,
  [SMALL_STATE(165)] = 3328,
  [SMALL_STATE(166)] = 3339,
  [SMALL_STATE(167)] = 3350,
  [SMALL_STATE(168)] = 3363,
  [SMALL_STATE(169)] = 3376,
  [SMALL_STATE(170)] = 3386,
  [SMALL_STATE(171)] = 3396,
  [SMALL_STATE(172)] = 3406,
  [SMALL_STATE(173)] = 3416,
  [SMALL_STATE(174)] = 3426,
  [SMALL_STATE(175)] = 3436,
  [SMALL_STATE(176)] = 3446,
  [SMALL_STATE(177)] = 3456,
  [SMALL_STATE(178)] = 3466,
  [SMALL_STATE(179)] = 3476,
  [SMALL_STATE(180)] = 3486,
  [SMALL_STATE(181)] = 3496,
  [SMALL_STATE(182)] = 3506,
  [SMALL_STATE(183)] = 3516,
  [SMALL_STATE(184)] = 3526,
  [SMALL_STATE(185)] = 3536,
  [SMALL_STATE(186)] = 3546,
  [SMALL_STATE(187)] = 3556,
  [SMALL_STATE(188)] = 3566,
  [SMALL_STATE(189)] = 3576,
  [SMALL_STATE(190)] = 3586,
  [SMALL_STATE(191)] = 3596,
  [SMALL_STATE(192)] = 3606,
  [SMALL_STATE(193)] = 3616,
  [SMALL_STATE(194)] = 3626,
  [SMALL_STATE(195)] = 3636,
  [SMALL_STATE(196)] = 3646,
  [SMALL_STATE(197)] = 3656,
  [SMALL_STATE(198)] = 3666,
  [SMALL_STATE(199)] = 3676,
  [SMALL_STATE(200)] = 3686,
  [SMALL_STATE(201)] = 3696,
  [SMALL_STATE(202)] = 3706,
  [SMALL_STATE(203)] = 3716,
  [SMALL_STATE(204)] = 3726,
  [SMALL_STATE(205)] = 3736,
  [SMALL_STATE(206)] = 3746,
  [SMALL_STATE(207)] = 3756,
  [SMALL_STATE(208)] = 3766,
  [SMALL_STATE(209)] = 3776,
  [SMALL_STATE(210)] = 3786,
  [SMALL_STATE(211)] = 3796,
  [SMALL_STATE(212)] = 3806,
  [SMALL_STATE(213)] = 3816,
  [SMALL_STATE(214)] = 3826,
  [SMALL_STATE(215)] = 3836,
  [SMALL_STATE(216)] = 3846,
  [SMALL_STATE(217)] = 3856,
  [SMALL_STATE(218)] = 3866,
  [SMALL_STATE(219)] = 3876,
  [SMALL_STATE(220)] = 3886,
  [SMALL_STATE(221)] = 3896,
  [SMALL_STATE(222)] = 3906,
  [SMALL_STATE(223)] = 3916,
  [SMALL_STATE(224)] = 3926,
  [SMALL_STATE(225)] = 3936,
  [SMALL_STATE(226)] = 3946,
  [SMALL_STATE(227)] = 3956,
  [SMALL_STATE(228)] = 3966,
  [SMALL_STATE(229)] = 3976,
  [SMALL_STATE(230)] = 3983,
  [SMALL_STATE(231)] = 3990,
  [SMALL_STATE(232)] = 3997,
  [SMALL_STATE(233)] = 4004,
  [SMALL_STATE(234)] = 4011,
  [SMALL_STATE(235)] = 4018,
  [SMALL_STATE(236)] = 4025,
  [SMALL_STATE(237)] = 4032,
  [SMALL_STATE(238)] = 4039,
  [SMALL_STATE(239)] = 4046,
  [SMALL_STATE(240)] = 4053,
  [SMALL_STATE(241)] = 4060,
  [SMALL_STATE(242)] = 4067,
  [SMALL_STATE(243)] = 4074,
  [SMALL_STATE(244)] = 4081,
  [SMALL_STATE(245)] = 4088,
  [SMALL_STATE(246)] = 4095,
  [SMALL_STATE(247)] = 4102,
  [SMALL_STATE(248)] = 4109,
  [SMALL_STATE(249)] = 4116,
  [SMALL_STATE(250)] = 4123,
  [SMALL_STATE(251)] = 4130,
  [SMALL_STATE(252)] = 4137,
  [SMALL_STATE(253)] = 4144,
  [SMALL_STATE(254)] = 4151,
  [SMALL_STATE(255)] = 4158,
  [SMALL_STATE(256)] = 4165,
  [SMALL_STATE(257)] = 4172,
  [SMALL_STATE(258)] = 4179,
  [SMALL_STATE(259)] = 4186,
  [SMALL_STATE(260)] = 4193,
  [SMALL_STATE(261)] = 4200,
  [SMALL_STATE(262)] = 4207,
  [SMALL_STATE(263)] = 4214,
  [SMALL_STATE(264)] = 4221,
  [SMALL_STATE(265)] = 4228,
  [SMALL_STATE(266)] = 4235,
  [SMALL_STATE(267)] = 4242,
  [SMALL_STATE(268)] = 4249,
  [SMALL_STATE(269)] = 4256,
  [SMALL_STATE(270)] = 4263,
  [SMALL_STATE(271)] = 4270,
  [SMALL_STATE(272)] = 4277,
  [SMALL_STATE(273)] = 4284,
  [SMALL_STATE(274)] = 4291,
  [SMALL_STATE(275)] = 4298,
  [SMALL_STATE(276)] = 4305,
  [SMALL_STATE(277)] = 4312,
  [SMALL_STATE(278)] = 4319,
  [SMALL_STATE(279)] = 4326,
  [SMALL_STATE(280)] = 4333,
  [SMALL_STATE(281)] = 4340,
  [SMALL_STATE(282)] = 4347,
  [SMALL_STATE(283)] = 4354,
  [SMALL_STATE(284)] = 4361,
  [SMALL_STATE(285)] = 4368,
  [SMALL_STATE(286)] = 4375,
  [SMALL_STATE(287)] = 4382,
  [SMALL_STATE(288)] = 4389,
  [SMALL_STATE(289)] = 4396,
  [SMALL_STATE(290)] = 4403,
  [SMALL_STATE(291)] = 4410,
  [SMALL_STATE(292)] = 4417,
  [SMALL_STATE(293)] = 4424,
  [SMALL_STATE(294)] = 4431,
  [SMALL_STATE(295)] = 4438,
  [SMALL_STATE(296)] = 4445,
  [SMALL_STATE(297)] = 4452,
  [SMALL_STATE(298)] = 4459,
  [SMALL_STATE(299)] = 4466,
  [SMALL_STATE(300)] = 4473,
  [SMALL_STATE(301)] = 4480,
  [SMALL_STATE(302)] = 4487,
  [SMALL_STATE(303)] = 4494,
  [SMALL_STATE(304)] = 4501,
  [SMALL_STATE(305)] = 4508,
  [SMALL_STATE(306)] = 4515,
  [SMALL_STATE(307)] = 4522,
  [SMALL_STATE(308)] = 4529,
  [SMALL_STATE(309)] = 4536,
  [SMALL_STATE(310)] = 4543,
  [SMALL_STATE(311)] = 4550,
  [SMALL_STATE(312)] = 4557,
  [SMALL_STATE(313)] = 4564,
  [SMALL_STATE(314)] = 4571,
  [SMALL_STATE(315)] = 4578,
  [SMALL_STATE(316)] = 4585,
  [SMALL_STATE(317)] = 4592,
  [SMALL_STATE(318)] = 4599,
  [SMALL_STATE(319)] = 4606,
  [SMALL_STATE(320)] = 4613,
  [SMALL_STATE(321)] = 4620,
  [SMALL_STATE(322)] = 4627,
  [SMALL_STATE(323)] = 4634,
  [SMALL_STATE(324)] = 4641,
  [SMALL_STATE(325)] = 4648,
  [SMALL_STATE(326)] = 4655,
  [SMALL_STATE(327)] = 4662,
  [SMALL_STATE(328)] = 4669,
  [SMALL_STATE(329)] = 4676,
  [SMALL_STATE(330)] = 4683,
  [SMALL_STATE(331)] = 4690,
  [SMALL_STATE(332)] = 4697,
  [SMALL_STATE(333)] = 4704,
  [SMALL_STATE(334)] = 4711,
  [SMALL_STATE(335)] = 4718,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(87),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(251),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(302),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(302),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(113),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(281),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(244),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(281),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(247),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(251),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(35),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(168),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(45),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(167),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(13),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(219),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(156),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(72),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(316),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(45),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(167),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(45),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(167),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(168),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(216),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(151),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(86),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(168),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(171),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(148),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(90),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(45),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(167),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(168),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(167),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(167),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(282),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(253),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(45),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(222),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(45),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(168),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(168),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(45),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(215),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 16),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 17),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 18),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 14),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [850] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 8),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
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
