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
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 3
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

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
  sym_ellipses = 41,
  anon_sym_ = 42,
  anon_sym_AT_LBRACE = 43,
  anon_sym_AMP_LBRACE = 44,
  sym_variable_name = 45,
  sym_text_chunk = 46,
  sym_comment = 47,
  sym__separator = 48,
  aux_sym__whitespace_token1 = 49,
  sym__line_break = 50,
  sym_source_file = 51,
  sym_section = 52,
  sym_settings_section = 53,
  sym_setting_statement = 54,
  sym_variables_section = 55,
  sym_variable_definition = 56,
  sym_keywords_section = 57,
  sym_keyword_definition = 58,
  sym_keyword_definition_body = 59,
  sym_keyword_setting = 60,
  sym_test_cases_section = 61,
  sym_test_case_definition = 62,
  sym_test_case_definition_body = 63,
  sym_test_case_setting = 64,
  sym_statement = 65,
  sym_return_statement = 66,
  sym_variable_assignment = 67,
  sym_keyword_invocation = 68,
  sym_if_statement = 69,
  sym_elseif_statement = 70,
  sym_else_statement = 71,
  sym_inline_if_statement = 72,
  sym_block = 73,
  sym_inline_elseif_statement = 74,
  sym_inline_else_statement = 75,
  sym_inline_statement = 76,
  sym_arguments = 77,
  sym_arguments_without_continuation = 78,
  sym_continuation = 79,
  sym_argument = 80,
  sym_scalar_variable = 81,
  sym_list_variable = 82,
  sym_dictionary_variable = 83,
  sym__indentation = 84,
  sym__empty_line = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_settings_section_repeat1 = 87,
  aux_sym_variables_section_repeat1 = 88,
  aux_sym_keywords_section_repeat1 = 89,
  aux_sym_keyword_definition_body_repeat1 = 90,
  aux_sym_test_cases_section_repeat1 = 91,
  aux_sym_test_case_definition_body_repeat1 = 92,
  aux_sym_if_statement_repeat1 = 93,
  aux_sym_inline_if_statement_repeat1 = 94,
  aux_sym_block_repeat1 = 95,
  aux_sym_arguments_repeat1 = 96,
  aux_sym_arguments_repeat2 = 97,
  aux_sym_argument_repeat1 = 98,
  alias_sym_keyword = 99,
  alias_sym_name = 100,
  alias_sym_return_value = 101,
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
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [alias_sym_keyword] = "keyword",
  [alias_sym_name] = "name",
  [alias_sym_return_value] = "return_value",
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
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_return_value] = alias_sym_return_value,
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
};

