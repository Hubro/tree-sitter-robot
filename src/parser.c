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
#define STATE_COUNT 326
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 4
#define TOKEN_COUNT 56
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
  sym_ellipses = 46,
  anon_sym_ = 47,
  anon_sym_AT_LBRACE = 48,
  anon_sym_AMP_LBRACE = 49,
  sym_variable_name = 50,
  sym_text_chunk = 51,
  sym_comment = 52,
  sym__separator = 53,
  aux_sym__whitespace_token1 = 54,
  sym__line_break = 55,
  sym_source_file = 56,
  sym_section = 57,
  sym_settings_section = 58,
  sym_setting_statement = 59,
  sym_variables_section = 60,
  sym_variable_definition = 61,
  sym_keywords_section = 62,
  sym_keyword_definition = 63,
  sym_keyword_definition_body = 64,
  sym_keyword_setting = 65,
  sym_test_cases_section = 66,
  sym_test_case_definition = 67,
  sym_test_case_definition_body = 68,
  sym_test_case_setting = 69,
  sym_statement = 70,
  sym_return_statement = 71,
  sym_variable_assignment = 72,
  sym_keyword_invocation = 73,
  sym_if_statement = 74,
  sym_elseif_statement = 75,
  sym_else_statement = 76,
  sym_inline_if_statement = 77,
  sym_block = 78,
  sym_inline_elseif_statement = 79,
  sym_inline_else_statement = 80,
  sym_inline_statement = 81,
  sym_try_statement = 82,
  sym_except_statement = 83,
  sym_while_statement = 84,
  sym_for_statement = 85,
  sym_arguments = 86,
  sym_arguments_without_continuation = 87,
  sym_continuation = 88,
  sym_argument = 89,
  sym_scalar_variable = 90,
  sym_list_variable = 91,
  sym_dictionary_variable = 92,
  sym__indentation = 93,
  sym__empty_line = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_settings_section_repeat1 = 96,
  aux_sym_variables_section_repeat1 = 97,
  aux_sym_keywords_section_repeat1 = 98,
  aux_sym_keyword_definition_body_repeat1 = 99,
  aux_sym_test_cases_section_repeat1 = 100,
  aux_sym_test_case_definition_body_repeat1 = 101,
  aux_sym_if_statement_repeat1 = 102,
  aux_sym_inline_if_statement_repeat1 = 103,
  aux_sym_block_repeat1 = 104,
  aux_sym_try_statement_repeat1 = 105,
  aux_sym_for_statement_repeat1 = 106,
  aux_sym_arguments_repeat1 = 107,
  aux_sym_arguments_repeat2 = 108,
  aux_sym_argument_repeat1 = 109,
  alias_sym_keyword = 110,
  alias_sym_name = 111,
  alias_sym_return_value = 112,
  alias_sym_variable_list = 113,
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
  [16] = {.index = 23, .length = 4},
  [17] = {.index = 27, .length = 4},
  [18] = {.index = 31, .length = 2},
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
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [27] =
    {field_body, 6},
    {field_left, 1},
    {field_right, 3},
    {field_right, 4},
  [31] =
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
  [17] = {
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
  [41] = 7,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 45,
  [51] = 7,
  [52] = 52,
  [53] = 53,
  [54] = 46,
  [55] = 55,
  [56] = 56,
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
  [73] = 60,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 66,
  [78] = 78,
  [79] = 67,
  [80] = 80,
  [81] = 67,
  [82] = 66,
  [83] = 83,
  [84] = 72,
  [85] = 60,
  [86] = 74,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 91,
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
  [107] = 103,
  [108] = 108,
  [109] = 96,
  [110] = 103,
  [111] = 93,
  [112] = 90,
  [113] = 93,
  [114] = 102,
  [115] = 95,
  [116] = 90,
  [117] = 117,
  [118] = 97,
  [119] = 119,
  [120] = 100,
  [121] = 98,
  [122] = 122,
  [123] = 105,
  [124] = 124,
  [125] = 95,
  [126] = 105,
  [127] = 97,
  [128] = 98,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 96,
  [133] = 133,
  [134] = 134,
  [135] = 102,
  [136] = 100,
  [137] = 137,
  [138] = 138,
  [139] = 106,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 7,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 124,
  [150] = 131,
  [151] = 151,
  [152] = 152,
  [153] = 140,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 146,
  [158] = 152,
  [159] = 159,
  [160] = 160,
  [161] = 154,
  [162] = 137,
  [163] = 156,
  [164] = 152,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 167,
  [173] = 169,
  [174] = 171,
  [175] = 175,
  [176] = 176,
  [177] = 167,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 180,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 181,
  [193] = 182,
  [194] = 183,
  [195] = 195,
  [196] = 180,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 188,
  [202] = 202,
  [203] = 191,
  [204] = 181,
  [205] = 205,
  [206] = 167,
  [207] = 171,
  [208] = 169,
  [209] = 209,
  [210] = 210,
  [211] = 181,
  [212] = 212,
  [213] = 191,
  [214] = 214,
  [215] = 188,
  [216] = 199,
  [217] = 182,
  [218] = 218,
  [219] = 180,
  [220] = 220,
  [221] = 183,
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
  [255] = 224,
  [256] = 97,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 90,
  [262] = 262,
  [263] = 263,
  [264] = 93,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 268,
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
  [283] = 240,
  [284] = 284,
  [285] = 239,
  [286] = 286,
  [287] = 238,
  [288] = 236,
  [289] = 277,
  [290] = 278,
  [291] = 279,
  [292] = 268,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 240,
  [299] = 299,
  [300] = 239,
  [301] = 301,
  [302] = 238,
  [303] = 277,
  [304] = 278,
  [305] = 279,
  [306] = 268,
  [307] = 307,
  [308] = 308,
  [309] = 240,
  [310] = 277,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 254,
  [315] = 252,
  [316] = 250,
  [317] = 247,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 254,
  [322] = 252,
  [323] = 250,
  [324] = 324,
  [325] = 254,
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
      if (eof) ADVANCE(342);
      if (lookahead == '\t') ADVANCE(682);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'F') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(87);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(682);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(685);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(682);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '=') ADVANCE(373);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '=') ADVANCE(374);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(684);
      if (lookahead == '#') ADVANCE(680);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '}') ADVANCE(372);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(681);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&') ADVANCE(122);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(683);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(684);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '#') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(435);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(213);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(381);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(398);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ']') ADVANCE(387);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == ']') ADVANCE(393);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ']') ADVANCE(390);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == ']') ADVANCE(401);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ']') ADVANCE(384);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(309);
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
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(462);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(464);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'E') ADVANCE(465);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '[') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '[') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead == 'W') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(435);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(375);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(345);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(368);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(396);
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
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(561);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(562);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(423);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(408);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(413);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(418);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(422);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(410);
      END_STATE();
    case 78:
      if (lookahead == 'H') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(564);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(71);
      if (lookahead == 'X') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(404);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(92);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(94);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'Y') ADVANCE(414);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(381);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(398);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(387);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(393);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(390);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(401);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(384);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(383);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(395);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(392);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(389);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 117:
      if (lookahead == ']') ADVANCE(386);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 118:
      if (lookahead == ']') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(371);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(371);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(432);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(432);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(431);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(431);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(478);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(602);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(602);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(576);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(566);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 156:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(264);
      END_STATE();
    case 158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 200:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 201:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 205:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 206:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 212:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 213:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 223:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 251:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 254:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 255:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 256:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 324:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 325:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 326:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 327:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 328:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 329:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 330:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 331:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 332:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 333:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 334:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(646);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 335:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 336:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(478);
      END_STATE();
    case 337:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(566);
      END_STATE();
    case 338:
      if (eof) ADVANCE(342);
      if (lookahead == '\t') ADVANCE(681);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(686);
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '*') ADVANCE(442);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 339:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 340:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(678);
      if (lookahead == '*') ADVANCE(442);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 341:
      if (eof) ADVANCE(342);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '#') ADVANCE(680);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(684);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(435);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(680);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead == '{') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(674);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(674);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(674);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(677);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(675);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(675);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(675);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(443);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '.') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'C') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(472);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'E') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(460);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(471);
      if (lookahead == 'N') ADVANCE(453);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(453);
      if (lookahead == 'X') ADVANCE(452);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'N') ADVANCE(453);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(469);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(475);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'Y') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '{') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(554);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(554);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(554);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(554);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(554);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(554);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(554);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(554);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(554);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(554);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(554);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(554);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(554);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(554);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(554);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(554);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(554);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(554);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(554);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(554);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(554);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(554);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(554);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(554);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(554);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(554);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(554);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(554);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(554);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == 'F') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(131);
      if (lookahead != 0) ADVANCE(646);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(585);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(646);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(646);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(646);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(646);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(646);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(646);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(646);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(646);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(646);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(646);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(646);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(646);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(646);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(646);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(646);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(646);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(646);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(646);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(646);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(646);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == ']') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == ']') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(554);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(488);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ']') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == ']') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == ']') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == ']') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(125);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == '{') ADVANCE(680);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '{') ADVANCE(680);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(675);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(675);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(680);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(680);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(682);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(688);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '#') ADVANCE(680);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(688);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(690);
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
  [1] = {.lex_state = 341},
  [2] = {.lex_state = 339},
  [3] = {.lex_state = 339},
  [4] = {.lex_state = 339},
  [5] = {.lex_state = 339},
  [6] = {.lex_state = 339},
  [7] = {.lex_state = 339},
  [8] = {.lex_state = 339},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 338},
  [17] = {.lex_state = 338},
  [18] = {.lex_state = 338},
  [19] = {.lex_state = 338},
  [20] = {.lex_state = 340},
  [21] = {.lex_state = 339},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 340},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 340},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 340},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 339},
  [30] = {.lex_state = 339},
  [31] = {.lex_state = 340},
  [32] = {.lex_state = 340},
  [33] = {.lex_state = 340},
  [34] = {.lex_state = 340},
  [35] = {.lex_state = 340},
  [36] = {.lex_state = 340},
  [37] = {.lex_state = 339},
  [38] = {.lex_state = 339},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 338},
  [42] = {.lex_state = 338},
  [43] = {.lex_state = 338},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 339},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 340},
  [52] = {.lex_state = 339},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 340},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 340},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 46},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 46},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 46},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 46},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
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
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 8},
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
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 46},
  [315] = {.lex_state = 46},
  [316] = {.lex_state = 46},
  [317] = {.lex_state = 46},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 46},
  [322] = {.lex_state = 46},
  [323] = {.lex_state = 46},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 46},
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
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(275),
    [sym_section] = STATE(28),
    [sym_settings_section] = STATE(104),
    [sym_variables_section] = STATE(104),
    [sym_keywords_section] = STATE(104),
    [sym_test_cases_section] = STATE(104),
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
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(23), 1,
      sym__line_break,
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
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(27), 1,
      sym__line_break,
    STATE(5), 3,
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
    ACTIONS(34), 1,
      aux_sym__whitespace_token1,
    ACTIONS(37), 1,
      sym__line_break,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(31), 17,
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
    ACTIONS(40), 1,
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
  [164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(40), 1,
      sym__line_break,
    STATE(4), 3,
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
    STATE(241), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(242), 8,
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
    STATE(243), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(70), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(242), 8,
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
    STATE(311), 1,
      sym_statement,
    STATE(242), 8,
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
    STATE(311), 1,
      sym_statement,
    STATE(242), 8,
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
      anon_sym_END,
    STATE(311), 1,
      sym_statement,
    STATE(242), 8,
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
      sym_ellipses,
    STATE(311), 1,
      sym_statement,
    STATE(242), 8,
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
    STATE(311), 1,
      sym_statement,
    STATE(242), 8,
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
    ACTIONS(93), 1,
      aux_sym__whitespace_token1,
    ACTIONS(96), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(16), 2,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym__separator,
    ACTIONS(106), 1,
      aux_sym__whitespace_token1,
    ACTIONS(109), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(101), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [635] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      sym__separator,
    ACTIONS(118), 1,
      aux_sym__whitespace_token1,
    ACTIONS(120), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(114), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [665] = 8,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym__whitespace_token1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      sym__separator,
    ACTIONS(128), 1,
      sym__line_break,
    STATE(10), 1,
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
    STATE(35), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(132), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [722] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(144), 1,
      sym__line_break,
    STATE(30), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [747] = 8,
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
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(104), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [776] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(150), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [803] = 8,
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
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(104), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [832] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      sym_text_chunk,
    ACTIONS(162), 1,
      sym__line_break,
    STATE(36), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(158), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [859] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      aux_sym_settings_section_token1,
    ACTIONS(169), 1,
      aux_sym_variables_section_token1,
    ACTIONS(172), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(175), 1,
      aux_sym_test_cases_section_token1,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(104), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [888] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym_text_chunk,
    ACTIONS(185), 1,
      aux_sym__whitespace_token1,
    ACTIONS(188), 1,
      sym__line_break,
    STATE(27), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(180), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [915] = 8,
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
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(104), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [944] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(193), 1,
      sym__line_break,
    STATE(38), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [994] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(20), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1021] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(160), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym__line_break,
    STATE(27), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(205), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1048] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_text_chunk,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(138), 1,
      sym__line_break,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(35), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1075] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(160), 1,
      sym_text_chunk,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(211), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1102] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      sym_text_chunk,
    ACTIONS(222), 1,
      aux_sym__whitespace_token1,
    ACTIONS(225), 1,
      sym__line_break,
    STATE(35), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(217), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1129] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym__whitespace_token1,
    ACTIONS(160), 1,
      sym_text_chunk,
    ACTIONS(207), 1,
      sym__line_break,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(211), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(233), 1,
      aux_sym__whitespace_token1,
    ACTIONS(236), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(142), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
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
    STATE(92), 1,
      sym_block,
    STATE(99), 1,
      aux_sym_if_statement_repeat1,
    STATE(165), 1,
      sym_else_statement,
    STATE(245), 1,
      sym_elseif_statement,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1238] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(247), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(130), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(133), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1265] = 3,
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
  [1282] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1299] = 3,
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
  [1316] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(248), 1,
      sym_arguments,
    ACTIONS(257), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1340] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(265), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(189), 1,
      sym_arguments,
    ACTIONS(263), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1364] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(270), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(272), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(274), 1,
      sym_text_chunk,
    STATE(198), 1,
      sym_argument,
    STATE(79), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1404] = 7,
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
    STATE(209), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
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
    STATE(170), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1452] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__separator,
    ACTIONS(293), 1,
      sym__line_break,
    STATE(91), 1,
      aux_sym_arguments_repeat1,
    STATE(189), 1,
      sym_arguments,
    ACTIONS(288), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(106), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1476] = 3,
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
  [1492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1508] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(270), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(272), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(274), 1,
      sym_text_chunk,
    STATE(225), 1,
      sym_argument,
    STATE(79), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1532] = 7,
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
    STATE(198), 1,
      sym_argument,
    STATE(67), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1556] = 3,
    ACTIONS(68), 1,
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
  [1572] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(304), 1,
      sym_ellipses,
    ACTIONS(306), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(296), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1598] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1614] = 7,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(315), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(317), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(319), 1,
      sym_text_chunk,
    STATE(229), 1,
      sym_argument,
    STATE(81), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1638] = 7,
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
    STATE(210), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1661] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(326), 1,
      anon_sym_,
    ACTIONS(329), 1,
      sym_text_chunk,
    ACTIONS(332), 2,
      sym__separator,
      sym__line_break,
    STATE(60), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1682] = 7,
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
    STATE(233), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1705] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(336), 1,
      anon_sym_RETURN,
    ACTIONS(338), 1,
      sym_text_chunk,
    STATE(222), 1,
      sym_inline_statement,
    STATE(175), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1726] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(66), 1,
      sym_text_chunk,
    ACTIONS(68), 1,
      sym_comment,
    STATE(230), 1,
      sym_inline_statement,
    STATE(175), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1747] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(336), 1,
      anon_sym_RETURN,
    ACTIONS(338), 1,
      sym_text_chunk,
    STATE(160), 1,
      sym_inline_statement,
    STATE(175), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1768] = 7,
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
    STATE(258), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1791] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(345), 1,
      sym_text_chunk,
    ACTIONS(347), 2,
      sym__separator,
      sym__line_break,
    STATE(60), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1812] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(349), 1,
      sym_text_chunk,
    ACTIONS(351), 2,
      sym__separator,
      sym__line_break,
    STATE(66), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1833] = 7,
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
    STATE(226), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1856] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(245), 1,
      sym__line_break,
    ACTIONS(353), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(179), 1,
      sym_block,
    STATE(75), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym__whitespace_token1,
    ACTIONS(126), 1,
      sym__separator,
    ACTIONS(355), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(57), 1,
      sym_keyword_definition_body,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym__separator,
    ACTIONS(118), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(55), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__separator,
    ACTIONS(362), 1,
      sym__line_break,
    STATE(91), 1,
      aux_sym_arguments_repeat1,
    STATE(176), 1,
      sym_arguments,
    STATE(106), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1945] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__separator,
    ACTIONS(365), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(368), 1,
      anon_sym_,
    ACTIONS(371), 1,
      sym_text_chunk,
    STATE(73), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1965] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__separator,
    ACTIONS(377), 1,
      sym__line_break,
    STATE(91), 1,
      aux_sym_arguments_repeat1,
    STATE(212), 1,
      sym_arguments,
    STATE(106), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(380), 1,
      sym__separator,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(76), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__separator,
    ACTIONS(388), 1,
      aux_sym__whitespace_token1,
    ACTIONS(391), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(76), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2025] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      sym__separator,
    ACTIONS(394), 1,
      anon_sym_,
    ACTIONS(396), 1,
      sym_text_chunk,
    STATE(73), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(398), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(324), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2065] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(351), 1,
      sym__line_break,
    ACTIONS(400), 1,
      anon_sym_,
    ACTIONS(402), 1,
      sym_text_chunk,
    STATE(82), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(237), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2105] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(351), 1,
      sym__separator,
    ACTIONS(394), 1,
      anon_sym_,
    ACTIONS(404), 1,
      sym_text_chunk,
    STATE(77), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2125] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      sym__line_break,
    ACTIONS(400), 1,
      anon_sym_,
    ACTIONS(406), 1,
      sym_text_chunk,
    STATE(85), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2145] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(176), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2185] = 6,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__line_break,
    ACTIONS(411), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(414), 1,
      anon_sym_,
    ACTIONS(417), 1,
      sym_text_chunk,
    STATE(85), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(420), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(212), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(313), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(257), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2265] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(261), 1,
      sym__line_break,
    STATE(94), 1,
      aux_sym_arguments_repeat1,
    STATE(265), 1,
      sym_arguments,
    STATE(139), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2285] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(425), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(430), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
    STATE(124), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__separator,
    STATE(101), 1,
      aux_sym_if_statement_repeat1,
    STATE(151), 1,
      sym__indentation,
    STATE(178), 1,
      sym_else_statement,
    STATE(245), 1,
      sym_elseif_statement,
  [2334] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(437), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
    STATE(149), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2364] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2377] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2390] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2403] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__separator,
    STATE(119), 1,
      aux_sym_if_statement_repeat1,
    STATE(147), 1,
      sym__indentation,
    STATE(184), 1,
      sym_else_statement,
    STATE(245), 1,
      sym_elseif_statement,
  [2435] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym__separator,
    STATE(119), 1,
      aux_sym_if_statement_repeat1,
    STATE(144), 1,
      sym__indentation,
    STATE(202), 1,
      sym_else_statement,
    STATE(245), 1,
      sym_elseif_statement,
  [2467] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2480] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2504] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(332), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__line_break,
    ACTIONS(478), 1,
      sym__separator,
    STATE(131), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2531] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 2,
      anon_sym_,
      sym__separator,
  [2543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__separator,
    STATE(320), 1,
      sym__indentation,
    STATE(108), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2557] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 2,
      anon_sym_,
      sym__line_break,
  [2569] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 2,
      anon_sym_,
      sym__line_break,
  [2581] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(437), 2,
      anon_sym_,
      sym__separator,
  [2593] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(425), 2,
      anon_sym_,
      sym__separator,
  [2605] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(437), 2,
      anon_sym_,
      sym__line_break,
  [2617] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 2,
      anon_sym_,
      sym__line_break,
  [2629] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 2,
      anon_sym_,
      sym__line_break,
  [2641] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(425), 2,
      anon_sym_,
      sym__line_break,
  [2653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__separator,
    STATE(168), 1,
      sym__indentation,
    STATE(108), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2667] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 2,
      anon_sym_,
      sym__separator,
  [2679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__separator,
    STATE(119), 1,
      aux_sym_if_statement_repeat1,
    STATE(245), 1,
      sym_elseif_statement,
    STATE(259), 1,
      sym__indentation,
  [2695] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 2,
      anon_sym_,
      sym__separator,
  [2707] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 2,
      anon_sym_,
      sym__line_break,
  [2719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_ELSEIF,
    ACTIONS(490), 1,
      anon_sym_ELSE,
    STATE(195), 1,
      sym_inline_elseif_statement,
    STATE(284), 1,
      sym_inline_else_statement,
  [2735] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(131), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2761] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 2,
      anon_sym_,
      sym__separator,
  [2773] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(476), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2785] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(452), 2,
      anon_sym_,
      sym__line_break,
  [2797] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(456), 2,
      anon_sym_,
      sym__separator,
  [2809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_ELSEIF,
    ACTIONS(490), 1,
      anon_sym_ELSE,
    STATE(195), 1,
      sym_inline_elseif_statement,
    STATE(253), 1,
      sym_inline_else_statement,
  [2825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__separator,
    STATE(186), 1,
      sym__indentation,
    STATE(117), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__separator,
    ACTIONS(501), 1,
      sym__line_break,
    STATE(131), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2853] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 2,
      anon_sym_,
      sym__separator,
  [2865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__separator,
    STATE(186), 1,
      sym__indentation,
    STATE(108), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(504), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
    STATE(262), 1,
      sym_arguments_without_continuation,
  [2895] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 2,
      anon_sym_,
      sym__separator,
  [2907] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 2,
      anon_sym_,
      sym__line_break,
  [2919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(506), 1,
      sym__line_break,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(510), 1,
      anon_sym_IN,
    STATE(294), 1,
      sym_scalar_variable,
  [2945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(150), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_ellipses,
    ACTIONS(512), 1,
      sym__separator,
    STATE(255), 1,
      sym__indentation,
  [2969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(514), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
    STATE(234), 1,
      sym_arguments_without_continuation,
  [2995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__separator,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(143), 1,
      aux_sym_inline_if_statement_repeat1,
  [3008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(521), 1,
      anon_sym_END,
    ACTIONS(523), 1,
      anon_sym_ELSEIF,
  [3021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(523), 1,
      anon_sym_ELSEIF,
    ACTIONS(527), 1,
      anon_sym_END,
  [3058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__separator,
    ACTIONS(532), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__line_break,
    STATE(150), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__line_break,
    STATE(150), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(523), 1,
      anon_sym_ELSEIF,
    ACTIONS(540), 1,
      anon_sym_END,
  [3106] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(542), 1,
      sym_text_chunk,
    STATE(105), 1,
      sym_scalar_variable,
  [3119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_ellipses,
    ACTIONS(546), 1,
      sym__separator,
    STATE(224), 1,
      sym__indentation,
  [3132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(506), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__separator,
    ACTIONS(550), 1,
      sym__line_break,
    STATE(143), 1,
      aux_sym_inline_if_statement_repeat1,
  [3158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__separator,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__line_break,
    ACTIONS(554), 1,
      sym__separator,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3184] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(557), 1,
      sym_text_chunk,
    STATE(123), 1,
      sym_scalar_variable,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__line_break,
    ACTIONS(559), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__separator,
    ACTIONS(565), 1,
      sym__line_break,
    STATE(155), 1,
      aux_sym_inline_if_statement_repeat1,
  [3221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__line_break,
    ACTIONS(567), 1,
      sym__separator,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__line_break,
    ACTIONS(567), 1,
      sym__separator,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__line_break,
    ACTIONS(570), 1,
      sym__separator,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3260] = 4,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(573), 1,
      sym_text_chunk,
    STATE(126), 1,
      sym_scalar_variable,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__separator,
    STATE(312), 1,
      sym__indentation,
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__separator,
    STATE(218), 1,
      aux_sym_for_statement_repeat1,
  [3293] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_,
    ACTIONS(581), 1,
      sym_variable_name,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_END,
    ACTIONS(585), 1,
      anon_sym_EXCEPT,
  [3313] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_,
    ACTIONS(589), 1,
      sym_variable_name,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__separator,
    ACTIONS(593), 1,
      sym__line_break,
  [3333] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_,
    ACTIONS(597), 1,
      sym_variable_name,
  [3343] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 1,
      sym_variable_name,
  [3353] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 1,
      sym_variable_name,
  [3363] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_,
    ACTIONS(609), 1,
      sym_variable_name,
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__separator,
    ACTIONS(613), 1,
      sym__line_break,
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__separator,
    ACTIONS(617), 1,
      sym__line_break,
  [3393] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_,
    ACTIONS(621), 1,
      sym_variable_name,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__separator,
    STATE(281), 1,
      sym__indentation,
  [3413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__separator,
    STATE(319), 1,
      sym__indentation,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      anon_sym_,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      anon_sym_,
  [3443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_,
  [3453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      anon_sym_,
  [3463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym__separator,
    STATE(276), 1,
      sym__indentation,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 1,
      anon_sym_,
  [3483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_EXCEPT,
    ACTIONS(649), 1,
      anon_sym_END,
  [3493] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(651), 1,
      aux_sym_settings_section_token2,
    ACTIONS(653), 1,
      sym__line_break,
  [3503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 1,
      anon_sym_,
  [3513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__separator,
    ACTIONS(661), 1,
      sym__line_break,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__separator,
    STATE(190), 1,
      aux_sym_for_statement_repeat1,
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_,
  [3543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_,
  [3563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(680), 1,
      anon_sym_,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__line_break,
    ACTIONS(682), 1,
      sym__separator,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_,
  [3593] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym_settings_section_token2,
    ACTIONS(690), 1,
      sym__line_break,
  [3603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
    ACTIONS(694), 1,
      sym__line_break,
  [3613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym__separator,
    ACTIONS(698), 1,
      sym__line_break,
  [3623] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(700), 1,
      aux_sym_settings_section_token2,
    ACTIONS(702), 1,
      sym__line_break,
  [3633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(706), 1,
      anon_sym_,
  [3643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    STATE(249), 1,
      sym__indentation,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(712), 1,
      anon_sym_,
  [3663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(716), 1,
      anon_sym_,
  [3673] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(718), 1,
      aux_sym_settings_section_token2,
    ACTIONS(720), 1,
      sym__line_break,
  [3683] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_,
    ACTIONS(724), 1,
      sym_variable_name,
  [3693] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_,
    ACTIONS(728), 1,
      sym_variable_name,
  [3703] = 3,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_,
    ACTIONS(732), 1,
      sym_variable_name,
  [3713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym__line_break,
    ACTIONS(734), 1,
      sym__separator,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    STATE(228), 1,
      sym__indentation,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(740), 1,
      anon_sym_,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym__separator,
    ACTIONS(744), 1,
      sym__line_break,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 1,
      anon_sym_,
  [3763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_ELSEIF,
    STATE(195), 1,
      sym_inline_elseif_statement,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    ACTIONS(752), 1,
      anon_sym_,
  [3783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__line_break,
    ACTIONS(754), 1,
      sym__separator,
  [3793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      anon_sym_,
  [3803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym__separator,
    STATE(190), 1,
      aux_sym_for_statement_repeat1,
  [3813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    ACTIONS(764), 1,
      anon_sym_,
  [3823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(294), 1,
      sym_scalar_variable,
  [3833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    ACTIONS(768), 1,
      anon_sym_,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__separator,
    ACTIONS(772), 1,
      sym__line_break,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__separator,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      sym_ellipses,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym__line_break,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__separator,
  [3881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym__line_break,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_END,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__separator,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym__line_break,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__line_break,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym__line_break,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__separator,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__line_break,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym__line_break,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
  [3951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__line_break,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
  [3972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__line_break,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__line_break,
  [3993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__line_break,
  [4000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__line_break,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__separator,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__line_break,
  [4021] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_variable_name,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__line_break,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_END,
  [4042] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym_variable_name,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__line_break,
  [4056] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_variable_name,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__line_break,
  [4070] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_variable_name,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym_ellipses,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym__separator,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__line_break,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__separator,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_ELSEIF,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__line_break,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__separator,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym__line_break,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__separator,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym__line_break,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__line_break,
  [4161] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_variable_name,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__line_break,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__line_break,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__line_break,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__line_break,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym__line_break,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__line_break,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym__line_break,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_END,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
  [4245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym__line_break,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_END,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__line_break,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [4280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__line_break,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [4294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__separator,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
  [4329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
  [4336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__line_break,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym__separator,
  [4350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__separator,
  [4357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__line_break,
  [4364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym__separator,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym__line_break,
  [4378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACE,
  [4385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__line_break,
  [4392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [4399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__line_break,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym__line_break,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym__separator,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__line_break,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
  [4462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__line_break,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_END,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym__line_break,
  [4490] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_variable_name,
  [4497] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym_variable_name,
  [4504] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_variable_name,
  [4511] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_variable_name,
  [4518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym__line_break,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_END,
  [4532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_EXCEPT,
  [4539] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_variable_name,
  [4546] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_variable_name,
  [4553] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_variable_name,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__line_break,
  [4567] = 2,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(948), 1,
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
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 803,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 859,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 915,
  [SMALL_STATE(29)] = 944,
  [SMALL_STATE(30)] = 969,
  [SMALL_STATE(31)] = 994,
  [SMALL_STATE(32)] = 1021,
  [SMALL_STATE(33)] = 1048,
  [SMALL_STATE(34)] = 1075,
  [SMALL_STATE(35)] = 1102,
  [SMALL_STATE(36)] = 1129,
  [SMALL_STATE(37)] = 1156,
  [SMALL_STATE(38)] = 1181,
  [SMALL_STATE(39)] = 1206,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1265,
  [SMALL_STATE(42)] = 1282,
  [SMALL_STATE(43)] = 1299,
  [SMALL_STATE(44)] = 1316,
  [SMALL_STATE(45)] = 1340,
  [SMALL_STATE(46)] = 1364,
  [SMALL_STATE(47)] = 1388,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1428,
  [SMALL_STATE(50)] = 1452,
  [SMALL_STATE(51)] = 1476,
  [SMALL_STATE(52)] = 1492,
  [SMALL_STATE(53)] = 1508,
  [SMALL_STATE(54)] = 1532,
  [SMALL_STATE(55)] = 1556,
  [SMALL_STATE(56)] = 1572,
  [SMALL_STATE(57)] = 1598,
  [SMALL_STATE(58)] = 1614,
  [SMALL_STATE(59)] = 1638,
  [SMALL_STATE(60)] = 1661,
  [SMALL_STATE(61)] = 1682,
  [SMALL_STATE(62)] = 1705,
  [SMALL_STATE(63)] = 1726,
  [SMALL_STATE(64)] = 1747,
  [SMALL_STATE(65)] = 1768,
  [SMALL_STATE(66)] = 1791,
  [SMALL_STATE(67)] = 1812,
  [SMALL_STATE(68)] = 1833,
  [SMALL_STATE(69)] = 1856,
  [SMALL_STATE(70)] = 1879,
  [SMALL_STATE(71)] = 1902,
  [SMALL_STATE(72)] = 1925,
  [SMALL_STATE(73)] = 1945,
  [SMALL_STATE(74)] = 1965,
  [SMALL_STATE(75)] = 1985,
  [SMALL_STATE(76)] = 2005,
  [SMALL_STATE(77)] = 2025,
  [SMALL_STATE(78)] = 2045,
  [SMALL_STATE(79)] = 2065,
  [SMALL_STATE(80)] = 2085,
  [SMALL_STATE(81)] = 2105,
  [SMALL_STATE(82)] = 2125,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2165,
  [SMALL_STATE(85)] = 2185,
  [SMALL_STATE(86)] = 2205,
  [SMALL_STATE(87)] = 2225,
  [SMALL_STATE(88)] = 2245,
  [SMALL_STATE(89)] = 2265,
  [SMALL_STATE(90)] = 2285,
  [SMALL_STATE(91)] = 2298,
  [SMALL_STATE(92)] = 2315,
  [SMALL_STATE(93)] = 2334,
  [SMALL_STATE(94)] = 2347,
  [SMALL_STATE(95)] = 2364,
  [SMALL_STATE(96)] = 2377,
  [SMALL_STATE(97)] = 2390,
  [SMALL_STATE(98)] = 2403,
  [SMALL_STATE(99)] = 2416,
  [SMALL_STATE(100)] = 2435,
  [SMALL_STATE(101)] = 2448,
  [SMALL_STATE(102)] = 2467,
  [SMALL_STATE(103)] = 2480,
  [SMALL_STATE(104)] = 2493,
  [SMALL_STATE(105)] = 2504,
  [SMALL_STATE(106)] = 2517,
  [SMALL_STATE(107)] = 2531,
  [SMALL_STATE(108)] = 2543,
  [SMALL_STATE(109)] = 2557,
  [SMALL_STATE(110)] = 2569,
  [SMALL_STATE(111)] = 2581,
  [SMALL_STATE(112)] = 2593,
  [SMALL_STATE(113)] = 2605,
  [SMALL_STATE(114)] = 2617,
  [SMALL_STATE(115)] = 2629,
  [SMALL_STATE(116)] = 2641,
  [SMALL_STATE(117)] = 2653,
  [SMALL_STATE(118)] = 2667,
  [SMALL_STATE(119)] = 2679,
  [SMALL_STATE(120)] = 2695,
  [SMALL_STATE(121)] = 2707,
  [SMALL_STATE(122)] = 2719,
  [SMALL_STATE(123)] = 2735,
  [SMALL_STATE(124)] = 2747,
  [SMALL_STATE(125)] = 2761,
  [SMALL_STATE(126)] = 2773,
  [SMALL_STATE(127)] = 2785,
  [SMALL_STATE(128)] = 2797,
  [SMALL_STATE(129)] = 2809,
  [SMALL_STATE(130)] = 2825,
  [SMALL_STATE(131)] = 2839,
  [SMALL_STATE(132)] = 2853,
  [SMALL_STATE(133)] = 2865,
  [SMALL_STATE(134)] = 2879,
  [SMALL_STATE(135)] = 2895,
  [SMALL_STATE(136)] = 2907,
  [SMALL_STATE(137)] = 2919,
  [SMALL_STATE(138)] = 2932,
  [SMALL_STATE(139)] = 2945,
  [SMALL_STATE(140)] = 2956,
  [SMALL_STATE(141)] = 2969,
  [SMALL_STATE(142)] = 2982,
  [SMALL_STATE(143)] = 2995,
  [SMALL_STATE(144)] = 3008,
  [SMALL_STATE(145)] = 3021,
  [SMALL_STATE(146)] = 3032,
  [SMALL_STATE(147)] = 3045,
  [SMALL_STATE(148)] = 3058,
  [SMALL_STATE(149)] = 3071,
  [SMALL_STATE(150)] = 3082,
  [SMALL_STATE(151)] = 3093,
  [SMALL_STATE(152)] = 3106,
  [SMALL_STATE(153)] = 3119,
  [SMALL_STATE(154)] = 3132,
  [SMALL_STATE(155)] = 3145,
  [SMALL_STATE(156)] = 3158,
  [SMALL_STATE(157)] = 3171,
  [SMALL_STATE(158)] = 3184,
  [SMALL_STATE(159)] = 3197,
  [SMALL_STATE(160)] = 3208,
  [SMALL_STATE(161)] = 3221,
  [SMALL_STATE(162)] = 3234,
  [SMALL_STATE(163)] = 3247,
  [SMALL_STATE(164)] = 3260,
  [SMALL_STATE(165)] = 3273,
  [SMALL_STATE(166)] = 3283,
  [SMALL_STATE(167)] = 3293,
  [SMALL_STATE(168)] = 3303,
  [SMALL_STATE(169)] = 3313,
  [SMALL_STATE(170)] = 3323,
  [SMALL_STATE(171)] = 3333,
  [SMALL_STATE(172)] = 3343,
  [SMALL_STATE(173)] = 3353,
  [SMALL_STATE(174)] = 3363,
  [SMALL_STATE(175)] = 3373,
  [SMALL_STATE(176)] = 3383,
  [SMALL_STATE(177)] = 3393,
  [SMALL_STATE(178)] = 3403,
  [SMALL_STATE(179)] = 3413,
  [SMALL_STATE(180)] = 3423,
  [SMALL_STATE(181)] = 3433,
  [SMALL_STATE(182)] = 3443,
  [SMALL_STATE(183)] = 3453,
  [SMALL_STATE(184)] = 3463,
  [SMALL_STATE(185)] = 3473,
  [SMALL_STATE(186)] = 3483,
  [SMALL_STATE(187)] = 3493,
  [SMALL_STATE(188)] = 3503,
  [SMALL_STATE(189)] = 3513,
  [SMALL_STATE(190)] = 3523,
  [SMALL_STATE(191)] = 3533,
  [SMALL_STATE(192)] = 3543,
  [SMALL_STATE(193)] = 3553,
  [SMALL_STATE(194)] = 3563,
  [SMALL_STATE(195)] = 3573,
  [SMALL_STATE(196)] = 3583,
  [SMALL_STATE(197)] = 3593,
  [SMALL_STATE(198)] = 3603,
  [SMALL_STATE(199)] = 3613,
  [SMALL_STATE(200)] = 3623,
  [SMALL_STATE(201)] = 3633,
  [SMALL_STATE(202)] = 3643,
  [SMALL_STATE(203)] = 3653,
  [SMALL_STATE(204)] = 3663,
  [SMALL_STATE(205)] = 3673,
  [SMALL_STATE(206)] = 3683,
  [SMALL_STATE(207)] = 3693,
  [SMALL_STATE(208)] = 3703,
  [SMALL_STATE(209)] = 3713,
  [SMALL_STATE(210)] = 3723,
  [SMALL_STATE(211)] = 3733,
  [SMALL_STATE(212)] = 3743,
  [SMALL_STATE(213)] = 3753,
  [SMALL_STATE(214)] = 3763,
  [SMALL_STATE(215)] = 3773,
  [SMALL_STATE(216)] = 3783,
  [SMALL_STATE(217)] = 3793,
  [SMALL_STATE(218)] = 3803,
  [SMALL_STATE(219)] = 3813,
  [SMALL_STATE(220)] = 3823,
  [SMALL_STATE(221)] = 3833,
  [SMALL_STATE(222)] = 3843,
  [SMALL_STATE(223)] = 3853,
  [SMALL_STATE(224)] = 3860,
  [SMALL_STATE(225)] = 3867,
  [SMALL_STATE(226)] = 3874,
  [SMALL_STATE(227)] = 3881,
  [SMALL_STATE(228)] = 3888,
  [SMALL_STATE(229)] = 3895,
  [SMALL_STATE(230)] = 3902,
  [SMALL_STATE(231)] = 3909,
  [SMALL_STATE(232)] = 3916,
  [SMALL_STATE(233)] = 3923,
  [SMALL_STATE(234)] = 3930,
  [SMALL_STATE(235)] = 3937,
  [SMALL_STATE(236)] = 3944,
  [SMALL_STATE(237)] = 3951,
  [SMALL_STATE(238)] = 3958,
  [SMALL_STATE(239)] = 3965,
  [SMALL_STATE(240)] = 3972,
  [SMALL_STATE(241)] = 3979,
  [SMALL_STATE(242)] = 3986,
  [SMALL_STATE(243)] = 3993,
  [SMALL_STATE(244)] = 4000,
  [SMALL_STATE(245)] = 4007,
  [SMALL_STATE(246)] = 4014,
  [SMALL_STATE(247)] = 4021,
  [SMALL_STATE(248)] = 4028,
  [SMALL_STATE(249)] = 4035,
  [SMALL_STATE(250)] = 4042,
  [SMALL_STATE(251)] = 4049,
  [SMALL_STATE(252)] = 4056,
  [SMALL_STATE(253)] = 4063,
  [SMALL_STATE(254)] = 4070,
  [SMALL_STATE(255)] = 4077,
  [SMALL_STATE(256)] = 4084,
  [SMALL_STATE(257)] = 4091,
  [SMALL_STATE(258)] = 4098,
  [SMALL_STATE(259)] = 4105,
  [SMALL_STATE(260)] = 4112,
  [SMALL_STATE(261)] = 4119,
  [SMALL_STATE(262)] = 4126,
  [SMALL_STATE(263)] = 4133,
  [SMALL_STATE(264)] = 4140,
  [SMALL_STATE(265)] = 4147,
  [SMALL_STATE(266)] = 4154,
  [SMALL_STATE(267)] = 4161,
  [SMALL_STATE(268)] = 4168,
  [SMALL_STATE(269)] = 4175,
  [SMALL_STATE(270)] = 4182,
  [SMALL_STATE(271)] = 4189,
  [SMALL_STATE(272)] = 4196,
  [SMALL_STATE(273)] = 4203,
  [SMALL_STATE(274)] = 4210,
  [SMALL_STATE(275)] = 4217,
  [SMALL_STATE(276)] = 4224,
  [SMALL_STATE(277)] = 4231,
  [SMALL_STATE(278)] = 4238,
  [SMALL_STATE(279)] = 4245,
  [SMALL_STATE(280)] = 4252,
  [SMALL_STATE(281)] = 4259,
  [SMALL_STATE(282)] = 4266,
  [SMALL_STATE(283)] = 4273,
  [SMALL_STATE(284)] = 4280,
  [SMALL_STATE(285)] = 4287,
  [SMALL_STATE(286)] = 4294,
  [SMALL_STATE(287)] = 4301,
  [SMALL_STATE(288)] = 4308,
  [SMALL_STATE(289)] = 4315,
  [SMALL_STATE(290)] = 4322,
  [SMALL_STATE(291)] = 4329,
  [SMALL_STATE(292)] = 4336,
  [SMALL_STATE(293)] = 4343,
  [SMALL_STATE(294)] = 4350,
  [SMALL_STATE(295)] = 4357,
  [SMALL_STATE(296)] = 4364,
  [SMALL_STATE(297)] = 4371,
  [SMALL_STATE(298)] = 4378,
  [SMALL_STATE(299)] = 4385,
  [SMALL_STATE(300)] = 4392,
  [SMALL_STATE(301)] = 4399,
  [SMALL_STATE(302)] = 4406,
  [SMALL_STATE(303)] = 4413,
  [SMALL_STATE(304)] = 4420,
  [SMALL_STATE(305)] = 4427,
  [SMALL_STATE(306)] = 4434,
  [SMALL_STATE(307)] = 4441,
  [SMALL_STATE(308)] = 4448,
  [SMALL_STATE(309)] = 4455,
  [SMALL_STATE(310)] = 4462,
  [SMALL_STATE(311)] = 4469,
  [SMALL_STATE(312)] = 4476,
  [SMALL_STATE(313)] = 4483,
  [SMALL_STATE(314)] = 4490,
  [SMALL_STATE(315)] = 4497,
  [SMALL_STATE(316)] = 4504,
  [SMALL_STATE(317)] = 4511,
  [SMALL_STATE(318)] = 4518,
  [SMALL_STATE(319)] = 4525,
  [SMALL_STATE(320)] = 4532,
  [SMALL_STATE(321)] = 4539,
  [SMALL_STATE(322)] = 4546,
  [SMALL_STATE(323)] = 4553,
  [SMALL_STATE(324)] = 4560,
  [SMALL_STATE(325)] = 4567,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(89),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(268),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(292),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(292),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(134),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(271),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(27),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(266),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(271),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(267),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(268),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(37),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(140),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(48),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(153),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(14),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(206),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(152),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(60),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(48),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(153),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(167),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(158),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(73),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(48),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(153),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(306),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(140),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(177),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(164),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(85),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(140),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(48),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(153),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(140),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(320),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(259),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(153),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(153),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(214),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(48),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(140),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(140),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(48),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(48),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(48),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(220),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 14),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 16),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 9, .production_id = 17),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 18),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [864] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 8),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
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
