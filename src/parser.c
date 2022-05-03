#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_STAR_STAR_STAR = 2,
  anon_sym_ = 3,
  anon_sym_Settings = 4,
  aux_sym_setting_statement_token1 = 5,
  aux_sym_setting_statement_token2 = 6,
  aux_sym_setting_statement_token3 = 7,
  aux_sym_setting_statement_token4 = 8,
  aux_sym_setting_statement_token5 = 9,
  aux_sym_setting_statement_token6 = 10,
  aux_sym_setting_statement_token7 = 11,
  aux_sym_setting_statement_token8 = 12,
  aux_sym_setting_statement_token9 = 13,
  aux_sym_setting_statement_token10 = 14,
  aux_sym_setting_statement_token11 = 15,
  aux_sym_setting_statement_token12 = 16,
  aux_sym_setting_statement_token13 = 17,
  aux_sym_setting_statement_token14 = 18,
  aux_sym_setting_statement_token15 = 19,
  aux_sym_setting_statement_token16 = 20,
  aux_sym_setting_statement_token17 = 21,
  anon_sym_Variables = 22,
  anon_sym_DOLLAR_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_EQ = 25,
  anon_sym_EQ2 = 26,
  sym_ellipses = 27,
  sym_variable_name = 28,
  sym__token = 29,
  sym__separator = 30,
  aux_sym__whitespace_token1 = 31,
  sym__line_break = 32,
  sym_source_file = 33,
  sym_section = 34,
  sym_settings_section = 35,
  sym_settings_section_header = 36,
  sym_setting_statement = 37,
  sym_variables_section = 38,
  sym_variables_section_header = 39,
  sym_variable_definition = 40,
  sym_arguments = 41,
  sym_continuation = 42,
  sym_argument = 43,
  sym__empty_line = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_settings_section_repeat1 = 46,
  aux_sym_variables_section_repeat1 = 47,
  aux_sym_arguments_repeat1 = 48,
  aux_sym_arguments_repeat2 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_STAR_STAR_STAR] = "***",
  [anon_sym_] = " ",
  [anon_sym_Settings] = "Settings",
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
  [anon_sym_Variables] = "Variables",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [sym_ellipses] = "ellipses",
  [sym_variable_name] = "variable_name",
  [sym__token] = "_token",
  [sym__separator] = "_separator",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__line_break] = "_line_break",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_settings_section_header] = "section_header",
  [sym_setting_statement] = "setting_statement",
  [sym_variables_section] = "variables_section",
  [sym_variables_section_header] = "section_header",
  [sym_variable_definition] = "variable_definition",
  [sym_arguments] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [anon_sym_] = anon_sym_,
  [anon_sym_Settings] = anon_sym_Settings,
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
  [anon_sym_Variables] = anon_sym_Variables,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [sym_ellipses] = sym_ellipses,
  [sym_variable_name] = sym_variable_name,
  [sym__token] = sym__token,
  [sym__separator] = sym__separator,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__line_break] = sym__line_break,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_settings_section_header] = sym_settings_section_header,
  [sym_setting_statement] = sym_setting_statement,
  [sym_variables_section] = sym_variables_section,
  [sym_variables_section_header] = sym_settings_section_header,
  [sym_variable_definition] = sym_variable_definition,
  [sym_arguments] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
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
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Settings] = {
    .visible = true,
    .named = false,
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
  [anon_sym_Variables] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
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
  [sym_settings_section_header] = {
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
  [sym_variables_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      if (lookahead == '\t') ADVANCE(167);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'V') ADVANCE(13);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'V') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(169);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(195);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(175);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 107:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 109:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 110:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 111:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 112:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 113:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(7);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 156:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 157:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(197);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 162:
      if (eof) ADVANCE(165);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 163:
      if (eof) ADVANCE(165);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'V') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(167);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Variables);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(200);
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(201);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 162},
  [5] = {.lex_state = 162},
  [6] = {.lex_state = 162},
  [7] = {.lex_state = 162},
  [8] = {.lex_state = 163},
  [9] = {.lex_state = 162},
  [10] = {.lex_state = 162},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 163},
  [14] = {.lex_state = 163},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 163},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 163},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 163},
  [22] = {.lex_state = 163},
  [23] = {.lex_state = 163},
  [24] = {.lex_state = 162},
  [25] = {.lex_state = 160},
  [26] = {.lex_state = 162},
  [27] = {.lex_state = 162},
  [28] = {.lex_state = 162},
  [29] = {.lex_state = 162},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 162},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 160},
  [34] = {.lex_state = 162},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 162},
  [38] = {.lex_state = 162},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 164},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 160},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 162},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 162},
  [49] = {.lex_state = 162},
  [50] = {.lex_state = 161},
  [51] = {.lex_state = 162},
  [52] = {.lex_state = 162},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 162},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 162},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 162},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 162},
  [62] = {.lex_state = 162},
  [63] = {.lex_state = 162},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_Settings] = ACTIONS(1),
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
    [anon_sym_Variables] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_section] = STATE(20),
    [sym_settings_section] = STATE(39),
    [sym_settings_section_header] = STATE(62),
    [sym_variables_section] = STATE(39),
    [sym_variables_section_header] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(7),
  },
  [2] = {
    [sym_continuation] = STATE(3),
    [aux_sym_arguments_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(9),
    [aux_sym_setting_statement_token1] = ACTIONS(9),
    [aux_sym_setting_statement_token2] = ACTIONS(9),
    [aux_sym_setting_statement_token3] = ACTIONS(9),
    [aux_sym_setting_statement_token4] = ACTIONS(9),
    [aux_sym_setting_statement_token5] = ACTIONS(9),
    [aux_sym_setting_statement_token6] = ACTIONS(9),
    [aux_sym_setting_statement_token7] = ACTIONS(9),
    [aux_sym_setting_statement_token8] = ACTIONS(9),
    [aux_sym_setting_statement_token9] = ACTIONS(9),
    [aux_sym_setting_statement_token10] = ACTIONS(9),
    [aux_sym_setting_statement_token11] = ACTIONS(9),
    [aux_sym_setting_statement_token12] = ACTIONS(9),
    [aux_sym_setting_statement_token13] = ACTIONS(9),
    [aux_sym_setting_statement_token14] = ACTIONS(9),
    [aux_sym_setting_statement_token15] = ACTIONS(9),
    [aux_sym_setting_statement_token16] = ACTIONS(9),
    [aux_sym_setting_statement_token17] = ACTIONS(9),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(9),
    [sym_ellipses] = ACTIONS(11),
    [sym__separator] = ACTIONS(13),
    [aux_sym__whitespace_token1] = ACTIONS(15),
    [sym__line_break] = ACTIONS(9),
  },
  [3] = {
    [sym_continuation] = STATE(5),
    [aux_sym_arguments_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(17),
    [aux_sym_setting_statement_token1] = ACTIONS(17),
    [aux_sym_setting_statement_token2] = ACTIONS(17),
    [aux_sym_setting_statement_token3] = ACTIONS(17),
    [aux_sym_setting_statement_token4] = ACTIONS(17),
    [aux_sym_setting_statement_token5] = ACTIONS(17),
    [aux_sym_setting_statement_token6] = ACTIONS(17),
    [aux_sym_setting_statement_token7] = ACTIONS(17),
    [aux_sym_setting_statement_token8] = ACTIONS(17),
    [aux_sym_setting_statement_token9] = ACTIONS(17),
    [aux_sym_setting_statement_token10] = ACTIONS(17),
    [aux_sym_setting_statement_token11] = ACTIONS(17),
    [aux_sym_setting_statement_token12] = ACTIONS(17),
    [aux_sym_setting_statement_token13] = ACTIONS(17),
    [aux_sym_setting_statement_token14] = ACTIONS(17),
    [aux_sym_setting_statement_token15] = ACTIONS(17),
    [aux_sym_setting_statement_token16] = ACTIONS(17),
    [aux_sym_setting_statement_token17] = ACTIONS(17),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [sym_ellipses] = ACTIONS(11),
    [sym__separator] = ACTIONS(13),
    [aux_sym__whitespace_token1] = ACTIONS(19),
    [sym__line_break] = ACTIONS(17),
  },
  [4] = {
    [sym_continuation] = STATE(5),
    [aux_sym_arguments_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(21),
    [aux_sym_setting_statement_token1] = ACTIONS(21),
    [aux_sym_setting_statement_token2] = ACTIONS(21),
    [aux_sym_setting_statement_token3] = ACTIONS(21),
    [aux_sym_setting_statement_token4] = ACTIONS(21),
    [aux_sym_setting_statement_token5] = ACTIONS(21),
    [aux_sym_setting_statement_token6] = ACTIONS(21),
    [aux_sym_setting_statement_token7] = ACTIONS(21),
    [aux_sym_setting_statement_token8] = ACTIONS(21),
    [aux_sym_setting_statement_token9] = ACTIONS(21),
    [aux_sym_setting_statement_token10] = ACTIONS(21),
    [aux_sym_setting_statement_token11] = ACTIONS(21),
    [aux_sym_setting_statement_token12] = ACTIONS(21),
    [aux_sym_setting_statement_token13] = ACTIONS(21),
    [aux_sym_setting_statement_token14] = ACTIONS(21),
    [aux_sym_setting_statement_token15] = ACTIONS(21),
    [aux_sym_setting_statement_token16] = ACTIONS(21),
    [aux_sym_setting_statement_token17] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(21),
    [sym_ellipses] = ACTIONS(11),
    [sym__separator] = ACTIONS(13),
    [aux_sym__whitespace_token1] = ACTIONS(23),
    [sym__line_break] = ACTIONS(21),
  },
  [5] = {
    [sym_continuation] = STATE(5),
    [aux_sym_arguments_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(25),
    [aux_sym_setting_statement_token1] = ACTIONS(25),
    [aux_sym_setting_statement_token2] = ACTIONS(25),
    [aux_sym_setting_statement_token3] = ACTIONS(25),
    [aux_sym_setting_statement_token4] = ACTIONS(25),
    [aux_sym_setting_statement_token5] = ACTIONS(25),
    [aux_sym_setting_statement_token6] = ACTIONS(25),
    [aux_sym_setting_statement_token7] = ACTIONS(25),
    [aux_sym_setting_statement_token8] = ACTIONS(25),
    [aux_sym_setting_statement_token9] = ACTIONS(25),
    [aux_sym_setting_statement_token10] = ACTIONS(25),
    [aux_sym_setting_statement_token11] = ACTIONS(25),
    [aux_sym_setting_statement_token12] = ACTIONS(25),
    [aux_sym_setting_statement_token13] = ACTIONS(25),
    [aux_sym_setting_statement_token14] = ACTIONS(25),
    [aux_sym_setting_statement_token15] = ACTIONS(25),
    [aux_sym_setting_statement_token16] = ACTIONS(25),
    [aux_sym_setting_statement_token17] = ACTIONS(25),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(25),
    [sym_ellipses] = ACTIONS(27),
    [sym__separator] = ACTIONS(30),
    [aux_sym__whitespace_token1] = ACTIONS(33),
    [sym__line_break] = ACTIONS(25),
  },
  [6] = {
    [sym_continuation] = STATE(4),
    [aux_sym_arguments_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(17),
    [aux_sym_setting_statement_token1] = ACTIONS(17),
    [aux_sym_setting_statement_token2] = ACTIONS(17),
    [aux_sym_setting_statement_token3] = ACTIONS(17),
    [aux_sym_setting_statement_token4] = ACTIONS(17),
    [aux_sym_setting_statement_token5] = ACTIONS(17),
    [aux_sym_setting_statement_token6] = ACTIONS(17),
    [aux_sym_setting_statement_token7] = ACTIONS(17),
    [aux_sym_setting_statement_token8] = ACTIONS(17),
    [aux_sym_setting_statement_token9] = ACTIONS(17),
    [aux_sym_setting_statement_token10] = ACTIONS(17),
    [aux_sym_setting_statement_token11] = ACTIONS(17),
    [aux_sym_setting_statement_token12] = ACTIONS(17),
    [aux_sym_setting_statement_token13] = ACTIONS(17),
    [aux_sym_setting_statement_token14] = ACTIONS(17),
    [aux_sym_setting_statement_token15] = ACTIONS(17),
    [aux_sym_setting_statement_token16] = ACTIONS(17),
    [aux_sym_setting_statement_token17] = ACTIONS(17),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(17),
    [sym_ellipses] = ACTIONS(11),
    [sym__separator] = ACTIONS(13),
    [aux_sym__whitespace_token1] = ACTIONS(19),
    [sym__line_break] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(37), 1,
      aux_sym__whitespace_token1,
    ACTIONS(35), 23,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
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
      anon_sym_DOLLAR_LBRACE,
      sym_ellipses,
      sym__separator,
      sym__line_break,
  [29] = 5,
    ACTIONS(44), 1,
      aux_sym__whitespace_token1,
    ACTIONS(47), 1,
      sym__line_break,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(41), 17,
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
  [64] = 2,
    ACTIONS(52), 1,
      aux_sym__whitespace_token1,
    ACTIONS(50), 23,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
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
      anon_sym_DOLLAR_LBRACE,
      sym_ellipses,
      sym__separator,
      sym__line_break,
  [93] = 2,
    ACTIONS(56), 1,
      aux_sym__whitespace_token1,
    ACTIONS(54), 23,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
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
      anon_sym_DOLLAR_LBRACE,
      sym_ellipses,
      sym__separator,
      sym__line_break,
  [122] = 5,
    ACTIONS(62), 1,
      aux_sym__whitespace_token1,
    ACTIONS(64), 1,
      sym__line_break,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(60), 17,
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
  [157] = 5,
    ACTIONS(62), 1,
      aux_sym__whitespace_token1,
    ACTIONS(68), 1,
      sym__line_break,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(60), 17,
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
  [192] = 1,
    ACTIONS(70), 22,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
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
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [217] = 1,
    ACTIONS(72), 21,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
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
      aux_sym__whitespace_token1,
      sym__line_break,
  [241] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_variables_section_header,
    STATE(62), 1,
      sym_settings_section_header,
    STATE(17), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(39), 2,
      sym_settings_section,
      sym_variables_section,
  [262] = 5,
    ACTIONS(62), 1,
      aux_sym__whitespace_token1,
    ACTIONS(78), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(80), 1,
      sym__line_break,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(19), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [281] = 6,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(61), 1,
      sym_variables_section_header,
    STATE(62), 1,
      sym_settings_section_header,
    STATE(17), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(39), 2,
      sym_settings_section,
      sym_variables_section,
  [302] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_variables_section_header,
    STATE(62), 1,
      sym_settings_section_header,
    STATE(15), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(39), 2,
      sym_settings_section,
      sym_variables_section,
  [323] = 5,
    ACTIONS(62), 1,
      aux_sym__whitespace_token1,
    ACTIONS(78), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(91), 1,
      sym__line_break,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(21), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [342] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_variables_section_header,
    STATE(62), 1,
      sym_settings_section_header,
    STATE(17), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(39), 2,
      sym_settings_section,
      sym_variables_section,
  [363] = 5,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(101), 1,
      sym__line_break,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
    STATE(21), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
  [382] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [390] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DOLLAR_LBRACE,
      aux_sym__whitespace_token1,
      sym__line_break,
  [398] = 3,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(110), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [408] = 3,
    ACTIONS(112), 1,
      sym__token,
    STATE(23), 1,
      sym_arguments,
    STATE(28), 1,
      sym_argument,
  [418] = 3,
    ACTIONS(114), 1,
      sym__separator,
    ACTIONS(117), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [428] = 3,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(110), 1,
      sym__line_break,
    STATE(34), 1,
      aux_sym_arguments_repeat1,
  [438] = 3,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(119), 1,
      sym__line_break,
    STATE(31), 1,
      aux_sym_arguments_repeat1,
  [448] = 3,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(121), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_arguments_repeat1,
  [458] = 3,
    ACTIONS(112), 1,
      sym__token,
    STATE(22), 1,
      sym_arguments,
    STATE(28), 1,
      sym_argument,
  [468] = 3,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(123), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [478] = 2,
    ACTIONS(127), 1,
      sym__separator,
    ACTIONS(125), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [486] = 3,
    ACTIONS(112), 1,
      sym__token,
    STATE(14), 1,
      sym_arguments,
    STATE(28), 1,
      sym_argument,
  [496] = 3,
    ACTIONS(108), 1,
      sym__separator,
    ACTIONS(129), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [506] = 3,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_Settings,
    ACTIONS(135), 1,
      anon_sym_Variables,
  [516] = 2,
    ACTIONS(137), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(139), 1,
      anon_sym_,
  [523] = 1,
    ACTIONS(117), 2,
      sym__separator,
      sym__line_break,
  [528] = 1,
    ACTIONS(141), 2,
      sym__separator,
      sym__line_break,
  [533] = 1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [538] = 2,
    ACTIONS(145), 1,
      anon_sym_Settings,
    ACTIONS(147), 1,
      anon_sym_Variables,
  [545] = 2,
    ACTIONS(149), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(151), 1,
      anon_sym_,
  [552] = 2,
    ACTIONS(112), 1,
      sym__token,
    STATE(37), 1,
      sym_argument,
  [559] = 2,
    ACTIONS(153), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_,
  [566] = 2,
    ACTIONS(157), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(159), 1,
      anon_sym_,
  [573] = 1,
    ACTIONS(161), 1,
      sym_ellipses,
  [577] = 1,
    ACTIONS(163), 1,
      sym__separator,
  [581] = 1,
    ACTIONS(165), 1,
      anon_sym_STAR_STAR_STAR,
  [585] = 1,
    ACTIONS(167), 1,
      sym__line_break,
  [589] = 1,
    ACTIONS(169), 1,
      sym__line_break,
  [593] = 1,
    ACTIONS(171), 1,
      sym_variable_name,
  [597] = 1,
    ACTIONS(173), 1,
      sym__line_break,
  [601] = 1,
    ACTIONS(175), 1,
      sym__separator,
  [605] = 1,
    ACTIONS(157), 1,
      anon_sym_STAR_STAR_STAR,
  [609] = 1,
    ACTIONS(177), 1,
      sym__line_break,
  [613] = 1,
    ACTIONS(137), 1,
      anon_sym_STAR_STAR_STAR,
  [617] = 1,
    ACTIONS(179), 1,
      sym__line_break,
  [621] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
  [625] = 1,
    ACTIONS(183), 1,
      sym__line_break,
  [629] = 1,
    ACTIONS(185), 1,
      anon_sym_STAR_STAR_STAR,
  [633] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [637] = 1,
    ACTIONS(189), 1,
      sym__line_break,
  [641] = 1,
    ACTIONS(191), 1,
      sym__line_break,
  [645] = 1,
    ACTIONS(193), 1,
      sym__line_break,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 64,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 241,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 363,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 390,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 408,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 428,
  [SMALL_STATE(28)] = 438,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 458,
  [SMALL_STATE(31)] = 468,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 486,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 506,
  [SMALL_STATE(36)] = 516,
  [SMALL_STATE(37)] = 523,
  [SMALL_STATE(38)] = 528,
  [SMALL_STATE(39)] = 533,
  [SMALL_STATE(40)] = 538,
  [SMALL_STATE(41)] = 545,
  [SMALL_STATE(42)] = 552,
  [SMALL_STATE(43)] = 559,
  [SMALL_STATE(44)] = 566,
  [SMALL_STATE(45)] = 573,
  [SMALL_STATE(46)] = 577,
  [SMALL_STATE(47)] = 581,
  [SMALL_STATE(48)] = 585,
  [SMALL_STATE(49)] = 589,
  [SMALL_STATE(50)] = 593,
  [SMALL_STATE(51)] = 597,
  [SMALL_STATE(52)] = 601,
  [SMALL_STATE(53)] = 605,
  [SMALL_STATE(54)] = 609,
  [SMALL_STATE(55)] = 613,
  [SMALL_STATE(56)] = 617,
  [SMALL_STATE(57)] = 621,
  [SMALL_STATE(58)] = 625,
  [SMALL_STATE(59)] = 629,
  [SMALL_STATE(60)] = 633,
  [SMALL_STATE(61)] = 637,
  [SMALL_STATE(62)] = 641,
  [SMALL_STATE(63)] = 645,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(52),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(51),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(50),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(51),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(42),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section_header, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section_header, 5),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
