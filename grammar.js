/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cbnf",
  extras: ($) => [/\s/, $.line_comment, $.block_comment],
  externals: ($) => [
    $.string_content,
    $._raw_string_literal_start,
    $.raw_string_literal_content,
    $._raw_string_literal_end,
    $.float_literal,
    $._outer_block_doc_comment_marker,
    $._inner_block_doc_comment_marker,
    $._block_comment_content,
    $._line_doc_content,
    $._error_sentinel,
  ],
  supertypes: ($) => [$._expression, $._literal],
  rules: {
    syntax: ($) => repeat($.syntax_rule),
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
    _atom: ($) => choice($.identifier, $._literal, $.keyword),
    _group: ($) => seq("(", optional($._expression), ")"),
    keyword: ($) => choice("nil", "except"),
    _literal: ($) =>
      choice(
        $.string_literal,
        $.raw_string_literal,
        $.char_literal,
        $.boolean_literal,
        $.integer_literal,
        $.float_literal,
      ),

    negative_literal: ($) =>
      seq("-", choice($.integer_literal, $.float_literal)),

    integer_literal: (_) =>
      token(choice(/[0-9][0-9_]*/, /0x[0-9a-fA-F_]+/, /0b[01_]+/, /0o[0-7_]+/)),

    string_literal: ($) =>
      seq(
        alias(/[bc]?"/, '"'),
        repeat(choice($.escape_sequence, $.string_content)),
        token.immediate('"'),
      ),

    raw_string_literal: ($) =>
      seq(
        $._raw_string_literal_start,
        alias($.raw_string_literal_content, $.string_content),
        $._raw_string_literal_end,
      ),

    char_literal: ($) =>
      seq(
        optional("b"),
        "'",
        optional(choice($.escape_sequence, /[^\\']/)),
        "'",
      ),

    escape_sequence: (_) =>
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

    boolean_literal: (_) => choice("true", "false"),
    comment: ($) => choice($.line_comment, $.block_comment),

    line_comment: ($) =>
      seq(
        // All line comments start with two //
        "//",
        // Then are followed by:
        // - 2 or more slashes making it a regular comment
        // - 1 slash or 1 or more bang operators making it a doc comment
        // - or just content for the comment
        choice(
          // A tricky edge case where what looks like a doc comment is not
          seq(token.immediate(prec(2, /\/\//)), /.*/),
          // A regular doc comment
          seq(
            $._line_doc_comment_marker,
            field("doc", alias($._line_doc_content, $.doc_comment)),
          ),
          token.immediate(prec(1, /.*/)),
        ),
      ),

    _line_doc_comment_marker: ($) =>
      choice(
        // An outer line doc comment applies to the element that it is outside of
        field(
          "outer",
          alias($._outer_line_doc_comment_marker, $.outer_doc_comment_marker),
        ),
        // An inner line doc comment applies to the element it is inside of
        field(
          "inner",
          alias($._inner_line_doc_comment_marker, $.inner_doc_comment_marker),
        ),
      ),

    _inner_line_doc_comment_marker: (_) => token.immediate(prec(2, "!")),
    _outer_line_doc_comment_marker: (_) => token.immediate(prec(2, "/")),

    block_comment: ($) =>
      seq(
        "/*",
        optional(
          choice(
            // Documentation block comments: /** docs */ or /*! docs */
            seq(
              $._block_doc_comment_marker,
              optional(
                field("doc", alias($._block_comment_content, $.doc_comment)),
              ),
            ),
            // Non-doc block comments
            $._block_comment_content,
          ),
        ),
        "*/",
      ),

    _block_doc_comment_marker: ($) =>
      choice(
        field(
          "outer",
          alias($._outer_block_doc_comment_marker, $.outer_doc_comment_marker),
        ),
        field(
          "inner",
          alias($._inner_block_doc_comment_marker, $.inner_doc_comment_marker),
        ),
      ),
  },
});
