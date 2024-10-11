#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_PIPE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DQUOTE2 = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_SQUOTE2 = 11,
  sym_escape_sequence = 12,
  anon_sym_nil = 13,
  anon_sym_except = 14,
  anon_sym_SLASH_SLASH = 15,
  aux_sym_line_comment_token1 = 16,
  sym_syntax = 17,
  sym_syntax_rule = 18,
  sym__expression = 19,
  sym_or = 20,
  sym_list = 21,
  sym__term = 22,
  sym__atom = 23,
  sym__group = 24,
  sym_string = 25,
  sym_keyword = 26,
  sym_line_comment = 27,
  aux_sym_syntax_repeat1 = 28,
  aux_sym_or_repeat1 = 29,
  aux_sym_list_repeat1 = 30,
  aux_sym_string_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
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
  [sym_line_comment] = "line_comment",
  [aux_sym_syntax_repeat1] = "syntax_repeat1",
  [aux_sym_or_repeat1] = "or_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
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
  [sym_line_comment] = sym_line_comment,
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
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
  [sym_line_comment] = {
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
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '"', 33,
        '\'', 35,
        '(', 27,
        ')', 28,
        '/', 5,
        '\\', 6,
        'e', 22,
        'n', 18,
        '{', 24,
        '|', 26,
        '}', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 29,
        '\'', 34,
        '(', 27,
        ')', 28,
        '/', 5,
        'e', 22,
        'n', 18,
        '|', 26,
        '}', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '"', 29,
        '\'', 34,
        '(', 27,
        ')', 28,
        '/', 5,
        'e', 22,
        'n', 18,
        '{', 24,
        '|', 26,
        '}', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      if (lookahead == 'l') ADVANCE(37);
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
      if (lookahead == 't') ADVANCE(38);
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
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_except);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
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
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 40},
  [37] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_syntax] = STATE(32),
    [sym_syntax_rule] = STATE(31),
    [sym_line_comment] = STATE(1),
    [aux_sym_syntax_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(34),
    [sym_or] = STATE(29),
    [sym_list] = STATE(17),
    [sym__term] = STATE(7),
    [sym__atom] = STATE(13),
    [sym__group] = STATE(13),
    [sym_string] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_line_comment] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [3] = {
    [sym__term] = STATE(7),
    [sym__atom] = STATE(13),
    [sym__group] = STATE(13),
    [sym_string] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_line_comment] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_nil] = ACTIONS(35),
    [anon_sym_except] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(35),
    [sym_or] = STATE(29),
    [sym_list] = STATE(17),
    [sym__term] = STATE(7),
    [sym__atom] = STATE(13),
    [sym__group] = STATE(13),
    [sym_string] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_line_comment] = STATE(4),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [5] = {
    [sym__term] = STATE(7),
    [sym__atom] = STATE(13),
    [sym__group] = STATE(13),
    [sym_string] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_line_comment] = STATE(5),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_except] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      aux_sym_list_repeat1,
    STATE(6), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__term,
    STATE(27), 1,
      sym_list,
    ACTIONS(19), 2,
      anon_sym_nil,
      anon_sym_except,
    STATE(12), 2,
      sym_string,
      sym_keyword,
    STATE(13), 2,
      sym__atom,
      sym__group,
  [40] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(40), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(42), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [60] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(44), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(46), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [80] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(48), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(50), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [100] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(52), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(54), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [120] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(56), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(58), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(60), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(62), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [160] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(64), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(66), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [180] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(68), 3,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(70), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [200] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(31), 1,
      sym_syntax_rule,
    STATE(15), 2,
      sym_line_comment,
      aux_sym_syntax_repeat1,
  [217] = 6,
    ACTIONS(77), 1,
      aux_sym_string_token1,
    ACTIONS(79), 1,
      anon_sym_SQUOTE2,
    ACTIONS(81), 1,
      sym_escape_sequence,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_line_comment,
    STATE(18), 1,
      aux_sym_string_repeat1,
  [236] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      sym_line_comment,
    STATE(23), 1,
      aux_sym_or_repeat1,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [253] = 5,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    ACTIONS(92), 1,
      anon_sym_SQUOTE2,
    ACTIONS(94), 1,
      sym_escape_sequence,
    STATE(18), 2,
      sym_line_comment,
      aux_sym_string_repeat1,
  [270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_line_comment,
      aux_sym_or_repeat1,
  [285] = 6,
    ACTIONS(77), 1,
      aux_sym_string_token1,
    ACTIONS(81), 1,
      sym_escape_sequence,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_SQUOTE2,
    STATE(16), 1,
      aux_sym_string_repeat1,
    STATE(20), 1,
      sym_line_comment,
  [304] = 6,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DQUOTE2,
    ACTIONS(104), 1,
      aux_sym_string_token1,
    ACTIONS(106), 1,
      sym_escape_sequence,
    STATE(21), 1,
      sym_line_comment,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [323] = 5,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      anon_sym_DQUOTE2,
    ACTIONS(108), 1,
      aux_sym_string_token1,
    ACTIONS(111), 1,
      sym_escape_sequence,
    STATE(22), 2,
      sym_line_comment,
      aux_sym_string_repeat1,
  [340] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym_or_repeat1,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [357] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_syntax_repeat1,
    STATE(24), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_syntax_rule,
  [376] = 6,
    ACTIONS(79), 1,
      anon_sym_DQUOTE2,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      aux_sym_string_token1,
    ACTIONS(106), 1,
      sym_escape_sequence,
    STATE(22), 1,
      aux_sym_string_repeat1,
    STATE(25), 1,
      sym_line_comment,
  [395] = 4,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(120), 2,
      anon_sym_DQUOTE2,
      sym_escape_sequence,
  [409] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(97), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [421] = 4,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym_string_token1,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(120), 2,
      anon_sym_SQUOTE2,
      sym_escape_sequence,
  [435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [446] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [457] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [468] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_line_comment,
  [478] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_line_comment,
  [488] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_line_comment,
  [498] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_line_comment,
  [508] = 3,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      aux_sym_line_comment_token1,
    STATE(36), 1,
      sym_line_comment,
  [518] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 409,
  [SMALL_STATE(28)] = 421,
  [SMALL_STATE(29)] = 435,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 457,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 478,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 498,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_rule, 4, 0, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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
