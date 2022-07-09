[[VIM 101]]

# Subsitute Command to replace words
Created:  [[2022-07-09]]
Tags: #fleeting 

---
Only replaces on single line
`:s/old/new` replaces a single matched `old` with `new`

adding `g` makes it replace ALL matched `old` in the line with `new`
`:s/old/new/g`

Adding `gc` gives prompt whether to subsitute or not
adding `%` before `s` makes it to change every matched pattern in whole file












### References
1. 