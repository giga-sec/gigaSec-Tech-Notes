[[MOC Programming]]

# Opening a file in C
Created:  [[2022-07-10]]
Tags: #fleeting 

---
#### Abstract:


---
Must need to implement
`FILE *ptr`
`#include <stdio.h>`

Syntax
### `fopen("file_path", "mode");`
Types of Files you can open with fopen()
1. Text Files
2. Binary Files

[[Modes parameter in fopen()]]
NOTE: [[Always close files when opening them]]


Access a record at a specific position
```C
fseek(FILE *stream, long int offset, int whence)
```
Parameters Explained
1. parameter stream is pointer to file
2. position of record to be found
3. whence (location where 2nd parameter offset starts)
    -> SEEK_SET   = Starts offset BEGINNING of file
    -> SEEK_END  = Starts offset END of file
    -> SEEK_CUR  = Stats offset CURRENT LOCATION OF CURSOR in the file 




In C you can
-> Create a new file
-> Open/Close file
-> Reading AND writing info to file


### References
1. https://www.programiz.com/c-programming/c-file-input-output