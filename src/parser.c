#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_STAR_STAR_STAR = 1,
  anon_sym_Settings = 2,
  aux_sym_setting_statement_token1 = 3,
  aux_sym_setting_statement_token2 = 4,
  aux_sym_setting_statement_token3 = 5,
  aux_sym_setting_statement_token4 = 6,
  aux_sym_setting_statement_token5 = 7,
  aux_sym_setting_statement_token6 = 8,
  aux_sym_setting_statement_token7 = 9,
  aux_sym_setting_statement_token8 = 10,
  aux_sym_setting_statement_token9 = 11,
  aux_sym_setting_statement_token10 = 12,
  aux_sym_setting_statement_token11 = 13,
  aux_sym_setting_statement_token12 = 14,
  aux_sym_setting_statement_token13 = 15,
  aux_sym_setting_statement_token14 = 16,
  aux_sym_setting_statement_token15 = 17,
  aux_sym_setting_statement_token16 = 18,
  aux_sym_setting_statement_token17 = 19,
  anon_sym_DOT_DOT_DOT = 20,
  sym__token = 21,
  sym__separator = 22,
  anon_sym_CR_LF = 23,
  anon_sym_CR = 24,
  anon_sym_LF = 25,
  sym_source_file = 26,
  sym_section = 27,
  sym_settings_section_header = 28,
  sym_settings_section = 29,
  sym_setting_statement = 30,
  sym_continuation = 31,
  sym_argument = 32,
  sym__line_break = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_settings_section_repeat1 = 35,
  aux_sym_setting_statement_repeat1 = 36,
  aux_sym_setting_statement_repeat2 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR_STAR_STAR] = "***",
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
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym__token] = "_token",
  [sym__separator] = "_separator",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section_header] = "section_header",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym__line_break] = "_line_break",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_setting_statement_repeat1] = "setting_statement_repeat1",
  [aux_sym_setting_statement_repeat2] = "setting_statement_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym__token] = sym__token,
  [sym__separator] = sym__separator,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section_header] = sym_settings_section_header,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym__line_break] = sym__line_break,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_setting_statement_repeat1] = aux_sym_setting_statement_repeat1,
  [aux_sym_setting_statement_repeat2] = aux_sym_setting_statement_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR_STAR_STAR] = {
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
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [sym_settings_section_header] = {
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
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__line_break] = {
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
  [aux_sym_setting_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_repeat2] = {
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
      if (eof) ADVANCE(144);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(4);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 91:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 92:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 93:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 94:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(7);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 129:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 131:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 133:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 134:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 139:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 140:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(171);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_section] = STATE(10),
    [sym_settings_section_header] = STATE(18),
    [sym_settings_section] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym_continuation] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(7),
    [aux_sym_setting_statement_token1] = ACTIONS(7),
    [aux_sym_setting_statement_token2] = ACTIONS(7),
    [aux_sym_setting_statement_token3] = ACTIONS(7),
    [aux_sym_setting_statement_token4] = ACTIONS(7),
    [aux_sym_setting_statement_token5] = ACTIONS(7),
    [aux_sym_setting_statement_token6] = ACTIONS(7),
    [aux_sym_setting_statement_token7] = ACTIONS(7),
    [aux_sym_setting_statement_token8] = ACTIONS(7),
    [aux_sym_setting_statement_token9] = ACTIONS(7),
    [aux_sym_setting_statement_token10] = ACTIONS(7),
    [aux_sym_setting_statement_token11] = ACTIONS(7),
    [aux_sym_setting_statement_token12] = ACTIONS(7),
    [aux_sym_setting_statement_token13] = ACTIONS(7),
    [aux_sym_setting_statement_token14] = ACTIONS(7),
    [aux_sym_setting_statement_token15] = ACTIONS(7),
    [aux_sym_setting_statement_token16] = ACTIONS(7),
    [aux_sym_setting_statement_token17] = ACTIONS(7),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
  },
  [3] = {
    [sym_continuation] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(11),
    [aux_sym_setting_statement_token1] = ACTIONS(11),
    [aux_sym_setting_statement_token2] = ACTIONS(11),
    [aux_sym_setting_statement_token3] = ACTIONS(11),
    [aux_sym_setting_statement_token4] = ACTIONS(11),
    [aux_sym_setting_statement_token5] = ACTIONS(11),
    [aux_sym_setting_statement_token6] = ACTIONS(11),
    [aux_sym_setting_statement_token7] = ACTIONS(11),
    [aux_sym_setting_statement_token8] = ACTIONS(11),
    [aux_sym_setting_statement_token9] = ACTIONS(11),
    [aux_sym_setting_statement_token10] = ACTIONS(11),
    [aux_sym_setting_statement_token11] = ACTIONS(11),
    [aux_sym_setting_statement_token12] = ACTIONS(11),
    [aux_sym_setting_statement_token13] = ACTIONS(11),
    [aux_sym_setting_statement_token14] = ACTIONS(11),
    [aux_sym_setting_statement_token15] = ACTIONS(11),
    [aux_sym_setting_statement_token16] = ACTIONS(11),
    [aux_sym_setting_statement_token17] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
  },
  [4] = {
    [sym_setting_statement] = STATE(4),
    [aux_sym_settings_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(13),
    [aux_sym_setting_statement_token1] = ACTIONS(15),
    [aux_sym_setting_statement_token2] = ACTIONS(15),
    [aux_sym_setting_statement_token3] = ACTIONS(15),
    [aux_sym_setting_statement_token4] = ACTIONS(15),
    [aux_sym_setting_statement_token5] = ACTIONS(15),
    [aux_sym_setting_statement_token6] = ACTIONS(15),
    [aux_sym_setting_statement_token7] = ACTIONS(15),
    [aux_sym_setting_statement_token8] = ACTIONS(15),
    [aux_sym_setting_statement_token9] = ACTIONS(15),
    [aux_sym_setting_statement_token10] = ACTIONS(15),
    [aux_sym_setting_statement_token11] = ACTIONS(15),
    [aux_sym_setting_statement_token12] = ACTIONS(15),
    [aux_sym_setting_statement_token13] = ACTIONS(15),
    [aux_sym_setting_statement_token14] = ACTIONS(15),
    [aux_sym_setting_statement_token15] = ACTIONS(15),
    [aux_sym_setting_statement_token16] = ACTIONS(15),
    [aux_sym_setting_statement_token17] = ACTIONS(15),
  },
  [5] = {
    [sym_continuation] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(18),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(18),
    [aux_sym_setting_statement_token1] = ACTIONS(18),
    [aux_sym_setting_statement_token2] = ACTIONS(18),
    [aux_sym_setting_statement_token3] = ACTIONS(18),
    [aux_sym_setting_statement_token4] = ACTIONS(18),
    [aux_sym_setting_statement_token5] = ACTIONS(18),
    [aux_sym_setting_statement_token6] = ACTIONS(18),
    [aux_sym_setting_statement_token7] = ACTIONS(18),
    [aux_sym_setting_statement_token8] = ACTIONS(18),
    [aux_sym_setting_statement_token9] = ACTIONS(18),
    [aux_sym_setting_statement_token10] = ACTIONS(18),
    [aux_sym_setting_statement_token11] = ACTIONS(18),
    [aux_sym_setting_statement_token12] = ACTIONS(18),
    [aux_sym_setting_statement_token13] = ACTIONS(18),
    [aux_sym_setting_statement_token14] = ACTIONS(18),
    [aux_sym_setting_statement_token15] = ACTIONS(18),
    [aux_sym_setting_statement_token16] = ACTIONS(18),
    [aux_sym_setting_statement_token17] = ACTIONS(18),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
  },
  [6] = {
    [sym_setting_statement] = STATE(7),
    [aux_sym_settings_section_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(20),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(20),
    [aux_sym_setting_statement_token1] = ACTIONS(22),
    [aux_sym_setting_statement_token2] = ACTIONS(22),
    [aux_sym_setting_statement_token3] = ACTIONS(22),
    [aux_sym_setting_statement_token4] = ACTIONS(22),
    [aux_sym_setting_statement_token5] = ACTIONS(22),
    [aux_sym_setting_statement_token6] = ACTIONS(22),
    [aux_sym_setting_statement_token7] = ACTIONS(22),
    [aux_sym_setting_statement_token8] = ACTIONS(22),
    [aux_sym_setting_statement_token9] = ACTIONS(22),
    [aux_sym_setting_statement_token10] = ACTIONS(22),
    [aux_sym_setting_statement_token11] = ACTIONS(22),
    [aux_sym_setting_statement_token12] = ACTIONS(22),
    [aux_sym_setting_statement_token13] = ACTIONS(22),
    [aux_sym_setting_statement_token14] = ACTIONS(22),
    [aux_sym_setting_statement_token15] = ACTIONS(22),
    [aux_sym_setting_statement_token16] = ACTIONS(22),
    [aux_sym_setting_statement_token17] = ACTIONS(22),
  },
  [7] = {
    [sym_setting_statement] = STATE(4),
    [aux_sym_settings_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(24),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(24),
    [aux_sym_setting_statement_token1] = ACTIONS(22),
    [aux_sym_setting_statement_token2] = ACTIONS(22),
    [aux_sym_setting_statement_token3] = ACTIONS(22),
    [aux_sym_setting_statement_token4] = ACTIONS(22),
    [aux_sym_setting_statement_token5] = ACTIONS(22),
    [aux_sym_setting_statement_token6] = ACTIONS(22),
    [aux_sym_setting_statement_token7] = ACTIONS(22),
    [aux_sym_setting_statement_token8] = ACTIONS(22),
    [aux_sym_setting_statement_token9] = ACTIONS(22),
    [aux_sym_setting_statement_token10] = ACTIONS(22),
    [aux_sym_setting_statement_token11] = ACTIONS(22),
    [aux_sym_setting_statement_token12] = ACTIONS(22),
    [aux_sym_setting_statement_token13] = ACTIONS(22),
    [aux_sym_setting_statement_token14] = ACTIONS(22),
    [aux_sym_setting_statement_token15] = ACTIONS(22),
    [aux_sym_setting_statement_token16] = ACTIONS(22),
    [aux_sym_setting_statement_token17] = ACTIONS(22),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(26), 1,
      sym__separator,
    STATE(2), 1,
      sym__line_break,
    STATE(13), 1,
      aux_sym_setting_statement_repeat1,
    STATE(15), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(28), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [18] = 5,
    ACTIONS(26), 1,
      sym__separator,
    STATE(5), 1,
      sym__line_break,
    STATE(8), 1,
      aux_sym_setting_statement_repeat1,
    STATE(16), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(30), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [36] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_settings_section_header,
    STATE(24), 1,
      sym_settings_section,
    STATE(11), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [53] = 5,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(18), 1,
      sym_settings_section_header,
    STATE(24), 1,
      sym_settings_section,
    STATE(11), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [70] = 3,
    STATE(12), 1,
      aux_sym_setting_statement_repeat2,
    STATE(25), 1,
      sym__line_break,
    ACTIONS(39), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [82] = 3,
    ACTIONS(42), 1,
      sym__separator,
    STATE(13), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(45), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [94] = 3,
    ACTIONS(26), 1,
      sym__separator,
    STATE(13), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(47), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [106] = 3,
    STATE(3), 1,
      sym__line_break,
    STATE(12), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(49), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [118] = 3,
    STATE(2), 1,
      sym__line_break,
    STATE(12), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(28), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [130] = 3,
    ACTIONS(26), 1,
      sym__separator,
    STATE(14), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(51), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [142] = 2,
    STATE(6), 1,
      sym__line_break,
    ACTIONS(53), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [151] = 1,
    ACTIONS(55), 4,
      sym__separator,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [158] = 1,
    ACTIONS(45), 4,
      sym__separator,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [165] = 1,
    ACTIONS(57), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [171] = 1,
    ACTIONS(59), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [177] = 2,
    ACTIONS(61), 1,
      sym__token,
    STATE(20), 1,
      sym_argument,
  [184] = 1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [189] = 2,
    ACTIONS(9), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(21), 1,
      sym_continuation,
  [196] = 1,
    ACTIONS(65), 1,
      anon_sym_Settings,
  [200] = 1,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR_STAR,
  [204] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 18,
  [SMALL_STATE(10)] = 36,
  [SMALL_STATE(11)] = 53,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 82,
  [SMALL_STATE(14)] = 94,
  [SMALL_STATE(15)] = 106,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 130,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 165,
  [SMALL_STATE(22)] = 171,
  [SMALL_STATE(23)] = 177,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 196,
  [SMALL_STATE(27)] = 200,
  [SMALL_STATE(28)] = 204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(9),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat2, 2), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat2, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_section_header, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
