(string) @string

(escape_sequence) @string.escape

(identifier) @variable

(syntax_rule
  name: (identifier) @property)

(line_comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(or) @punctuation.delimiter
"nil" @keyword
"except" @keyword
