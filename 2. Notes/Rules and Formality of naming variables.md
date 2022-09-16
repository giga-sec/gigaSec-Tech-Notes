[[The ANSI C Programming Languange - Book]]

# Rules of naming variables
Created:  [[2022-08-19]]
Tags: #fleeting 

---
### Must do Rules
- Names are made up of `LETTERS` or `DIGITS` or `_`
- First character must be `LETTER` 
    - Can also begin with `_`
    - However, don't begin variable names with `_` since library routines often use such names.
- UPPER and lower letters are distinct. 
    - Meaning `hello` is different from `HELLO`


### Readability / Formality of naming variables/symbolic constants
- Traditional Practice is to use `UPPER` for symbolic constants, `lower` for variables
- We tend to use 
    - **short names** for local variables (especially loops)
    - **longer names** for external variables






### !! Might be a good info !!
At least the first 31 characters of an internal name are significant. 
For function names and external variables, the number may be less than 31, 
    because external names may be used by assemblers and loaders over which the language has no control. 
For external names, the standard guarantees uniqueness only for 6 characters and a single case. Keywords like `if, else, int, float, etc`., are reserved: you can't use them as variable names. 








