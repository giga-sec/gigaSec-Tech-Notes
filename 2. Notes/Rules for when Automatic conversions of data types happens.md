[[The ANSI C Programming Languange - Book]]

# Rules for when integers are automatically converted to floating point
Created:  [[2022-08-19]]
Tags: #fleeting 

---
[[When does int values automatically converts to float]]

When an operator has operands of different `types`, 
they are converted to a common type according to a small number of rules.


In general, the only automatic conversions are 
those that convert a `narrower` [[operand]] into a `wider one` without losing information,
such as converting an `integer` into `floating point` in an expression like `f + i`.


Expressions that don't make sense, like using a float as a [[subscript]], are disallowed. Expressions that might lose information, 
    like assigning a longer integer type to a shorter, or 
    a floating-point type to an integer, 
    may draw a warning, but they are not illegal.

A `char` is just a small integer, so chars may be freely used in arithmetic expressions

There is one subtle point about the conversion of `char` to `int`. 
The language does not specify whether variables of type `char` are `signed` or `unsigned` 
When `char` is converted to `int`, can it ever produce a negative integer? 
The answer varies from machine to machine, reflecting differences in architecture. 
IF -> `NONchar data` (bit) is to be stored in char variables
THEN -> specify if its `signed` or `unsigned`
WHY -> Because `arbitrary bit patterns` stored in character variables may appear to be negative on some machines, yet positive on others. 

Automatic Conversion Rules in Arithmetic Expressions
The highest data type the expression has will convert every data type into that same highest data type. For instance, if we have at least `double` with the remaining operands as `int` and `float`, then those `int/float` operands will be automatically conversed into `double`. 

Conversions take place across assignments; the value of the right side is converted to the type of the left, which is the type of the result. 
Thoughts -> So you mean that `1 == 1.0` won't be converted to `1 == 1` ???? Because like it siad, the right side will convert to whatever is on the left side. Since left side is `int`, it is lower than `float`. Oh actually, that type of conversion permits it, only there is a warning invovled that information will be lost along the way. 
Final Answer -> It is possible for `1 == 1.0` to be converted to both int `1 == 1` but we just lose an information of the decimal place.

So, it's not only in arithmetic expressions but it also happens with logical operations 
`1.0 == 1` -> `1.0 == 1.0`
Thoughts -> When you think about it, it does make sense 
because if you compare a floating `1.0` to int `1`, technically they are different numbers so the automatic conversion rules actually make sense here.

type conversion also takes place when arguments are passed to functions













## References
1. 