enum {
  field_alternative = 1,
  field_condition = 2,
  field_consequence = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 3},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 4},
  [15] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alternative, 0},
  [1] =
    {field_condition, 2},
  [2] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [4] =
    {field_alternative, 4},
    {field_condition, 2},
  [6] =
    {field_condition, 2},
    {field_consequence, 4},
  [8] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [10] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [13] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [16] =
    {field_consequence, 3},
  [17] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [20] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [24] =
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    alias_sym_return_value,
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
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 41,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 7,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 7,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 60,
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
  [75] = 73,
  [76] = 69,
  [77] = 64,
  [78] = 73,
  [79] = 64,
  [80] = 69,
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
  [92] = 88,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 90,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 84,
  [105] = 99,
  [106] = 85,
  [107] = 87,
  [108] = 108,
  [109] = 91,
  [110] = 94,
  [111] = 82,
  [112] = 99,
  [113] = 93,
  [114] = 89,
  [115] = 87,
  [116] = 97,
  [117] = 117,
  [118] = 84,
  [119] = 89,
  [120] = 85,
  [121] = 91,
  [122] = 122,
  [123] = 94,
  [124] = 93,
  [125] = 82,
  [126] = 126,
  [127] = 102,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 117,
  [134] = 122,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 129,
  [140] = 140,
  [141] = 130,
  [142] = 142,
  [143] = 7,
  [144] = 144,
  [145] = 138,
  [146] = 146,
  [147] = 136,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 126,
  [152] = 135,
  [153] = 153,
  [154] = 154,
  [155] = 138,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
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
  [172] = 168,
  [173] = 173,
  [174] = 158,
  [175] = 173,
  [176] = 176,
  [177] = 177,
  [178] = 168,
  [179] = 179,
  [180] = 171,
  [181] = 171,
  [182] = 161,
  [183] = 162,
  [184] = 163,
  [185] = 185,
  [186] = 158,
  [187] = 187,
  [188] = 188,
  [189] = 185,
  [190] = 190,
  [191] = 191,
  [192] = 190,
  [193] = 193,
  [194] = 191,
  [195] = 193,
  [196] = 163,
  [197] = 197,
  [198] = 162,
  [199] = 161,
  [200] = 185,
  [201] = 201,
  [202] = 190,
  [203] = 191,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 205,
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
  [239] = 239,
  [240] = 240,
  [241] = 236,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 242,
  [251] = 251,
  [252] = 246,
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
  [263] = 254,
  [264] = 264,
  [265] = 236,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 255,
  [270] = 270,
  [271] = 242,
  [272] = 272,
  [273] = 246,
  [274] = 258,
  [275] = 254,
  [276] = 260,
  [277] = 261,
  [278] = 262,
  [279] = 236,
  [280] = 280,
  [281] = 260,
  [282] = 261,
  [283] = 222,
  [284] = 220,
  [285] = 217,
  [286] = 210,
  [287] = 262,
  [288] = 288,
  [289] = 289,
  [290] = 222,
  [291] = 220,
  [292] = 217,
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
      if (eof) ADVANCE(327);
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '=') ADVANCE(358);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(644);
      if (lookahead == '#') ADVANCE(639);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(641);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '}') ADVANCE(357);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&') ADVANCE(107);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(642);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(643);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(410);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ']') ADVANCE(366);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ']') ADVANCE(383);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ']') ADVANCE(372);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ']') ADVANCE(375);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ']') ADVANCE(386);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == ']') ADVANCE(369);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == '[') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '$') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(410);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(360);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(330);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(353);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(381);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(519);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(520);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(521);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(399);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(393);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(397);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(391);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(395);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(523);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(389);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 79:
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(366);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(383);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(372);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(378);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(375);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(386);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(369);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(385);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(377);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(365);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(374);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(371);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == '{') ADVANCE(356);
      END_STATE();
    case 105:
      if (lookahead == '{') ADVANCE(356);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 106:
      if (lookahead == '{') ADVANCE(407);
      END_STATE();
    case 107:
      if (lookahead == '{') ADVANCE(407);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 108:
      if (lookahead == '{') ADVANCE(406);
      END_STATE();
    case 109:
      if (lookahead == '{') ADVANCE(406);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 110:
      if (lookahead == '{') ADVANCE(437);
      END_STATE();
    case 111:
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 112:
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(533);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(535);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(539);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 115:
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(525);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(249);
      END_STATE();
    case 143:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 184:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 185:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 186:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 187:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 188:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 189:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 197:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 198:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 205:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 207:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 208:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 209:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 210:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 226:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 227:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 228:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 229:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 232:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 233:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 234:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 235:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 236:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 237:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 238:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 239:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 240:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 241:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 246:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 247:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 248:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 249:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      END_STATE();
    case 261:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 262:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 263:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 301:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 302:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 303:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 304:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 305:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 306:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 307:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 308:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 312:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 313:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 314:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 315:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 316:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 317:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 318:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 319:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 320:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 321:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(437);
      END_STATE();
    case 322:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(525);
      END_STATE();
    case 323:
      if (eof) ADVANCE(327);
      if (lookahead == '\t') ADVANCE(640);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(645);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 324:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '$') ADVANCE(104);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(647);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(156);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(222);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 325:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 326:
      if (eof) ADVANCE(327);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(639);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(639);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead == '{') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(633);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(636);
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(634);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(634);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(634);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(432);
      if (lookahead == 'N') ADVANCE(425);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'U') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(513);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(513);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(513);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(513);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(513);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(513);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(513);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(513);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(513);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(513);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(513);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(513);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(513);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(513);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(513);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(513);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(513);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(513);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(513);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(513);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(513);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(513);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(513);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(513);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(513);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(513);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(513);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(513);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(513);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(445);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '*') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == 'F') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '{') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(116);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(605);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(605);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(605);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(605);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(605);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(605);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(605);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(605);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(605);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(605);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(605);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(605);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(605);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(605);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(605);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(605);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(605);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(605);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(605);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(114);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(513);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ']') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == ']') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == ']') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == ']') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == ']') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == ']') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == '{') ADVANCE(639);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '{') ADVANCE(639);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(634);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(634);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(639);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(647);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(639);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(647);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(649);
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
  [1] = {.lex_state = 326},
  [2] = {.lex_state = 324},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 324},
  [5] = {.lex_state = 324},
  [6] = {.lex_state = 324},
  [7] = {.lex_state = 324},
  [8] = {.lex_state = 324},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 323},
  [13] = {.lex_state = 323},
  [14] = {.lex_state = 323},
  [15] = {.lex_state = 323},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 324},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 324},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 325},
  [22] = {.lex_state = 325},
  [23] = {.lex_state = 325},
  [24] = {.lex_state = 325},
  [25] = {.lex_state = 325},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 324},
  [28] = {.lex_state = 325},
  [29] = {.lex_state = 324},
  [30] = {.lex_state = 325},
  [31] = {.lex_state = 324},
  [32] = {.lex_state = 325},
  [33] = {.lex_state = 325},
  [34] = {.lex_state = 325},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 323},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 323},
  [51] = {.lex_state = 323},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 324},
  [54] = {.lex_state = 325},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 325},
  [58] = {.lex_state = 325},
  [59] = {.lex_state = 325},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 324},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 42},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 43},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 43},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 8},
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
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 43},
  [284] = {.lex_state = 43},
  [285] = {.lex_state = 43},
  [286] = {.lex_state = 43},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 43},
  [291] = {.lex_state = 43},
  [292] = {.lex_state = 43},
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
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(257),
    [sym_section] = STATE(20),
    [sym_settings_section] = STATE(86),
    [sym_variables_section] = STATE(86),
    [sym_keywords_section] = STATE(86),
    [sym_test_cases_section] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(20),
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
    ACTIONS(22), 1,
      aux_sym__whitespace_token1,
    ACTIONS(25), 1,
      sym__line_break,
    STATE(2), 3,
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
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(34), 1,
      sym__line_break,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(38), 1,
      sym__line_break,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(38), 1,
      sym__line_break,
    STATE(2), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(30), 17,
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
  [270] = 8,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(219), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(215), 5,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
    ACTIONS(54), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
  [305] = 8,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(214), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(215), 5,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
    ACTIONS(64), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [340] = 10,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_END,
    ACTIONS(68), 1,
      anon_sym_ELSEIF,
    ACTIONS(70), 1,
      anon_sym_ELSE,
    STATE(264), 1,
      sym_statement,
    STATE(215), 5,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
  [375] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym__separator,
    ACTIONS(79), 1,
      aux_sym__whitespace_token1,
    ACTIONS(82), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(12), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(74), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [405] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__separator,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    ACTIONS(95), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(13), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(87), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [435] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(106), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(12), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(100), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [465] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(114), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(13), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(110), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [495] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_settings_section_token1,
    ACTIONS(121), 1,
      aux_sym_variables_section_token1,
    ACTIONS(124), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(127), 1,
      aux_sym_test_cases_section_token1,
    STATE(16), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(86), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [524] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(132), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(134), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [549] = 8,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(86), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(132), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(140), 1,
      sym__line_break,
    STATE(29), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [603] = 8,
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
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(86), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [632] = 7,
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
    STATE(32), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(146), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [659] = 7,
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
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(156), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [686] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(173), 1,
      sym__line_break,
    STATE(34), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(169), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [713] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      sym__line_break,
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(177), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [740] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      sym_text_chunk,
    ACTIONS(188), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      sym__line_break,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(183), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [767] = 8,
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
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(86), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(132), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(17), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [821] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym__line_break,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [848] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym__whitespace_token1,
    ACTIONS(132), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(134), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [873] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      sym__line_break,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(206), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      aux_sym__whitespace_token1,
    ACTIONS(218), 1,
      sym__line_break,
    STATE(31), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [925] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_text_chunk,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(202), 1,
      sym__line_break,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(25), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(206), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [952] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym__line_break,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(223), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [979] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(179), 1,
      sym__line_break,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(223), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1006] = 7,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(264), 1,
      sym_statement,
    STATE(215), 5,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
  [1032] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__separator,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(231), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(83), 1,
      aux_sym_if_statement_repeat1,
    STATE(95), 1,
      sym_block,
    STATE(176), 1,
      sym_else_statement,
    STATE(280), 1,
      sym_elseif_statement,
    STATE(81), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1064] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(228), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1091] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(204), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1118] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(289), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1145] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(272), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1172] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(157), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1199] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(204), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1226] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1243] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(140), 1,
      sym_argument,
    STATE(226), 1,
      sym_arguments_without_continuation,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1270] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(157), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1297] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(90), 1,
      sym_argument,
    STATE(159), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1324] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(159), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1351] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(288), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1378] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(96), 1,
      sym_argument,
    STATE(212), 1,
      sym_arguments,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1405] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1422] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
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
  [1439] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(255), 1,
      sym_text_chunk,
    STATE(229), 1,
      sym_argument,
    STATE(78), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__whitespace_token1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1479] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1495] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(269), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(271), 1,
      sym_text_chunk,
    STATE(224), 1,
      sym_argument,
    STATE(75), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1519] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(206), 1,
      sym_argument,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1543] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1559] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1575] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1591] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(255), 1,
      sym_text_chunk,
    STATE(169), 1,
      sym_argument,
    STATE(78), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1631] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(167), 1,
      sym_argument,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1655] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(235), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(237), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(239), 1,
      sym_text_chunk,
    STATE(169), 1,
      sym_argument,
    STATE(73), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1679] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_,
    ACTIONS(287), 1,
      sym_text_chunk,
    ACTIONS(289), 2,
      sym__separator,
      sym__line_break,
    STATE(69), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1700] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RETURN,
    ACTIONS(295), 1,
      sym_text_chunk,
    STATE(132), 1,
      sym_inline_statement,
    STATE(179), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(231), 1,
      sym__line_break,
    ACTIONS(297), 1,
      sym__separator,
    STATE(35), 1,
      sym__indentation,
    STATE(227), 1,
      sym_block,
    STATE(81), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(299), 1,
      sym__line_break,
    STATE(10), 1,
      sym__indentation,
    STATE(54), 1,
      sym_keyword_definition_body,
    STATE(15), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(104), 1,
      aux_sym__whitespace_token1,
    ACTIONS(301), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(59), 1,
      sym_test_case_definition_body,
    STATE(14), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1790] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_,
    ACTIONS(309), 1,
      sym_text_chunk,
    ACTIONS(312), 2,
      sym__separator,
      sym__line_break,
    STATE(69), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1811] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RETURN,
    ACTIONS(295), 1,
      sym_text_chunk,
    STATE(201), 1,
      sym_inline_statement,
    STATE(179), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1832] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(231), 1,
      sym__line_break,
    ACTIONS(297), 1,
      sym__separator,
    STATE(35), 1,
      sym__indentation,
    STATE(216), 1,
      sym_block,
    STATE(81), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1855] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RETURN,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(223), 1,
      sym_inline_statement,
    STATE(179), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1876] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_,
    ACTIONS(314), 1,
      sym_text_chunk,
    ACTIONS(316), 2,
      sym__separator,
      sym__line_break,
    STATE(64), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__separator,
    ACTIONS(321), 1,
      aux_sym__whitespace_token1,
    ACTIONS(324), 1,
      sym__line_break,
    STATE(35), 1,
      sym__indentation,
    STATE(74), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1917] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      sym__separator,
    ACTIONS(327), 1,
      anon_sym_,
    ACTIONS(329), 1,
      sym_text_chunk,
    STATE(79), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1937] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__line_break,
    ACTIONS(331), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(337), 1,
      sym_text_chunk,
    STATE(76), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1957] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      sym__line_break,
    ACTIONS(340), 1,
      anon_sym_,
    ACTIONS(342), 1,
      sym_text_chunk,
    STATE(76), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1977] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      sym__line_break,
    ACTIONS(340), 1,
      anon_sym_,
    ACTIONS(344), 1,
      sym_text_chunk,
    STATE(77), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1997] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      sym__separator,
    ACTIONS(327), 1,
      anon_sym_,
    ACTIONS(346), 1,
      sym_text_chunk,
    STATE(80), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2017] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__separator,
    ACTIONS(348), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(354), 1,
      sym_text_chunk,
    STATE(80), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      sym__separator,
    ACTIONS(360), 1,
      sym__line_break,
    STATE(35), 1,
      sym__indentation,
    STATE(74), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2057] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(364), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__separator,
    STATE(101), 1,
      aux_sym_if_statement_repeat1,
    STATE(150), 1,
      sym__indentation,
    STATE(166), 1,
      sym_else_statement,
    STATE(280), 1,
      sym_elseif_statement,
  [2089] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(370), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2102] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(374), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2126] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(380), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym__separator,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
    STATE(126), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2156] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(390), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(88), 1,
      aux_sym_arguments_repeat1,
    STATE(122), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2186] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(400), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(404), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
    STATE(151), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2216] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(409), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2229] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(413), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__separator,
    STATE(98), 1,
      aux_sym_if_statement_repeat1,
    STATE(149), 1,
      sym__indentation,
    STATE(160), 1,
      sym_else_statement,
    STATE(280), 1,
      sym_elseif_statement,
  [2261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(417), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_arguments_repeat1,
    STATE(134), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2278] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(422), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym__separator,
    STATE(101), 1,
      aux_sym_if_statement_repeat1,
    STATE(146), 1,
      sym__indentation,
    STATE(177), 1,
      sym_else_statement,
    STATE(280), 1,
      sym_elseif_statement,
  [2310] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(312), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2323] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(422), 2,
      anon_sym_,
      sym__line_break,
  [2335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__separator,
    STATE(101), 1,
      aux_sym_if_statement_repeat1,
    STATE(243), 1,
      sym__indentation,
    STATE(280), 1,
      sym_elseif_statement,
  [2351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__separator,
    ACTIONS(436), 1,
      sym__line_break,
    ACTIONS(431), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_ELSEIF,
    ACTIONS(440), 1,
      anon_sym_ELSE,
    STATE(170), 1,
      sym_inline_elseif_statement,
    STATE(253), 1,
      sym_inline_else_statement,
  [2381] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(370), 2,
      anon_sym_,
      sym__line_break,
  [2393] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(426), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2405] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(374), 2,
      anon_sym_,
      sym__line_break,
  [2417] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(380), 2,
      anon_sym_,
      sym__line_break,
  [2429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_ELSEIF,
    ACTIONS(440), 1,
      anon_sym_ELSE,
    STATE(170), 1,
      sym_inline_elseif_statement,
    STATE(240), 1,
      sym_inline_else_statement,
  [2445] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(400), 2,
      anon_sym_,
      sym__separator,
  [2457] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(413), 2,
      anon_sym_,
      sym__separator,
  [2469] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(364), 2,
      anon_sym_,
      sym__separator,
  [2481] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(426), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2493] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(409), 2,
      anon_sym_,
      sym__separator,
  [2505] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(390), 2,
      anon_sym_,
      sym__separator,
  [2517] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(380), 2,
      anon_sym_,
      sym__separator,
  [2529] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(422), 2,
      anon_sym_,
      sym__separator,
  [2541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym__separator,
    ACTIONS(444), 1,
      sym__line_break,
    STATE(117), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2555] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(370), 2,
      anon_sym_,
      sym__separator,
  [2567] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(390), 2,
      anon_sym_,
      sym__line_break,
  [2579] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(374), 2,
      anon_sym_,
      sym__separator,
  [2591] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(400), 2,
      anon_sym_,
      sym__line_break,
  [2603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__line_break,
    ACTIONS(447), 1,
      sym__separator,
    STATE(117), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2617] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(413), 2,
      anon_sym_,
      sym__line_break,
  [2629] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(409), 2,
      anon_sym_,
      sym__line_break,
  [2641] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(364), 2,
      anon_sym_,
      sym__line_break,
  [2653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__separator,
    ACTIONS(451), 1,
      sym__line_break,
    STATE(117), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym__line_break,
    ACTIONS(456), 1,
      sym__separator,
    ACTIONS(454), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__separator,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [2694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(130), 1,
      aux_sym_arguments_repeat1,
  [2707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(463), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [2733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__separator,
    ACTIONS(467), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_inline_if_statement_repeat1,
  [2746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym__line_break,
    STATE(133), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__line_break,
    STATE(133), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym__separator,
    ACTIONS(475), 1,
      sym__line_break,
    STATE(128), 1,
      aux_sym_arguments_repeat1,
  [2781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_ellipses,
    ACTIONS(479), 1,
      sym__separator,
    STATE(269), 1,
      sym__indentation,
  [2794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(481), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [2807] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(483), 1,
      sym_text_chunk,
    STATE(99), 1,
      sym_scalar_variable,
  [2820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__separator,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(141), 1,
      aux_sym_arguments_repeat1,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(485), 1,
      sym__line_break,
    STATE(137), 1,
      aux_sym_arguments_repeat1,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__line_break,
    ACTIONS(487), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [2859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym__separator,
    ACTIONS(490), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [2870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__line_break,
    ACTIONS(494), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [2892] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(498), 1,
      sym_text_chunk,
    STATE(105), 1,
      sym_scalar_variable,
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_ELSE,
    ACTIONS(500), 1,
      anon_sym_END,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_ellipses,
    ACTIONS(506), 1,
      sym__separator,
    STATE(255), 1,
      sym__indentation,
  [2931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__separator,
    ACTIONS(511), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_inline_if_statement_repeat1,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_ELSE,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
    ACTIONS(513), 1,
      anon_sym_END,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_ELSE,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
    ACTIONS(515), 1,
      anon_sym_END,
  [2970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__line_break,
    STATE(133), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__separator,
    ACTIONS(475), 1,
      sym__line_break,
    STATE(131), 1,
      aux_sym_arguments_repeat1,
  [2994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    STATE(153), 1,
      aux_sym_arguments_repeat1,
  [3007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__separator,
    ACTIONS(527), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_inline_if_statement_repeat1,
  [3020] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(529), 1,
      sym_text_chunk,
    STATE(112), 1,
      sym_scalar_variable,
  [3033] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym_settings_section_token2,
    ACTIONS(533), 1,
      sym__line_break,
  [3043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym__separator,
    ACTIONS(537), 1,
      sym__line_break,
  [3053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(541), 1,
      anon_sym_,
  [3063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__separator,
    ACTIONS(545), 1,
      sym__line_break,
  [3073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__separator,
    STATE(249), 1,
      sym__indentation,
  [3083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      anon_sym_,
  [3093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    ACTIONS(555), 1,
      anon_sym_,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    ACTIONS(559), 1,
      anon_sym_,
  [3113] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym_settings_section_token2,
    ACTIONS(563), 1,
      sym__line_break,
  [3123] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_settings_section_token2,
    ACTIONS(567), 1,
      sym__line_break,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__separator,
    STATE(245), 1,
      sym__indentation,
  [3143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__line_break,
    ACTIONS(571), 1,
      sym__separator,
  [3153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      anon_sym_,
  [3163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__separator,
    ACTIONS(579), 1,
      sym__line_break,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__line_break,
    ACTIONS(581), 1,
      sym__separator,
  [3183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(585), 1,
      anon_sym_,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    ACTIONS(589), 1,
      anon_sym_,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__separator,
    ACTIONS(593), 1,
      sym__line_break,
  [3213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      anon_sym_,
  [3223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__line_break,
    ACTIONS(599), 1,
      sym__separator,
  [3233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__separator,
    STATE(270), 1,
      sym__indentation,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__separator,
    STATE(231), 1,
      sym__indentation,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__separator,
    ACTIONS(611), 1,
      sym__line_break,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_,
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 1,
      anon_sym_,
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      anon_sym_,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 1,
      anon_sym_,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      anon_sym_,
  [3323] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_,
    ACTIONS(635), 1,
      sym_variable_name,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_,
  [3343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__separator,
    ACTIONS(643), 1,
      sym__line_break,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_ELSEIF,
    STATE(170), 1,
      sym_inline_elseif_statement,
  [3363] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_,
    ACTIONS(647), 1,
      sym_variable_name,
  [3373] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_,
    ACTIONS(651), 1,
      sym_variable_name,
  [3383] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_,
    ACTIONS(655), 1,
      sym_variable_name,
  [3393] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_,
    ACTIONS(659), 1,
      sym_variable_name,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__separator,
    ACTIONS(664), 1,
      sym__line_break,
  [3413] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_,
    ACTIONS(668), 1,
      sym_variable_name,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__line_break,
    ACTIONS(670), 1,
      sym__separator,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(674), 1,
      anon_sym_,
  [3443] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(676), 1,
      aux_sym_settings_section_token2,
    ACTIONS(678), 1,
      sym__line_break,
  [3453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    ACTIONS(682), 1,
      anon_sym_,
  [3463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    ACTIONS(686), 1,
      anon_sym_,
  [3473] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_,
    ACTIONS(690), 1,
      sym_variable_name,
  [3483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
    ACTIONS(694), 1,
      sym__line_break,
  [3493] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_,
    ACTIONS(698), 1,
      sym_variable_name,
  [3503] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_,
    ACTIONS(702), 1,
      sym_variable_name,
  [3513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
    ACTIONS(706), 1,
      sym__line_break,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    ACTIONS(710), 1,
      sym__line_break,
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__separator,
    ACTIONS(714), 1,
      sym__line_break,
  [3543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__line_break,
    ACTIONS(716), 1,
      sym__separator,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym__separator,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym__line_break,
  [3567] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_variable_name,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym__separator,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__line_break,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym__separator,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym__line_break,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__line_break,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym__separator,
  [3616] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_variable_name,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym__separator,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__line_break,
  [3637] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_variable_name,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym__line_break,
  [3651] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_variable_name,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym__line_break,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym__separator,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym__line_break,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym__line_break,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym__separator,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym__line_break,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__line_break,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym__line_break,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_END,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__line_break,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym__line_break,
  [3742] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_variable_name,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym__line_break,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym__separator,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym__line_break,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__line_break,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__line_break,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      sym__line_break,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym__line_break,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_END,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym__line_break,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__line_break,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_END,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym__separator,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym__line_break,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_ellipses,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym__line_break,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym__separator,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym__line_break,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym__line_break,
  [3959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym__line_break,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym__separator,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym__line_break,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_ellipses,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_END,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym__line_break,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym__line_break,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__separator,
  [4064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [4078] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_variable_name,
  [4085] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_variable_name,
  [4092] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_variable_name,
  [4099] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_variable_name,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__line_break,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__line_break,
  [4127] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_variable_name,
  [4134] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_variable_name,
  [4141] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(867), 1,
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
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 375,
  [SMALL_STATE(13)] = 405,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 549,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 603,
  [SMALL_STATE(21)] = 632,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 686,
  [SMALL_STATE(24)] = 713,
  [SMALL_STATE(25)] = 740,
  [SMALL_STATE(26)] = 767,
  [SMALL_STATE(27)] = 796,
  [SMALL_STATE(28)] = 821,
  [SMALL_STATE(29)] = 848,
  [SMALL_STATE(30)] = 873,
  [SMALL_STATE(31)] = 900,
  [SMALL_STATE(32)] = 925,
  [SMALL_STATE(33)] = 952,
  [SMALL_STATE(34)] = 979,
  [SMALL_STATE(35)] = 1006,
  [SMALL_STATE(36)] = 1032,
  [SMALL_STATE(37)] = 1064,
  [SMALL_STATE(38)] = 1091,
  [SMALL_STATE(39)] = 1118,
  [SMALL_STATE(40)] = 1145,
  [SMALL_STATE(41)] = 1172,
  [SMALL_STATE(42)] = 1199,
  [SMALL_STATE(43)] = 1226,
  [SMALL_STATE(44)] = 1243,
  [SMALL_STATE(45)] = 1270,
  [SMALL_STATE(46)] = 1297,
  [SMALL_STATE(47)] = 1324,
  [SMALL_STATE(48)] = 1351,
  [SMALL_STATE(49)] = 1378,
  [SMALL_STATE(50)] = 1405,
  [SMALL_STATE(51)] = 1422,
  [SMALL_STATE(52)] = 1439,
  [SMALL_STATE(53)] = 1463,
  [SMALL_STATE(54)] = 1479,
  [SMALL_STATE(55)] = 1495,
  [SMALL_STATE(56)] = 1519,
  [SMALL_STATE(57)] = 1543,
  [SMALL_STATE(58)] = 1559,
  [SMALL_STATE(59)] = 1575,
  [SMALL_STATE(60)] = 1591,
  [SMALL_STATE(61)] = 1615,
  [SMALL_STATE(62)] = 1631,
  [SMALL_STATE(63)] = 1655,
  [SMALL_STATE(64)] = 1679,
  [SMALL_STATE(65)] = 1700,
  [SMALL_STATE(66)] = 1721,
  [SMALL_STATE(67)] = 1744,
  [SMALL_STATE(68)] = 1767,
  [SMALL_STATE(69)] = 1790,
  [SMALL_STATE(70)] = 1811,
  [SMALL_STATE(71)] = 1832,
  [SMALL_STATE(72)] = 1855,
  [SMALL_STATE(73)] = 1876,
  [SMALL_STATE(74)] = 1897,
  [SMALL_STATE(75)] = 1917,
  [SMALL_STATE(76)] = 1937,
  [SMALL_STATE(77)] = 1957,
  [SMALL_STATE(78)] = 1977,
  [SMALL_STATE(79)] = 1997,
  [SMALL_STATE(80)] = 2017,
  [SMALL_STATE(81)] = 2037,
  [SMALL_STATE(82)] = 2057,
  [SMALL_STATE(83)] = 2070,
  [SMALL_STATE(84)] = 2089,
  [SMALL_STATE(85)] = 2102,
  [SMALL_STATE(86)] = 2115,
  [SMALL_STATE(87)] = 2126,
  [SMALL_STATE(88)] = 2139,
  [SMALL_STATE(89)] = 2156,
  [SMALL_STATE(90)] = 2169,
  [SMALL_STATE(91)] = 2186,
  [SMALL_STATE(92)] = 2199,
  [SMALL_STATE(93)] = 2216,
  [SMALL_STATE(94)] = 2229,
  [SMALL_STATE(95)] = 2242,
  [SMALL_STATE(96)] = 2261,
  [SMALL_STATE(97)] = 2278,
  [SMALL_STATE(98)] = 2291,
  [SMALL_STATE(99)] = 2310,
  [SMALL_STATE(100)] = 2323,
  [SMALL_STATE(101)] = 2335,
  [SMALL_STATE(102)] = 2351,
  [SMALL_STATE(103)] = 2365,
  [SMALL_STATE(104)] = 2381,
  [SMALL_STATE(105)] = 2393,
  [SMALL_STATE(106)] = 2405,
  [SMALL_STATE(107)] = 2417,
  [SMALL_STATE(108)] = 2429,
  [SMALL_STATE(109)] = 2445,
  [SMALL_STATE(110)] = 2457,
  [SMALL_STATE(111)] = 2469,
  [SMALL_STATE(112)] = 2481,
  [SMALL_STATE(113)] = 2493,
  [SMALL_STATE(114)] = 2505,
  [SMALL_STATE(115)] = 2517,
  [SMALL_STATE(116)] = 2529,
  [SMALL_STATE(117)] = 2541,
  [SMALL_STATE(118)] = 2555,
  [SMALL_STATE(119)] = 2567,
  [SMALL_STATE(120)] = 2579,
  [SMALL_STATE(121)] = 2591,
  [SMALL_STATE(122)] = 2603,
  [SMALL_STATE(123)] = 2617,
  [SMALL_STATE(124)] = 2629,
  [SMALL_STATE(125)] = 2641,
  [SMALL_STATE(126)] = 2653,
  [SMALL_STATE(127)] = 2667,
  [SMALL_STATE(128)] = 2681,
  [SMALL_STATE(129)] = 2694,
  [SMALL_STATE(130)] = 2707,
  [SMALL_STATE(131)] = 2720,
  [SMALL_STATE(132)] = 2733,
  [SMALL_STATE(133)] = 2746,
  [SMALL_STATE(134)] = 2757,
  [SMALL_STATE(135)] = 2768,
  [SMALL_STATE(136)] = 2781,
  [SMALL_STATE(137)] = 2794,
  [SMALL_STATE(138)] = 2807,
  [SMALL_STATE(139)] = 2820,
  [SMALL_STATE(140)] = 2833,
  [SMALL_STATE(141)] = 2846,
  [SMALL_STATE(142)] = 2859,
  [SMALL_STATE(143)] = 2870,
  [SMALL_STATE(144)] = 2881,
  [SMALL_STATE(145)] = 2892,
  [SMALL_STATE(146)] = 2905,
  [SMALL_STATE(147)] = 2918,
  [SMALL_STATE(148)] = 2931,
  [SMALL_STATE(149)] = 2944,
  [SMALL_STATE(150)] = 2957,
  [SMALL_STATE(151)] = 2970,
  [SMALL_STATE(152)] = 2981,
  [SMALL_STATE(153)] = 2994,
  [SMALL_STATE(154)] = 3007,
  [SMALL_STATE(155)] = 3020,
  [SMALL_STATE(156)] = 3033,
  [SMALL_STATE(157)] = 3043,
  [SMALL_STATE(158)] = 3053,
  [SMALL_STATE(159)] = 3063,
  [SMALL_STATE(160)] = 3073,
  [SMALL_STATE(161)] = 3083,
  [SMALL_STATE(162)] = 3093,
  [SMALL_STATE(163)] = 3103,
  [SMALL_STATE(164)] = 3113,
  [SMALL_STATE(165)] = 3123,
  [SMALL_STATE(166)] = 3133,
  [SMALL_STATE(167)] = 3143,
  [SMALL_STATE(168)] = 3153,
  [SMALL_STATE(169)] = 3163,
  [SMALL_STATE(170)] = 3173,
  [SMALL_STATE(171)] = 3183,
  [SMALL_STATE(172)] = 3193,
  [SMALL_STATE(173)] = 3203,
  [SMALL_STATE(174)] = 3213,
  [SMALL_STATE(175)] = 3223,
  [SMALL_STATE(176)] = 3233,
  [SMALL_STATE(177)] = 3243,
  [SMALL_STATE(178)] = 3253,
  [SMALL_STATE(179)] = 3263,
  [SMALL_STATE(180)] = 3273,
  [SMALL_STATE(181)] = 3283,
  [SMALL_STATE(182)] = 3293,
  [SMALL_STATE(183)] = 3303,
  [SMALL_STATE(184)] = 3313,
  [SMALL_STATE(185)] = 3323,
  [SMALL_STATE(186)] = 3333,
  [SMALL_STATE(187)] = 3343,
  [SMALL_STATE(188)] = 3353,
  [SMALL_STATE(189)] = 3363,
  [SMALL_STATE(190)] = 3373,
  [SMALL_STATE(191)] = 3383,
  [SMALL_STATE(192)] = 3393,
  [SMALL_STATE(193)] = 3403,
  [SMALL_STATE(194)] = 3413,
  [SMALL_STATE(195)] = 3423,
  [SMALL_STATE(196)] = 3433,
  [SMALL_STATE(197)] = 3443,
  [SMALL_STATE(198)] = 3453,
  [SMALL_STATE(199)] = 3463,
  [SMALL_STATE(200)] = 3473,
  [SMALL_STATE(201)] = 3483,
  [SMALL_STATE(202)] = 3493,
  [SMALL_STATE(203)] = 3503,
  [SMALL_STATE(204)] = 3513,
  [SMALL_STATE(205)] = 3523,
  [SMALL_STATE(206)] = 3533,
  [SMALL_STATE(207)] = 3543,
  [SMALL_STATE(208)] = 3553,
  [SMALL_STATE(209)] = 3560,
  [SMALL_STATE(210)] = 3567,
  [SMALL_STATE(211)] = 3574,
  [SMALL_STATE(212)] = 3581,
  [SMALL_STATE(213)] = 3588,
  [SMALL_STATE(214)] = 3595,
  [SMALL_STATE(215)] = 3602,
  [SMALL_STATE(216)] = 3609,
  [SMALL_STATE(217)] = 3616,
  [SMALL_STATE(218)] = 3623,
  [SMALL_STATE(219)] = 3630,
  [SMALL_STATE(220)] = 3637,
  [SMALL_STATE(221)] = 3644,
  [SMALL_STATE(222)] = 3651,
  [SMALL_STATE(223)] = 3658,
  [SMALL_STATE(224)] = 3665,
  [SMALL_STATE(225)] = 3672,
  [SMALL_STATE(226)] = 3679,
  [SMALL_STATE(227)] = 3686,
  [SMALL_STATE(228)] = 3693,
  [SMALL_STATE(229)] = 3700,
  [SMALL_STATE(230)] = 3707,
  [SMALL_STATE(231)] = 3714,
  [SMALL_STATE(232)] = 3721,
  [SMALL_STATE(233)] = 3728,
  [SMALL_STATE(234)] = 3735,
  [SMALL_STATE(235)] = 3742,
  [SMALL_STATE(236)] = 3749,
  [SMALL_STATE(237)] = 3756,
  [SMALL_STATE(238)] = 3763,
  [SMALL_STATE(239)] = 3770,
  [SMALL_STATE(240)] = 3777,
  [SMALL_STATE(241)] = 3784,
  [SMALL_STATE(242)] = 3791,
  [SMALL_STATE(243)] = 3798,
  [SMALL_STATE(244)] = 3805,
  [SMALL_STATE(245)] = 3812,
  [SMALL_STATE(246)] = 3819,
  [SMALL_STATE(247)] = 3826,
  [SMALL_STATE(248)] = 3833,
  [SMALL_STATE(249)] = 3840,
  [SMALL_STATE(250)] = 3847,
  [SMALL_STATE(251)] = 3854,
  [SMALL_STATE(252)] = 3861,
  [SMALL_STATE(253)] = 3868,
  [SMALL_STATE(254)] = 3875,
  [SMALL_STATE(255)] = 3882,
  [SMALL_STATE(256)] = 3889,
  [SMALL_STATE(257)] = 3896,
  [SMALL_STATE(258)] = 3903,
  [SMALL_STATE(259)] = 3910,
  [SMALL_STATE(260)] = 3917,
  [SMALL_STATE(261)] = 3924,
  [SMALL_STATE(262)] = 3931,
  [SMALL_STATE(263)] = 3938,
  [SMALL_STATE(264)] = 3945,
  [SMALL_STATE(265)] = 3952,
  [SMALL_STATE(266)] = 3959,
  [SMALL_STATE(267)] = 3966,
  [SMALL_STATE(268)] = 3973,
  [SMALL_STATE(269)] = 3980,
  [SMALL_STATE(270)] = 3987,
  [SMALL_STATE(271)] = 3994,
  [SMALL_STATE(272)] = 4001,
  [SMALL_STATE(273)] = 4008,
  [SMALL_STATE(274)] = 4015,
  [SMALL_STATE(275)] = 4022,
  [SMALL_STATE(276)] = 4029,
  [SMALL_STATE(277)] = 4036,
  [SMALL_STATE(278)] = 4043,
  [SMALL_STATE(279)] = 4050,
  [SMALL_STATE(280)] = 4057,
  [SMALL_STATE(281)] = 4064,
  [SMALL_STATE(282)] = 4071,
  [SMALL_STATE(283)] = 4078,
  [SMALL_STATE(284)] = 4085,
  [SMALL_STATE(285)] = 4092,
  [SMALL_STATE(286)] = 4099,
  [SMALL_STATE(287)] = 4106,
  [SMALL_STATE(288)] = 4113,
  [SMALL_STATE(289)] = 4120,
  [SMALL_STATE(290)] = 4127,
  [SMALL_STATE(291)] = 4134,
  [SMALL_STATE(292)] = 4141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(237),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(236),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(265),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(10),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(265),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(13),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(187),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(241),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(234),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(241),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(25),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(235),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(236),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(31),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 4, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(189),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(138),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(69),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(279),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(185),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(145),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(76),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(200),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(155),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(80),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(35),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 2), SHIFT(62),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(147),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(62),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(147),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(136),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(136),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 6), SHIFT_REPEAT(243),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(41),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(147),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(62),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(136),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(62),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(62),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(188),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 3), SHIFT(136),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(62),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(46),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(38),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 7),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 15),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 14),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 12),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 11),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 10),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 8),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [805] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 3),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
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
