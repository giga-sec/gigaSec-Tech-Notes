[[File Handling in C]]

# fseek() in C - Code Snippet
Created:  [[2022-07-10]]
Tags: #permanent  

---
```C
fseek(FILE *stream, long int offset, int whence)
```
Parameters of fseek() Explained
1. parameter `stream` is the FILE pointer
2. position of record to be found
3. whence (location where 2nd parameter `offset` starts)
    -> SEEK_SET   = Starts offset BEGINNING of file
    -> SEEK_END  = Starts offset END of file
    -> SEEK_CUR  = Stats offset CURRENT LOCATION OF CURSOR in the file 


```C
#include <stdio.h>

int main() {
    // Open the file
    FILE* fp = fopen("C:\\program.txt", "r");

    // Move pointer to start of file
    // And set offset as 5, basically ignore first 5 characters
    fseek(fp, 5, SEEK_SET);


    // Read from the file using fread()
    char buffer[512];
    fread(buffer, sizeof(buffer), sizeof(char), fp);
    printf("File contains: \n%s", buffer);


    fclose(fp);
}
```












### References
1.