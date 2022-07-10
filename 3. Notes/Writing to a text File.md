

# Writing to a text File
Created:  [[2022-07-10]]
Tags: #fleeting 

---
```C
#include <stdio.h>

FILE *ptr;
int main()
{
    FILE *ptr;

    ptr = fopen("C:\\program.txt","w");

    fprintf(ptr, "fprintf: Allows arguments to format string\n");
    fputs("fputs: Just fprintf but can't format string\n", ptr);
    fclose(ptr);
}
```

[fprintf](http://www.cplusplus.com/reference/clibrary/cstdio/fprintf/) does formatted output. 
It reads and interprets a format string that you supply and writes to the output stream the results. 

[fputs](http://www.cplusplus.com/reference/clibrary/cstdio/fputs/) simply writes the string you supply it to the indicated output stream.











### References
1. 