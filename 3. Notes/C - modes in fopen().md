[[File Handling in C]]

# C - modes in fopen()
Created:  [[2022-07-10]]
Tags: #literature 

---
#### Abstract:
- Text Mode
- Binary Mode
---
### `fopen("file_path", "mode");`

## Text Mode
**`r`** -> reading 
-> If file **NOT** exist, then `fopen()` returns `NULL`


**`w`** -> writing
-> if file **EXISTS**, then its overwritten
-> if file **NOT** exist, it will be created
[[Writing to a text File in C - Code Snippet]]


**`a`** -> append (data added at end)
-> if file **NOT** exist, it will be created
[[Reading from a text file in C - Code Snippet]]


[[Multiple Modes in fopen()]]
[[Always close files when using fopen()]]

## Binary Mode
**`rb`** -> reading in binary mode
-> if file NOT EXIST, then `fopen()` returns `NULL`



**`wb`** -> writing in binary mode
-> if file **EXISTS**, then its overwritten
-> if file **NOT** exist, it will be created



**`ab`** -> append (data added at end)
-> if file **NOT** exist, it will be created


[[Multiple Modes in fopen()]]
[[Always close files when using fopen()]]






### References
1. 