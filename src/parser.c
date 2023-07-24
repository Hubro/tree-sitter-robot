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
#define STATE_COUNT 338
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 4
#define TOKEN_COUNT 61
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
  anon_sym_INZIP = 48,
  sym_continue_statement = 49,
  sym_break_statement = 50,
  sym_ellipses = 51,
  anon_sym_ = 52,
  anon_sym_AT_LBRACE = 53,
  anon_sym_AMP_LBRACE = 54,
  sym_variable_name = 55,
  sym_text_chunk = 56,
  sym_comment = 57,
  sym__separator = 58,
  aux_sym__whitespace_token1 = 59,
  sym__line_break = 60,
  sym_source_file = 61,
  sym_section = 62,
  sym_settings_section = 63,
  sym_setting_statement = 64,
  sym_variables_section = 65,
  sym_variable_definition = 66,
  sym_keywords_section = 67,
  sym_keyword_definition = 68,
  sym_keyword_definition_body = 69,
  sym_keyword_setting = 70,
  sym_test_cases_section = 71,
  sym_test_case_definition = 72,
  sym_test_case_definition_body = 73,
  sym_test_case_setting = 74,
  sym_statement = 75,
  sym_return_statement = 76,
  sym_variable_assignment = 77,
  sym_keyword_invocation = 78,
  sym_if_statement = 79,
  sym_elseif_statement = 80,
  sym_else_statement = 81,
  sym_inline_if_statement = 82,
  sym_block = 83,
  sym_inline_elseif_statement = 84,
  sym_inline_else_statement = 85,
  sym_inline_statement = 86,
  sym_try_statement = 87,
  sym_except_statement = 88,
  sym_while_statement = 89,
  sym_for_statement = 90,
  sym__for_in = 91,
  sym__for_in_range = 92,
  sym__for_in_enumerate = 93,
  sym__for_in_zip = 94,
  sym_arguments = 95,
  sym_arguments_without_continuation = 96,
  sym_continuation = 97,
  sym_argument = 98,
  sym_scalar_variable = 99,
  sym_list_variable = 100,
  sym_dictionary_variable = 101,
  sym__indentation = 102,
  sym__empty_line = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_settings_section_repeat1 = 105,
  aux_sym_variables_section_repeat1 = 106,
  aux_sym_keywords_section_repeat1 = 107,
  aux_sym_keyword_definition_body_repeat1 = 108,
  aux_sym_test_cases_section_repeat1 = 109,
  aux_sym_test_case_definition_body_repeat1 = 110,
  aux_sym_if_statement_repeat1 = 111,
  aux_sym_inline_if_statement_repeat1 = 112,
  aux_sym_block_repeat1 = 113,
  aux_sym_try_statement_repeat1 = 114,
  aux_sym_for_statement_repeat1 = 115,
  aux_sym_arguments_repeat1 = 116,
  aux_sym_arguments_repeat2 = 117,
  aux_sym_argument_repeat1 = 118,
  alias_sym_keyword = 119,
  alias_sym_name = 120,
  alias_sym_return_value = 121,
  alias_sym_variable_list = 122,
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
  [41] = 8,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 8,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 55,
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
  [79] = 75,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 76,
  [86] = 73,
  [87] = 87,
  [88] = 88,
  [89] = 63,
  [90] = 88,
  [91] = 73,
  [92] = 92,
  [93] = 93,
  [94] = 63,
  [95] = 75,
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
  [108] = 98,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 103,
  [113] = 113,
  [114] = 97,
  [115] = 100,
  [116] = 105,
  [117] = 101,
  [118] = 104,
  [119] = 119,
  [120] = 120,
  [121] = 96,
  [122] = 101,
  [123] = 97,
  [124] = 106,
  [125] = 102,
  [126] = 126,
  [127] = 127,
  [128] = 110,
  [129] = 110,
  [130] = 130,
  [131] = 96,
  [132] = 132,
  [133] = 102,
  [134] = 106,
  [135] = 135,
  [136] = 136,
  [137] = 104,
  [138] = 100,
  [139] = 103,
  [140] = 140,
  [141] = 141,
  [142] = 105,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 141,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 156,
  [157] = 145,
  [158] = 145,
  [159] = 159,
  [160] = 120,
  [161] = 8,
  [162] = 154,
  [163] = 156,
  [164] = 164,
  [165] = 148,
  [166] = 166,
  [167] = 167,
  [168] = 119,
  [169] = 167,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 173,
  [177] = 177,
  [178] = 178,
  [179] = 174,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 172,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 183,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 173,
  [195] = 174,
  [196] = 196,
  [197] = 197,
  [198] = 180,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 184,
  [203] = 184,
  [204] = 204,
  [205] = 172,
  [206] = 206,
  [207] = 207,
  [208] = 187,
  [209] = 173,
  [210] = 184,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 218,
  [220] = 214,
  [221] = 212,
  [222] = 212,
  [223] = 218,
  [224] = 224,
  [225] = 214,
  [226] = 226,
  [227] = 187,
  [228] = 228,
  [229] = 212,
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
  [266] = 266,
  [267] = 267,
  [268] = 97,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 101,
  [274] = 274,
  [275] = 275,
  [276] = 96,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 252,
  [284] = 284,
  [285] = 285,
  [286] = 269,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 289,
  [296] = 296,
  [297] = 245,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 252,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 289,
  [311] = 311,
  [312] = 245,
  [313] = 313,
  [314] = 299,
  [315] = 301,
  [316] = 302,
  [317] = 303,
  [318] = 252,
  [319] = 303,
  [320] = 302,
  [321] = 289,
  [322] = 301,
  [323] = 301,
  [324] = 324,
  [325] = 325,
  [326] = 287,
  [327] = 230,
  [328] = 292,
  [329] = 298,
  [330] = 330,
  [331] = 300,
  [332] = 332,
  [333] = 287,
  [334] = 230,
  [335] = 292,
  [336] = 299,
  [337] = 287,
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
      if (eof) ADVANCE(368);
      if (lookahead == '\t') ADVANCE(726);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(458);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '&') ADVANCE(147);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '=') ADVANCE(399);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'B') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '}') ADVANCE(398);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(726);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(729);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(726);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '=') ADVANCE(399);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(726);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '=') ADVANCE(400);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(728);
      if (lookahead == '#') ADVANCE(724);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '}') ADVANCE(398);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(725);
      if (lookahead == '\n') ADVANCE(733);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(459);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(727);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(728);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(11);
      if (lookahead == '\n') ADVANCE(733);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(461);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(467);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == ']') ADVANCE(407);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == ']') ADVANCE(424);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == ']') ADVANCE(413);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == ']') ADVANCE(416);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == ']') ADVANCE(427);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ']') ADVANCE(410);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == ']') ADVANCE(404);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(335);
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
      if (lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'E') ADVANCE(499);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'E') ADVANCE(502);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '[') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'B') ADVANCE(509);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'F') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead == 'W') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '$') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(401);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(371);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(394);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(422);
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
      if (lookahead == '*') ADVANCE(604);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(605);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(606);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(456);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(434);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(439);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(444);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(449);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead == 'Z') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(432);
      if (lookahead == 'N') ADVANCE(448);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(436);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(81);
      END_STATE();
    case 88:
      if (lookahead == 'H') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(608);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'K') ADVANCE(454);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead == 'X') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 97:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(430);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(451);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(447);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(111);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 120:
      if (lookahead == 'Y') ADVANCE(440);
      END_STATE();
    case 121:
      if (lookahead == ']') ADVANCE(407);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(424);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(413);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(416);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(427);
      END_STATE();
    case 127:
      if (lookahead == ']') ADVANCE(410);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(404);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(409);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(429);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(406);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 145:
      if (lookahead == '{') ADVANCE(397);
      END_STATE();
    case 146:
      if (lookahead == '{') ADVANCE(397);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 147:
      if (lookahead == '{') ADVANCE(465);
      END_STATE();
    case 148:
      if (lookahead == '{') ADVANCE(465);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 149:
      if (lookahead == '{') ADVANCE(464);
      END_STATE();
    case 150:
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 151:
      if (lookahead == '{') ADVANCE(522);
      END_STATE();
    case 152:
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(646);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 153:
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 154:
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 155:
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(620);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(688);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 156:
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(610);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(286);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 169:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 172:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 182:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(242);
      END_STATE();
    case 183:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(290);
      END_STATE();
    case 184:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 190:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 225:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 226:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 227:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 228:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 229:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(350);
      END_STATE();
    case 230:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 238:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 239:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(207);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 246:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 247:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 248:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 249:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 250:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 251:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 256:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 258:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 260:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 262:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 265:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 268:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 270:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 273:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 274:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 276:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 277:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      END_STATE();
    case 278:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 279:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 280:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 281:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      END_STATE();
    case 282:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 285:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 286:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 287:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 288:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 289:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 290:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 291:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 292:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 293:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 294:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 295:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 296:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 297:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 298:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 299:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      END_STATE();
    case 300:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 301:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 302:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 303:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 304:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(316);
      END_STATE();
    case 305:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 306:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 307:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 308:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 309:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 311:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 312:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 315:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 320:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 321:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 323:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 325:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 339:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 340:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 341:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 342:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 343:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 344:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 345:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 346:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 347:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 348:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 349:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 350:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 351:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 352:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 353:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 354:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 355:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 356:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(269);
      END_STATE();
    case 357:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(257);
      END_STATE();
    case 358:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 359:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(377);
      END_STATE();
    case 360:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(690);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 361:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 362:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(522);
      END_STATE();
    case 363:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(610);
      END_STATE();
    case 364:
      if (eof) ADVANCE(368);
      if (lookahead == '\t') ADVANCE(725);
      if (lookahead == '\n') ADVANCE(733);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(730);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '*') ADVANCE(475);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 365:
      if (eof) ADVANCE(368);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(732);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(263);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(198);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 366:
      if (eof) ADVANCE(368);
      if (lookahead == '\n') ADVANCE(733);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(722);
      if (lookahead == '*') ADVANCE(475);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead != 0) ADVANCE(520);
      END_STATE();
    case 367:
      if (eof) ADVANCE(368);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(726);
      if (lookahead == '#') ADVANCE(724);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(726);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(728);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(468);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(468);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(724);
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
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(720);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(718);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(718);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(718);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == ' ') ADVANCE(721);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(719);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == ' ') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(719);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == ' ') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(719);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(476);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '*') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '.') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'A') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'C') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'D') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(514);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(496);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'K') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(513);
      if (lookahead == 'N') ADVANCE(487);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(487);
      if (lookahead == 'X') ADVANCE(486);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(487);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(504);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(511);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'P') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(489);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(519);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'T') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'T') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'T') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == 'Y') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(598);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(598);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(598);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(598);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(598);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(598);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(598);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(598);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(598);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(598);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(598);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(598);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(598);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(598);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(598);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(598);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(598);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(598);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(598);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(598);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(557);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == 'F') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '{') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(157);
      if (lookahead != 0) ADVANCE(690);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(690);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(690);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(690);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(690);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(690);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(690);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(690);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(690);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(690);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(690);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(690);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(690);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(690);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(690);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(690);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(690);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(690);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(690);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(690);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(690);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(690);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(690);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(690);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == ']') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '{') ADVANCE(598);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(557);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(155);
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(598);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(532);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == ']') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == ']') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == ']') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == ']') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == ']') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == ']') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == ']') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == ']') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(598);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(151);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(719);
      if (lookahead != 0) ADVANCE(474);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(719);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(724);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(732);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(726);
      if (lookahead == '#') ADVANCE(724);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(732);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(726);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(734);
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
  [1] = {.lex_state = 367},
  [2] = {.lex_state = 365},
  [3] = {.lex_state = 365},
  [4] = {.lex_state = 365},
  [5] = {.lex_state = 365},
  [6] = {.lex_state = 365},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 365},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 365},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 364},
  [17] = {.lex_state = 364},
  [18] = {.lex_state = 364},
  [19] = {.lex_state = 364},
  [20] = {.lex_state = 366},
  [21] = {.lex_state = 366},
  [22] = {.lex_state = 366},
  [23] = {.lex_state = 366},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 366},
  [26] = {.lex_state = 365},
  [27] = {.lex_state = 365},
  [28] = {.lex_state = 366},
  [29] = {.lex_state = 366},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 366},
  [32] = {.lex_state = 366},
  [33] = {.lex_state = 365},
  [34] = {.lex_state = 366},
  [35] = {.lex_state = 365},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 365},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 364},
  [42] = {.lex_state = 364},
  [43] = {.lex_state = 364},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 366},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 365},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 366},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 365},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 366},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 46},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 46},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 8},
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
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 46},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 46},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 46},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 8},
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
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 46},
  [327] = {.lex_state = 46},
  [328] = {.lex_state = 46},
  [329] = {.lex_state = 46},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 46},
  [334] = {.lex_state = 46},
  [335] = {.lex_state = 46},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 46},
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
    [sym_source_file] = STATE(265),
    [sym_section] = STATE(36),
    [sym_settings_section] = STATE(107),
    [sym_variables_section] = STATE(107),
    [sym_keywords_section] = STATE(107),
    [sym_test_cases_section] = STATE(107),
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
    STATE(311), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(46), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(307), 8,
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
    STATE(308), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(68), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(307), 8,
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
  [372] = 14,
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
      anon_sym_ELSEIF,
    ACTIONS(78), 1,
      anon_sym_ELSE,
    STATE(296), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(307), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [423] = 13,
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
    ACTIONS(80), 1,
      anon_sym_END,
    ACTIONS(82), 1,
      anon_sym_EXCEPT,
    STATE(296), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(307), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [471] = 12,
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
    ACTIONS(84), 1,
      sym_ellipses,
    STATE(296), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(307), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [516] = 12,
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
    STATE(296), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(307), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [561] = 11,
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
    STATE(296), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(307), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [603] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym__separator,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    ACTIONS(96), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(90), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [633] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(104), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(100), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [663] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      sym__separator,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    ACTIONS(116), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(108), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [693] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym__separator,
    ACTIONS(126), 1,
      aux_sym__whitespace_token1,
    ACTIONS(129), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(121), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [723] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(140), 1,
      sym__line_break,
    STATE(25), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(134), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [750] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      sym_text_chunk,
    ACTIONS(149), 1,
      aux_sym__whitespace_token1,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(144), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [777] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(161), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(157), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [804] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(165), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [831] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      aux_sym_settings_section_token1,
    ACTIONS(174), 1,
      aux_sym_variables_section_token1,
    ACTIONS(177), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(180), 1,
      aux_sym_test_cases_section_token1,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [860] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(185), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(193), 1,
      sym__line_break,
    STATE(37), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [937] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__line_break,
    STATE(34), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [964] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(199), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [991] = 8,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1020] = 7,
    ACTIONS(62), 1,
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
  [1047] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_text_chunk,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(187), 1,
      sym__line_break,
    STATE(21), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(134), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1074] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(222), 1,
      sym__line_break,
    STATE(27), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1099] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__whitespace_token1,
    ACTIONS(159), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__line_break,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(226), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1126] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(233), 1,
      aux_sym__whitespace_token1,
    ACTIONS(236), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1151] = 8,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1205] = 8,
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
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(107), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1234] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__separator,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(109), 1,
      sym_block,
    STATE(111), 1,
      aux_sym_if_statement_repeat1,
    STATE(175), 1,
      sym_else_statement,
    STATE(290), 1,
      sym_elseif_statement,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1266] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_IN,
    ACTIONS(253), 1,
      anon_sym_INRANGE,
    ACTIONS(255), 1,
      anon_sym_INENUMERATE,
    ACTIONS(257), 1,
      anon_sym_INZIP,
    STATE(309), 1,
      sym_scalar_variable,
    STATE(291), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1294] = 3,
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
  [1311] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1328] = 3,
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
  [1345] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(267), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(132), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(135), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1372] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(273), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(193), 1,
      sym_arguments,
    ACTIONS(269), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1396] = 3,
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
  [1412] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(278), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(280), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(282), 1,
      sym_text_chunk,
    STATE(206), 1,
      sym_argument,
    STATE(63), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1452] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      sym_text_chunk,
    STATE(240), 1,
      sym_argument,
    STATE(94), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1476] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(298), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(300), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(302), 1,
      sym_text_chunk,
    STATE(233), 1,
      sym_argument,
    STATE(89), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1500] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__separator,
    ACTIONS(309), 1,
      sym__line_break,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
    STATE(193), 1,
      sym_arguments,
    ACTIONS(304), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(119), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1524] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(278), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(280), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(282), 1,
      sym_text_chunk,
    STATE(226), 1,
      sym_argument,
    STATE(63), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1548] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1564] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      sym_text_chunk,
    STATE(241), 1,
      sym_argument,
    STATE(94), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1588] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(290), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(292), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(294), 1,
      sym_text_chunk,
    STATE(207), 1,
      sym_argument,
    STATE(94), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1612] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(278), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(280), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(282), 1,
      sym_text_chunk,
    STATE(213), 1,
      sym_argument,
    STATE(63), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    ACTIONS(316), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1652] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(278), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(280), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(282), 1,
      sym_text_chunk,
    STATE(207), 1,
      sym_argument,
    STATE(63), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1676] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(278), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(280), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(282), 1,
      sym_text_chunk,
    STATE(200), 1,
      sym_argument,
    STATE(63), 3,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
  [1700] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(320), 1,
      sym_ellipses,
    ACTIONS(322), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(270), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1726] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(294), 1,
      sym_arguments,
    ACTIONS(325), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1750] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1766] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(335), 1,
      sym_text_chunk,
    ACTIONS(337), 2,
      sym__separator,
      sym__line_break,
    STATE(75), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [1787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym__separator,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    ACTIONS(339), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(62), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [1810] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(341), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(182), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1833] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(345), 1,
      anon_sym_RETURN,
    ACTIONS(347), 1,
      sym_text_chunk,
    STATE(228), 1,
      sym_inline_statement,
    STATE(177), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(349), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(251), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(352), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(243), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1900] = 6,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(234), 1,
      sym_inline_statement,
    STATE(177), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(352), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(201), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1944] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym__whitespace_token1,
    ACTIONS(102), 1,
      sym__separator,
    ACTIONS(354), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(53), 1,
      sym_test_case_definition_body,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [1967] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(345), 1,
      anon_sym_RETURN,
    ACTIONS(347), 1,
      sym_text_chunk,
    STATE(164), 1,
      sym_inline_statement,
    STATE(177), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [1988] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(359), 1,
      anon_sym_,
    ACTIONS(362), 1,
      sym_text_chunk,
    ACTIONS(365), 2,
      sym__separator,
      sym__line_break,
    STATE(73), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2009] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(352), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(239), 1,
      sym_block,
    STATE(93), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2032] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(367), 1,
      sym_text_chunk,
    ACTIONS(369), 2,
      sym__separator,
      sym__line_break,
    STATE(73), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__separator,
    ACTIONS(374), 1,
      sym__line_break,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
    STATE(178), 1,
      sym_arguments,
    STATE(119), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(280), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__separator,
    ACTIONS(380), 1,
      aux_sym__whitespace_token1,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(78), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2113] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(369), 1,
      sym__separator,
    ACTIONS(386), 1,
      anon_sym_,
    ACTIONS(388), 1,
      sym_text_chunk,
    STATE(91), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(332), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(285), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(279), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(330), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(278), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(392), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(178), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2253] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__line_break,
    ACTIONS(395), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(398), 1,
      anon_sym_,
    ACTIONS(401), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(242), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__separator,
    ACTIONS(407), 1,
      sym__line_break,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
    STATE(215), 1,
      sym_arguments,
    STATE(119), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2313] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(337), 1,
      sym__separator,
    ACTIONS(386), 1,
      anon_sym_,
    ACTIONS(410), 1,
      sym_text_chunk,
    STATE(79), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(412), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(215), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2353] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__separator,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(421), 1,
      sym_text_chunk,
    STATE(91), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2373] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(108), 1,
      aux_sym_arguments_repeat1,
    STATE(324), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    ACTIONS(424), 1,
      sym__separator,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(78), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2413] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(337), 1,
      sym__line_break,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(431), 1,
      sym_text_chunk,
    STATE(95), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2433] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(369), 1,
      sym__line_break,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(433), 1,
      sym_text_chunk,
    STATE(86), 2,
      sym_scalar_variable,
      aux_sym_argument_repeat1,
  [2453] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(437), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2466] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(441), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__separator,
    ACTIONS(446), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    STATE(141), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__separator,
    STATE(140), 1,
      aux_sym_if_statement_repeat1,
    STATE(151), 1,
      sym__indentation,
    STATE(211), 1,
      sym_else_statement,
    STATE(290), 1,
      sym_elseif_statement,
  [2515] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2528] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2541] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(461), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2554] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(465), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2567] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(469), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2580] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(365), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2593] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(475), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [2617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(479), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
    STATE(152), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2634] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym__separator,
    STATE(99), 1,
      aux_sym_if_statement_repeat1,
    STATE(147), 1,
      sym__indentation,
    STATE(186), 1,
      sym_else_statement,
    STATE(290), 1,
      sym_elseif_statement,
  [2653] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(486), 3,
      anon_sym_,
      sym__separator,
      sym__line_break,
  [2666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym__separator,
    STATE(140), 1,
      aux_sym_if_statement_repeat1,
    STATE(143), 1,
      sym__indentation,
    STATE(192), 1,
      sym_else_statement,
    STATE(290), 1,
      sym_elseif_statement,
  [2685] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(465), 2,
      anon_sym_,
      sym__line_break,
  [2697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(490), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(236), 1,
      sym_arguments_without_continuation,
  [2713] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(441), 2,
      anon_sym_,
      sym__line_break,
  [2725] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 2,
      anon_sym_,
      sym__line_break,
  [2737] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_,
      sym__line_break,
    ACTIONS(471), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [2749] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 2,
      anon_sym_,
      sym__line_break,
  [2761] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(469), 2,
      anon_sym_,
      sym__line_break,
  [2773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__line_break,
    ACTIONS(492), 1,
      sym__separator,
    STATE(120), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__separator,
    ACTIONS(496), 1,
      sym__line_break,
    STATE(120), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2801] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(437), 2,
      anon_sym_,
      sym__separator,
  [2813] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 2,
      anon_sym_,
      sym__separator,
  [2825] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(441), 2,
      anon_sym_,
      sym__separator,
  [2837] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(475), 2,
      anon_sym_,
      sym__separator,
  [2849] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(461), 2,
      anon_sym_,
      sym__separator,
  [2861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__separator,
    STATE(284), 1,
      sym__indentation,
    STATE(126), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
    ACTIONS(504), 1,
      anon_sym_ELSE,
    STATE(204), 1,
      sym_inline_elseif_statement,
    STATE(262), 1,
      sym_inline_else_statement,
  [2891] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(486), 2,
      anon_sym_,
      sym__line_break,
  [2903] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(486), 2,
      anon_sym_,
      sym__separator,
  [2915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
    ACTIONS(504), 1,
      anon_sym_ELSE,
    STATE(204), 1,
      sym_inline_elseif_statement,
    STATE(248), 1,
      sym_inline_else_statement,
  [2931] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(437), 2,
      anon_sym_,
      sym__line_break,
  [2943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__separator,
    STATE(188), 1,
      sym__indentation,
    STATE(136), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2957] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(461), 2,
      anon_sym_,
      sym__line_break,
  [2969] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(475), 2,
      anon_sym_,
      sym__line_break,
  [2981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__separator,
    STATE(188), 1,
      sym__indentation,
    STATE(126), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__separator,
    STATE(199), 1,
      sym__indentation,
    STATE(126), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3009] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(469), 2,
      anon_sym_,
      sym__separator,
  [3021] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 2,
      anon_sym_,
      sym__separator,
  [3033] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
    ACTIONS(465), 2,
      anon_sym_,
      sym__separator,
  [3045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__separator,
    STATE(140), 1,
      aux_sym_if_statement_repeat1,
    STATE(253), 1,
      sym__indentation,
    STATE(290), 1,
      sym_elseif_statement,
  [3061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(120), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3075] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_,
      sym__separator,
    ACTIONS(471), 2,
      anon_sym_DOLLAR_LBRACE,
      sym_text_chunk,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_ELSE,
    ACTIONS(518), 1,
      anon_sym_END,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
    STATE(325), 1,
      sym_arguments_without_continuation,
  [3113] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(522), 1,
      sym_text_chunk,
    STATE(142), 1,
      sym_scalar_variable,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym__separator,
    ACTIONS(527), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_ELSE,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
    ACTIONS(529), 1,
      anon_sym_END,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(531), 1,
      sym__line_break,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__separator,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_inline_if_statement_repeat1,
  [3178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__separator,
    ACTIONS(540), 1,
      sym__line_break,
    STATE(149), 1,
      aux_sym_inline_if_statement_repeat1,
  [3191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_ELSE,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
    ACTIONS(542), 1,
      anon_sym_END,
  [3204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__line_break,
    STATE(160), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(547), 1,
      sym__line_break,
    STATE(162), 1,
      aux_sym_arguments_repeat1,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym__separator,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__line_break,
    ACTIONS(554), 1,
      sym__separator,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(547), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3267] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(557), 1,
      sym_text_chunk,
    STATE(105), 1,
      sym_scalar_variable,
  [3280] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(559), 1,
      sym_text_chunk,
    STATE(116), 1,
      sym_scalar_variable,
  [3293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(561), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__line_break,
    STATE(160), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym__line_break,
    ACTIONS(66), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__separator,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__line_break,
    ACTIONS(554), 1,
      sym__separator,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__separator,
    ACTIONS(568), 1,
      sym__line_break,
    STATE(150), 1,
      aux_sym_inline_if_statement_repeat1,
  [3367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__line_break,
    ACTIONS(570), 1,
      sym__separator,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__line_break,
    ACTIONS(573), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_ellipses,
    ACTIONS(579), 1,
      sym__separator,
    STATE(286), 1,
      sym__indentation,
  [3404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__line_break,
    STATE(160), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_ellipses,
    ACTIONS(581), 1,
      sym__separator,
    STATE(269), 1,
      sym__indentation,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__separator,
    STATE(216), 1,
      aux_sym_for_statement_repeat1,
  [3438] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_settings_section_token2,
    ACTIONS(587), 1,
      sym__line_break,
  [3448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_,
  [3458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(595), 1,
      anon_sym_,
  [3468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_,
  [3478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__separator,
    STATE(277), 1,
      sym__indentation,
  [3488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(605), 1,
      anon_sym_,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
  [3508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__separator,
    ACTIONS(613), 1,
      sym__line_break,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      anon_sym_,
  [3528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 1,
      anon_sym_,
  [3538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_,
  [3548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__separator,
    STATE(282), 1,
      sym__indentation,
  [3558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__separator,
    ACTIONS(631), 1,
      sym__line_break,
  [3568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      anon_sym_,
  [3578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    ACTIONS(639), 1,
      anon_sym_,
  [3588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__separator,
    STATE(259), 1,
      sym__indentation,
  [3598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      anon_sym_,
  [3608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_END,
    ACTIONS(649), 1,
      anon_sym_EXCEPT,
  [3618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__line_break,
    ACTIONS(651), 1,
      sym__separator,
  [3628] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_settings_section_token2,
    ACTIONS(655), 1,
      sym__line_break,
  [3638] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(657), 1,
      aux_sym_settings_section_token2,
    ACTIONS(659), 1,
      sym__line_break,
  [3648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym__separator,
    STATE(257), 1,
      sym__indentation,
  [3658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__separator,
    ACTIONS(665), 1,
      sym__line_break,
  [3668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      anon_sym_,
  [3678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(673), 1,
      anon_sym_,
  [3688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__separator,
    STATE(196), 1,
      aux_sym_for_statement_repeat1,
  [3698] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(678), 1,
      aux_sym_settings_section_token2,
    ACTIONS(680), 1,
      sym__line_break,
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(684), 1,
      anon_sym_,
  [3718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_EXCEPT,
    ACTIONS(686), 1,
      anon_sym_END,
  [3728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__separator,
    ACTIONS(690), 1,
      sym__line_break,
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__separator,
    STATE(250), 1,
      sym__indentation,
  [3748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 1,
      anon_sym_,
  [3758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    ACTIONS(700), 1,
      anon_sym_,
  [3768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym__line_break,
    ACTIONS(702), 1,
      sym__separator,
  [3778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(706), 1,
      anon_sym_,
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    ACTIONS(710), 1,
      sym__line_break,
  [3798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__separator,
    ACTIONS(714), 1,
      sym__line_break,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_,
  [3818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(722), 1,
      anon_sym_,
  [3828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(726), 1,
      anon_sym_,
  [3838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym__separator,
    STATE(231), 1,
      sym__indentation,
  [3848] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_,
    ACTIONS(732), 1,
      sym_variable_name,
  [3858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym__line_break,
    ACTIONS(734), 1,
      sym__separator,
  [3868] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_,
    ACTIONS(738), 1,
      sym_variable_name,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__separator,
    ACTIONS(742), 1,
      sym__line_break,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      sym__separator,
    STATE(196), 1,
      aux_sym_for_statement_repeat1,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(309), 1,
      sym_scalar_variable,
  [3908] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_,
    ACTIONS(748), 1,
      sym_variable_name,
  [3918] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_,
    ACTIONS(752), 1,
      sym_variable_name,
  [3928] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_,
    ACTIONS(756), 1,
      sym_variable_name,
  [3938] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 1,
      sym_variable_name,
  [3948] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_,
    ACTIONS(764), 1,
      sym_variable_name,
  [3958] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_,
    ACTIONS(768), 1,
      sym_variable_name,
  [3968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_ELSEIF,
    STATE(204), 1,
      sym_inline_elseif_statement,
  [3978] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_,
    ACTIONS(772), 1,
      sym_variable_name,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym__separator,
    ACTIONS(776), 1,
      sym__line_break,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 1,
      anon_sym_,
  [4008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym__separator,
    ACTIONS(784), 1,
      sym__line_break,
  [4018] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_,
    ACTIONS(788), 1,
      sym_variable_name,
  [4028] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_variable_name,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_END,
  [4042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__line_break,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym__separator,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      sym__line_break,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__line_break,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__line_break,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__line_break,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__separator,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym__line_break,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__line_break,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__line_break,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__separator,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__line_break,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__line_break,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__line_break,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__line_break,
  [4161] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_variable_name,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_END,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__separator,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__line_break,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_ELSEIF,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym__line_break,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__line_break,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__line_break,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_END,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__line_break,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_END,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__line_break,
  [4245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym__line_break,
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__line_break,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__separator,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym__line_break,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
  [4280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym__separator,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__line_break,
  [4294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__separator,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym_ellipses,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__separator,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__line_break,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__line_break,
  [4329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__separator,
  [4336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__separator,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__line_break,
  [4350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__separator,
  [4357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_END,
  [4364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__line_break,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__line_break,
  [4378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__line_break,
  [4385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym__line_break,
  [4392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_END,
  [4399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__line_break,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_EXCEPT,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym__line_break,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym_ellipses,
  [4427] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_variable_name,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym__line_break,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__separator,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__line_break,
  [4462] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_variable_name,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym__separator,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__line_break,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
  [4490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__line_break,
  [4497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [4504] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_variable_name,
  [4511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
  [4518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [4532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__line_break,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__line_break,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__line_break,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym__line_break,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym__line_break,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym__separator,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      sym__line_break,
  [4602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym__separator,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym__line_break,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
  [4658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym__line_break,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym__line_break,
  [4700] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(954), 1,
      sym_variable_name,
  [4707] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_variable_name,
  [4714] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_variable_name,
  [4721] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_variable_name,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym__line_break,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_RBRACE,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__line_break,
  [4749] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym_variable_name,
  [4756] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_variable_name,
  [4763] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(972), 1,
      sym_variable_name,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
  [4777] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(974), 1,
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
  [SMALL_STATE(12)] = 423,
  [SMALL_STATE(13)] = 471,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 603,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 663,
  [SMALL_STATE(19)] = 693,
  [SMALL_STATE(20)] = 723,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 777,
  [SMALL_STATE(23)] = 804,
  [SMALL_STATE(24)] = 831,
  [SMALL_STATE(25)] = 860,
  [SMALL_STATE(26)] = 887,
  [SMALL_STATE(27)] = 912,
  [SMALL_STATE(28)] = 937,
  [SMALL_STATE(29)] = 964,
  [SMALL_STATE(30)] = 991,
  [SMALL_STATE(31)] = 1020,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1074,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1126,
  [SMALL_STATE(36)] = 1151,
  [SMALL_STATE(37)] = 1180,
  [SMALL_STATE(38)] = 1205,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1266,
  [SMALL_STATE(41)] = 1294,
  [SMALL_STATE(42)] = 1311,
  [SMALL_STATE(43)] = 1328,
  [SMALL_STATE(44)] = 1345,
  [SMALL_STATE(45)] = 1372,
  [SMALL_STATE(46)] = 1396,
  [SMALL_STATE(47)] = 1412,
  [SMALL_STATE(48)] = 1436,
  [SMALL_STATE(49)] = 1452,
  [SMALL_STATE(50)] = 1476,
  [SMALL_STATE(51)] = 1500,
  [SMALL_STATE(52)] = 1524,
  [SMALL_STATE(53)] = 1548,
  [SMALL_STATE(54)] = 1564,
  [SMALL_STATE(55)] = 1588,
  [SMALL_STATE(56)] = 1612,
  [SMALL_STATE(57)] = 1636,
  [SMALL_STATE(58)] = 1652,
  [SMALL_STATE(59)] = 1676,
  [SMALL_STATE(60)] = 1700,
  [SMALL_STATE(61)] = 1726,
  [SMALL_STATE(62)] = 1750,
  [SMALL_STATE(63)] = 1766,
  [SMALL_STATE(64)] = 1787,
  [SMALL_STATE(65)] = 1810,
  [SMALL_STATE(66)] = 1833,
  [SMALL_STATE(67)] = 1854,
  [SMALL_STATE(68)] = 1877,
  [SMALL_STATE(69)] = 1900,
  [SMALL_STATE(70)] = 1921,
  [SMALL_STATE(71)] = 1944,
  [SMALL_STATE(72)] = 1967,
  [SMALL_STATE(73)] = 1988,
  [SMALL_STATE(74)] = 2009,
  [SMALL_STATE(75)] = 2032,
  [SMALL_STATE(76)] = 2053,
  [SMALL_STATE(77)] = 2073,
  [SMALL_STATE(78)] = 2093,
  [SMALL_STATE(79)] = 2113,
  [SMALL_STATE(80)] = 2133,
  [SMALL_STATE(81)] = 2153,
  [SMALL_STATE(82)] = 2173,
  [SMALL_STATE(83)] = 2193,
  [SMALL_STATE(84)] = 2213,
  [SMALL_STATE(85)] = 2233,
  [SMALL_STATE(86)] = 2253,
  [SMALL_STATE(87)] = 2273,
  [SMALL_STATE(88)] = 2293,
  [SMALL_STATE(89)] = 2313,
  [SMALL_STATE(90)] = 2333,
  [SMALL_STATE(91)] = 2353,
  [SMALL_STATE(92)] = 2373,
  [SMALL_STATE(93)] = 2393,
  [SMALL_STATE(94)] = 2413,
  [SMALL_STATE(95)] = 2433,
  [SMALL_STATE(96)] = 2453,
  [SMALL_STATE(97)] = 2466,
  [SMALL_STATE(98)] = 2479,
  [SMALL_STATE(99)] = 2496,
  [SMALL_STATE(100)] = 2515,
  [SMALL_STATE(101)] = 2528,
  [SMALL_STATE(102)] = 2541,
  [SMALL_STATE(103)] = 2554,
  [SMALL_STATE(104)] = 2567,
  [SMALL_STATE(105)] = 2580,
  [SMALL_STATE(106)] = 2593,
  [SMALL_STATE(107)] = 2606,
  [SMALL_STATE(108)] = 2617,
  [SMALL_STATE(109)] = 2634,
  [SMALL_STATE(110)] = 2653,
  [SMALL_STATE(111)] = 2666,
  [SMALL_STATE(112)] = 2685,
  [SMALL_STATE(113)] = 2697,
  [SMALL_STATE(114)] = 2713,
  [SMALL_STATE(115)] = 2725,
  [SMALL_STATE(116)] = 2737,
  [SMALL_STATE(117)] = 2749,
  [SMALL_STATE(118)] = 2761,
  [SMALL_STATE(119)] = 2773,
  [SMALL_STATE(120)] = 2787,
  [SMALL_STATE(121)] = 2801,
  [SMALL_STATE(122)] = 2813,
  [SMALL_STATE(123)] = 2825,
  [SMALL_STATE(124)] = 2837,
  [SMALL_STATE(125)] = 2849,
  [SMALL_STATE(126)] = 2861,
  [SMALL_STATE(127)] = 2875,
  [SMALL_STATE(128)] = 2891,
  [SMALL_STATE(129)] = 2903,
  [SMALL_STATE(130)] = 2915,
  [SMALL_STATE(131)] = 2931,
  [SMALL_STATE(132)] = 2943,
  [SMALL_STATE(133)] = 2957,
  [SMALL_STATE(134)] = 2969,
  [SMALL_STATE(135)] = 2981,
  [SMALL_STATE(136)] = 2995,
  [SMALL_STATE(137)] = 3009,
  [SMALL_STATE(138)] = 3021,
  [SMALL_STATE(139)] = 3033,
  [SMALL_STATE(140)] = 3045,
  [SMALL_STATE(141)] = 3061,
  [SMALL_STATE(142)] = 3075,
  [SMALL_STATE(143)] = 3087,
  [SMALL_STATE(144)] = 3100,
  [SMALL_STATE(145)] = 3113,
  [SMALL_STATE(146)] = 3126,
  [SMALL_STATE(147)] = 3139,
  [SMALL_STATE(148)] = 3152,
  [SMALL_STATE(149)] = 3165,
  [SMALL_STATE(150)] = 3178,
  [SMALL_STATE(151)] = 3191,
  [SMALL_STATE(152)] = 3204,
  [SMALL_STATE(153)] = 3215,
  [SMALL_STATE(154)] = 3228,
  [SMALL_STATE(155)] = 3241,
  [SMALL_STATE(156)] = 3254,
  [SMALL_STATE(157)] = 3267,
  [SMALL_STATE(158)] = 3280,
  [SMALL_STATE(159)] = 3293,
  [SMALL_STATE(160)] = 3306,
  [SMALL_STATE(161)] = 3317,
  [SMALL_STATE(162)] = 3328,
  [SMALL_STATE(163)] = 3341,
  [SMALL_STATE(164)] = 3354,
  [SMALL_STATE(165)] = 3367,
  [SMALL_STATE(166)] = 3380,
  [SMALL_STATE(167)] = 3391,
  [SMALL_STATE(168)] = 3404,
  [SMALL_STATE(169)] = 3415,
  [SMALL_STATE(170)] = 3428,
  [SMALL_STATE(171)] = 3438,
  [SMALL_STATE(172)] = 3448,
  [SMALL_STATE(173)] = 3458,
  [SMALL_STATE(174)] = 3468,
  [SMALL_STATE(175)] = 3478,
  [SMALL_STATE(176)] = 3488,
  [SMALL_STATE(177)] = 3498,
  [SMALL_STATE(178)] = 3508,
  [SMALL_STATE(179)] = 3518,
  [SMALL_STATE(180)] = 3528,
  [SMALL_STATE(181)] = 3538,
  [SMALL_STATE(182)] = 3548,
  [SMALL_STATE(183)] = 3558,
  [SMALL_STATE(184)] = 3568,
  [SMALL_STATE(185)] = 3578,
  [SMALL_STATE(186)] = 3588,
  [SMALL_STATE(187)] = 3598,
  [SMALL_STATE(188)] = 3608,
  [SMALL_STATE(189)] = 3618,
  [SMALL_STATE(190)] = 3628,
  [SMALL_STATE(191)] = 3638,
  [SMALL_STATE(192)] = 3648,
  [SMALL_STATE(193)] = 3658,
  [SMALL_STATE(194)] = 3668,
  [SMALL_STATE(195)] = 3678,
  [SMALL_STATE(196)] = 3688,
  [SMALL_STATE(197)] = 3698,
  [SMALL_STATE(198)] = 3708,
  [SMALL_STATE(199)] = 3718,
  [SMALL_STATE(200)] = 3728,
  [SMALL_STATE(201)] = 3738,
  [SMALL_STATE(202)] = 3748,
  [SMALL_STATE(203)] = 3758,
  [SMALL_STATE(204)] = 3768,
  [SMALL_STATE(205)] = 3778,
  [SMALL_STATE(206)] = 3788,
  [SMALL_STATE(207)] = 3798,
  [SMALL_STATE(208)] = 3808,
  [SMALL_STATE(209)] = 3818,
  [SMALL_STATE(210)] = 3828,
  [SMALL_STATE(211)] = 3838,
  [SMALL_STATE(212)] = 3848,
  [SMALL_STATE(213)] = 3858,
  [SMALL_STATE(214)] = 3868,
  [SMALL_STATE(215)] = 3878,
  [SMALL_STATE(216)] = 3888,
  [SMALL_STATE(217)] = 3898,
  [SMALL_STATE(218)] = 3908,
  [SMALL_STATE(219)] = 3918,
  [SMALL_STATE(220)] = 3928,
  [SMALL_STATE(221)] = 3938,
  [SMALL_STATE(222)] = 3948,
  [SMALL_STATE(223)] = 3958,
  [SMALL_STATE(224)] = 3968,
  [SMALL_STATE(225)] = 3978,
  [SMALL_STATE(226)] = 3988,
  [SMALL_STATE(227)] = 3998,
  [SMALL_STATE(228)] = 4008,
  [SMALL_STATE(229)] = 4018,
  [SMALL_STATE(230)] = 4028,
  [SMALL_STATE(231)] = 4035,
  [SMALL_STATE(232)] = 4042,
  [SMALL_STATE(233)] = 4049,
  [SMALL_STATE(234)] = 4056,
  [SMALL_STATE(235)] = 4063,
  [SMALL_STATE(236)] = 4070,
  [SMALL_STATE(237)] = 4077,
  [SMALL_STATE(238)] = 4084,
  [SMALL_STATE(239)] = 4091,
  [SMALL_STATE(240)] = 4098,
  [SMALL_STATE(241)] = 4105,
  [SMALL_STATE(242)] = 4112,
  [SMALL_STATE(243)] = 4119,
  [SMALL_STATE(244)] = 4126,
  [SMALL_STATE(245)] = 4133,
  [SMALL_STATE(246)] = 4140,
  [SMALL_STATE(247)] = 4147,
  [SMALL_STATE(248)] = 4154,
  [SMALL_STATE(249)] = 4161,
  [SMALL_STATE(250)] = 4168,
  [SMALL_STATE(251)] = 4175,
  [SMALL_STATE(252)] = 4182,
  [SMALL_STATE(253)] = 4189,
  [SMALL_STATE(254)] = 4196,
  [SMALL_STATE(255)] = 4203,
  [SMALL_STATE(256)] = 4210,
  [SMALL_STATE(257)] = 4217,
  [SMALL_STATE(258)] = 4224,
  [SMALL_STATE(259)] = 4231,
  [SMALL_STATE(260)] = 4238,
  [SMALL_STATE(261)] = 4245,
  [SMALL_STATE(262)] = 4252,
  [SMALL_STATE(263)] = 4259,
  [SMALL_STATE(264)] = 4266,
  [SMALL_STATE(265)] = 4273,
  [SMALL_STATE(266)] = 4280,
  [SMALL_STATE(267)] = 4287,
  [SMALL_STATE(268)] = 4294,
  [SMALL_STATE(269)] = 4301,
  [SMALL_STATE(270)] = 4308,
  [SMALL_STATE(271)] = 4315,
  [SMALL_STATE(272)] = 4322,
  [SMALL_STATE(273)] = 4329,
  [SMALL_STATE(274)] = 4336,
  [SMALL_STATE(275)] = 4343,
  [SMALL_STATE(276)] = 4350,
  [SMALL_STATE(277)] = 4357,
  [SMALL_STATE(278)] = 4364,
  [SMALL_STATE(279)] = 4371,
  [SMALL_STATE(280)] = 4378,
  [SMALL_STATE(281)] = 4385,
  [SMALL_STATE(282)] = 4392,
  [SMALL_STATE(283)] = 4399,
  [SMALL_STATE(284)] = 4406,
  [SMALL_STATE(285)] = 4413,
  [SMALL_STATE(286)] = 4420,
  [SMALL_STATE(287)] = 4427,
  [SMALL_STATE(288)] = 4434,
  [SMALL_STATE(289)] = 4441,
  [SMALL_STATE(290)] = 4448,
  [SMALL_STATE(291)] = 4455,
  [SMALL_STATE(292)] = 4462,
  [SMALL_STATE(293)] = 4469,
  [SMALL_STATE(294)] = 4476,
  [SMALL_STATE(295)] = 4483,
  [SMALL_STATE(296)] = 4490,
  [SMALL_STATE(297)] = 4497,
  [SMALL_STATE(298)] = 4504,
  [SMALL_STATE(299)] = 4511,
  [SMALL_STATE(300)] = 4518,
  [SMALL_STATE(301)] = 4525,
  [SMALL_STATE(302)] = 4532,
  [SMALL_STATE(303)] = 4539,
  [SMALL_STATE(304)] = 4546,
  [SMALL_STATE(305)] = 4553,
  [SMALL_STATE(306)] = 4560,
  [SMALL_STATE(307)] = 4567,
  [SMALL_STATE(308)] = 4574,
  [SMALL_STATE(309)] = 4581,
  [SMALL_STATE(310)] = 4588,
  [SMALL_STATE(311)] = 4595,
  [SMALL_STATE(312)] = 4602,
  [SMALL_STATE(313)] = 4609,
  [SMALL_STATE(314)] = 4616,
  [SMALL_STATE(315)] = 4623,
  [SMALL_STATE(316)] = 4630,
  [SMALL_STATE(317)] = 4637,
  [SMALL_STATE(318)] = 4644,
  [SMALL_STATE(319)] = 4651,
  [SMALL_STATE(320)] = 4658,
  [SMALL_STATE(321)] = 4665,
  [SMALL_STATE(322)] = 4672,
  [SMALL_STATE(323)] = 4679,
  [SMALL_STATE(324)] = 4686,
  [SMALL_STATE(325)] = 4693,
  [SMALL_STATE(326)] = 4700,
  [SMALL_STATE(327)] = 4707,
  [SMALL_STATE(328)] = 4714,
  [SMALL_STATE(329)] = 4721,
  [SMALL_STATE(330)] = 4728,
  [SMALL_STATE(331)] = 4735,
  [SMALL_STATE(332)] = 4742,
  [SMALL_STATE(333)] = 4749,
  [SMALL_STATE(334)] = 4756,
  [SMALL_STATE(335)] = 4763,
  [SMALL_STATE(336)] = 4770,
  [SMALL_STATE(337)] = 4777,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(87),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(252),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(7),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(304),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2), SHIFT_REPEAT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(9),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(304),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(113),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(283),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(246),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(283),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(249),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(252),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(35),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(169),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3), SHIFT(56),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3), SHIFT(167),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, .dynamic_precedence = 100), SHIFT(13),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100), SHIFT(15),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(221),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(157),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(73),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4), SHIFT(56),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(167),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(318),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4), SHIFT(169),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(212),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(158),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(86),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(56),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(167),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, .production_id = 2), SHIFT(169),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(229),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(145),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(91),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1), SHIFT(15),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1), SHIFT(56),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(167),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1), SHIFT(169),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(167),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2), SHIFT_REPEAT(284),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, .production_id = 7), SHIFT_REPEAT(253),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(167),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(56),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100),
  [533] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2), SHIFT_REPEAT(224),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2), SHIFT(169),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100), SHIFT(56),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, .dynamic_precedence = 100),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, .dynamic_precedence = 100), SHIFT(56),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(169),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, .dynamic_precedence = 100), SHIFT(56),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(217),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, .dynamic_precedence = 100),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 16),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, .dynamic_precedence = 100),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, .production_id = 17),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 13),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, .dynamic_precedence = 100, .production_id = 18),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, .dynamic_precedence = 100, .production_id = 14),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 15),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 12),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, .dynamic_precedence = 100),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 11),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 10),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 9),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [856] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, .production_id = 8),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, .dynamic_precedence = 100),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 6),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, .production_id = 5),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, .production_id = 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
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
