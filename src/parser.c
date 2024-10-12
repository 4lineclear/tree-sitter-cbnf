#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_PIPE = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_nil = 7,
  anon_sym_except = 8,
  anon_sym_DASH = 9,
  sym_integer_literal = 10,
  aux_sym_string_literal_token1 = 11,
  anon_sym_DQUOTE = 12,
  sym_char_literal = 13,
  sym_escape_sequence = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_SLASH_SLASH = 17,
  aux_sym_line_comment_token1 = 18,
  aux_sym_line_comment_token2 = 19,
  aux_sym_line_comment_token3 = 20,
  anon_sym_BANG = 21,
  anon_sym_SLASH = 22,
  anon_sym_SLASH_STAR = 23,
  anon_sym_STAR_SLASH = 24,
  sym_string_content = 25,
  sym__raw_string_literal_start = 26,
  sym_raw_string_literal_content = 27,
  sym__raw_string_literal_end = 28,
  sym_float_literal = 29,
  sym__outer_block_doc_comment_marker = 30,
  sym__inner_block_doc_comment_marker = 31,
  sym__block_comment_content = 32,
  sym__line_doc_content = 33,
  sym__error_sentinel = 34,
  sym_syntax = 35,
  sym_syntax_rule = 36,
  sym__expression = 37,
  sym_or = 38,
  sym_list = 39,
  sym__term = 40,
  sym__atom = 41,
  sym__group = 42,
  sym_keyword = 43,
  sym__literal = 44,
  sym_string_literal = 45,
  sym_raw_string_literal = 46,
  sym_boolean_literal = 47,
  sym_line_comment = 48,
  sym__line_doc_comment_marker = 49,
  sym__inner_line_doc_comment_marker = 50,
  sym__outer_line_doc_comment_marker = 51,
  sym_block_comment = 52,
  sym__block_doc_comment_marker = 53,
  aux_sym_syntax_repeat1 = 54,
  aux_sym_or_repeat1 = 55,
  aux_sym_list_repeat1 = 56,
  aux_sym_string_literal_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_nil] = "nil",
  [anon_sym_except] = "except",
  [anon_sym_DASH] = "-",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_string_literal_token1] = "\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_char_literal] = "char_literal",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [aux_sym_line_comment_token3] = "line_comment_token3",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_string_content] = "string_content",
  [sym__raw_string_literal_start] = "_raw_string_literal_start",
  [sym_raw_string_literal_content] = "string_content",
  [sym__raw_string_literal_end] = "_raw_string_literal_end",
  [sym_float_literal] = "float_literal",
  [sym__outer_block_doc_comment_marker] = "outer_doc_comment_marker",
  [sym__inner_block_doc_comment_marker] = "inner_doc_comment_marker",
  [sym__block_comment_content] = "_block_comment_content",
  [sym__line_doc_content] = "doc_comment",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_syntax] = "syntax",
  [sym_syntax_rule] = "syntax_rule",
  [sym__expression] = "_expression",
  [sym_or] = "or",
  [sym_list] = "list",
  [sym__term] = "_term",
  [sym__atom] = "_atom",
  [sym__group] = "_group",
  [sym_keyword] = "keyword",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_raw_string_literal] = "raw_string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_line_comment] = "line_comment",
  [sym__line_doc_comment_marker] = "_line_doc_comment_marker",
  [sym__inner_line_doc_comment_marker] = "inner_doc_comment_marker",
  [sym__outer_line_doc_comment_marker] = "outer_doc_comment_marker",
  [sym_block_comment] = "block_comment",
  [sym__block_doc_comment_marker] = "_block_doc_comment_marker",
  [aux_sym_syntax_repeat1] = "syntax_repeat1",
  [aux_sym_or_repeat1] = "or_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_string_literal_token1] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_char_literal] = sym_char_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [aux_sym_line_comment_token3] = aux_sym_line_comment_token3,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_string_content] = sym_string_content,
  [sym__raw_string_literal_start] = sym__raw_string_literal_start,
  [sym_raw_string_literal_content] = sym_string_content,
  [sym__raw_string_literal_end] = sym__raw_string_literal_end,
  [sym_float_literal] = sym_float_literal,
  [sym__outer_block_doc_comment_marker] = sym__outer_block_doc_comment_marker,
  [sym__inner_block_doc_comment_marker] = sym__inner_block_doc_comment_marker,
  [sym__block_comment_content] = sym__block_comment_content,
  [sym__line_doc_content] = sym__line_doc_content,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_syntax] = sym_syntax,
  [sym_syntax_rule] = sym_syntax_rule,
  [sym__expression] = sym__expression,
  [sym_or] = sym_or,
  [sym_list] = sym_list,
  [sym__term] = sym__term,
  [sym__atom] = sym__atom,
  [sym__group] = sym__group,
  [sym_keyword] = sym_keyword,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_line_comment] = sym_line_comment,
  [sym__line_doc_comment_marker] = sym__line_doc_comment_marker,
  [sym__inner_line_doc_comment_marker] = sym__inner_block_doc_comment_marker,
  [sym__outer_line_doc_comment_marker] = sym__outer_block_doc_comment_marker,
  [sym_block_comment] = sym_block_comment,
  [sym__block_doc_comment_marker] = sym__block_doc_comment_marker,
  [aux_sym_syntax_repeat1] = aux_sym_syntax_repeat1,
  [aux_sym_or_repeat1] = aux_sym_or_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_string_literal_start] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_string_literal_content] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_string_literal_end] = {
    .visible = false,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__outer_block_doc_comment_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_block_doc_comment_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__block_comment_content] = {
    .visible = false,
    .named = true,
  },
  [sym__line_doc_content] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
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
    .supertype = true,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__line_doc_comment_marker] = {
    .visible = false,
    .named = true,
  },
  [sym__inner_line_doc_comment_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__outer_line_doc_comment_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__block_doc_comment_marker] = {
    .visible = false,
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_definition = 1,
  field_doc = 2,
  field_inner = 3,
  field_name = 4,
  field_outer = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_definition] = "definition",
  [field_doc] = "doc",
  [field_inner] = "inner",
  [field_name] = "name",
  [field_outer] = "outer",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 2, .length = 3},
  [6] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_inner, 0},
  [1] =
    {field_outer, 0},
  [2] =
    {field_doc, 2},
    {field_inner, 1, .inherited = true},
    {field_outer, 1, .inherited = true},
  [5] =
    {field_inner, 1, .inherited = true},
    {field_outer, 1, .inherited = true},
  [7] =
    {field_definition, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [2] = sym__line_doc_content,
  },
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '!', 73,
        '"', 58,
        '\'', 3,
        '(', 47,
        ')', 48,
        '*', 5,
        '-', 51,
        '/', 74,
        '0', 52,
        '\\', 6,
        'b', 27,
        'c', 28,
        'e', 42,
        'f', 29,
        'n', 34,
        't', 38,
        '{', 44,
        '|', 46,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 57,
        '\'', 3,
        '(', 47,
        ')', 48,
        '/', 4,
        '0', 52,
        'b', 27,
        'c', 28,
        'e', 42,
        'f', 29,
        'n', 34,
        't', 38,
        '|', 46,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 23:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '"', 58,
        ')', 48,
        '*', 5,
        '/', 4,
        '\\', 6,
        '{', 44,
        '|', 46,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '"', 57,
        '\'', 3,
        '(', 47,
        ')', 48,
        '*', 5,
        '-', 51,
        '/', 4,
        '0', 52,
        'b', 27,
        'c', 28,
        'e', 42,
        'f', 29,
        'n', 34,
        't', 38,
        '{', 44,
        '|', 46,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_except);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 2},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 23, .external_lex_state = 3},
  [20] = {.lex_state = 23, .external_lex_state = 4},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23, .external_lex_state = 4},
  [26] = {.lex_state = 23, .external_lex_state = 4},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23, .external_lex_state = 4},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23, .external_lex_state = 5},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23, .external_lex_state = 5},
  [34] = {.lex_state = 23, .external_lex_state = 5},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23, .external_lex_state = 6},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23, .external_lex_state = 7},
  [40] = {.lex_state = 23, .external_lex_state = 8},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23, .external_lex_state = 6},
  [45] = {.lex_state = 23, .external_lex_state = 6},
  [46] = {.lex_state = 23, .external_lex_state = 6},
  [47] = {.lex_state = 23, .external_lex_state = 6},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 23},
  [50] = {(TSStateId)(-1)},
  [51] = {(TSStateId)(-1)},
  [52] = {(TSStateId)(-1)},
  [53] = {(TSStateId)(-1)},
  [54] = {(TSStateId)(-1)},
  [55] = {(TSStateId)(-1)},
  [56] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym_line_comment_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym__raw_string_literal_start] = ACTIONS(1),
    [sym_raw_string_literal_content] = ACTIONS(1),
    [sym__raw_string_literal_end] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym__outer_block_doc_comment_marker] = ACTIONS(1),
    [sym__inner_block_doc_comment_marker] = ACTIONS(1),
    [sym__block_comment_content] = ACTIONS(1),
    [sym__line_doc_content] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_syntax] = STATE(49),
    [sym_syntax_rule] = STATE(30),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_syntax_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      aux_sym_string_literal_token1,
    ACTIONS(29), 1,
      sym__raw_string_literal_start,
    STATE(3), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    STATE(27), 1,
      sym_list,
    STATE(35), 1,
      sym_or,
    STATE(41), 1,
      sym__expression,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym__atom,
      sym__group,
    STATE(14), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(23), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(15), 3,
      sym_string_literal,
      sym_raw_string_literal,
      sym_boolean_literal,
  [67] = 16,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_string_literal_token1,
    ACTIONS(29), 1,
      sym__raw_string_literal_start,
    STATE(5), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym__atom,
      sym__group,
    STATE(14), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(23), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(31), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    STATE(15), 3,
      sym_string_literal,
      sym_raw_string_literal,
      sym_boolean_literal,
  [127] = 18,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_string_literal_token1,
    ACTIONS(29), 1,
      sym__raw_string_literal_start,
    STATE(3), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    STATE(27), 1,
      sym_list,
    STATE(35), 1,
      sym_or,
    STATE(37), 1,
      sym__expression,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym__atom,
      sym__group,
    STATE(14), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(23), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(15), 3,
      sym_string_literal,
      sym_raw_string_literal,
      sym_boolean_literal,
  [191] = 15,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_string_literal_token1,
    ACTIONS(53), 1,
      sym__raw_string_literal_start,
    STATE(16), 1,
      sym__term,
    ACTIONS(41), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(50), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym__atom,
      sym__group,
    STATE(14), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(36), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(44), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(5), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_list_repeat1,
    STATE(15), 3,
      sym_string_literal,
      sym_raw_string_literal,
      sym_boolean_literal,
  [249] = 16,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_string_literal_token1,
    ACTIONS(29), 1,
      sym__raw_string_literal_start,
    STATE(3), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    STATE(29), 1,
      sym_list,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 2,
      sym__atom,
      sym__group,
    STATE(14), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(23), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(15), 3,
      sym_string_literal,
      sym_raw_string_literal,
      sym_boolean_literal,
  [307] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(56), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(58), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [336] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(60), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(62), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [365] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(64), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(66), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [394] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(68), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(70), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [423] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(74), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [452] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(76), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(78), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [481] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(80), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [510] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(84), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [539] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(88), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [568] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [597] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 5,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [626] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      aux_sym_line_comment_token1,
    ACTIONS(102), 1,
      aux_sym_line_comment_token3,
    ACTIONS(104), 1,
      anon_sym_BANG,
    ACTIONS(106), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym__inner_line_doc_comment_marker,
    STATE(44), 1,
      sym__outer_line_doc_comment_marker,
    STATE(45), 1,
      sym__line_doc_comment_marker,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
  [658] = 8,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(110), 1,
      sym__outer_block_doc_comment_marker,
    ACTIONS(112), 1,
      sym__inner_block_doc_comment_marker,
    ACTIONS(114), 1,
      sym__block_comment_content,
    STATE(31), 1,
      sym__block_doc_comment_marker,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
  [684] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(118), 2,
      sym_string_content,
      sym_escape_sequence,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
  [705] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      sym_identifier,
    STATE(30), 1,
      sym_syntax_rule,
    STATE(21), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_syntax_repeat1,
  [726] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_syntax_repeat1,
    STATE(30), 1,
      sym_syntax_rule,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
  [749] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(23), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_or_repeat1,
  [768] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      aux_sym_or_repeat1,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
  [789] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(118), 2,
      sym_string_content,
      sym_escape_sequence,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
  [810] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 2,
      sym_string_content,
      sym_escape_sequence,
    STATE(26), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [829] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_or_repeat1,
    ACTIONS(143), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
  [850] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      sym_string_content,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [866] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [882] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
  [897] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(151), 1,
      sym__block_comment_content,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
  [914] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
  [929] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 2,
      sym__block_comment_content,
      anon_sym_STAR_SLASH,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
  [944] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 2,
      sym__block_comment_content,
      anon_sym_STAR_SLASH,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
  [959] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
  [974] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym__line_doc_content,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
  [988] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
  [1002] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
  [1016] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      sym_raw_string_literal_content,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
  [1030] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      sym__raw_string_literal_end,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
  [1044] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
  [1058] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_STAR_SLASH,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
  [1072] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
  [1086] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      sym__line_doc_content,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [1100] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      sym__line_doc_content,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
  [1114] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      sym__line_doc_content,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
  [1128] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym__line_doc_content,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
  [1142] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      aux_sym_line_comment_token2,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
  [1156] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
  [1170] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [1174] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [1178] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [1182] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [1186] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1190] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [1194] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 127,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 307,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 365,
  [SMALL_STATE(10)] = 394,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 452,
  [SMALL_STATE(13)] = 481,
  [SMALL_STATE(14)] = 510,
  [SMALL_STATE(15)] = 539,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 597,
  [SMALL_STATE(18)] = 626,
  [SMALL_STATE(19)] = 658,
  [SMALL_STATE(20)] = 684,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 726,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 768,
  [SMALL_STATE(25)] = 789,
  [SMALL_STATE(26)] = 810,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 850,
  [SMALL_STATE(29)] = 866,
  [SMALL_STATE(30)] = 882,
  [SMALL_STATE(31)] = 897,
  [SMALL_STATE(32)] = 914,
  [SMALL_STATE(33)] = 929,
  [SMALL_STATE(34)] = 944,
  [SMALL_STATE(35)] = 959,
  [SMALL_STATE(36)] = 974,
  [SMALL_STATE(37)] = 988,
  [SMALL_STATE(38)] = 1002,
  [SMALL_STATE(39)] = 1016,
  [SMALL_STATE(40)] = 1030,
  [SMALL_STATE(41)] = 1044,
  [SMALL_STATE(42)] = 1058,
  [SMALL_STATE(43)] = 1072,
  [SMALL_STATE(44)] = 1086,
  [SMALL_STATE(45)] = 1100,
  [SMALL_STATE(46)] = 1114,
  [SMALL_STATE(47)] = 1128,
  [SMALL_STATE(48)] = 1142,
  [SMALL_STATE(49)] = 1156,
  [SMALL_STATE(50)] = 1170,
  [SMALL_STATE(51)] = 1174,
  [SMALL_STATE(52)] = 1178,
  [SMALL_STATE(53)] = 1182,
  [SMALL_STATE(54)] = 1186,
  [SMALL_STATE(55)] = 1190,
  [SMALL_STATE(56)] = 1194,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string_literal, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string_literal, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_rule, 4, 0, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_doc_comment_marker, 1, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_doc_comment_marker, 1, 0, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_doc_comment_marker, 1, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_doc_comment_marker, 1, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__outer_line_doc_comment_marker, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_line_doc_comment_marker, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_string_content = 0,
  ts_external_token__raw_string_literal_start = 1,
  ts_external_token_raw_string_literal_content = 2,
  ts_external_token__raw_string_literal_end = 3,
  ts_external_token_float_literal = 4,
  ts_external_token__outer_block_doc_comment_marker = 5,
  ts_external_token__inner_block_doc_comment_marker = 6,
  ts_external_token__block_comment_content = 7,
  ts_external_token__line_doc_content = 8,
  ts_external_token__error_sentinel = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token__raw_string_literal_start] = sym__raw_string_literal_start,
  [ts_external_token_raw_string_literal_content] = sym_raw_string_literal_content,
  [ts_external_token__raw_string_literal_end] = sym__raw_string_literal_end,
  [ts_external_token_float_literal] = sym_float_literal,
  [ts_external_token__outer_block_doc_comment_marker] = sym__outer_block_doc_comment_marker,
  [ts_external_token__inner_block_doc_comment_marker] = sym__inner_block_doc_comment_marker,
  [ts_external_token__block_comment_content] = sym__block_comment_content,
  [ts_external_token__line_doc_content] = sym__line_doc_content,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string_content] = true,
    [ts_external_token__raw_string_literal_start] = true,
    [ts_external_token_raw_string_literal_content] = true,
    [ts_external_token__raw_string_literal_end] = true,
    [ts_external_token_float_literal] = true,
    [ts_external_token__outer_block_doc_comment_marker] = true,
    [ts_external_token__inner_block_doc_comment_marker] = true,
    [ts_external_token__block_comment_content] = true,
    [ts_external_token__line_doc_content] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__raw_string_literal_start] = true,
    [ts_external_token_float_literal] = true,
  },
  [3] = {
    [ts_external_token__outer_block_doc_comment_marker] = true,
    [ts_external_token__inner_block_doc_comment_marker] = true,
    [ts_external_token__block_comment_content] = true,
  },
  [4] = {
    [ts_external_token_string_content] = true,
  },
  [5] = {
    [ts_external_token__block_comment_content] = true,
  },
  [6] = {
    [ts_external_token__line_doc_content] = true,
  },
  [7] = {
    [ts_external_token_raw_string_literal_content] = true,
  },
  [8] = {
    [ts_external_token__raw_string_literal_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_cbnf_external_scanner_create(void);
void tree_sitter_cbnf_external_scanner_destroy(void *);
bool tree_sitter_cbnf_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_cbnf_external_scanner_serialize(void *, char *);
void tree_sitter_cbnf_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_cbnf_external_scanner_create,
      tree_sitter_cbnf_external_scanner_destroy,
      tree_sitter_cbnf_external_scanner_scan,
      tree_sitter_cbnf_external_scanner_serialize,
      tree_sitter_cbnf_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
