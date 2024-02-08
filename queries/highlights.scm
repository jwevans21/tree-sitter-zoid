"fn" @keyword
"let" @keyword
"return" @keyword


(function_def
  name: (ident) @function
  return_type: (type) @type)

(integer_literal) @constant

(ident) @identifier
(type) @type


(line_comment) @comment

