[[The ANSI C Programming Languange - Book]]

# External Variables and use extern to access it
Created:  [[2022-08-15]]
Tags: #fleeting 

---
```C
int num = 1;  // This is an external variable

int main() {
    extern int num; // Use `extern` to access external variable
    printf("%i", num);
}
```

Useful for readability ( if external variable is in source file)
Useful when external variable is outside the source file, like file1, file2 and merge together.
    Usual practice is to collect `extern` declarations of variables/functions in a separate file, historically called a `header.h`, 
    that is included by `#include` at the front of each source file.


If the external variable is inside the source file itself. 
We can omit the `extern` declaration, specifically -> `extern int num`
But for readability purposes, put an `extern` to an external variable
















## References
1. 