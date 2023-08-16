[
  (comment)
  (extra_text)
] @comment

[
  (section_header)
  (setting_statement)
] @keyword

(variable_definition (variable_name) @variable)

(keyword_definition (name) @function)
(keyword_definition (body (keyword_setting) @keyword))

(test_case_definition (name) @function)
(test_case_definition (body (test_case_setting) @keyword))

(keyword_invocation (keyword) @function.call)
(ellipses) @punctuation.delimiter

(text_chunk) @string
(inline_python_expression) @string.special
[
  (scalar_variable)
  (list_variable)
  (dictionary_variable)
] @variable

; Control structures

[
  "FOR"
  "IN"
  "IN RANGE"
  "IN ENUMERATE"
  "IN ZIP"
  "WHILE"
  (break_statement)
  (continue_statement)
] @repeat
(for_statement "END" @repeat)
(while_statement "END" @repeat)

[
  "IF"
  "ELSE IF"
] @conditional
(if_statement "END" @conditional)
(if_statement (else_statement "ELSE" @conditional))

[
  "TRY"
  "EXCEPT"
  "FINALLY"
] @exception
(try_statement "END" @exception)
(try_statement (else_statement "ELSE" @exception))
