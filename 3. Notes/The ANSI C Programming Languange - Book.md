[[C - Programming Language]]

# The ANSI C Programming Languange
Created:  [[2022-08-01]]
Tags: #fleeting 

---
## 1.1  (printf)
[[C - printf]]

## 1.2 (division, integer to float)
comments, declarations, variables, 
arithmetic expressions, loops , formatted output.

How C does division in integers
[[C truncates decimals when doing division on integers]]

Rules for when integers are automatically converted to floating point
[[When does int values automatically converts to float]]

## 1.3 (One Liner For Loops)
One Liner For loop Is Possible in C
```C
for (nc = 0; getchar() != EOF; nc++)
    ;
```
A `for` loop must have a body
But since `;` is there or the `null statement`, it satisfies the requirement
Putting it on second line makes it `readable` and `visible`

## 1.4 (Symbolic Constants)
[[Symbolic Constants are fixed values that never changes throughout the program]]

## 1.5 (Text Input/Output)
`getchar()` reads the next input character from a [[text stream]] 
Then returns that as its value

The function `putchar(char)` prints a character each time it is called

```C
char	1 byte
short	2 bytes
int	    4 bytes
long	4 bytes  32 bits
float	4 bytes  
double	8 bytes
```





[[Character Constant is used to convert char to int-ascii]]

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

**1.9 Character Array**
All character array ends with `\0`

When array is passed as argument in function
The value passed to function is address of the beginning in the array. No copying of array elements is one


## 1.10 Extern Variables
[[External Variables and use extern to access it ]] 


# 2. Types, Operators, and Expressions
## Programming Lingo
Expression
    Meaning the act of combining variables / constants, and operators / functions, 
    are put together in a single statement or a variable
    Like this `1 + 1` or `"Jonathan" + "Alexa"`

Assignment
    It's indicated by a symbol `=`
    It **ASSIGNS** a VALUE to a variable
    That's why it's called **ASSIGN**ment

Subscript
    It represents the element in an array
    Like `array[3]`, the subscript here is `[3]`

Caller
    Means the piece of code that called the function

Automatic Variables
    Often, variables declared inside of a function are called automatic variables. As the variable disappears when the function exited.
    
Definition 
    refers to place where variable is created or assigned storage.

Declaration 
    refers to places where variable is stated but no storage is allocated.
    it lists the variables to be used, and state what `type` they have and perhaps what their initial values are. 
    Like saying, declare a variable with 5 value in it. The sentence itself is act of declaration


