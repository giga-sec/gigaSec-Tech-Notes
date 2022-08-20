[[C - Programming Language]]

# The ANSI C Programming Languange
Created:  [[2022-08-01]]
Tags: #fleeting 

---
Text Input/Output
`getchar()` reads the next input character from a [[text stream]] 
Then returns that as its value

The function `putchar(char)` prints a character each time it is called


[[C - printf]]
    
    [[printf is not part of the C language]]
    
    [[printf and manipulating its outputs]]


[[C truncates decimals when doing division on integers]]



## 1.6 Arrays
When array is passed as argument in function
The value passed to function is address of the beginning in the array. 
No copying of array elements is one


## 1.7, 1.8 Functions 
**When array is passed as argument in function**
The value passed to function is address of the beginning in the array. No copying of array elements is one

**The value passed to function (except array)** 
Value will be copied and made into a temporary variable that only lasts until function execution is done.

Tip: Every text line has at least one character; 
even a line containing only a newline has length 1






[[Programming Lingo]]

[[Constants]]

[[Function Prototypes]]

[[Rules and Formality of naming variables]]  

[[Data Types 101 in programming]]


[[Escape Sequences in C]]


[[Rules for when Automatic conversions of data types happens]]



## [[One Liner Stuffs in C]]


## [[Different Variables in C]]


## [[C - Operators]]


[[Precedence and Order of Evaluation between Operators in C]]

## Chapter 3

Good things to initialize first
-> When passing an array as an argument to a function
Because it gives garbage values, harder to debug


`goto`
```C
for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
        if (a[i] == b[j])
            goto found;
            /* didn't find any common element */
            ...
found:
    /* got one: a[i] == b[j] */
    ...
```

You can use code without `goto` that does the same thing
```C
for (i = 0; i < n && !found; i++)
    for (j = 0; j < m && !found; j++)
        if (a[i] == b[j])
            found = 1;
if (found)
    /* got one: a[i-1] == b[j-1] */
    ...
```

