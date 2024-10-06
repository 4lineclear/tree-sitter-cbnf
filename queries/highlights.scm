(string) @string

(escape_sequence) @string.escape

(comment) @comment

(identifier) @variable

(meta) @constant.builtin

(syntax_rule
  name: (identifier) @type.definition)

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(or) @punctuation.delimiter
"nil" @keyword
"except" @keyword
