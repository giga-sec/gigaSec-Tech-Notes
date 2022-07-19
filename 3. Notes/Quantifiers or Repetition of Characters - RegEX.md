[[RegEX - Regular Expressions]]

# Quantifiers or Repetition of Characters - RegEX
Created:  [[2022-07-16]]
Tags: #literature 

---
Repetition ->     0 or more `*`      1 or more  `+`    
specific repetition `{1,2}`       
optional `?`

---

## Repetition
0 or more `*`      
1 or more  `+`        

Example 
`\d*` to match any number of digits,
`a+` (one or more a's), 
`[abc]+` (one or more of any a, b, or c character)


## Specific Repetition
`z{3,5}` 
Find any `z` with  `three` to `five` repeats 

`z{5}`, 
Find any `z` with `five` repeats


## Optional 
`ab?c`
matches strings with `abc` or `ac`
because `b` is optional









