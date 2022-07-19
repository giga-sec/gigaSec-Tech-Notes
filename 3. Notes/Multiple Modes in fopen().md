[[Modes parameter in fopen()]]

# Multiple Modes in fopen()
Created:  [[2022-07-10]]
Tags: #fleeting 

---
#### Abstract:
- Text Mode
- Binary Mode
---
### `fopen("file_path", "mode");`

### Text Mode
`r+` -> READING and WRITING
-> If file **NOT** exist, then `fopen()` returns `NULL`


`w+` -> READING and WRITING
-> if file **EXISTS**, then contents _overwritten_
-> if file **NOT** exist, will be _created_


`a+` -> APPENDING and READING
-> if file **NOT** exist, will be _created_


### Binary Mode
`rb+` -> READING and WRITING in binary mode
-> If file **NOT** exist, then `fopen()` returns `NULL`


`wb+` -> READING and WRITING in binary mode
-> if file **EXISTS**, then contents _overwritten_
-> if file **NOT** exist, will be _created_


`ab+` -> APPENDING and WRITING in binary mode
-> if file **NOT** exist, will be _created_



### References
1. 