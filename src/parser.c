#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_STAR_STAR_STAR = 1,
  anon_sym_ = 2,
  aux_sym_section_statement_token1 = 3,
  aux_sym_section_statement_token2 = 4,
  aux_sym_section_statement_token3 = 5,
  aux_sym_section_statement_token4 = 6,
  aux_sym_section_statement_token5 = 7,
  aux_sym_setting_statement_token1 = 8,
  aux_sym_setting_statement_token2 = 9,
  aux_sym_setting_statement_token3 = 10,
  aux_sym_setting_statement_token4 = 11,
  aux_sym_setting_statement_token5 = 12,
  aux_sym_setting_statement_token6 = 13,
  aux_sym_setting_statement_token7 = 14,
  aux_sym_setting_statement_token8 = 15,
  aux_sym_setting_statement_token9 = 16,
  aux_sym_setting_statement_token10 = 17,
  aux_sym_setting_statement_token11 = 18,
  aux_sym_setting_statement_token12 = 19,
  aux_sym_setting_statement_token13 = 20,
  aux_sym_setting_statement_token14 = 21,
  aux_sym_setting_statement_token15 = 22,
  aux_sym_setting_statement_token16 = 23,
  sym_argument = 24,
  sym__separator = 25,
  sym_source_file = 26,
  sym_statement = 27,
  sym_section_statement = 28,
  sym_setting_statement = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_setting_statement_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR_STAR_STAR] = "***",
  [anon_sym_] = " ",
  [aux_sym_section_statement_token1] = "section_statement_token1",
  [aux_sym_section_statement_token2] = "section_statement_token2",
  [aux_sym_section_statement_token3] = "section_statement_token3",
  [aux_sym_section_statement_token4] = "section_statement_token4",
  [aux_sym_section_statement_token5] = "section_statement_token5",
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
  [sym_argument] = "argument",
  [sym__separator] = "_separator",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_section_statement] = "section_statement",
  [sym_setting_statement] = "setting_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_setting_statement_repeat1] = "setting_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [anon_sym_] = anon_sym_,
  [aux_sym_section_statement_token1] = aux_sym_section_statement_token1,
  [aux_sym_section_statement_token2] = aux_sym_section_statement_token2,
  [aux_sym_section_statement_token3] = aux_sym_section_statement_token3,
  [aux_sym_section_statement_token4] = aux_sym_section_statement_token4,
  [aux_sym_section_statement_token5] = aux_sym_section_statement_token5,
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
  [sym_argument] = sym_argument,
  [sym__separator] = sym__separator,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_section_statement] = sym_section_statement,
  [sym_setting_statement] = sym_setting_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_setting_statement_repeat1] = aux_sym_setting_statement_repeat1,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_statement_token5] = {
    .visible = false,
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
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_section_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_repeat1] = {
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
      if (eof) ADVANCE(166);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(43);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(167);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 72:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2);
      END_STATE();
    case 73:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1);
      END_STATE();
    case 74:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 97:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 98:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 157:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 158:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 159:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 160:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 161:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 162:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(190);
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(165)
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_section_statement_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_section_statement_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_section_statement_token3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_section_statement_token4);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_section_statement_token5);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == 't') ADVANCE(192);
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
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 163},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [aux_sym_section_statement_token1] = ACTIONS(1),
    [aux_sym_section_statement_token2] = ACTIONS(1),
    [aux_sym_section_statement_token3] = ACTIONS(1),
    [aux_sym_section_statement_token4] = ACTIONS(1),
    [aux_sym_section_statement_token5] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_statement] = STATE(2),
    [sym_section_statement] = STATE(8),
    [sym_setting_statement] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(5),
    [aux_sym_section_statement_token2] = ACTIONS(7),
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
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_section_statement] = STATE(8),
    [sym_setting_statement] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(5),
    [aux_sym_section_statement_token2] = ACTIONS(7),
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
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_section_statement] = STATE(8),
    [sym_setting_statement] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(13),
    [aux_sym_section_statement_token2] = ACTIONS(16),
    [aux_sym_setting_statement_token1] = ACTIONS(16),
    [aux_sym_setting_statement_token2] = ACTIONS(16),
    [aux_sym_setting_statement_token3] = ACTIONS(16),
    [aux_sym_setting_statement_token4] = ACTIONS(16),
    [aux_sym_setting_statement_token5] = ACTIONS(16),
    [aux_sym_setting_statement_token6] = ACTIONS(16),
    [aux_sym_setting_statement_token7] = ACTIONS(16),
    [aux_sym_setting_statement_token8] = ACTIONS(16),
    [aux_sym_setting_statement_token9] = ACTIONS(16),
    [aux_sym_setting_statement_token10] = ACTIONS(16),
    [aux_sym_setting_statement_token11] = ACTIONS(16),
    [aux_sym_setting_statement_token12] = ACTIONS(16),
    [aux_sym_setting_statement_token13] = ACTIONS(16),
    [aux_sym_setting_statement_token14] = ACTIONS(16),
    [aux_sym_setting_statement_token15] = ACTIONS(16),
    [aux_sym_setting_statement_token16] = ACTIONS(16),
  },
  [4] = {
    [aux_sym_setting_statement_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(21),
    [aux_sym_section_statement_token2] = ACTIONS(21),
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
    [sym__separator] = ACTIONS(23),
  },
  [5] = {
    [aux_sym_setting_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(27),
    [aux_sym_section_statement_token2] = ACTIONS(27),
    [aux_sym_setting_statement_token1] = ACTIONS(27),
    [aux_sym_setting_statement_token2] = ACTIONS(27),
    [aux_sym_setting_statement_token3] = ACTIONS(27),
    [aux_sym_setting_statement_token4] = ACTIONS(27),
    [aux_sym_setting_statement_token5] = ACTIONS(27),
    [aux_sym_setting_statement_token6] = ACTIONS(27),
    [aux_sym_setting_statement_token7] = ACTIONS(27),
    [aux_sym_setting_statement_token8] = ACTIONS(27),
    [aux_sym_setting_statement_token9] = ACTIONS(27),
    [aux_sym_setting_statement_token10] = ACTIONS(27),
    [aux_sym_setting_statement_token11] = ACTIONS(27),
    [aux_sym_setting_statement_token12] = ACTIONS(27),
    [aux_sym_setting_statement_token13] = ACTIONS(27),
    [aux_sym_setting_statement_token14] = ACTIONS(27),
    [aux_sym_setting_statement_token15] = ACTIONS(27),
    [aux_sym_setting_statement_token16] = ACTIONS(27),
    [sym__separator] = ACTIONS(23),
  },
  [6] = {
    [aux_sym_setting_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(31),
    [aux_sym_section_statement_token2] = ACTIONS(31),
    [aux_sym_setting_statement_token1] = ACTIONS(31),
    [aux_sym_setting_statement_token2] = ACTIONS(31),
    [aux_sym_setting_statement_token3] = ACTIONS(31),
    [aux_sym_setting_statement_token4] = ACTIONS(31),
    [aux_sym_setting_statement_token5] = ACTIONS(31),
    [aux_sym_setting_statement_token6] = ACTIONS(31),
    [aux_sym_setting_statement_token7] = ACTIONS(31),
    [aux_sym_setting_statement_token8] = ACTIONS(31),
    [aux_sym_setting_statement_token9] = ACTIONS(31),
    [aux_sym_setting_statement_token10] = ACTIONS(31),
    [aux_sym_setting_statement_token11] = ACTIONS(31),
    [aux_sym_setting_statement_token12] = ACTIONS(31),
    [aux_sym_setting_statement_token13] = ACTIONS(31),
    [aux_sym_setting_statement_token14] = ACTIONS(31),
    [aux_sym_setting_statement_token15] = ACTIONS(31),
    [aux_sym_setting_statement_token16] = ACTIONS(31),
    [sym__separator] = ACTIONS(33),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(31),
    [aux_sym_section_statement_token2] = ACTIONS(31),
    [aux_sym_setting_statement_token1] = ACTIONS(31),
    [aux_sym_setting_statement_token2] = ACTIONS(31),
    [aux_sym_setting_statement_token3] = ACTIONS(31),
    [aux_sym_setting_statement_token4] = ACTIONS(31),
    [aux_sym_setting_statement_token5] = ACTIONS(31),
    [aux_sym_setting_statement_token6] = ACTIONS(31),
    [aux_sym_setting_statement_token7] = ACTIONS(31),
    [aux_sym_setting_statement_token8] = ACTIONS(31),
    [aux_sym_setting_statement_token9] = ACTIONS(31),
    [aux_sym_setting_statement_token10] = ACTIONS(31),
    [aux_sym_setting_statement_token11] = ACTIONS(31),
    [aux_sym_setting_statement_token12] = ACTIONS(31),
    [aux_sym_setting_statement_token13] = ACTIONS(31),
    [aux_sym_setting_statement_token14] = ACTIONS(31),
    [aux_sym_setting_statement_token15] = ACTIONS(31),
    [aux_sym_setting_statement_token16] = ACTIONS(31),
    [sym__separator] = ACTIONS(29),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(36),
    [aux_sym_section_statement_token2] = ACTIONS(36),
    [aux_sym_setting_statement_token1] = ACTIONS(36),
    [aux_sym_setting_statement_token2] = ACTIONS(36),
    [aux_sym_setting_statement_token3] = ACTIONS(36),
    [aux_sym_setting_statement_token4] = ACTIONS(36),
    [aux_sym_setting_statement_token5] = ACTIONS(36),
    [aux_sym_setting_statement_token6] = ACTIONS(36),
    [aux_sym_setting_statement_token7] = ACTIONS(36),
    [aux_sym_setting_statement_token8] = ACTIONS(36),
    [aux_sym_setting_statement_token9] = ACTIONS(36),
    [aux_sym_setting_statement_token10] = ACTIONS(36),
    [aux_sym_setting_statement_token11] = ACTIONS(36),
    [aux_sym_setting_statement_token12] = ACTIONS(36),
    [aux_sym_setting_statement_token13] = ACTIONS(36),
    [aux_sym_setting_statement_token14] = ACTIONS(36),
    [aux_sym_setting_statement_token15] = ACTIONS(36),
    [aux_sym_setting_statement_token16] = ACTIONS(36),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(38),
    [aux_sym_section_statement_token2] = ACTIONS(38),
    [aux_sym_setting_statement_token1] = ACTIONS(38),
    [aux_sym_setting_statement_token2] = ACTIONS(38),
    [aux_sym_setting_statement_token3] = ACTIONS(38),
    [aux_sym_setting_statement_token4] = ACTIONS(38),
    [aux_sym_setting_statement_token5] = ACTIONS(38),
    [aux_sym_setting_statement_token6] = ACTIONS(38),
    [aux_sym_setting_statement_token7] = ACTIONS(38),
    [aux_sym_setting_statement_token8] = ACTIONS(38),
    [aux_sym_setting_statement_token9] = ACTIONS(38),
    [aux_sym_setting_statement_token10] = ACTIONS(38),
    [aux_sym_setting_statement_token11] = ACTIONS(38),
    [aux_sym_setting_statement_token12] = ACTIONS(38),
    [aux_sym_setting_statement_token13] = ACTIONS(38),
    [aux_sym_setting_statement_token14] = ACTIONS(38),
    [aux_sym_setting_statement_token15] = ACTIONS(38),
    [aux_sym_setting_statement_token16] = ACTIONS(38),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(40),
    [aux_sym_section_statement_token2] = ACTIONS(40),
    [aux_sym_setting_statement_token1] = ACTIONS(40),
    [aux_sym_setting_statement_token2] = ACTIONS(40),
    [aux_sym_setting_statement_token3] = ACTIONS(40),
    [aux_sym_setting_statement_token4] = ACTIONS(40),
    [aux_sym_setting_statement_token5] = ACTIONS(40),
    [aux_sym_setting_statement_token6] = ACTIONS(40),
    [aux_sym_setting_statement_token7] = ACTIONS(40),
    [aux_sym_setting_statement_token8] = ACTIONS(40),
    [aux_sym_setting_statement_token9] = ACTIONS(40),
    [aux_sym_setting_statement_token10] = ACTIONS(40),
    [aux_sym_setting_statement_token11] = ACTIONS(40),
    [aux_sym_setting_statement_token12] = ACTIONS(40),
    [aux_sym_setting_statement_token13] = ACTIONS(40),
    [aux_sym_setting_statement_token14] = ACTIONS(40),
    [aux_sym_setting_statement_token15] = ACTIONS(40),
    [aux_sym_setting_statement_token16] = ACTIONS(40),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(42),
    [aux_sym_section_statement_token2] = ACTIONS(42),
    [aux_sym_setting_statement_token1] = ACTIONS(42),
    [aux_sym_setting_statement_token2] = ACTIONS(42),
    [aux_sym_setting_statement_token3] = ACTIONS(42),
    [aux_sym_setting_statement_token4] = ACTIONS(42),
    [aux_sym_setting_statement_token5] = ACTIONS(42),
    [aux_sym_setting_statement_token6] = ACTIONS(42),
    [aux_sym_setting_statement_token7] = ACTIONS(42),
    [aux_sym_setting_statement_token8] = ACTIONS(42),
    [aux_sym_setting_statement_token9] = ACTIONS(42),
    [aux_sym_setting_statement_token10] = ACTIONS(42),
    [aux_sym_setting_statement_token11] = ACTIONS(42),
    [aux_sym_setting_statement_token12] = ACTIONS(42),
    [aux_sym_setting_statement_token13] = ACTIONS(42),
    [aux_sym_setting_statement_token14] = ACTIONS(42),
    [aux_sym_setting_statement_token15] = ACTIONS(42),
    [aux_sym_setting_statement_token16] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(44), 1,
      anon_sym_,
    ACTIONS(46), 5,
      aux_sym_section_statement_token1,
      aux_sym_section_statement_token2,
      aux_sym_section_statement_token3,
      aux_sym_section_statement_token4,
      aux_sym_section_statement_token5,
  [11] = 1,
    ACTIONS(48), 5,
      aux_sym_section_statement_token1,
      aux_sym_section_statement_token2,
      aux_sym_section_statement_token3,
      aux_sym_section_statement_token4,
      aux_sym_section_statement_token5,
  [19] = 2,
    ACTIONS(50), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(52), 1,
      anon_sym_,
  [26] = 2,
    ACTIONS(54), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(56), 1,
      anon_sym_,
  [33] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [37] = 1,
    ACTIONS(60), 1,
      sym_argument,
  [41] = 1,
    ACTIONS(62), 1,
      anon_sym_STAR_STAR_STAR,
  [45] = 1,
    ACTIONS(64), 1,
      anon_sym_STAR_STAR_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 11,
  [SMALL_STATE(14)] = 19,
  [SMALL_STATE(15)] = 26,
  [SMALL_STATE(16)] = 33,
  [SMALL_STATE(17)] = 37,
  [SMALL_STATE(18)] = 41,
  [SMALL_STATE(19)] = 45,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_statement_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_statement_repeat1, 2), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 5),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
