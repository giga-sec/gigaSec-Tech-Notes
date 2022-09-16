[[The ANSI C Programming Languange - Book]]

# When int values automatically converts to float
Created:  [[2022-08-15]]
Tags: #fleeting 

---
IF -> we have an `int` and we added a single `float`
THEN -> result will always be `float` or 
-> More precisely, 
    all `int` will be converted to `float` BEFORE ADDITION is done.

Example:
`1.0 + 1 + 3 + 5`  
^ There's a single float in this arithmetic

In result, this will convert all `int` to be `float` as seen on below
`1.0 + 1` turns into  `1.0 + 1.0 + 3.0 + 5.0`
Then, finally the addition will be done.












## References
1. 