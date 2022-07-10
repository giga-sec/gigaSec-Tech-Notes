[[Modes parameter in fopen()]]

# Writing to a text File
Created:  [[2022-07-10]]
Tags: #permanent 

---
```C
#include <stdio.h>

FILE *ptr;
int main()
{
    // Create a pointer for the file
    FILE *ptr;

    // Open file and assign it to pointer variable
    ptr = fopen("C:\\program.txt","w");

    // Writes a text to the file
    fprintf(ptr, "fprintf: Allows arguments to format string\n");
    fputs("fputs: Just fprintf but can't format string\n", ptr);
    fclose(ptr);
}
```

## Both functions below writes text to a file
[fprintf](http://www.cplusplus.com/reference/clibrary/cstdio/fprintf/) does formatted output. 
It reads and interprets a format string that you supply and writes to the output stream the results. 

[fputs](http://www.cplusplus.com/reference/clibrary/cstdio/fputs/) simply writes the string you supply it to the indicated output stream.











### References
1. 