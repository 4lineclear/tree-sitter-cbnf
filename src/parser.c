#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_identifier = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_PIPE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  anon_sym_DQUOTE2 = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_SQUOTE2 = 12,
  sym_escape_sequence = 13,
  anon_sym_nil = 14,
  anon_sym_except = 15,
  sym_syntax = 16,
  sym_syntax_rule = 17,
  sym__expression = 18,
  sym_or = 19,
  sym_list = 20,
  sym__term = 21,
  sym__atom = 22,
  sym__group = 23,
  sym_string = 24,
  sym_keyword = 25,
  aux_sym_syntax_repeat1 = 26,
  aux_sym_or_repeat1 = 27,
  aux_sym_list_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_nil] = "nil",
  [anon_sym_except] = "except",
  [sym_syntax] = "syntax",
  [sym_syntax_rule] = "syntax_rule",
  [sym__expression] = "_expression",
  [sym_or] = "or",
  [sym_list] = "list",
  [sym__term] = "_term",
  [sym__atom] = "_atom",
  [sym__group] = "_group",
  [sym_string] = "string",
  [sym_keyword] = "keyword",
  [aux_sym_syntax_repeat1] = "syntax_repeat1",
  [aux_sym_or_repeat1] = "or_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_except] = anon_sym_except,
  [sym_syntax] = sym_syntax,
  [sym_syntax_rule] = sym_syntax_rule,
  [sym__expression] = sym__expression,
  [sym_or] = sym_or,
  [sym_list] = sym_list,
  [sym__term] = sym__term,
  [sym__atom] = sym__atom,
  [sym__group] = sym__group,
  [sym_string] = sym_string,
  [sym_keyword] = sym_keyword,
  [aux_sym_syntax_repeat1] = aux_sym_syntax_repeat1,
  [aux_sym_or_repeat1] = aux_sym_or_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_syntax_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_or_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_definition = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_definition] = "definition",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_definition, 2},
    {field_name, 0},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 32,
        '#', 15,
        '\'', 34,
        '(', 27,
        ')', 28,
        '\\', 5,
        'e', 22,
        'n', 18,
        '{', 24,
        '|', 26,
        '}', 25,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 29,
        '#', 15,
        '\'', 33,
        '(', 27,
        ')', 28,
        'e', 22,
        'n', 18,
        '|', 26,
        '}', 25,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 29,
        '#', 15,
        '\'', 33,
        '(', 27,
        ')', 28,
        'e', 22,
        'n', 18,
        '{', 24,
        '|', 26,
        '}', 25,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_except);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
  },
  [1] = {
    [sym_syntax] = STATE(27),
    [sym_syntax_rule] = STATE(17),
    [aux_sym_syntax_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym__expression] = STATE(26),
    [sym_or] = STATE(26),
    [sym_list] = STATE(13),
    [sym__term] = STATE(5),
    [sym__atom] = STATE(5),
    [sym__group] = STATE(5),
    [sym_string] = STATE(5),
    [sym_keyword] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
  },
  [3] = {
    [sym__term] = STATE(3),
    [sym__atom] = STATE(3),
    [sym__group] = STATE(3),
    [sym_string] = STATE(3),
    [sym_keyword] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_nil] = ACTIONS(35),
    [anon_sym_except] = ACTIONS(35),
  },
  [4] = {
    [sym__expression] = STATE(28),
    [sym_or] = STATE(28),
    [sym_list] = STATE(13),
    [sym__term] = STATE(5),
    [sym__atom] = STATE(5),
    [sym__group] = STATE(5),
    [sym_string] = STATE(5),
    [sym_keyword] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
  },
  [5] = {
    [sym__term] = STATE(3),
    [sym__atom] = STATE(3),
    [sym__group] = STATE(3),
    [sym_string] = STATE(3),
    [sym_keyword] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_list,
    ACTIONS(19), 2,
      anon_sym_nil,
      anon_sym_except,
    STATE(5), 6,
      sym__term,
      sym__atom,
      sym__group,
      sym_string,
      sym_keyword,
      aux_sym_list_repeat1,
  [31] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(44), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [48] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(48), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(52), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [82] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(56), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [99] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(60), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [116] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(66), 1,
      anon_sym_SQUOTE2,
    ACTIONS(68), 1,
      sym_escape_sequence,
    STATE(22), 1,
      aux_sym_string_repeat1,
  [132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    STATE(18), 1,
      aux_sym_or_repeat1,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(14), 2,
      sym_syntax_rule,
      aux_sym_syntax_repeat1,
  [160] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DQUOTE2,
    ACTIONS(79), 1,
      aux_sym_string_token1,
    ACTIONS(81), 1,
      sym_escape_sequence,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [176] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    ACTIONS(85), 1,
      anon_sym_DQUOTE2,
    ACTIONS(87), 1,
      sym_escape_sequence,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_syntax_rule,
      aux_sym_syntax_repeat1,
  [206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_PIPE,
    STATE(21), 1,
      aux_sym_or_repeat1,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [220] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE2,
    ACTIONS(93), 1,
      aux_sym_string_token1,
    ACTIONS(95), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [236] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym_string_token1,
    ACTIONS(100), 1,
      anon_sym_DQUOTE2,
    ACTIONS(102), 1,
      sym_escape_sequence,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    STATE(21), 1,
      aux_sym_or_repeat1,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [266] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SQUOTE2,
    ACTIONS(110), 1,
      aux_sym_string_token1,
    ACTIONS(113), 1,
      sym_escape_sequence,
    STATE(22), 1,
      aux_sym_string_repeat1,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 65,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 176,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 206,
  [SMALL_STATE(19)] = 220,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 252,
  [SMALL_STATE(22)] = 266,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 299,
  [SMALL_STATE(26)] = 306,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 320,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_rule, 4, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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

TS_PUBLIC const TSLanguage *tree_sitter_cbnf(void) {
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
