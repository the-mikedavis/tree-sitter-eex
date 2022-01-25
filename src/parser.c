#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_PERCENT = 1,
  anon_sym_LT_PERCENT_EQ = 2,
  anon_sym_LT_PERCENT_PERCENT = 3,
  anon_sym_LT_PERCENT_PERCENT_EQ = 4,
  anon_sym_PERCENT_GT = 5,
  anon_sym_do = 6,
  anon_sym_DASH_GT = 7,
  aux_sym__end_expression_token1 = 8,
  anon_sym_LT_PERCENT_POUND = 9,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 10,
  aux_sym__bang_comment_token1 = 11,
  anon_sym_DASH_DASH_PERCENT_GT = 12,
  sym_text = 13,
  sym__code = 14,
  anon_sym_POUND = 15,
  sym_fragment = 16,
  sym__node = 17,
  sym_directive_group = 18,
  sym_directive = 19,
  sym__start_or_middle_directive = 20,
  sym__end_directive = 21,
  sym__start_or_middle_expression = 22,
  sym__end_expression = 23,
  sym_expression = 24,
  sym_comment = 25,
  sym__hash_comment = 26,
  sym__bang_comment = 27,
  sym__code_comment = 28,
  aux_sym_fragment_repeat1 = 29,
  aux_sym_directive_group_repeat1 = 30,
  aux_sym__start_or_middle_expression_repeat1 = 31,
  aux_sym__bang_comment_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT_PERCENT_EQ] = "<%%=",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_do] = "do",
  [anon_sym_DASH_GT] = "->",
  [aux_sym__end_expression_token1] = "_end_expression_token1",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = "<%!--",
  [aux_sym__bang_comment_token1] = "_bang_comment_token1",
  [anon_sym_DASH_DASH_PERCENT_GT] = "--%>",
  [sym_text] = "text",
  [sym__code] = "_code",
  [anon_sym_POUND] = "#",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_directive_group] = "directive_group",
  [sym_directive] = "directive",
  [sym__start_or_middle_directive] = "directive",
  [sym__end_directive] = "directive",
  [sym__start_or_middle_expression] = "partial_expression",
  [sym__end_expression] = "partial_expression",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym__hash_comment] = "_hash_comment",
  [sym__bang_comment] = "_bang_comment",
  [sym__code_comment] = "_code_comment",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_directive_group_repeat1] = "directive_group_repeat1",
  [aux_sym__start_or_middle_expression_repeat1] = "_start_or_middle_expression_repeat1",
  [aux_sym__bang_comment_repeat1] = "_bang_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT_PERCENT_EQ] = anon_sym_LT_PERCENT_PERCENT_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [aux_sym__end_expression_token1] = aux_sym__end_expression_token1,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = anon_sym_LT_PERCENT_BANG_DASH_DASH,
  [aux_sym__bang_comment_token1] = aux_sym__bang_comment_token1,
  [anon_sym_DASH_DASH_PERCENT_GT] = anon_sym_DASH_DASH_PERCENT_GT,
  [sym_text] = sym_text,
  [sym__code] = sym__code,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_directive_group] = sym_directive_group,
  [sym_directive] = sym_directive,
  [sym__start_or_middle_directive] = sym_directive,
  [sym__end_directive] = sym_directive,
  [sym__start_or_middle_expression] = sym__start_or_middle_expression,
  [sym__end_expression] = sym__start_or_middle_expression,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym__hash_comment] = sym__hash_comment,
  [sym__bang_comment] = sym__bang_comment,
  [sym__code_comment] = sym__code_comment,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_directive_group_repeat1] = aux_sym_directive_group_repeat1,
  [aux_sym__start_or_middle_expression_repeat1] = aux_sym__start_or_middle_expression_repeat1,
  [aux_sym__bang_comment_repeat1] = aux_sym__bang_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__end_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__bang_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_group] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__start_or_middle_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__end_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__start_or_middle_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__end_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__hash_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__bang_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__code_comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__start_or_middle_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bang_comment_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 11,
  [20] = 10,
  [21] = 21,
  [22] = 9,
  [23] = 8,
  [24] = 16,
  [25] = 17,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 30,
  [37] = 37,
  [38] = 34,
  [39] = 39,
  [40] = 32,
  [41] = 37,
  [42] = 42,
  [43] = 29,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__end_expression_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__end_expression_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__bang_comment_token1);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__bang_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__bang_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(17);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [aux_sym__end_expression_token1] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(46),
    [sym__node] = STATE(2),
    [sym_directive_group] = STATE(2),
    [sym_directive] = STATE(2),
    [sym__start_or_middle_directive] = STATE(5),
    [sym_comment] = STATE(2),
    [sym__hash_comment] = STATE(8),
    [sym__bang_comment] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(7),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_text,
    STATE(5), 1,
      sym__start_or_middle_directive,
    STATE(8), 2,
      sym__hash_comment,
      sym__bang_comment,
    ACTIONS(5), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(3), 5,
      sym__node,
      sym_directive_group,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [33] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(28), 1,
      sym_text,
    STATE(5), 1,
      sym__start_or_middle_directive,
    STATE(8), 2,
      sym__hash_comment,
      sym__bang_comment,
    ACTIONS(19), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(3), 5,
      sym__node,
      sym_directive_group,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [66] = 7,
    ACTIONS(33), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(35), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(37), 1,
      sym_text,
    STATE(12), 1,
      sym__end_directive,
    STATE(23), 2,
      sym__hash_comment,
      sym__bang_comment,
    ACTIONS(31), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(6), 4,
      sym_directive,
      sym__start_or_middle_directive,
      sym_comment,
      aux_sym_directive_group_repeat1,
  [95] = 7,
    ACTIONS(33), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(35), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(13), 1,
      sym__end_directive,
    STATE(23), 2,
      sym__hash_comment,
      sym__bang_comment,
    ACTIONS(31), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 4,
      sym_directive,
      sym__start_or_middle_directive,
      sym_comment,
      aux_sym_directive_group_repeat1,
  [124] = 6,
    ACTIONS(44), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(50), 1,
      sym_text,
    STATE(23), 2,
      sym__hash_comment,
      sym__bang_comment,
    ACTIONS(41), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(6), 4,
      sym_directive,
      sym__start_or_middle_directive,
      sym_comment,
      aux_sym_directive_group_repeat1,
  [150] = 8,
    ACTIONS(53), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(57), 1,
      aux_sym__end_expression_token1,
    ACTIONS(59), 1,
      sym__code,
    STATE(28), 1,
      aux_sym__start_or_middle_expression_repeat1,
    STATE(47), 1,
      sym__start_or_middle_expression,
    STATE(48), 1,
      sym__end_expression,
    STATE(50), 1,
      sym_expression,
    ACTIONS(55), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [176] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [189] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [202] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [215] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [228] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [241] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [254] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [267] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [280] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [293] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [306] = 1,
    ACTIONS(91), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [316] = 1,
    ACTIONS(75), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [326] = 1,
    ACTIONS(71), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [336] = 6,
    ACTIONS(59), 1,
      sym__code,
    ACTIONS(101), 1,
      anon_sym_PERCENT_GT,
    STATE(28), 1,
      aux_sym__start_or_middle_expression_repeat1,
    STATE(47), 1,
      sym__start_or_middle_expression,
    STATE(52), 1,
      sym_expression,
    ACTIONS(55), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [356] = 1,
    ACTIONS(67), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [366] = 1,
    ACTIONS(63), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [376] = 1,
    ACTIONS(95), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [386] = 1,
    ACTIONS(99), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [396] = 6,
    ACTIONS(53), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(59), 1,
      sym__code,
    STATE(28), 1,
      aux_sym__start_or_middle_expression_repeat1,
    STATE(47), 1,
      sym__start_or_middle_expression,
    STATE(50), 1,
      sym_expression,
    ACTIONS(55), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [416] = 1,
    ACTIONS(103), 7,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      sym_text,
  [426] = 4,
    ACTIONS(105), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(109), 1,
      sym__code,
    STATE(29), 1,
      aux_sym__start_or_middle_expression_repeat1,
    ACTIONS(107), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [440] = 3,
    ACTIONS(113), 1,
      sym__code,
    STATE(29), 1,
      aux_sym__start_or_middle_expression_repeat1,
    ACTIONS(111), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [452] = 3,
    ACTIONS(116), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(118), 1,
      sym__code,
    STATE(43), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [462] = 3,
    ACTIONS(120), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(123), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(31), 1,
      aux_sym__bang_comment_repeat1,
  [472] = 3,
    ACTIONS(125), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(127), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(31), 1,
      aux_sym__bang_comment_repeat1,
  [482] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(131), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym__code_comment,
  [492] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(135), 1,
      sym__code,
    STATE(30), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [502] = 3,
    ACTIONS(118), 1,
      sym__code,
    ACTIONS(137), 1,
      anon_sym_PERCENT_GT,
    STATE(43), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [512] = 3,
    ACTIONS(118), 1,
      sym__code,
    ACTIONS(139), 1,
      anon_sym_PERCENT_GT,
    STATE(43), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [522] = 3,
    ACTIONS(141), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(143), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(40), 1,
      aux_sym__bang_comment_repeat1,
  [532] = 3,
    ACTIONS(145), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(147), 1,
      sym__code,
    STATE(36), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [542] = 3,
    ACTIONS(149), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(151), 1,
      sym__code,
    STATE(35), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [552] = 3,
    ACTIONS(125), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(31), 1,
      aux_sym__bang_comment_repeat1,
  [562] = 3,
    ACTIONS(155), 1,
      aux_sym__bang_comment_token1,
    ACTIONS(157), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(32), 1,
      aux_sym__bang_comment_repeat1,
  [572] = 3,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_PERCENT_GT,
    STATE(51), 1,
      sym__code_comment,
  [582] = 3,
    ACTIONS(111), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(161), 1,
      sym__code,
    STATE(43), 1,
      aux_sym__start_or_middle_expression_repeat1,
  [592] = 3,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      anon_sym_PERCENT_GT,
    STATE(49), 1,
      sym__code_comment,
  [602] = 1,
    ACTIONS(166), 1,
      anon_sym_PERCENT_GT,
  [606] = 1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
  [610] = 1,
    ACTIONS(170), 1,
      anon_sym_PERCENT_GT,
  [614] = 1,
    ACTIONS(172), 1,
      anon_sym_PERCENT_GT,
  [618] = 1,
    ACTIONS(129), 1,
      anon_sym_PERCENT_GT,
  [622] = 1,
    ACTIONS(174), 1,
      anon_sym_PERCENT_GT,
  [626] = 1,
    ACTIONS(176), 1,
      anon_sym_PERCENT_GT,
  [630] = 1,
    ACTIONS(178), 1,
      anon_sym_PERCENT_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 254,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 306,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 376,
  [SMALL_STATE(25)] = 386,
  [SMALL_STATE(26)] = 396,
  [SMALL_STATE(27)] = 416,
  [SMALL_STATE(28)] = 426,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 452,
  [SMALL_STATE(31)] = 462,
  [SMALL_STATE(32)] = 472,
  [SMALL_STATE(33)] = 482,
  [SMALL_STATE(34)] = 492,
  [SMALL_STATE(35)] = 502,
  [SMALL_STATE(36)] = 512,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 532,
  [SMALL_STATE(39)] = 542,
  [SMALL_STATE(40)] = 552,
  [SMALL_STATE(41)] = 562,
  [SMALL_STATE(42)] = 572,
  [SMALL_STATE(43)] = 582,
  [SMALL_STATE(44)] = 592,
  [SMALL_STATE(45)] = 602,
  [SMALL_STATE(46)] = 606,
  [SMALL_STATE(47)] = 610,
  [SMALL_STATE(48)] = 614,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 622,
  [SMALL_STATE(51)] = 626,
  [SMALL_STATE(52)] = 630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(21),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(34),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(41),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_group_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_group_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_group_repeat1, 2), SHIFT_REPEAT(37),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_group_repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_group, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_group, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_group, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_group, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_directive, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_directive, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__start_or_middle_directive, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__start_or_middle_expression_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__start_or_middle_expression_repeat1, 2), SHIFT_REPEAT(29),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__bang_comment_repeat1, 2), SHIFT_REPEAT(31),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bang_comment_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_or_middle_expression, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_comment, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__code_comment, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_expression, 1),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__start_or_middle_expression_repeat1, 2), SHIFT_REPEAT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_or_middle_expression, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_or_middle_expression, 3),
  [168] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_expression, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eex(void) {
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
