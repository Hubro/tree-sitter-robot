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
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 4
#define TOKEN_COUNT 57
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
  sym_ellipses = 47,
  anon_sym_ = 48,
  anon_sym_AT_LBRACE = 49,
  anon_sym_AMP_LBRACE = 50,
  sym_variable_name = 51,
  sym_text_chunk = 52,
  sym_comment = 53,
  sym__separator = 54,
  aux_sym__whitespace_token1 = 55,
  sym__line_break = 56,
  sym_source_file = 57,
  sym_section = 58,
  sym_settings_section = 59,
  sym_setting_statement = 60,
  sym_variables_section = 61,
  sym_variable_definition = 62,
  sym_keywords_section = 63,
  sym_keyword_definition = 64,
  sym_keyword_definition_body = 65,
  sym_keyword_setting = 66,
  sym_test_cases_section = 67,
  sym_test_case_definition = 68,
  sym_test_case_definition_body = 69,
  sym_test_case_setting = 70,
  sym_statement = 71,
  sym_return_statement = 72,
  sym_variable_assignment = 73,
  sym_keyword_invocation = 74,
  sym_if_statement = 75,
  sym_elseif_statement = 76,
  sym_else_statement = 77,
  sym_inline_if_statement = 78,
  sym_block = 79,
  sym_inline_elseif_statement = 80,
  sym_inline_else_statement = 81,
  sym_inline_statement = 82,
  sym_try_statement = 83,
  sym_except_statement = 84,
  sym_while_statement = 85,
  sym_for_statement = 86,
  sym__for_in = 87,
  sym__for_in_range = 88,
  sym_arguments = 89,
  sym_arguments_without_continuation = 90,
  sym_continuation = 91,
  sym_argument = 92,
  sym_scalar_variable = 93,
  sym_list_variable = 94,
  sym_dictionary_variable = 95,
  sym__indentation = 96,
  sym__empty_line = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_settings_section_repeat1 = 99,
  aux_sym_variables_section_repeat1 = 100,
  aux_sym_keywords_section_repeat1 = 101,
  aux_sym_keyword_definition_body_repeat1 = 102,
  aux_sym_test_cases_section_repeat1 = 103,
  aux_sym_test_case_definition_body_repeat1 = 104,
  aux_sym_if_statement_repeat1 = 105,
  aux_sym_inline_if_statement_repeat1 = 106,
  aux_sym_block_repeat1 = 107,
  aux_sym_try_statement_repeat1 = 108,
  aux_sym_for_statement_repeat1 = 109,
  aux_sym_arguments_repeat1 = 110,
  aux_sym_arguments_repeat2 = 111,
  aux_sym_argument_repeat1 = 112,
  alias_sym_keyword = 113,
  alias_sym_name = 114,
  alias_sym_return_value = 115,
  alias_sym_variable_list = 116,
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
  [42] = 7,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 7,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 51,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 73,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 67,
  [85] = 82,
  [86] = 64,
  [87] = 87,
  [88] = 64,
  [89] = 75,
  [90] = 90,
  [91] = 91,
  [92] = 73,
  [93] = 93,
  [94] = 94,
  [95] = 94,
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
  [110] = 103,
  [111] = 96,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 107,
  [120] = 101,
  [121] = 97,
  [122] = 122,
  [123] = 109,
  [124] = 108,
  [125] = 97,
  [126] = 104,
  [127] = 105,
  [128] = 103,
  [129] = 100,
  [130] = 109,
  [131] = 108,
  [132] = 132,
  [133] = 107,
  [134] = 96,
  [135] = 135,
  [136] = 104,
  [137] = 101,
  [138] = 138,
  [139] = 105,
  [140] = 100,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 116,
  [150] = 143,
  [151] = 151,
  [152] = 144,
  [153] = 146,
  [154] = 7,
  [155] = 155,
  [156] = 141,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 147,
  [162] = 162,
  [163] = 145,
  [164] = 164,
  [165] = 114,
  [166] = 115,
  [167] = 146,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 170,
  [176] = 176,
  [177] = 177,
  [178] = 171,
  [179] = 172,
  [180] = 170,
  [181] = 181,
  [182] = 182,
  [183] = 168,
  [184] = 184,
  [185] = 185,
  [186] = 182,
  [187] = 187,
  [188] = 177,
  [189] = 189,
  [190] = 168,
  [191] = 184,
  [192] = 185,
  [193] = 193,
  [194] = 182,
  [195] = 195,
  [196] = 185,
  [197] = 187,
  [198] = 198,
  [199] = 199,
  [200] = 177,
  [201] = 168,
  [202] = 202,
  [203] = 184,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 182,
  [209] = 209,
  [210] = 171,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 172,
  [216] = 216,
  [217] = 170,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 187,
  [223] = 195,
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
  [264] = 97,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 101,
  [270] = 270,
  [271] = 271,
  [272] = 107,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 250,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 282,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 284,
  [294] = 294,
  [295] = 229,
  [296] = 278,
  [297] = 270,
  [298] = 267,
  [299] = 266,
  [300] = 250,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 291,
  [305] = 305,
  [306] = 291,
  [307] = 307,
  [308] = 284,
  [309] = 309,
  [310] = 229,
  [311] = 270,
  [312] = 267,
  [313] = 266,
  [314] = 250,
  [315] = 315,
  [316] = 316,
  [317] = 291,
  [318] = 270,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 319,
  [323] = 323,
  [324] = 251,
  [325] = 247,
  [326] = 323,
  [327] = 327,
  [328] = 328,
  [329] = 319,
  [330] = 323,
  [331] = 251,
  [332] = 332,
  [333] = 319,
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
      if (eof) ADVANCE(347);
      if (lookahead == '\t') ADVANCE(688);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '&') ADVANCE(126);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '=') ADVANCE(378);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '}') ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(688);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(688);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '=') ADVANCE(379);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(686);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '}') ADVANCE(377);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(687);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(689);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(690);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(441);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(218);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == ']') ADVANCE(386);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ']') ADVANCE(403);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ']') ADVANCE(392);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == ']') ADVANCE(398);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == ']') ADVANCE(395);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == ']') ADVANCE(406);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == ']') ADVANCE(389);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ']') ADVANCE(383);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(314);
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
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '.') ADVANCE(456);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(471);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '[') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '[') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(441);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(380);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(350);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(373);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(401);
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
      if (lookahead == '*') ADVANCE(566);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(568);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(429);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(413);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(418);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(423);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(428);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(411);
      if (lookahead == 'N') ADVANCE(427);
      END_STATE();
    case 79:
      if (lookahead == 'F') ADVANCE(415);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'H') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(570);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(72);
      if (lookahead == 'X') ADVANCE(71);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(409);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 90:
      if (lookahead == 'P') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(421);
      END_STATE();
    case 98:
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'Y') ADVANCE(419);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(386);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(403);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(392);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(398);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(395);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(406);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(389);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(383);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(405);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(397);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 117:
      if (lookahead == ']') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == ']') ADVANCE(385);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 119:
      if (lookahead == ']') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == ']') ADVANCE(394);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 121:
      if (lookahead == ']') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(391);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(376);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(376);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(438);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(438);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(437);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(437);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(484);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(608);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(608);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 134:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 135:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(572);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 161:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 162:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 168:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 214:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 215:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 216:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 217:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 218:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 223:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 227:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 228:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 229:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 230:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 255:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 256:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 257:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 258:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 259:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 260:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 261:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(295);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(368);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 324:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 325:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 327:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 328:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 329:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 330:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 331:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 332:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 333:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 334:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 335:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(248);
      END_STATE();
    case 336:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(236);
      END_STATE();
    case 337:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 338:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 339:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(652);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 340:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 341:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(484);
      END_STATE();
    case 342:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(572);
      END_STATE();
    case 343:
      if (eof) ADVANCE(347);
      if (lookahead == '\t') ADVANCE(687);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(692);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '*') ADVANCE(448);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 344:
      if (eof) ADVANCE(347);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 345:
      if (eof) ADVANCE(347);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '*') ADVANCE(448);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 346:
      if (eof) ADVANCE(347);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(441);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(686);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '{') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(680);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(680);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(680);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(683);
      if (lookahead == '{') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(681);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(681);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(681);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(449);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '*') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '.') ADVANCE(457);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '.') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'C') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'D') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'E') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(412);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'H') ADVANCE(466);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'L') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'L') ADVANCE(477);
      if (lookahead == 'N') ADVANCE(459);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'N') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'N') ADVANCE(459);
      if (lookahead == 'X') ADVANCE(458);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'N') ADVANCE(459);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(475);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'P') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(481);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'S') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'U') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == 'Y') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '{') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(560);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(560);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(560);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(560);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(560);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(560);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(560);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(560);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(560);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(560);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(560);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(560);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(560);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(560);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(560);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(560);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(560);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(560);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(560);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(560);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(519);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == 'F') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '{') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(136);
      if (lookahead != 0) ADVANCE(652);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(652);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(652);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(652);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(652);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(652);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(652);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(652);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(652);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(652);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(652);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(652);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(652);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(652);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(652);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(652);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(652);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(652);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(652);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(652);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(652);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(652);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(652);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(652);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(652);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(652);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(652);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(652);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(652);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(652);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(652);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == ']') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(519);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (lookahead != 0) ADVANCE(560);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(560);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(494);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(498);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(496);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ']') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == ']') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == ']') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == ']') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == ']') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == ']') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == ']') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == ']') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == ']') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == '{') ADVANCE(686);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(572);
      if (lookahead == '{') ADVANCE(686);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '{') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(681);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(681);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(694);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(694);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(696);
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
  [1] = {.lex_state = 346},
  [2] = {.lex_state = 344},
  [3] = {.lex_state = 344},
  [4] = {.lex_state = 344},
  [5] = {.lex_state = 344},
  [6] = {.lex_state = 344},
  [7] = {.lex_state = 344},
  [8] = {.lex_state = 344},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 343},
  [17] = {.lex_state = 343},
  [18] = {.lex_state = 343},
  [19] = {.lex_state = 343},
  [20] = {.lex_state = 345},
  [21] = {.lex_state = 345},
  [22] = {.lex_state = 345},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 345},
  [25] = {.lex_state = 344},
  [26] = {.lex_state = 345},
  [27] = {.lex_state = 344},
  [28] = {.lex_state = 345},
  [29] = {.lex_state = 345},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 345},
  [32] = {.lex_state = 345},
  [33] = {.lex_state = 345},
  [34] = {.lex_state = 344},
  [35] = {.lex_state = 344},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 344},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 343},
  [41] = {.lex_state = 343},
  [42] = {.lex_state = 343},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 345},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 345},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 344},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 344},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 345},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 13},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 46},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 9},
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
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 46},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 46},
  [323] = {.lex_state = 46},
  [324] = {.lex_state = 46},
  [325] = {.lex_state = 46},
  [326] = {.lex_state = 46},
  [327] = {.lex_state = 9},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 46},
  [330] = {.lex_state = 46},
  [331] = {.lex_state = 46},
  [332] = {.lex_state = 9},
  [333] = {.lex_state = 46},
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
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(261),
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
    STATE(321), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(257), 8,
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
    STATE(255), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(70), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(257), 8,
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
    STATE(240), 1,
      sym_statement,
    STATE(257), 8,
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
    STATE(240), 1,
      sym_statement,
    STATE(257), 8,
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
    STATE(240), 1,
      sym_statement,
    STATE(257), 8,
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
    STATE(240), 1,
      sym_statement,
    STATE(257), 8,
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
    STATE(240), 1,
      sym_statement,
    STATE(257), 8,
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
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(88), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [605] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__separator,
    ACTIONS(102), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(98), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [635] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(111), 1,
      aux_sym__whitespace_token1,
    ACTIONS(114), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(106), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [665] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym__separator,
    ACTIONS(124), 1,
      aux_sym__whitespace_token1,
    ACTIONS(127), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(119), 5,
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
  [749] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(155), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      aux_sym_settings_section_token1,
    ACTIONS(164), 1,
      aux_sym_variables_section_token1,
    ACTIONS(167), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(170), 1,
      aux_sym_test_cases_section_token1,
    STATE(23), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(102), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [805] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      sym_text_chunk,
    ACTIONS(179), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(175), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [832] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(185), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
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
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(193), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [909] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(177), 1,
      sym_text_chunk,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(197), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [936] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(177), 1,
      sym_text_chunk,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(197), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [963] = 8,
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
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(102), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [992] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_text_chunk,
    ACTIONS(212), 1,
      aux_sym__whitespace_token1,
    ACTIONS(215), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(207), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1019] = 7,
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
  [1046] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(177), 1,
      sym_text_chunk,
    ACTIONS(201), 1,
      sym__line_break,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(220), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      aux_sym__whitespace_token1,
    ACTIONS(230), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1098] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      sym__line_break,
    STATE(27), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(233), 5,
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
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
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
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(193), 1,
      sym__line_break,
    STATE(34), 3,
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
    STATE(23), 2,
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
      sym_block,
    STATE(99), 1,
      aux_sym_if_statement_repeat1,
    STATE(176), 1,
      sym_else_statement,
    STATE(327), 1,
      sym_elseif_statement,
    STATE(90), 2,
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
  [1255] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1272] = 3,
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
  [1289] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(255), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(132), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(135), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1316] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(261), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(263), 1,
      sym_text_chunk,
    STATE(216), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1340] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(261), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(263), 1,
      sym_text_chunk,
    STATE(209), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__separator,
    ACTIONS(270), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(226), 1,
      sym_arguments,
    ACTIONS(265), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1388] = 3,
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
  [1404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(277), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(226), 1,
      sym_arguments,
    ACTIONS(273), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1428] = 7,
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
    STATE(242), 1,
      sym_argument,
    STATE(76), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1452] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      sym_text_chunk,
    STATE(235), 1,
      sym_argument,
    STATE(84), 3,
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
    STATE(212), 1,
      sym_argument,
    STATE(76), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1500] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(261), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(263), 1,
      sym_text_chunk,
    STATE(227), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1524] = 3,
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
  [1540] = 7,
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
    STATE(76), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1564] = 3,
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
  [1580] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(261), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(263), 1,
      sym_text_chunk,
    STATE(212), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1620] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(261), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(263), 1,
      sym_text_chunk,
    STATE(198), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1644] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(308), 1,
      sym_ellipses,
    ACTIONS(310), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(290), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1670] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(245), 1,
      sym_arguments,
    ACTIONS(313), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1694] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1710] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(321), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(232), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1733] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RETURN,
    ACTIONS(327), 1,
      sym_text_chunk,
    STATE(162), 1,
      sym_inline_statement,
    STATE(174), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1754] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(332), 1,
      anon_sym_,
    ACTIONS(335), 1,
      sym_text_chunk,
    ACTIONS(338), 2,
      sym__separator,
      sym__line_break,
    STATE(64), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(340), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(263), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1798] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(321), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(199), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1821] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(345), 1,
      sym_text_chunk,
    ACTIONS(347), 2,
      sym__separator,
      sym__line_break,
    STATE(73), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1842] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RETURN,
    ACTIONS(327), 1,
      sym_text_chunk,
    STATE(224), 1,
      sym_inline_statement,
    STATE(174), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1863] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    STATE(236), 1,
      sym_inline_statement,
    STATE(174), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1884] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(349), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(218), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(53), 1,
      sym_test_case_definition_body,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1930] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(321), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(241), 1,
      sym_block,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1953] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(353), 1,
      sym_text_chunk,
    ACTIONS(355), 2,
      sym__separator,
      sym__line_break,
    STATE(64), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__separator,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(61), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1997] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__separator,
    ACTIONS(362), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(206), 1,
      sym_arguments,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2017] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      sym__line_break,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(367), 1,
      sym_text_chunk,
    STATE(92), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(305), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__separator,
    ACTIONS(372), 1,
      aux_sym__whitespace_token1,
    ACTIONS(375), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(78), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(378), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(316), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2097] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(355), 1,
      sym__separator,
    ACTIONS(380), 1,
      anon_sym_,
    ACTIONS(382), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(280), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(384), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(173), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2177] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      sym__separator,
    ACTIONS(380), 1,
      anon_sym_,
    ACTIONS(387), 1,
      sym_text_chunk,
    STATE(80), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2197] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__separator,
    ACTIONS(392), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(173), 1,
      sym_arguments,
    STATE(116), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2217] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__separator,
    ACTIONS(395), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(398), 1,
      anon_sym_,
    ACTIONS(401), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(406), 1,
      anon_sym_IN,
    ACTIONS(408), 1,
      anon_sym_INRANGE,
    STATE(254), 1,
      sym_scalar_variable,
    STATE(328), 2,
      sym__for_in,
      sym__for_in_range,
  [2257] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__line_break,
    ACTIONS(410), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(413), 1,
      anon_sym_,
    ACTIONS(416), 1,
      sym_text_chunk,
    STATE(88), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(419), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(206), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2297] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(422), 1,
      sym__separator,
    ACTIONS(425), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(78), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2317] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(243), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2337] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(355), 1,
      sym__line_break,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(427), 1,
      sym_text_chunk,
    STATE(88), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(95), 1,
      aux_sym_arguments_repeat1,
    STATE(271), 1,
      sym_arguments,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__separator,
    ACTIONS(432), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
    STATE(115), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(435), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
    STATE(166), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2411] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(440), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2424] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__separator,
    STATE(106), 1,
      aux_sym_if_statement_repeat1,
    STATE(158), 1,
      sym__indentation,
    STATE(189), 1,
      sym_else_statement,
    STATE(327), 1,
      sym_elseif_statement,
  [2456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__separator,
    STATE(113), 1,
      aux_sym_if_statement_repeat1,
    STATE(157), 1,
      sym__indentation,
    STATE(193), 1,
      sym_else_statement,
    STATE(327), 1,
      sym_elseif_statement,
  [2475] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2488] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2512] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2525] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2538] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(338), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__separator,
    STATE(113), 1,
      aux_sym_if_statement_repeat1,
    STATE(155), 1,
      sym__indentation,
    STATE(207), 1,
      sym_else_statement,
    STATE(327), 1,
      sym_elseif_statement,
  [2570] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2583] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(478), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2596] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(482), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2609] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 2,
      anon_sym_,
      sym__line_break,
  [2621] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(440), 2,
      anon_sym_,
      sym__separator,
  [2633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_ELSEIF,
    ACTIONS(486), 1,
      anon_sym_ELSE,
    STATE(202), 1,
      sym_inline_elseif_statement,
    STATE(285), 1,
      sym_inline_else_statement,
  [2649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym__separator,
    STATE(113), 1,
      aux_sym_if_statement_repeat1,
    STATE(265), 1,
      sym__indentation,
    STATE(327), 1,
      sym_elseif_statement,
  [2665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__separator,
    ACTIONS(493), 1,
      sym__line_break,
    STATE(114), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__separator,
    ACTIONS(498), 1,
      sym__line_break,
    STATE(114), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__line_break,
    ACTIONS(501), 1,
      sym__separator,
    STATE(114), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_ELSEIF,
    ACTIONS(486), 1,
      anon_sym_ELSE,
    STATE(202), 1,
      sym_inline_elseif_statement,
    STATE(259), 1,
      sym_inline_else_statement,
  [2723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__separator,
    STATE(315), 1,
      sym__indentation,
    STATE(118), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2737] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 2,
      anon_sym_,
      sym__separator,
  [2749] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 2,
      anon_sym_,
      sym__separator,
  [2761] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 2,
      anon_sym_,
      sym__separator,
  [2773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__separator,
    STATE(181), 1,
      sym__indentation,
    STATE(118), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2787] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(482), 2,
      anon_sym_,
      sym__separator,
  [2799] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(478), 2,
      anon_sym_,
      sym__separator,
  [2811] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 2,
      anon_sym_,
      sym__line_break,
  [2823] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 2,
      anon_sym_,
      sym__separator,
  [2835] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(468), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2847] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 2,
      anon_sym_,
      sym__separator,
  [2859] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 2,
      anon_sym_,
      sym__separator,
  [2871] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(482), 2,
      anon_sym_,
      sym__line_break,
  [2883] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(478), 2,
      anon_sym_,
      sym__line_break,
  [2895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__separator,
    STATE(169), 1,
      sym__indentation,
    STATE(122), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2909] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(474), 2,
      anon_sym_,
      sym__line_break,
  [2921] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(440), 2,
      anon_sym_,
      sym__line_break,
  [2933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__separator,
    STATE(169), 1,
      sym__indentation,
    STATE(118), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2947] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 2,
      anon_sym_,
      sym__line_break,
  [2959] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 2,
      anon_sym_,
      sym__line_break,
  [2971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(510), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(238), 1,
      sym_arguments_without_continuation,
  [2987] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(468), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2999] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 2,
      anon_sym_,
      sym__line_break,
  [3011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
  [3024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
    STATE(276), 1,
      sym_arguments_without_continuation,
  [3037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__separator,
    ACTIONS(520), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
  [3050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__separator,
    ACTIONS(520), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
  [3063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
    STATE(144), 1,
      aux_sym_arguments_repeat1,
  [3076] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(527), 1,
      sym_text_chunk,
    STATE(127), 1,
      sym_scalar_variable,
  [3089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_ellipses,
    ACTIONS(529), 1,
      sym__separator,
    STATE(289), 1,
      sym__indentation,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__separator,
    ACTIONS(533), 1,
      sym__line_break,
    STATE(164), 1,
      aux_sym_inline_if_statement_repeat1,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__line_break,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(520), 1,
      sym__line_break,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [3139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(535), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(520), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
  [3165] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(537), 1,
      sym_text_chunk,
    STATE(105), 1,
      sym_scalar_variable,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(539), 1,
      anon_sym_END,
    ACTIONS(541), 1,
      anon_sym_ELSEIF,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(541), 1,
      anon_sym_ELSEIF,
    ACTIONS(543), 1,
      anon_sym_END,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(541), 1,
      anon_sym_ELSEIF,
    ACTIONS(545), 1,
      anon_sym_END,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__line_break,
    ACTIONS(547), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__separator,
    ACTIONS(554), 1,
      sym__line_break,
    STATE(160), 1,
      aux_sym_arguments_repeat1,
  [3265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_ellipses,
    ACTIONS(558), 1,
      sym__separator,
    STATE(282), 1,
      sym__indentation,
  [3278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__separator,
    ACTIONS(562), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_inline_if_statement_repeat1,
  [3291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
    STATE(152), 1,
      aux_sym_arguments_repeat1,
  [3304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    ACTIONS(567), 1,
      sym__line_break,
    STATE(164), 1,
      aux_sym_inline_if_statement_repeat1,
  [3317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__line_break,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__line_break,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3339] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(575), 1,
      sym_text_chunk,
    STATE(139), 1,
      sym_scalar_variable,
  [3352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    ACTIONS(579), 1,
      anon_sym_,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_END,
    ACTIONS(583), 1,
      anon_sym_EXCEPT,
  [3372] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 1,
      sym_variable_name,
  [3382] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_,
    ACTIONS(591), 1,
      sym_variable_name,
  [3392] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_,
    ACTIONS(595), 1,
      sym_variable_name,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__separator,
    ACTIONS(599), 1,
      sym__line_break,
  [3412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__separator,
    ACTIONS(603), 1,
      sym__line_break,
  [3422] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_,
    ACTIONS(607), 1,
      sym_variable_name,
  [3432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__separator,
    STATE(303), 1,
      sym__indentation,
  [3442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      anon_sym_,
  [3452] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_,
    ACTIONS(617), 1,
      sym_variable_name,
  [3462] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      sym_variable_name,
  [3472] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_,
    ACTIONS(625), 1,
      sym_variable_name,
  [3482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EXCEPT,
    ACTIONS(627), 1,
      anon_sym_END,
  [3492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      anon_sym_,
  [3502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      anon_sym_,
  [3512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_,
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(643), 1,
      anon_sym_,
  [3532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 1,
      anon_sym_,
  [3542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(651), 1,
      anon_sym_,
  [3552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 1,
      anon_sym_,
  [3562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__separator,
    STATE(275), 1,
      sym__indentation,
  [3572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 1,
      anon_sym_,
  [3582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      anon_sym_,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      anon_sym_,
  [3602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__separator,
    STATE(273), 1,
      sym__indentation,
  [3612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      anon_sym_,
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__separator,
    ACTIONS(679), 1,
      sym__line_break,
  [3632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 1,
      anon_sym_,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_,
  [3652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__separator,
    ACTIONS(691), 1,
      sym__line_break,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym__separator,
    STATE(262), 1,
      sym__indentation,
  [3672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      anon_sym_,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 1,
      anon_sym_,
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym__line_break,
    ACTIONS(703), 1,
      sym__separator,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      anon_sym_,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(254), 1,
      sym_scalar_variable,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__separator,
    STATE(221), 1,
      aux_sym_for_statement_repeat1,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym__separator,
    ACTIONS(713), 1,
      sym__line_break,
  [3742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym__separator,
    STATE(281), 1,
      sym__indentation,
  [3752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    ACTIONS(719), 1,
      anon_sym_,
  [3762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__line_break,
    ACTIONS(721), 1,
      sym__separator,
  [3772] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      sym_variable_name,
  [3782] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym_settings_section_token2,
    ACTIONS(729), 1,
      sym__line_break,
  [3792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym__separator,
    ACTIONS(733), 1,
      sym__line_break,
  [3802] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(735), 1,
      aux_sym_settings_section_token2,
    ACTIONS(737), 1,
      sym__line_break,
  [3812] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_settings_section_token2,
    ACTIONS(741), 1,
      sym__line_break,
  [3822] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_,
    ACTIONS(745), 1,
      sym_variable_name,
  [3832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__separator,
    ACTIONS(749), 1,
      sym__line_break,
  [3842] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_,
    ACTIONS(753), 1,
      sym_variable_name,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym__separator,
    STATE(309), 1,
      sym__indentation,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym__separator,
    STATE(205), 1,
      aux_sym_for_statement_repeat1,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_ELSEIF,
    STATE(202), 1,
      sym_inline_elseif_statement,
  [3882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym__separator,
    STATE(221), 1,
      aux_sym_for_statement_repeat1,
  [3892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    ACTIONS(764), 1,
      anon_sym_,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym__line_break,
    ACTIONS(766), 1,
      sym__separator,
  [3912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym__separator,
    ACTIONS(770), 1,
      sym__line_break,
  [3922] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(772), 1,
      aux_sym_settings_section_token2,
    ACTIONS(774), 1,
      sym__line_break,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym__separator,
    ACTIONS(778), 1,
      sym__line_break,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__separator,
    ACTIONS(782), 1,
      sym__line_break,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym__line_break,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__line_break,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__line_break,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__separator,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__line_break,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__line_break,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__separator,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym__line_break,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__line_break,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__line_break,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__line_break,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__separator,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__line_break,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__line_break,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__line_break,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__line_break,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__line_break,
  [4085] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym_variable_name,
  [4092] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_variable_name,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__separator,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym__line_break,
  [4113] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_variable_name,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__line_break,
  [4127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__line_break,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__separator,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__line_break,
  [4148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__line_break,
  [4155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__line_break,
  [4162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__line_break,
  [4169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__line_break,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__line_break,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
  [4190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_END,
  [4197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__separator,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym__separator,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_ELSEIF,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym__line_break,
  [4239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym__separator,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [4253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__line_break,
  [4260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__separator,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_END,
  [4274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__line_break,
  [4281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_END,
  [4288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__line_break,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__line_break,
  [4302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__line_break,
  [4316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__line_break,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_END,
  [4330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_ellipses,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym__line_break,
  [4344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__line_break,
  [4358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__separator,
  [4365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__separator,
  [4372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__line_break,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_ellipses,
  [4386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__separator,
  [4393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
  [4400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__line_break,
  [4407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
  [4414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym__line_break,
  [4421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [4428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [4435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
  [4442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
  [4449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
  [4456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym__line_break,
  [4463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym__separator,
  [4470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym__line_break,
  [4477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_END,
  [4484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
  [4491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__line_break,
  [4498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
  [4505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__line_break,
  [4512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
  [4519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_END,
  [4526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [4533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [4540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
  [4547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [4554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym__line_break,
  [4561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EXCEPT,
  [4568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym__line_break,
  [4575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [4582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
  [4589] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_variable_name,
  [4596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym__line_break,
  [4603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym__line_break,
  [4610] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_variable_name,
  [4617] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_variable_name,
  [4624] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_variable_name,
  [4631] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_variable_name,
  [4638] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_variable_name,
  [4645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym__separator,
  [4652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym__line_break,
  [4659] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_variable_name,
  [4666] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_variable_name,
  [4673] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_variable_name,
  [4680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym__separator,
  [4687] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(964), 1,
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
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 805,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 857,
  [SMALL_STATE(27)] = 884,
  [SMALL_STATE(28)] = 909,
  [SMALL_STATE(29)] = 936,
  [SMALL_STATE(30)] = 963,
  [SMALL_STATE(31)] = 992,
  [SMALL_STATE(32)] = 1019,
  [SMALL_STATE(33)] = 1046,
  [SMALL_STATE(34)] = 1073,
  [SMALL_STATE(35)] = 1098,
  [SMALL_STATE(36)] = 1123,
  [SMALL_STATE(37)] = 1152,
  [SMALL_STATE(38)] = 1177,
  [SMALL_STATE(39)] = 1206,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1255,
  [SMALL_STATE(42)] = 1272,
  [SMALL_STATE(43)] = 1289,
  [SMALL_STATE(44)] = 1316,
  [SMALL_STATE(45)] = 1340,
  [SMALL_STATE(46)] = 1364,
  [SMALL_STATE(47)] = 1388,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1428,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1476,
  [SMALL_STATE(52)] = 1500,
  [SMALL_STATE(53)] = 1524,
  [SMALL_STATE(54)] = 1540,
  [SMALL_STATE(55)] = 1564,
  [SMALL_STATE(56)] = 1580,
  [SMALL_STATE(57)] = 1604,
  [SMALL_STATE(58)] = 1620,
  [SMALL_STATE(59)] = 1644,
  [SMALL_STATE(60)] = 1670,
  [SMALL_STATE(61)] = 1694,
  [SMALL_STATE(62)] = 1710,
  [SMALL_STATE(63)] = 1733,
  [SMALL_STATE(64)] = 1754,
  [SMALL_STATE(65)] = 1775,
  [SMALL_STATE(66)] = 1798,
  [SMALL_STATE(67)] = 1821,
  [SMALL_STATE(68)] = 1842,
  [SMALL_STATE(69)] = 1863,
  [SMALL_STATE(70)] = 1884,
  [SMALL_STATE(71)] = 1907,
  [SMALL_STATE(72)] = 1930,
  [SMALL_STATE(73)] = 1953,
  [SMALL_STATE(74)] = 1974,
  [SMALL_STATE(75)] = 1997,
  [SMALL_STATE(76)] = 2017,
  [SMALL_STATE(77)] = 2037,
  [SMALL_STATE(78)] = 2057,
  [SMALL_STATE(79)] = 2077,
  [SMALL_STATE(80)] = 2097,
  [SMALL_STATE(81)] = 2117,
  [SMALL_STATE(82)] = 2137,
  [SMALL_STATE(83)] = 2157,
  [SMALL_STATE(84)] = 2177,
  [SMALL_STATE(85)] = 2197,
  [SMALL_STATE(86)] = 2217,
  [SMALL_STATE(87)] = 2237,
  [SMALL_STATE(88)] = 2257,
  [SMALL_STATE(89)] = 2277,
  [SMALL_STATE(90)] = 2297,
  [SMALL_STATE(91)] = 2317,
  [SMALL_STATE(92)] = 2337,
  [SMALL_STATE(93)] = 2357,
  [SMALL_STATE(94)] = 2377,
  [SMALL_STATE(95)] = 2394,
  [SMALL_STATE(96)] = 2411,
  [SMALL_STATE(97)] = 2424,
  [SMALL_STATE(98)] = 2437,
  [SMALL_STATE(99)] = 2456,
  [SMALL_STATE(100)] = 2475,
  [SMALL_STATE(101)] = 2488,
  [SMALL_STATE(102)] = 2501,
  [SMALL_STATE(103)] = 2512,
  [SMALL_STATE(104)] = 2525,
  [SMALL_STATE(105)] = 2538,
  [SMALL_STATE(106)] = 2551,
  [SMALL_STATE(107)] = 2570,
  [SMALL_STATE(108)] = 2583,
  [SMALL_STATE(109)] = 2596,
  [SMALL_STATE(110)] = 2609,
  [SMALL_STATE(111)] = 2621,
  [SMALL_STATE(112)] = 2633,
  [SMALL_STATE(113)] = 2649,
  [SMALL_STATE(114)] = 2665,
  [SMALL_STATE(115)] = 2679,
  [SMALL_STATE(116)] = 2693,
  [SMALL_STATE(117)] = 2707,
  [SMALL_STATE(118)] = 2723,
  [SMALL_STATE(119)] = 2737,
  [SMALL_STATE(120)] = 2749,
  [SMALL_STATE(121)] = 2761,
  [SMALL_STATE(122)] = 2773,
  [SMALL_STATE(123)] = 2787,
  [SMALL_STATE(124)] = 2799,
  [SMALL_STATE(125)] = 2811,
  [SMALL_STATE(126)] = 2823,
  [SMALL_STATE(127)] = 2835,
  [SMALL_STATE(128)] = 2847,
  [SMALL_STATE(129)] = 2859,
  [SMALL_STATE(130)] = 2871,
  [SMALL_STATE(131)] = 2883,
  [SMALL_STATE(132)] = 2895,
  [SMALL_STATE(133)] = 2909,
  [SMALL_STATE(134)] = 2921,
  [SMALL_STATE(135)] = 2933,
  [SMALL_STATE(136)] = 2947,
  [SMALL_STATE(137)] = 2959,
  [SMALL_STATE(138)] = 2971,
  [SMALL_STATE(139)] = 2987,
  [SMALL_STATE(140)] = 2999,
  [SMALL_STATE(141)] = 3011,
  [SMALL_STATE(142)] = 3024,
  [SMALL_STATE(143)] = 3037,
  [SMALL_STATE(144)] = 3050,
  [SMALL_STATE(145)] = 3063,
  [SMALL_STATE(146)] = 3076,
  [SMALL_STATE(147)] = 3089,
  [SMALL_STATE(148)] = 3102,
  [SMALL_STATE(149)] = 3115,
  [SMALL_STATE(150)] = 3126,
  [SMALL_STATE(151)] = 3139,
  [SMALL_STATE(152)] = 3152,
  [SMALL_STATE(153)] = 3165,
  [SMALL_STATE(154)] = 3178,
  [SMALL_STATE(155)] = 3189,
  [SMALL_STATE(156)] = 3202,
  [SMALL_STATE(157)] = 3215,
  [SMALL_STATE(158)] = 3228,
  [SMALL_STATE(159)] = 3241,
  [SMALL_STATE(160)] = 3252,
  [SMALL_STATE(161)] = 3265,
  [SMALL_STATE(162)] = 3278,
  [SMALL_STATE(163)] = 3291,
  [SMALL_STATE(164)] = 3304,
  [SMALL_STATE(165)] = 3317,
  [SMALL_STATE(166)] = 3328,
  [SMALL_STATE(167)] = 3339,
  [SMALL_STATE(168)] = 3352,
  [SMALL_STATE(169)] = 3362,
  [SMALL_STATE(170)] = 3372,
  [SMALL_STATE(171)] = 3382,
  [SMALL_STATE(172)] = 3392,
  [SMALL_STATE(173)] = 3402,
  [SMALL_STATE(174)] = 3412,
  [SMALL_STATE(175)] = 3422,
  [SMALL_STATE(176)] = 3432,
  [SMALL_STATE(177)] = 3442,
  [SMALL_STATE(178)] = 3452,
  [SMALL_STATE(179)] = 3462,
  [SMALL_STATE(180)] = 3472,
  [SMALL_STATE(181)] = 3482,
  [SMALL_STATE(182)] = 3492,
  [SMALL_STATE(183)] = 3502,
  [SMALL_STATE(184)] = 3512,
  [SMALL_STATE(185)] = 3522,
  [SMALL_STATE(186)] = 3532,
  [SMALL_STATE(187)] = 3542,
  [SMALL_STATE(188)] = 3552,
  [SMALL_STATE(189)] = 3562,
  [SMALL_STATE(190)] = 3572,
  [SMALL_STATE(191)] = 3582,
  [SMALL_STATE(192)] = 3592,
  [SMALL_STATE(193)] = 3602,
  [SMALL_STATE(194)] = 3612,
  [SMALL_STATE(195)] = 3622,
  [SMALL_STATE(196)] = 3632,
  [SMALL_STATE(197)] = 3642,
  [SMALL_STATE(198)] = 3652,
  [SMALL_STATE(199)] = 3662,
  [SMALL_STATE(200)] = 3672,
  [SMALL_STATE(201)] = 3682,
  [SMALL_STATE(202)] = 3692,
  [SMALL_STATE(203)] = 3702,
  [SMALL_STATE(204)] = 3712,
  [SMALL_STATE(205)] = 3722,
  [SMALL_STATE(206)] = 3732,
  [SMALL_STATE(207)] = 3742,
  [SMALL_STATE(208)] = 3752,
  [SMALL_STATE(209)] = 3762,
  [SMALL_STATE(210)] = 3772,
  [SMALL_STATE(211)] = 3782,
  [SMALL_STATE(212)] = 3792,
  [SMALL_STATE(213)] = 3802,
  [SMALL_STATE(214)] = 3812,
  [SMALL_STATE(215)] = 3822,
  [SMALL_STATE(216)] = 3832,
  [SMALL_STATE(217)] = 3842,
  [SMALL_STATE(218)] = 3852,
  [SMALL_STATE(219)] = 3862,
  [SMALL_STATE(220)] = 3872,
  [SMALL_STATE(221)] = 3882,
  [SMALL_STATE(222)] = 3892,
  [SMALL_STATE(223)] = 3902,
  [SMALL_STATE(224)] = 3912,
  [SMALL_STATE(225)] = 3922,
  [SMALL_STATE(226)] = 3932,
  [SMALL_STATE(227)] = 3942,
  [SMALL_STATE(228)] = 3952,
  [SMALL_STATE(229)] = 3959,
  [SMALL_STATE(230)] = 3966,
  [SMALL_STATE(231)] = 3973,
  [SMALL_STATE(232)] = 3980,
  [SMALL_STATE(233)] = 3987,
  [SMALL_STATE(234)] = 3994,
  [SMALL_STATE(235)] = 4001,
  [SMALL_STATE(236)] = 4008,
  [SMALL_STATE(237)] = 4015,
  [SMALL_STATE(238)] = 4022,
  [SMALL_STATE(239)] = 4029,
  [SMALL_STATE(240)] = 4036,
  [SMALL_STATE(241)] = 4043,
  [SMALL_STATE(242)] = 4050,
  [SMALL_STATE(243)] = 4057,
  [SMALL_STATE(244)] = 4064,
  [SMALL_STATE(245)] = 4071,
  [SMALL_STATE(246)] = 4078,
  [SMALL_STATE(247)] = 4085,
  [SMALL_STATE(248)] = 4092,
  [SMALL_STATE(249)] = 4099,
  [SMALL_STATE(250)] = 4106,
  [SMALL_STATE(251)] = 4113,
  [SMALL_STATE(252)] = 4120,
  [SMALL_STATE(253)] = 4127,
  [SMALL_STATE(254)] = 4134,
  [SMALL_STATE(255)] = 4141,
  [SMALL_STATE(256)] = 4148,
  [SMALL_STATE(257)] = 4155,
  [SMALL_STATE(258)] = 4162,
  [SMALL_STATE(259)] = 4169,
  [SMALL_STATE(260)] = 4176,
  [SMALL_STATE(261)] = 4183,
  [SMALL_STATE(262)] = 4190,
  [SMALL_STATE(263)] = 4197,
  [SMALL_STATE(264)] = 4204,
  [SMALL_STATE(265)] = 4211,
  [SMALL_STATE(266)] = 4218,
  [SMALL_STATE(267)] = 4225,
  [SMALL_STATE(268)] = 4232,
  [SMALL_STATE(269)] = 4239,
  [SMALL_STATE(270)] = 4246,
  [SMALL_STATE(271)] = 4253,
  [SMALL_STATE(272)] = 4260,
  [SMALL_STATE(273)] = 4267,
  [SMALL_STATE(274)] = 4274,
  [SMALL_STATE(275)] = 4281,
  [SMALL_STATE(276)] = 4288,
  [SMALL_STATE(277)] = 4295,
  [SMALL_STATE(278)] = 4302,
  [SMALL_STATE(279)] = 4309,
  [SMALL_STATE(280)] = 4316,
  [SMALL_STATE(281)] = 4323,
  [SMALL_STATE(282)] = 4330,
  [SMALL_STATE(283)] = 4337,
  [SMALL_STATE(284)] = 4344,
  [SMALL_STATE(285)] = 4351,
  [SMALL_STATE(286)] = 4358,
  [SMALL_STATE(287)] = 4365,
  [SMALL_STATE(288)] = 4372,
  [SMALL_STATE(289)] = 4379,
  [SMALL_STATE(290)] = 4386,
  [SMALL_STATE(291)] = 4393,
  [SMALL_STATE(292)] = 4400,
  [SMALL_STATE(293)] = 4407,
  [SMALL_STATE(294)] = 4414,
  [SMALL_STATE(295)] = 4421,
  [SMALL_STATE(296)] = 4428,
  [SMALL_STATE(297)] = 4435,
  [SMALL_STATE(298)] = 4442,
  [SMALL_STATE(299)] = 4449,
  [SMALL_STATE(300)] = 4456,
  [SMALL_STATE(301)] = 4463,
  [SMALL_STATE(302)] = 4470,
  [SMALL_STATE(303)] = 4477,
  [SMALL_STATE(304)] = 4484,
  [SMALL_STATE(305)] = 4491,
  [SMALL_STATE(306)] = 4498,
  [SMALL_STATE(307)] = 4505,
  [SMALL_STATE(308)] = 4512,
  [SMALL_STATE(309)] = 4519,
  [SMALL_STATE(310)] = 4526,
  [SMALL_STATE(311)] = 4533,
  [SMALL_STATE(312)] = 4540,
  [SMALL_STATE(313)] = 4547,
  [SMALL_STATE(314)] = 4554,
  [SMALL_STATE(315)] = 4561,
  [SMALL_STATE(316)] = 4568,
  [SMALL_STATE(317)] = 4575,
  [SMALL_STATE(318)] = 4582,
  [SMALL_STATE(319)] = 4589,
  [SMALL_STATE(320)] = 4596,
  [SMALL_STATE(321)] = 4603,
  [SMALL_STATE(322)] = 4610,
  [SMALL_STATE(323)] = 4617,
  [SMALL_STATE(324)] = 4624,
  [SMALL_STATE(325)] = 4631,
  [SMALL_STATE(326)] = 4638,
  [SMALL_STATE(327)] = 4645,
  [SMALL_STATE(328)] = 4652,
  [SMALL_STATE(329)] = 4659,
  [SMALL_STATE(330)] = 4666,
  [SMALL_STATE(331)] = 4673,
  [SMALL_STATE(332)] = 4680,
  [SMALL_STATE(333)] = 4687,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(91),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(250),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(300),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(300),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(138),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(279),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(246),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(279),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(31),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(248),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(250),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(45),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(161),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(147),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(13),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(217),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(153),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(64),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(45),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(161),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(314),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(147),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(45),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(161),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(170),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(146),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(86),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(180),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(167),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(88),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(147),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(45),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(161),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(147),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(265),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(161),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(161),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(315),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(45),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(45),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(45),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(220),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(147),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(204),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 14),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 16),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 17),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 18),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [848] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 8),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
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
