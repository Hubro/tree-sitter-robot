#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_STAR_STAR_STAR = 1,
  aux_sym_section_token1 = 2,
  aux_sym_section_token2 = 3,
  aux_sym_section_token3 = 4,
  aux_sym_section_token4 = 5,
  aux_sym_section_token5 = 6,
  sym_source_file = 7,
  sym_statement = 8,
  sym_section = 9,
  aux_sym_source_file_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR_STAR_STAR] = "***",
  [aux_sym_section_token1] = "section_token1",
  [aux_sym_section_token2] = "section_token2",
  [aux_sym_section_token3] = "section_token3",
  [aux_sym_section_token4] = "section_token4",
  [aux_sym_section_token5] = "section_token5",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_section] = "section",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [aux_sym_section_token1] = aux_sym_section_token1,
  [aux_sym_section_token2] = aux_sym_section_token2,
  [aux_sym_section_token3] = aux_sym_section_token3,
  [aux_sym_section_token4] = aux_sym_section_token4,
  [aux_sym_section_token5] = aux_sym_section_token5,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_section] = sym_section,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_token5] = {
    .visible = false,
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
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(32);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(9);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(3);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_section_token2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_section_token3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_section_token4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_section_token5);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [aux_sym_section_token1] = ACTIONS(1),
    [aux_sym_section_token2] = ACTIONS(1),
    [aux_sym_section_token3] = ACTIONS(1),
    [aux_sym_section_token4] = ACTIONS(1),
    [aux_sym_section_token5] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_statement] = STATE(3),
    [sym_section] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(7), 5,
      aux_sym_section_token1,
      aux_sym_section_token2,
      aux_sym_section_token3,
      aux_sym_section_token4,
      aux_sym_section_token5,
  [8] = 4,
    ACTIONS(5), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_section,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [22] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_STAR_STAR_STAR,
    STATE(5), 1,
      sym_section,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [36] = 1,
    ACTIONS(16), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [41] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_STAR_STAR,
  [46] = 1,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
  [50] = 1,
    ACTIONS(22), 1,
      anon_sym_STAR_STAR_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 8,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 50,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [20] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
