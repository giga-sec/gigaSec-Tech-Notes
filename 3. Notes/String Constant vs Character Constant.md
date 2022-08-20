[[Constants]]

# String Constant vs Character Constant
Created:  [[2022-08-19]]
Tags: #fleeting 

---
`'x'` is not the same as `"x"`
Because `'x'`  is a char at the same time integer that produces ASCII value
`"x"` contains the letter 
    -> `x` and `\0`

Interesting Error Fact:
If you surrounded `A` with `""` like `"A"`
It will give you an error
```C
int num = "A";
error: expected expression before 'int'
```














## References
1. 