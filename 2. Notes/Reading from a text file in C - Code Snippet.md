[[Modes parameter in fopen()]]

# Reading from a text file
Created:  [[2022-07-10]]
Tags: #permanent 

---
```C
#include <stdio.h>

int main()
{
    FILE *ptr;

    // Open the file
    ptr = fopen("C:\\program.txt","r");
    if (ptr == NULL) {
        printf("Error: File doesn't exist\n");
        return 1;
    }

    // Read & Print file by recursively printing characters
    int letter = fgetc(ptr);
    while (letter != EOF)
    {
        printf ("%c", letter);
        letter = fgetc(ptr);
    }

    // ONLY Read file only by using fread()
    char buffer[1456137];
    fread(buffer, sizeof(buffer), sizeof(char), ptr);
    // Print the file read by fread()
    printf("File contains: \n%s", buffer);

    fclose(ptr);
}
```
## `fread` vs `fgetc`
`fread` probably uses MORE memory but is FASTER
`fgetc` uses LESS MEMORY but SLOWER










### References
1. 