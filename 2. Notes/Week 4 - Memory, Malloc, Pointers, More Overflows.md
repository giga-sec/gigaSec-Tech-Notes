[[MOC Programming]]

# CS50 - Week 4
Created:  [[2022-02-12]]
Tags: #fleeting 

---
Header stdint.h
- allows us to precisely define the size (in bits) and sign or unsigned ([[Signed or Unsigned, which one to choose]]) of an INTEGER. 



[[Address vs Pointers in C]]



[[Malloc in C Explained]]



### Hexadecimal
It's **helpful to express four bits into hexadecimal** because 
==**four 1's or 0's bits equates to one hexadecimal**==
The **addresses for memory uses hexadecimal**, specifically 16 digits. 

[[Identify if a number is a hexadecimal]]





### [[Valgrind]]


`*x = 42` The `*x` is a deference operator. 
It translates to --> go to the address of `x` and assign an integer `42`. 



### Types of Overflow
[[Integer Overflow or Underflow is dangerous]]
**Buffer Overflow**
Buffer is just a chunk of memory. Going beyond the boundaries of an array such as using more memory than the assigned malloc value

**Heap Overflow**


**Stack Overflow**

if "stack" overlaps heap it is known as stack overflow. 
If "heap" overlaps stack it is known as heap overflow.


heap/heap space - big chunk of memory that malloc uses to get you some spare memory,

stack/stack space - when you call functions, they take up the stack space


**ScanF**
format = %i, %d, %s
address of the variable = &var
```C
scanf(format, address of the variable)
```






### References
1. https://cs50.harvard.edu/x/2021/notes
2. https://video.cs50.io/NKTfNv2T0FE?screen=7y81o-2rjeM&start=7313