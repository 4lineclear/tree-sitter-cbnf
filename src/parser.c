#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_b = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_char_literal_token1 = 15,
  sym_escape_sequence = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  anon_sym_SLASH_SLASH = 19,
  aux_sym_line_comment_token1 = 20,
  aux_sym_line_comment_token2 = 21,
  aux_sym_line_comment_token3 = 22,
  anon_sym_BANG = 23,
  anon_sym_SLASH = 24,
  anon_sym_SLASH_STAR = 25,
  anon_sym_STAR_SLASH = 26,
  sym_string_content = 27,
  sym__raw_string_literal_start = 28,
  sym_raw_string_literal_content = 29,
  sym__raw_string_literal_end = 30,
  sym_float_literal = 31,
  sym__outer_block_doc_comment_marker = 32,
  sym__inner_block_doc_comment_marker = 33,
  sym__block_comment_content = 34,
  sym__line_doc_content = 35,
  sym__error_sentinel = 36,
  sym_syntax = 37,
  sym_syntax_rule = 38,
  sym__expression = 39,
  sym_or = 40,
  sym_list = 41,
  sym__term = 42,
  sym__atom = 43,
  sym__group = 44,
  sym_keyword = 45,
  sym__literal = 46,
  sym_string_literal = 47,
  sym_raw_string_literal = 48,
  sym_char_literal = 49,
  sym_boolean_literal = 50,
  sym_line_comment = 51,
  sym__line_doc_comment_marker = 52,
  sym__inner_line_doc_comment_marker = 53,
  sym__outer_line_doc_comment_marker = 54,
  sym_block_comment = 55,
  sym__block_doc_comment_marker = 56,
  aux_sym_syntax_repeat1 = 57,
  aux_sym_or_repeat1 = 58,
  aux_sym_list_repeat1 = 59,
  aux_sym_string_literal_repeat1 = 60,
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
  [anon_sym_b] = "b",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
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
  [sym_char_literal] = "char_literal",
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
  [anon_sym_b] = anon_sym_b,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
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
  [sym_char_literal] = sym_char_literal,
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
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
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
  [sym_char_literal] = {
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '!', 68,
        '"', 49,
        '\'', 51,
        '(', 38,
        ')', 39,
        '*', 4,
        '-', 42,
        '/', 69,
        '0', 43,
        '\\', 5,
        'b', 50,
        'c', 19,
        'e', 33,
        'f', 20,
        'n', 25,
        't', 29,
        '{', 35,
        '|', 37,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 48,
        '\'', 51,
        '(', 38,
        ')', 39,
        '/', 3,
        '0', 43,
        'b', 50,
        'c', 19,
        'e', 33,
        'f', 20,
        'n', 25,
        't', 29,
        '|', 37,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(13);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 49,
        '\'', 51,
        ')', 39,
        '*', 4,
        '/', 3,
        '\\', 5,
        '{', 35,
        '|', 37,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 48,
        '\'', 51,
        '(', 38,
        ')', 39,
        '*', 4,
        '-', 42,
        '/', 3,
        '0', 43,
        'b', 50,
        'c', 19,
        'e', 33,
        'f', 20,
        'n', 25,
        't', 29,
        '{', 35,
        '|', 37,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_except);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '"') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15},
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
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 15, .external_lex_state = 3},
  [23] = {.lex_state = 15, .external_lex_state = 4},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15, .external_lex_state = 4},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15, .external_lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 15, .external_lex_state = 4},
  [35] = {.lex_state = 15, .external_lex_state = 5},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15, .external_lex_state = 5},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15, .external_lex_state = 5},
  [41] = {.lex_state = 15, .external_lex_state = 6},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15, .external_lex_state = 7},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15, .external_lex_state = 6},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15, .external_lex_state = 8},
  [50] = {.lex_state = 15, .external_lex_state = 6},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15, .external_lex_state = 6},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15, .external_lex_state = 6},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 62},
  [58] = {(TSStateId)(-1)},
  [59] = {(TSStateId)(-1)},
  [60] = {(TSStateId)(-1)},
  [61] = {(TSStateId)(-1)},
  [62] = {(TSStateId)(-1)},
  [63] = {(TSStateId)(-1)},
  [64] = {(TSStateId)(-1)},
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
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_syntax] = STATE(44),
    [sym_syntax_rule] = STATE(36),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_syntax_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(11),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
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
    ACTIONS(27), 1,
      anon_sym_b,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal_start,
    STATE(5), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    STATE(24), 1,
      sym_list,
    STATE(39), 1,
      sym_or,
    STATE(46), 1,
      sym__expression,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(23), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym__atom,
      sym__group,
    STATE(20), 2,
      sym_keyword,
      sym__literal,
    STATE(18), 4,
      sym_string_literal,
      sym_raw_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [73] = 17,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_string_literal_token1,
    ACTIONS(52), 1,
      anon_sym_b,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      sym__raw_string_literal_start,
    STATE(16), 1,
      sym__term,
    ACTIONS(43), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(46), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym__atom,
      sym__group,
    STATE(20), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(38), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    STATE(3), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_list_repeat1,
    STATE(18), 4,
      sym_string_literal,
      sym_raw_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [137] = 20,
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
    ACTIONS(27), 1,
      anon_sym_b,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal_start,
    STATE(5), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    STATE(24), 1,
      sym_list,
    STATE(39), 1,
      sym_or,
    STATE(42), 1,
      sym__expression,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(23), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym__atom,
      sym__group,
    STATE(20), 2,
      sym_keyword,
      sym__literal,
    STATE(18), 4,
      sym_string_literal,
      sym_raw_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [207] = 18,
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
    ACTIONS(27), 1,
      anon_sym_b,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal_start,
    STATE(3), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(23), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym__atom,
      sym__group,
    STATE(20), 2,
      sym_keyword,
      sym__literal,
    ACTIONS(64), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    STATE(18), 4,
      sym_string_literal,
      sym_raw_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [273] = 18,
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
    ACTIONS(27), 1,
      anon_sym_b,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal_start,
    STATE(5), 1,
      aux_sym_list_repeat1,
    STATE(16), 1,
      sym__term,
    STATE(32), 1,
      sym_list,
    ACTIONS(21), 2,
      anon_sym_nil,
      anon_sym_except,
    ACTIONS(23), 2,
      sym_float_literal,
      sym_integer_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym__atom,
      sym__group,
    STATE(20), 2,
      sym_keyword,
      sym__literal,
    STATE(18), 4,
      sym_string_literal,
      sym_raw_string_literal,
      sym_char_literal,
      sym_boolean_literal,
  [337] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [367] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(70), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [397] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [427] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(80), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [457] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(82), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [487] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [517] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(92), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [547] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(96), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [577] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [607] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(104), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [637] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [667] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [697] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [727] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 6,
      sym_identifier,
      anon_sym_nil,
      anon_sym_except,
      anon_sym_b,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 9,
      sym__raw_string_literal_start,
      sym_float_literal,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE,
  [757] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      aux_sym_line_comment_token1,
    ACTIONS(124), 1,
      aux_sym_line_comment_token3,
    ACTIONS(126), 1,
      anon_sym_BANG,
    ACTIONS(128), 1,
      anon_sym_SLASH,
    STATE(41), 1,
      sym__inner_line_doc_comment_marker,
    STATE(47), 1,
      sym__outer_line_doc_comment_marker,
    STATE(50), 1,
      sym__line_doc_comment_marker,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
  [789] = 8,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(132), 1,
      sym__outer_block_doc_comment_marker,
    ACTIONS(134), 1,
      sym__inner_block_doc_comment_marker,
    ACTIONS(136), 1,
      sym__block_comment_content,
    STATE(37), 1,
      sym__block_doc_comment_marker,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
  [815] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(140), 2,
      sym_string_content,
      sym_escape_sequence,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
  [836] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_or_repeat1,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
  [857] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(36), 1,
      sym_syntax_rule,
    STATE(25), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_syntax_repeat1,
  [878] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(26), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_or_repeat1,
  [897] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 2,
      sym_string_content,
      sym_escape_sequence,
    STATE(27), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_string_literal_repeat1,
  [916] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_syntax_repeat1,
    STATE(36), 1,
      sym_syntax_rule,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
  [939] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_or_repeat1,
    ACTIONS(163), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
  [960] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(140), 2,
      sym_string_content,
      sym_escape_sequence,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
  [981] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_char_literal_token1,
    ACTIONS(171), 1,
      sym_escape_sequence,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
  [1001] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1017] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_char_literal_token1,
    ACTIONS(177), 1,
      sym_escape_sequence,
    STATE(33), 2,
      sym_line_comment,
      sym_block_comment,
  [1037] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 3,
      sym_string_content,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1053] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 2,
      sym__block_comment_content,
      anon_sym_STAR_SLASH,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
  [1068] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
  [1083] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(187), 1,
      sym__block_comment_content,
    STATE(37), 2,
      sym_line_comment,
      sym_block_comment,
  [1100] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
  [1115] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
  [1130] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 2,
      sym__block_comment_content,
      anon_sym_STAR_SLASH,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
  [1145] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      sym__line_doc_content,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
  [1159] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
  [1173] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
  [1187] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [1201] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__raw_string_literal_end,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
  [1215] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
  [1229] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      sym__line_doc_content,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
  [1243] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
  [1257] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      sym_raw_string_literal_content,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
  [1271] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym__line_doc_content,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
  [1285] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
  [1299] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
  [1313] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      sym__line_doc_content,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
  [1327] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
  [1341] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      sym__line_doc_content,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [1355] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      anon_sym_STAR_SLASH,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
  [1369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      aux_sym_line_comment_token2,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
  [1383] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [1387] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [1391] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1395] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1399] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1403] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [1407] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 137,
  [SMALL_STATE(5)] = 207,
  [SMALL_STATE(6)] = 273,
  [SMALL_STATE(7)] = 337,
  [SMALL_STATE(8)] = 367,
  [SMALL_STATE(9)] = 397,
  [SMALL_STATE(10)] = 427,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 517,
  [SMALL_STATE(14)] = 547,
  [SMALL_STATE(15)] = 577,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 637,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 757,
  [SMALL_STATE(22)] = 789,
  [SMALL_STATE(23)] = 815,
  [SMALL_STATE(24)] = 836,
  [SMALL_STATE(25)] = 857,
  [SMALL_STATE(26)] = 878,
  [SMALL_STATE(27)] = 897,
  [SMALL_STATE(28)] = 916,
  [SMALL_STATE(29)] = 939,
  [SMALL_STATE(30)] = 960,
  [SMALL_STATE(31)] = 981,
  [SMALL_STATE(32)] = 1001,
  [SMALL_STATE(33)] = 1017,
  [SMALL_STATE(34)] = 1037,
  [SMALL_STATE(35)] = 1053,
  [SMALL_STATE(36)] = 1068,
  [SMALL_STATE(37)] = 1083,
  [SMALL_STATE(38)] = 1100,
  [SMALL_STATE(39)] = 1115,
  [SMALL_STATE(40)] = 1130,
  [SMALL_STATE(41)] = 1145,
  [SMALL_STATE(42)] = 1159,
  [SMALL_STATE(43)] = 1173,
  [SMALL_STATE(44)] = 1187,
  [SMALL_STATE(45)] = 1201,
  [SMALL_STATE(46)] = 1215,
  [SMALL_STATE(47)] = 1229,
  [SMALL_STATE(48)] = 1243,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1271,
  [SMALL_STATE(51)] = 1285,
  [SMALL_STATE(52)] = 1299,
  [SMALL_STATE(53)] = 1313,
  [SMALL_STATE(54)] = 1327,
  [SMALL_STATE(55)] = 1341,
  [SMALL_STATE(56)] = 1355,
  [SMALL_STATE(57)] = 1369,
  [SMALL_STATE(58)] = 1383,
  [SMALL_STATE(59)] = 1387,
  [SMALL_STATE(60)] = 1391,
  [SMALL_STATE(61)] = 1395,
  [SMALL_STATE(62)] = 1399,
  [SMALL_STATE(63)] = 1403,
  [SMALL_STATE(64)] = 1407,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string_literal, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string_literal, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_doc_comment_marker, 1, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_syntax_repeat1, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_rule, 4, 0, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_doc_comment_marker, 1, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_doc_comment_marker, 1, 0, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_doc_comment_marker, 1, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__outer_line_doc_comment_marker, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_line_doc_comment_marker, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 5),
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
    [ts_external_token__raw_string_literal_end] = true,
  },
  [8] = {
    [ts_external_token_raw_string_literal_content] = true,
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
