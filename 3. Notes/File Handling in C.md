[[C - Programming Language]]

# Opening a file in C
Created:  [[2022-07-10]]
Tags: #fleeting 

---
## Syntax
`FILE *ptr`
`#include <stdio.h>`
`ptr = fopen("file_path", "mode");`
Types of Files you can open with fopen()
1. Text Files
2. Binary Files

[[Modes parameter in fopen()]]
NOTE: [[Always close files when opening them]]

[[fseek() in C - Code Snippet]]
[[fscanf() in C]]



In C you can
-> Create a new file
-> Open/Close file
-> Reading AND writing info to file


### References
1. https://www.programiz.com/c-programming/c-file-input-output