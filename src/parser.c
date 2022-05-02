#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  aux_sym_section_statement_repeat1 = 38,
  aux_sym_setting_statement_repeat1 = 39,
  aux_sym_setting_statement_repeat2 = 40,
  alias_sym_extra_section_text = 41,
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
  [aux_sym_section_statement_repeat1] = "section_statement_repeat1",
  [aux_sym_setting_statement_repeat1] = "setting_statement_repeat1",
  [aux_sym_setting_statement_repeat2] = "setting_statement_repeat2",
  [alias_sym_extra_section_text] = "extra_section_text",
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
  [aux_sym_section_statement_repeat1] = aux_sym_section_statement_repeat1,
  [aux_sym_setting_statement_repeat1] = aux_sym_setting_statement_repeat1,
  [aux_sym_setting_statement_repeat2] = aux_sym_setting_statement_repeat2,
  [alias_sym_extra_section_text] = alias_sym_extra_section_text,
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
  [aux_sym_section_statement_repeat1] = {
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
  [alias_sym_extra_section_text] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_extra_section_text,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    alias_sym_extra_section_text,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(170);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(47);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(197);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(171);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(194);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 70:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 76:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 77:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 78:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 101:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 103:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 104:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 112:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 113:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 114:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 117:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 120:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 161:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 162:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 163:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 164:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 165:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 166:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 167:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(195);
      END_STATE();
    case 169:
      if (eof) ADVANCE(170);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(169)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_section_statement_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_section_statement_token2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_section_statement_token3);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_section_statement_token4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_section_statement_token5);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(198);
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(203);
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
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 169},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 169},
  [11] = {.lex_state = 169},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 169},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 167},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 167},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [sym_source_file] = STATE(36),
    [sym_statement] = STATE(2),
    [sym_section_statement] = STATE(16),
    [sym_setting_statement] = STATE(16),
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
    [sym_section_statement] = STATE(16),
    [sym_setting_statement] = STATE(16),
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
    [sym_section_statement] = STATE(16),
    [sym_setting_statement] = STATE(16),
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
    [sym_continuation] = STATE(29),
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
    [aux_sym_section_statement_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(23),
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
    [sym__separator] = ACTIONS(27),
  },
  [6] = {
    [aux_sym_section_statement_repeat1] = STATE(10),
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
    [sym__separator] = ACTIONS(27),
  },
  [7] = {
    [aux_sym_section_statement_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(35),
    [aux_sym_section_statement_token2] = ACTIONS(35),
    [aux_sym_setting_statement_token1] = ACTIONS(35),
    [aux_sym_setting_statement_token2] = ACTIONS(35),
    [aux_sym_setting_statement_token3] = ACTIONS(35),
    [aux_sym_setting_statement_token4] = ACTIONS(35),
    [aux_sym_setting_statement_token5] = ACTIONS(35),
    [aux_sym_setting_statement_token6] = ACTIONS(35),
    [aux_sym_setting_statement_token7] = ACTIONS(35),
    [aux_sym_setting_statement_token8] = ACTIONS(35),
    [aux_sym_setting_statement_token9] = ACTIONS(35),
    [aux_sym_setting_statement_token10] = ACTIONS(35),
    [aux_sym_setting_statement_token11] = ACTIONS(35),
    [aux_sym_setting_statement_token12] = ACTIONS(35),
    [aux_sym_setting_statement_token13] = ACTIONS(35),
    [aux_sym_setting_statement_token14] = ACTIONS(35),
    [aux_sym_setting_statement_token15] = ACTIONS(35),
    [aux_sym_setting_statement_token16] = ACTIONS(35),
    [sym__separator] = ACTIONS(27),
  },
  [8] = {
    [sym_continuation] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(37),
    [aux_sym_section_statement_token2] = ACTIONS(37),
    [aux_sym_setting_statement_token1] = ACTIONS(37),
    [aux_sym_setting_statement_token2] = ACTIONS(37),
    [aux_sym_setting_statement_token3] = ACTIONS(37),
    [aux_sym_setting_statement_token4] = ACTIONS(37),
    [aux_sym_setting_statement_token5] = ACTIONS(37),
    [aux_sym_setting_statement_token6] = ACTIONS(37),
    [aux_sym_setting_statement_token7] = ACTIONS(37),
    [aux_sym_setting_statement_token8] = ACTIONS(37),
    [aux_sym_setting_statement_token9] = ACTIONS(37),
    [aux_sym_setting_statement_token10] = ACTIONS(37),
    [aux_sym_setting_statement_token11] = ACTIONS(37),
    [aux_sym_setting_statement_token12] = ACTIONS(37),
    [aux_sym_setting_statement_token13] = ACTIONS(37),
    [aux_sym_setting_statement_token14] = ACTIONS(37),
    [aux_sym_setting_statement_token15] = ACTIONS(37),
    [aux_sym_setting_statement_token16] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(21),
  },
  [9] = {
    [sym_continuation] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(39),
    [aux_sym_section_statement_token2] = ACTIONS(39),
    [aux_sym_setting_statement_token1] = ACTIONS(39),
    [aux_sym_setting_statement_token2] = ACTIONS(39),
    [aux_sym_setting_statement_token3] = ACTIONS(39),
    [aux_sym_setting_statement_token4] = ACTIONS(39),
    [aux_sym_setting_statement_token5] = ACTIONS(39),
    [aux_sym_setting_statement_token6] = ACTIONS(39),
    [aux_sym_setting_statement_token7] = ACTIONS(39),
    [aux_sym_setting_statement_token8] = ACTIONS(39),
    [aux_sym_setting_statement_token9] = ACTIONS(39),
    [aux_sym_setting_statement_token10] = ACTIONS(39),
    [aux_sym_setting_statement_token11] = ACTIONS(39),
    [aux_sym_setting_statement_token12] = ACTIONS(39),
    [aux_sym_setting_statement_token13] = ACTIONS(39),
    [aux_sym_setting_statement_token14] = ACTIONS(39),
    [aux_sym_setting_statement_token15] = ACTIONS(39),
    [aux_sym_setting_statement_token16] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(21),
  },
  [10] = {
    [aux_sym_section_statement_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(43),
    [aux_sym_section_statement_token2] = ACTIONS(43),
    [aux_sym_setting_statement_token1] = ACTIONS(43),
    [aux_sym_setting_statement_token2] = ACTIONS(43),
    [aux_sym_setting_statement_token3] = ACTIONS(43),
    [aux_sym_setting_statement_token4] = ACTIONS(43),
    [aux_sym_setting_statement_token5] = ACTIONS(43),
    [aux_sym_setting_statement_token6] = ACTIONS(43),
    [aux_sym_setting_statement_token7] = ACTIONS(43),
    [aux_sym_setting_statement_token8] = ACTIONS(43),
    [aux_sym_setting_statement_token9] = ACTIONS(43),
    [aux_sym_setting_statement_token10] = ACTIONS(43),
    [aux_sym_setting_statement_token11] = ACTIONS(43),
    [aux_sym_setting_statement_token12] = ACTIONS(43),
    [aux_sym_setting_statement_token13] = ACTIONS(43),
    [aux_sym_setting_statement_token14] = ACTIONS(43),
    [aux_sym_setting_statement_token15] = ACTIONS(43),
    [aux_sym_setting_statement_token16] = ACTIONS(43),
    [sym__separator] = ACTIONS(45),
  },
  [11] = {
    [aux_sym_section_statement_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(50),
    [aux_sym_section_statement_token2] = ACTIONS(50),
    [aux_sym_setting_statement_token1] = ACTIONS(50),
    [aux_sym_setting_statement_token2] = ACTIONS(50),
    [aux_sym_setting_statement_token3] = ACTIONS(50),
    [aux_sym_setting_statement_token4] = ACTIONS(50),
    [aux_sym_setting_statement_token5] = ACTIONS(50),
    [aux_sym_setting_statement_token6] = ACTIONS(50),
    [aux_sym_setting_statement_token7] = ACTIONS(50),
    [aux_sym_setting_statement_token8] = ACTIONS(50),
    [aux_sym_setting_statement_token9] = ACTIONS(50),
    [aux_sym_setting_statement_token10] = ACTIONS(50),
    [aux_sym_setting_statement_token11] = ACTIONS(50),
    [aux_sym_setting_statement_token12] = ACTIONS(50),
    [aux_sym_setting_statement_token13] = ACTIONS(50),
    [aux_sym_setting_statement_token14] = ACTIONS(50),
    [aux_sym_setting_statement_token15] = ACTIONS(50),
    [aux_sym_setting_statement_token16] = ACTIONS(50),
    [sym__separator] = ACTIONS(27),
  },
  [12] = {
    [aux_sym_section_statement_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(23),
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
    [sym__separator] = ACTIONS(27),
  },
  [13] = {
    [aux_sym_section_statement_repeat1] = STATE(7),
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
    [sym__separator] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym__separator,
    ACTIONS(54), 18,
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
  [25] = 2,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym__separator,
    ACTIONS(58), 18,
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
  [50] = 1,
    ACTIONS(60), 19,
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
  [72] = 5,
    ACTIONS(62), 1,
      sym__separator,
    STATE(4), 1,
      sym__line_break,
    STATE(20), 1,
      aux_sym_setting_statement_repeat2,
    STATE(21), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(64), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [90] = 5,
    ACTIONS(62), 1,
      sym__separator,
    STATE(8), 1,
      sym__line_break,
    STATE(17), 1,
      aux_sym_setting_statement_repeat1,
    STATE(26), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(66), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [108] = 2,
    ACTIONS(68), 1,
      anon_sym_,
    ACTIONS(70), 5,
      aux_sym_section_statement_token1,
      aux_sym_section_statement_token2,
      aux_sym_section_statement_token3,
      aux_sym_section_statement_token4,
      aux_sym_section_statement_token5,
  [119] = 3,
    STATE(9), 1,
      sym__line_break,
    STATE(23), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(72), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [131] = 3,
    ACTIONS(74), 1,
      sym__separator,
    STATE(21), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(77), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [143] = 3,
    ACTIONS(62), 1,
      sym__separator,
    STATE(25), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(79), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [155] = 3,
    STATE(23), 1,
      aux_sym_setting_statement_repeat2,
    STATE(31), 1,
      sym__line_break,
    ACTIONS(81), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [167] = 1,
    ACTIONS(84), 5,
      aux_sym_section_statement_token1,
      aux_sym_section_statement_token2,
      aux_sym_section_statement_token3,
      aux_sym_section_statement_token4,
      aux_sym_section_statement_token5,
  [175] = 3,
    ACTIONS(62), 1,
      sym__separator,
    STATE(21), 1,
      aux_sym_setting_statement_repeat1,
    ACTIONS(86), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [187] = 3,
    STATE(4), 1,
      sym__line_break,
    STATE(23), 1,
      aux_sym_setting_statement_repeat2,
    ACTIONS(64), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [199] = 1,
    ACTIONS(77), 4,
      sym__separator,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [206] = 1,
    ACTIONS(58), 4,
      sym__separator,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [213] = 1,
    ACTIONS(88), 3,
      anon_sym_CR_LF,
      anon_sym_CR,
      anon_sym_LF,
  [219] = 2,
    ACTIONS(90), 1,
      sym__token,
    STATE(27), 1,
      sym_argument,
  [226] = 2,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(29), 1,
      sym_continuation,
  [233] = 2,
    ACTIONS(92), 1,
      sym__token,
    STATE(14), 1,
      sym_argument,
  [240] = 2,
    ACTIONS(94), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(96), 1,
      anon_sym_,
  [247] = 2,
    ACTIONS(98), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(100), 1,
      anon_sym_,
  [254] = 1,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR_STAR,
  [258] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [262] = 1,
    ACTIONS(106), 1,
      anon_sym_STAR_STAR_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 25,
  [SMALL_STATE(16)] = 50,
  [SMALL_STATE(17)] = 72,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 108,
  [SMALL_STATE(20)] = 119,
  [SMALL_STATE(21)] = 131,
  [SMALL_STATE(22)] = 143,
  [SMALL_STATE(23)] = 155,
  [SMALL_STATE(24)] = 167,
  [SMALL_STATE(25)] = 175,
  [SMALL_STATE(26)] = 187,
  [SMALL_STATE(27)] = 199,
  [SMALL_STATE(28)] = 206,
  [SMALL_STATE(29)] = 213,
  [SMALL_STATE(30)] = 219,
  [SMALL_STATE(31)] = 226,
  [SMALL_STATE(32)] = 233,
  [SMALL_STATE(33)] = 240,
  [SMALL_STATE(34)] = 247,
  [SMALL_STATE(35)] = 254,
  [SMALL_STATE(36)] = 258,
  [SMALL_STATE(37)] = 262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_statement, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 5),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_statement, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_statement, 6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_statement_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_statement_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_statement_repeat1, 2), SHIFT_REPEAT(32),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_statement, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_statement_repeat1, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_statement_repeat1, 2, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 1),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat2, 2), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_statement_repeat2, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
