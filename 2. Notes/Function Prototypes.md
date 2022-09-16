[[The ANSI C Programming Languange - Book]]

# Function Prototypes
Created:  [[2022-08-19]]
Tags: #fleeting 

---
```C
#include <stdio.h>
#include <math.h>

double sqrt(double);  // This is a function prototype

int main()
    double num = sqrt(2)  // arg converted into double sqrt(2.0) 
```
Function Prototypes makes it possible to 
-> auto convert any passed arguments to what the *data type parameters* the function is set For instance `sqrt(double)` was declared as a function prototype, 
the declaration `sqrt(2)` will have its argument convert into double -> `sqrt(2.0)`

Note that Function Prototype is not the same as this
```C
int sum(int a, int b)  // This is not a function prototype
 
int main()
    printf("%i", num);

int sum(int a, int b)
    return a + b;
```













## References
1. 