#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_literal_text = 1,
  anon_sym_LBRACE_LBRACE = 2,
  anon_sym_RBRACE_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_POUND = 5,
  anon_sym_SLASH = 6,
  anon_sym_STAR = 7,
  anon_sym_inline = 8,
  anon_sym_GT = 9,
  sym_source_file = 10,
  sym__content = 11,
  sym_handlebars = 12,
  sym_expression = 13,
  sym_block_start = 14,
  sym_block_end = 15,
  sym_handleblock = 16,
  sym_macro_start = 17,
  sym_macro = 18,
  sym_partial_start = 19,
  sym_partial = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_literal_text] = "literal_text",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_inline] = "inline",
  [anon_sym_GT] = ">",
  [sym_source_file] = "source_file",
  [sym__content] = "_content",
  [sym_handlebars] = "handlebars",
  [sym_expression] = "expression",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_handleblock] = "handleblock",
  [sym_macro_start] = "macro_start",
  [sym_macro] = "macro",
  [sym_partial_start] = "partial_start",
  [sym_partial] = "partial",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_literal_text] = sym_literal_text,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_GT] = anon_sym_GT,
  [sym_source_file] = sym_source_file,
  [sym__content] = sym__content,
  [sym_handlebars] = sym_handlebars,
  [sym_expression] = sym_expression,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_handleblock] = sym_handleblock,
  [sym_macro_start] = sym_macro_start,
  [sym_macro] = sym_macro,
  [sym_partial_start] = sym_partial_start,
  [sym_partial] = sym_partial,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym_handlebars] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_handleblock] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_start] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_start] = {
    .visible = true,
    .named = true,
  },
  [sym_partial] = {
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
  [9] = 5,
  [10] = 4,
  [11] = 8,
  [12] = 3,
  [13] = 2,
  [14] = 7,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 23,
  [36] = 26,
  [37] = 27,
  [38] = 22,
  [39] = 24,
  [40] = 21,
  [41] = 25,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 45,
  [52] = 52,
  [53] = 49,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '>') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(14);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '{') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_literal_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_literal_text);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__content] = STATE(6),
    [sym_handlebars] = STATE(6),
    [sym_block_start] = STATE(3),
    [sym_handleblock] = STATE(6),
    [sym_macro_start] = STATE(4),
    [sym_macro] = STATE(6),
    [sym_partial_start] = STATE(5),
    [sym_partial] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_literal_text] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
  },
  [2] = {
    [sym__content] = STATE(16),
    [sym_handlebars] = STATE(16),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(40),
    [sym_handleblock] = STATE(16),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(16),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_literal_text] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
  },
  [3] = {
    [sym__content] = STATE(11),
    [sym_handlebars] = STATE(11),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(23),
    [sym_handleblock] = STATE(11),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(11),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_literal_text] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
  },
  [4] = {
    [sym__content] = STATE(13),
    [sym_handlebars] = STATE(13),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(26),
    [sym_handleblock] = STATE(13),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(13),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_literal_text] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
  },
  [5] = {
    [sym__content] = STATE(14),
    [sym_handlebars] = STATE(14),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(27),
    [sym_handleblock] = STATE(14),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(14),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_literal_text] = ACTIONS(17),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
  },
  [6] = {
    [sym__content] = STATE(15),
    [sym_handlebars] = STATE(15),
    [sym_block_start] = STATE(3),
    [sym_handleblock] = STATE(15),
    [sym_macro_start] = STATE(4),
    [sym_macro] = STATE(15),
    [sym_partial_start] = STATE(5),
    [sym_partial] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_literal_text] = ACTIONS(21),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
  },
  [7] = {
    [sym__content] = STATE(16),
    [sym_handlebars] = STATE(16),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(41),
    [sym_handleblock] = STATE(16),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(16),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_literal_text] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
  },
  [8] = {
    [sym__content] = STATE(16),
    [sym_handlebars] = STATE(16),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(39),
    [sym_handleblock] = STATE(16),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(16),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_literal_text] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
  },
  [9] = {
    [sym__content] = STATE(7),
    [sym_handlebars] = STATE(7),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(37),
    [sym_handleblock] = STATE(7),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(7),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_literal_text] = ACTIONS(23),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
  },
  [10] = {
    [sym__content] = STATE(2),
    [sym_handlebars] = STATE(2),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(36),
    [sym_handleblock] = STATE(2),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(2),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_literal_text] = ACTIONS(25),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
  },
  [11] = {
    [sym__content] = STATE(16),
    [sym_handlebars] = STATE(16),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(24),
    [sym_handleblock] = STATE(16),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(16),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_literal_text] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
  },
  [12] = {
    [sym__content] = STATE(8),
    [sym_handlebars] = STATE(8),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(35),
    [sym_handleblock] = STATE(8),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(8),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_literal_text] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
  },
  [13] = {
    [sym__content] = STATE(16),
    [sym_handlebars] = STATE(16),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(21),
    [sym_handleblock] = STATE(16),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(16),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_literal_text] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
  },
  [14] = {
    [sym__content] = STATE(16),
    [sym_handlebars] = STATE(16),
    [sym_block_start] = STATE(12),
    [sym_block_end] = STATE(25),
    [sym_handleblock] = STATE(16),
    [sym_macro_start] = STATE(10),
    [sym_macro] = STATE(16),
    [sym_partial_start] = STATE(9),
    [sym_partial] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_literal_text] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
  },
  [15] = {
    [sym__content] = STATE(15),
    [sym_handlebars] = STATE(15),
    [sym_block_start] = STATE(3),
    [sym_handleblock] = STATE(15),
    [sym_macro_start] = STATE(4),
    [sym_macro] = STATE(15),
    [sym_partial_start] = STATE(5),
    [sym_partial] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_literal_text] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(37), 1,
      sym_literal_text,
    ACTIONS(40), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(9), 1,
      sym_partial_start,
    STATE(10), 1,
      sym_macro_start,
    STATE(12), 1,
      sym_block_start,
    STATE(16), 6,
      sym__content,
      sym_handlebars,
      sym_handleblock,
      sym_macro,
      sym_partial,
      aux_sym_source_file_repeat1,
  [24] = 6,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_GT,
    STATE(47), 1,
      sym_expression,
  [43] = 6,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_GT,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_expression,
  [62] = 5,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_GT,
    STATE(47), 1,
      sym_expression,
  [78] = 5,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_GT,
    STATE(48), 1,
      sym_expression,
  [94] = 2,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [102] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [110] = 2,
    ACTIONS(65), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [118] = 2,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [126] = 2,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [134] = 2,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [142] = 2,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [150] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_literal_text,
  [158] = 2,
    ACTIONS(83), 1,
      sym_literal_text,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
  [165] = 2,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(42), 1,
      sym_expression,
  [172] = 2,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(44), 1,
      sym_expression,
  [179] = 2,
    ACTIONS(87), 1,
      sym_literal_text,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
  [186] = 2,
    ACTIONS(91), 1,
      sym_literal_text,
    ACTIONS(93), 1,
      anon_sym_LBRACE_LBRACE,
  [193] = 2,
    ACTIONS(95), 1,
      sym_literal_text,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
  [200] = 2,
    ACTIONS(63), 1,
      sym_literal_text,
    ACTIONS(65), 1,
      anon_sym_LBRACE_LBRACE,
  [207] = 2,
    ACTIONS(75), 1,
      sym_literal_text,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
  [214] = 2,
    ACTIONS(79), 1,
      sym_literal_text,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
  [221] = 2,
    ACTIONS(59), 1,
      sym_literal_text,
    ACTIONS(61), 1,
      anon_sym_LBRACE_LBRACE,
  [228] = 2,
    ACTIONS(67), 1,
      sym_literal_text,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
  [235] = 2,
    ACTIONS(55), 1,
      sym_literal_text,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
  [242] = 2,
    ACTIONS(71), 1,
      sym_literal_text,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
  [249] = 1,
    ACTIONS(99), 1,
      anon_sym_RBRACE_RBRACE,
  [253] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [257] = 1,
    ACTIONS(103), 1,
      anon_sym_RBRACE_RBRACE,
  [261] = 1,
    ACTIONS(105), 1,
      anon_sym_RBRACE_RBRACE,
  [265] = 1,
    ACTIONS(107), 1,
      anon_sym_RBRACE_RBRACE,
  [269] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACE_RBRACE,
  [273] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACE_RBRACE,
  [277] = 1,
    ACTIONS(113), 1,
      sym_identifier,
  [281] = 1,
    ACTIONS(115), 1,
      anon_sym_inline,
  [285] = 1,
    ACTIONS(117), 1,
      anon_sym_RBRACE_RBRACE,
  [289] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [293] = 1,
    ACTIONS(121), 1,
      sym_identifier,
  [297] = 1,
    ACTIONS(123), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 24,
  [SMALL_STATE(18)] = 43,
  [SMALL_STATE(19)] = 62,
  [SMALL_STATE(20)] = 78,
  [SMALL_STATE(21)] = 94,
  [SMALL_STATE(22)] = 102,
  [SMALL_STATE(23)] = 110,
  [SMALL_STATE(24)] = 118,
  [SMALL_STATE(25)] = 126,
  [SMALL_STATE(26)] = 134,
  [SMALL_STATE(27)] = 142,
  [SMALL_STATE(28)] = 150,
  [SMALL_STATE(29)] = 158,
  [SMALL_STATE(30)] = 165,
  [SMALL_STATE(31)] = 172,
  [SMALL_STATE(32)] = 179,
  [SMALL_STATE(33)] = 186,
  [SMALL_STATE(34)] = 193,
  [SMALL_STATE(35)] = 200,
  [SMALL_STATE(36)] = 207,
  [SMALL_STATE(37)] = 214,
  [SMALL_STATE(38)] = 221,
  [SMALL_STATE(39)] = 228,
  [SMALL_STATE(40)] = 235,
  [SMALL_STATE(41)] = 242,
  [SMALL_STATE(42)] = 249,
  [SMALL_STATE(43)] = 253,
  [SMALL_STATE(44)] = 257,
  [SMALL_STATE(45)] = 261,
  [SMALL_STATE(46)] = 265,
  [SMALL_STATE(47)] = 269,
  [SMALL_STATE(48)] = 273,
  [SMALL_STATE(49)] = 277,
  [SMALL_STATE(50)] = 281,
  [SMALL_STATE(51)] = 285,
  [SMALL_STATE(52)] = 289,
  [SMALL_STATE(53)] = 293,
  [SMALL_STATE(54)] = 297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlebars, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handlebars, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handleblock, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handleblock, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handleblock, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_handleblock, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_start, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_start, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_start, 5, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_start, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_handlebars_html(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
