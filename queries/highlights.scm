; Top Level

(external_function
  abi: (abi) @string
  name: (ident) @function
  return_type: (type) @type)

(function
  name: (ident) @function
  return_type: (type) @type)

(function_arg
  name: (ident) @variable.parameter
  type: (type) @type)

; Statements

(variable_declaration
  name: (ident) @variable)


; Expression

(function_call
  name: (ident) @function)


(integer_literal) @constant
(string_literal) @string
(c_string_literal) @string
(escape_sequence) @string.special
(c_escape_sequence) @string.special
(ident) @identifier


; Comments
(line_comment) @comment

[
  "="
  "*"
  "/"
  "%"
  "+"
  "-"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "&&"
  "||"
  "and"
  "or"
] @operator

[
  "fn"
  "let"
  "return"
  "extern"
  "if"
  "else"
] @keyword

(type) @type
"..." @type.builtin