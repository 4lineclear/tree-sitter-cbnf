(char_literal) @string
(string_literal) @string
(raw_string_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin
(float_literal) @constant.builtin

(escape_sequence) @string.escape

(identifier) @variable

(syntax_rule
  name: (identifier) @property)

(line_comment) @comment
(block_comment) @comment

(line_comment (doc_comment)) @comment.documentation
(block_comment (doc_comment)) @comment.documentation

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(or) @punctuation.delimiter
"nil" @keyword
"except" @keyword
