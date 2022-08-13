[[C - Programming Language]]

# The ANSI C Programming Languange
Created:  [[2022-08-01]]
Tags: #fleeting 

---
# In Chapter 1.1  (printf)
It talks about the printing of values with printf and library stdio.h


## `printf` is not part of the C language
there is no input or output defined in C itself. 
`printf` is just a useful function from `stdio.h` 
The behaviour of printf is defined in the ANSI standard so its properties should be the same with any compiler and library that conforms to the standard.



## The `printf` formatted output 
`%3i` prints an int with `3 whole num digits`. 
    Like `031`
    This is also how you get leading zeros in numbers
`%5.2f` prints a floating point with `5 whole num digits` and `2 decimal digits`
    Like `01433.00`
`%.0f` prints a floating number without decimals :D

# In Chapter 1.2
comments, declarations, variables, 
arithmetic expressions, loops , formatted output.

char -> a single byte
short -> short integer
long -> long integer
double -> double-precision floating point

## How C does division in integers
C truncates any integer division -> [[truncation]]: 
Meaning any fractional part is discarded.
Example:
-> `5/2` would result into `2.5`, 
-> but **C truncates any integer division** 
-> thus final answer is `2`




    

## Rules for when integers are automatically converted to floating point
IF -> we have an `int` and we added a single `float`
THEN -> result will always be `float` or 
-> More precisely, 
    all `int` will be converted to `float` BEFORE ADDITION is done.

Example:
`1.0 + 1 + 3 + 5`  
^ There's a single float in this arithmetic

In result, this will convert all `int` to be `float` as seen on below
`1.0 + 1` turns into  `1.0 + 1.0 + 3.0 + 5.0`
Then, finally the addition will be done.


# In Chapter 1.3 (Loops)
Just talk about for loops

# IN Chapter 1.4 (Symbolic Constants)
Symbolic Constants, meaning using the  `#define NAME value`
#myquestion Can we say that this is also global variables?

## Symbolic Constants are not variables
```C
#include <stdio.h>

#define NAME "Jonan"
#define AGE "69"

int main()
{
	printf("Hello %s\n", NAME);
    printf("Your age is %i", AGE);
}
```

The defined `NAME`, `AGE` are `symbolic constants`, 
They are not variables, so they do not appear in declarations. 

# In Chapter 1.5 (Text Input/Output)

## Text Streams
Text input/output is dealt with as text streams or streams of characters. 
    A text stream is a sequence of characters divided into lines; 
    Each line consists of zero or more characters followed by a newline character.
    Like this
    `123123123\n`   <- 1st Text stream  
    `dflgkjdlfg\n` <- 2nd Text Stream
    `\n`                      <- 3rd Text Stream

More Info which might be helpful
It is the responsibility of the library to make each input or output stream confirm this model; The C programmer using the library need not worry about how lines are represented outside the program.

```C
char	1 byte
short	2 bytes
int	    4 bytes
long	4 bytes  32 bits
float	4 bytes  
double	8 bytes
```

## Programming lingo 
Expression
    Meaning a number of variables or constants, and operators and functions, 
    are put together in a single statement or a variable
    Like this `1 + 1` or `"Jonathan" + "Alexa"`

Assignment
    It's indicated by a symbol `=`
    It **ASSIGNS** a VALUE to a variable
    That's why it's called **ASSIGN**ment


One Liner For loop Is Possible in C
```C
for (nc = 0; getchar() != EOF; nc++)
    ;
```
A `for` loop must have a body
But since `;` is there or the `null statement`, it satisfies the requirement
Putting it on second line makes it `readable` and `visible`


## Convert char into ASCII?
A character surrounded by `''` like `'A'` is called **Character Constant** 
A character constant makes it possible to convert character into ASCII
```C
int num = 'A';
printf("%i", num);
```

If you surrounded `A` with `""` like `"A"`
It will give you an error
```C
int num = "A";
error: expected expression before 'int'
```



```C
int c;
c = getchar();
printf("Pass\n");
while(c != EOF) {
    putchar(c);
    c = getchar();
    printf("Testing\n");
}
printf("Hello");
```
The while loop will print each character one by one that was inputted. 
It will only stop inputting when it detected a newline
However, inside the while loop is `getchar()`, 
    I wonder why it doesn't stop and prompt us a character
    Ans: Maybe because input/output is treated as stream of characters. Text Streams means any a collection of characters that ends with `\n`

Also, the loop never ends when I press enter,
Meaning enter doesn't mean it's `EOF`. 
Ans: Yes, because to get an `EOF`, input `Ctrl+Z`  


## Arrays
