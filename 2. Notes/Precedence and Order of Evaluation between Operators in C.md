[[The ANSI C Programming Languange - Book]]

# Precedence and Order of Evaluation between Operators in C
Created:  [[2022-08-20]]
Tags: #fleeting 

---
| Operators                           | Associativity         |
| ----------------------------------- | --------------------- |
| `() [] -> .`                        | left to right         |
| !` ~  ++ -- + - * (type) sizeof`    | **==RIGHT to left==** |
| `* / %`                             | left to right         |
| `+ -`                               | left to right         |
| `<< >>`                             | left to right         |
| `< <= > >=`                         | left to right         |
| `== !=`                             | left to right         |
| `&`                                 | left to right         |
| `^`                                 | left to right         |
| `|`                                 | left to right         |
| `&&`                                | left to right         |
| `||`                                | left to right         |
| `?:`                                | **==RIGHT to left==**         |
| `= += -= *= /= %= &= ^= |= <<= >>=` | **==RIGHT to left==**         |
| `,`                                 | left to right         |












## References
1. 