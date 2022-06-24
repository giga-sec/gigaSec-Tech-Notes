[[MOC Programming]]

# CS50 - Week 4
Created:  [[2022-02-12]]
Tags: #fleeting 

---
Header stdint.h
- allows us to precisely define the size (in bits) and sign or unsigned ([[Signed or Unsigned Data type, which one to choose]]) of an INTEGER. 



[[Addresses vs Pointers in C]]



[[Malloc Explained]]



### Valgrind
Sometimes bugs in your code that you don't see visually like possible memory leaks exists. 
```C
int main(void)
{
	char *s = malloc(3);  // <- 4 bits should be the value here
	s[0] = 'H';
	s[1] = 'I';
	s[2] = '!';
	s[3] = '\0';
}
// This code will still run despite it having possible memory leak. 
```

Valgrind is a tool to help you determine memory bugs.

`*x = 42` The `*x` is a deference operator. 
It translates to --> go to the address of `x` and assign an integer `42`. 


### Types of Overflow
[[Integer Overflow or Underflow is dangerous]]
**Buffer Overflow**
Buffer is just a chunk of memory. Going beyond the boundaries of an array such as using more memory than the assigned malloc value

**Heap Overflow**


**Stack Overflow**


**ScanF**
format = %i, %d, %s
address of the variable = &var
```C
scanf(format, address of the variable)


```


heap/heap space - big chunk of memory that malloc uses to get you some spare memory,

stack/stack space - when you call functions, they take up the stack space






### References
1. https://cs50.harvard.edu/x/2021/notes
2. https://video.cs50.io/NKTfNv2T0FE?screen=7y81o-2rjeM&start=7313