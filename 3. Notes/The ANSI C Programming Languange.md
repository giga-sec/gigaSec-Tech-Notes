[[Programming Books]]

# The ANSI C Programming Languange
Created:  [[2022-08-01]]
Tags: #fleeting 

---
`\t` for tab, 
`\b` for backspace, 
`\"` for the double quote
`\\` for the backslash itself.

In Chapter 1.1
It talks about the printing of values with printf and library stdio.h

In Chapter 1.2
comments, declarations, variables, arithmetic expressions, loops , and
formatted output.

charcharacter - a single byte
short -> short integer
long -> long integer
double -> double-precision floating point

C, as in many other languages, integer division truncates -> [[truncation]]: 
any fractional part is discarded.

`printf` is not part of the C language; 
there is no input or output defined in C itself. 
`printf` is just a useful function from `stdio.h` 
The behaviour of printf is defined in the ANSI standard, however, so its properties should be the same with any compiler and library that conforms to the standard.

Rules for when integers are automatically converted to floating point
IF -> adding both integers,
THEN -> result will be an integer
-> `1 + 1` means `2` an integer

However, 
IF -> we add a single `float` to any number of `int`
THEN -> result will always be `float` or 
-> More precisely, 
    all `int` will be converted to `float` BEFORE ADDITION is done.

`1.0 + 1`  
^ There's a single float in this arithmetic

`1.0 + 1.0 `
^ Therefore, all `int` will be converted to `float`









## References
1. 