[[Modes parameter in fopen()]]

# Reading from a text file
Created:  [[2022-07-10]]
Tags: #fleeting 

---
```C
#include <stdio.h>

int main()
{
    FILE *ptr;

    // Open the file
    ptr = fopen("C:\\program.txt","r");
    if (ptr == NULL) {
        printf("Error: File doesn't exist");
        return 1;
    }

    // Read the file by recursively printing characters
    int letter = fgetc(ptr);
    while (letter != EOF)
    {
        printf ("%c", letter);
        letter = fgetc(ptr);
    }

    fclose(ptr);
}
```









### References
1. 