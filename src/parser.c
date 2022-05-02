#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_DOT_DOT_DOT = 24,
  sym__token = 25,
  sym__separator = 26,
  anon_sym_CR_LF = 27,
  anon_sym_CR = 28,
  anon_sym_LF = 29,
  sym_source_file = 30,
  sym_statement = 31,
  sym_section_statement = 32,
  sym_setting_statement = 33,
  sym_continuation = 34,
  sym_argument = 35,
  sym__line_break = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_setting_statement_repeat1 = 38,
  aux_sym_setting_statement_repeat2 = 39,
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
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym__token] = "_token",
  [sym__separator] = "_separator",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_section_statement] = "section_statement",
  [sym_setting_statement] = "setting_statement",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym__line_break] = "_line_break",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_setting_statement_repeat1] = "setting_statement_repeat1",
  [aux_sym_setting_statement_repeat2] = "setting_statement_repeat2",
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym__token] = sym__token,
  [sym__separator] = sym__separator,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_section_statement] = sym_section_statement,
  [sym_setting_statement] = sym_setting_statement,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym__line_break] = sym__line_break,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
      if (eof) ADVANCE(159);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(41);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(86);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(42);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
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
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(160);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 71:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(4);
      END_STATE();
    case 72:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 96:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 97:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(9);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 151:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(82);
      END_STATE();
    case 152:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 154:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 155:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_section_statement_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_section_statement_token2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_section_statement_token3);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_section_statement_token4);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_section_statement_token5);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\r') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '\r') ADVANCE(190);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_statement] = STATE(2),
    [sym_section_statement] = STATE(9),
    [sym_setting_statement] = STATE(9),
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
    [sym_section_statement] = STATE(9),
    [sym_setting_statement] = STATE(9),
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
    [sym_section_statement] = STATE(9),
    [sym_setting_statement] = STATE(9),
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
    [sym_continuation] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(19),
    [aux_sym_section_statement_token2] = ACTIONS(19),
    [aux_sym_setting_statement_token1] = ACTIONS(19),
    [aux_sym_setting_statement_token2] = ACTIONS(19),
    [aux_sym_setting_statement_token3] = ACTIONS(19),
    [aux_sym_setting_statement_token4] = ACTIONS(19),
    [aux_sym_setting_statement_token5] = ACTIONS(19),
    [aux_sym_setting_statement_token6] = ACTIONS(19),
    [aux_sym_setting_statement_token7] = ACTIONS(19),
    [aux_sym_setting_statement_token8] = ACTIONS(19),
    [aux_sym_setting_statement_token9] = ACTIONS(19),
    [aux_sym_setting_statement_token10] = ACTIONS(19),
    [aux_sym_setting_statement_token11] = ACTIONS(19),
    [aux_sym_setting_statement_token12] = ACTIONS(19),
    [aux_sym_setting_statement_token13] = ACTIONS(19),
    [aux_sym_setting_statement_token14] = ACTIONS(19),
    [aux_sym_setting_statement_token15] = ACTIONS(19),
    [aux_sym_setting_statement_token16] = ACTIONS(19),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(21),
  },
  [5] = {
    [sym_continuation] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(23),
    [aux_sym_section_statement_token2] = ACTIONS(23),
    [aux_sym_setting_statement_token1] = ACTIONS(23),
    [aux_sym_setting_statement_token2] = ACTIONS(23),
    [aux_sym_setting_statement_token3] = ACTIONS(23),
    [aux_sym_setting_statement_token4] = ACTIONS(23),
    [aux_sym_setting_statement_token5] = ACTIONS(23),
    [aux_sym_setting_statement_token6] = ACTIONS(23),
    [aux_sym_setting_statement_token7] = ACTIONS(23),
    [aux_sym_setting_statement_token8] = ACTIONS(23),
    [aux_sym_setting_statement_token9] = ACTIONS(23),
    [aux_sym_setting_statement_token10] = ACTIONS(23),
    [aux_sym_setting_statement_token11] = ACTIONS(23),
    [aux_sym_setting_statement_token12] = ACTIONS(23),
    [aux_sym_setting_statement_token13] = ACTIONS(23),
    [aux_sym_setting_statement_token14] = ACTIONS(23),
    [aux_sym_setting_statement_token15] = ACTIONS(23),
    [aux_sym_setting_statement_token16] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(21),
  },
  [6] = {
    [sym_continuation] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(25),
    [aux_sym_section_statement_token2] = ACTIONS(25),
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(27), 19,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_section_statement_token2,
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
  [22] = 1,
    ACTIONS(29), 19,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_section_statement_token2,
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
  [44] = 1,
    ACTIONS(31), 19,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_section_statement_token2,
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
  [66] = 1,
    ACTIONS(33), 19,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
      aux_sym_section_statement_token2,
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
  [88] = 5,
    ACTIONS(35), 1,
      sym__separator,
    STATE(5), 1,
      sym__line_break,
    STATE(12), 1,
      aux_sym_setting_statement_repeat1,
    STATE(19), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(37), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [106] = 5,
    ACTIONS(35), 1,
      sym__separator,
    STATE(6), 1,
      sym__line_break,
    STATE(16), 1,
      aux_sym_setting_statement_repeat1,
    STATE(17), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(39), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [124] = 2,
    ACTIONS(41), 1,
      anon_sym_,
    ACTIONS(43), 5,
      aux_sym_section_statement_token1,
      aux_sym_section_statement_token2,
      aux_sym_section_statement_token3,
      aux_sym_section_statement_token4,
      aux_sym_section_statement_token5,
  [135] = 1,
    ACTIONS(45), 5,
      aux_sym_section_statement_token1,
      aux_sym_section_statement_token2,
      aux_sym_section_statement_token3,
      aux_sym_section_statement_token4,
      aux_sym_section_statement_token5,
  [143] = 3,
    ACTIONS(35), 1,
      sym__separator,
    STATE(20), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(47), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [155] = 3,
    ACTIONS(49), 1,
      sym__separator,
    STATE(16), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(52), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [167] = 3,
    STATE(4), 1,
      sym__line_break,
    STATE(18), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(54), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [179] = 3,
    STATE(18), 1,
      aux_sym_setting_statement_repeat2,
    STATE(26), 1,
      sym__line_break,
    ACTIONS(56), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [191] = 3,
    STATE(6), 1,
      sym__line_break,
    STATE(18), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(39), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [203] = 3,
    ACTIONS(35), 1,
      sym__separator,
    STATE(16), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(59), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [215] = 1,
    ACTIONS(61), 4,
      sym__separator,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [222] = 1,
    ACTIONS(52), 4,
      sym__separator,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [229] = 1,
    ACTIONS(63), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [235] = 2,
    ACTIONS(65), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(67), 1,
      anon_sym_,
  [242] = 2,
    ACTIONS(69), 1,
      sym__token,
    STATE(22), 1,
      sym_argument,
  [249] = 2,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(23), 1,
      sym_continuation,
  [256] = 2,
    ACTIONS(71), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(73), 1,
      anon_sym_,
  [263] = 1,
    ACTIONS(75), 1,
      anon_sym_STAR_STAR_STAR,
  [267] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [271] = 1,
    ACTIONS(79), 1,
      anon_sym_STAR_STAR_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 22,
  [SMALL_STATE(9)] = 44,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 155,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 191,
  [SMALL_STATE(20)] = 203,
  [SMALL_STATE(21)] = 215,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 229,
  [SMALL_STATE(24)] = 235,
  [SMALL_STATE(25)] = 242,
  [SMALL_STATE(26)] = 249,
  [SMALL_STATE(27)] = 256,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 267,
  [SMALL_STATE(30)] = 271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 1),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2), SHIFT_REPEAT(25),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat2, 2), SHIFT_REPEAT(26),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat2, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
