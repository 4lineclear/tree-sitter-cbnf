/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cbnf",

  extras: ($) => [/ |\n|\t|\r/, $.comment],
  rules: {
    syntax: ($) => repeat($.syntax_rule),
    comment: ($) => token(prec(-1, /#.*/)),
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    syntax_rule: ($) =>
      seq(
        field("name", $.identifier),
        "{",
        field("definition", $._expression),
        "}",
      ),
    _expression: ($) => choice($.list, $.or),
    or: ($) => seq($.list, repeat1(seq("|", $.list))),
    list: ($) => repeat1($._term),
    _term: ($) => choice($._atom, $._group),
    _atom: ($) => choice($.identifier, $.string, $.keyword),
    _group: ($) => seq("(", optional($._expression), ")"),
    string: ($) =>
      choice(
        seq(
          '"',
          repeat(choice($.escape_sequence, token.immediate(/./))),
          token.immediate('"'),
        ),
        seq(
          "'",
          repeat(choice($.escape_sequence, token.immediate(/./))),
          token.immediate("'"),
        ),
      ),
    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu]/,
            /u[0-9a-fA-F]{4}/,
            /u\{[0-9a-fA-F]+\}/,
            /x[0-9a-fA-F]{2}/,
          ),
        ),
      ),
    keyword: ($) => choice("nil", "except"),
  },
});
