[[The ANSI C Programming Languange - Book]]

# Symbolic Constants are fixed values that never changes throughout the program
Created:  [[2022-08-14]]
Tags: #fleeting 

---
`#define NAME value`

```C
#include <stdio.h>

#define NAME "Jonan"  // This are symbolic constants
#define AGE 69"       // This are not variables

int main()
{
	printf("Hello %s\n", NAME);
    printf("Your age is %i", AGE);
}
```

The defined `NAME`, `AGE` are `symbolic constants`, 
**==They are not variables, so they do not appear in declarations==**. 
It represents a fixed value that never changes throughout a program.









