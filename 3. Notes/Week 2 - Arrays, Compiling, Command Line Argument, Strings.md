[[MOC Programming]]

# CS50 - Week 2
Created:  [[2022-05-13]]
Tags: #fleeting 

---
Abstract:
[[Compile C using command prompt]]

[[Command line arguments in C--argc and argv]]

[[Compiling explained--turning source code into `1's` and `0's`]]

[[Strings in C]]

---
Compile using command prompt
`gcc -o <output file> <input_file.c>`
[[Compile C using command prompt]]



```C
int main(int argc, char** argv)
```
`argc` means "argument count", how many arguments it must receive
`argv` means "argument vector", this is where we store the arguments. 

`argc[0]` is the code execution itself (i.e `./filename`) 

[[Command line arguments in C--argc and argv]]


The process of turning source code into `1's` and `0's` (binary in short)
Preprocessing = turns the headers into codes. Replaces the header with its own code 

Compiling = turns the preprocessed code into assembly languange. 

Assembling = turns the assembly languange into binary/machine code. 

Linking = The translation between my own code and each of the headers code to binary happens distinctly.  In C, there could be at least two sets of binary. One is my own source code, the other is the header code ``<#include stdio.h>`` . Linking basically combines all this binary code into a one single file. 

[[Compiling explained--turning source code into `1's` and `0's`]]







### References
1. https://cs50.harvard.edu/x/2022/notes/2/