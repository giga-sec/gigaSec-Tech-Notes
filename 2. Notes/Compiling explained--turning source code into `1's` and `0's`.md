[[Week 2 - Arrays, Compiling, Command Line Argument, Strings]]

# The process of turning source code into `1's` and `0's` 
Created:  [[2022-05-16]]
Tags: #permanent 

---
The process of turning source code into `1's` and `0's` (binary)

C compilers, sees code top to bottom, left to right

**Preprocessing** = turns the headers into codes. Replaces the header with its own code.

**Compiling** = turns the code into assembly languange. 

**Assembling** = turns the assembly languange into binary/machine code. 

**Linking** = The translation between my own code and each of the headers code to binary happens distinctly.  In C, there could be at least two sets of binary. One is my own source code, the other is the header code ``<#include stdio.h>`` . Linking basically combines all this binary code into a one single file. 

CS50 ^

---
https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/
Pre-processing
Compiling
Assembly
Linking

By executing this command below. 
We can see each file generated on each stages of compilation
```C
gcc -Wall -save-temps filename.c –o filename
```


Pre-processing
- Removal of comments
- Expansion of Macros  #myquestion What is a macro?
- Expansion of the header files  #myquestion I think this is the header
- Conditional Compilation

preprocessed output is stored in the **filename.i**










### References
1. 