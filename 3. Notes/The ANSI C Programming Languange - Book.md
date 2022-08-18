[[C - Programming Language]]

# The ANSI C Programming Languange
Created:  [[2022-08-01]]
Tags: #fleeting 

---
One liner declaration of different variables
One liner assignment of value in different variables
```C
int i, j, k;   // one liner declaration of different variables
i = j = k = 0;  // One liner assignment

```



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
[[Expression]]

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

Operators 
    It specifies what is to be done to the `declared` variables. 

Type 
    The `type` of an object determines the set of values it can have 
    ... and what `operations` can be performed on that set of values.
    Hmm, I think this is like the `int`, or `char` like that

Operand
    Like `10 + 2`
    `+` is the operator
    Both `10` and `2` are the operands
    It is the numbers that are the objects of operators 


The ANSI standard made lots small changes/additions to basic types and [[expression]]. 
There are now signed and unsigned forms of all integer types, 
There are also notations for unsigned constants and hexadecimal character constants. Floating-point operations may be done in single precision; 
there is also a long double type for extended precision. 
String constants may be concatenated at compile time. 
Enumerations have become part of the language, formalizing a feature of long standing. Objects may be declared const, which prevents them from being changed. 
The rules for automatic coercions among arithmetic types have been augmented to handle the richer set of types.

## 2.1 Variable Names

Rules of the names of variables & symbolic constants 
- Names are made up of `LETTERS` or `DIGITS` or `_`
- First character must be `LETTER` or `_`
    - However, don't begin variable names with `_` since library routines often use such names.
- UPPER and lower letters are distinct. 
    - Meaning `hello` is different from `HELLO`

 Readability and Formality of naming variables/symbolic constants
- Traditional Practice is to use `UPPER` for symbolic constants, `lower` for variables
- We tend to use 
    - short names for local variables (especially loops)
    - longer names for external variables


Well, I don't really know what this means below but it might be helpful
At least the first 31 characters of an internal name are significant. For function names and external variables, the number may be less than 31, because external names may be used by assemblers and loaders over which the language has no control. For external names, the standard guarantees uniqueness only for 6 characters and a single case. Keywords like if, else, int, float, etc., are reserved: you can't use them as variable names. They must be in lower case.


## 2.2 Data Types

This are the only basic data types in C:
```C
int
char
float
double
```


This are qualifiers that can be applied to the basic data types

```C
short int var_name
long int/double var_name
```
^ Often, `int` can be omitted 
    Like this -> `short var_name` or `long var_name` 

> Each compiler is free to choose appropriate sizes for its own hardware, subject only to the the restriction that shorts and ints are at least 16 bits. longs are at least 32 bits, and short is no longer than int, which is no longer than long.

```C
signed char/int var_name
unsigned char/int var_name
```
[[Signed or Unsigned Data type, which one to choose]]
Unsigned numbers are always positive or zero
It also obeys the laws of arithmetic modulo 2n , where n is the number of bits in the type
    So, for instance, if chars are 8 bits, unsigned char variables have values between 0 and 255. Because `2^8` is equals to `256`, we'd have to include the `0` so `255`.
> Whether plain chars are signed or unsigned is machine-dependent, 
> but printable characters are always positive

## 2.3 Constants

Int Constants -> `12345`

Long Constants -> `234L` or `234l`
    Long constants need to end with `L` or `l`

Unsigned Int Constants -> `u` or `U`
    

Floating Constants -> `13.4F`
    Must have decimal point, and optionally end with `F` or `f`

Octal Constants -> `036`
    A leading zero on an `Int Constant` means Octal

Hexadecimal Constants-> `0x37`
    A leading `0x` means hexadecimal

> Octal and hexadecimal constants may also be followed by L to make them long and U to make them unsigned
`0xFUL`
Means written in Hexadecimal `0x`  
on Unsigned Long `UL` constant with value `F` on hexa but `15` on decimal

### Escape Sequences
`\a`  alert (bell) character
`\b`  backspace
`\f`  formfeed
`\v`  vertical tab
`\000`  octal number  -> `'\013'` means vertical tab in ASCII
`\xhh`  hexadecimal number -> `'\xb'` means vertical tab in ASCII 
    `x` followed by number is the syntax for hexadecimal number in Character/String Constant


`\n`  newline
`\r`  carriage return -> basically enter key
`\t`  horizontal tab
 

String Constants
Are characters surrounded in `""`
String constants can be concatenated at compile time:
` "hello, "  "world"`
is equivalent to
 `"hello, world"`
Like this
```C
printf("Hello"
       "Madam");
```
prints to -> `Hello Madam`

String Constant vs Character Constant
`'x'` is not the same as `"x"`
Because `'x'`  is an integer that produces ASCII value
`"x"` contains the letter `x` and `\0`

Enumeration Constant
is a list of constant integer values,
It's an alternative for `#define` 

`enum boolean { NO, YES };`
The default value of `NO` is `0` 
then increments it to next constant integer which is `YES` -> `1`

`enum days { Sun=1, Mon, Tue, Wed, Thu, Fri, Sat };`
We change the starting value to `1`
it increments it to next constant integer which is `Mon` -> `2`, then repeats it till `Sat`


More here below
https://www.simplilearn.com/tutorials/c-tutorial/enum-in-c#

Constant expression
Is exactly the name itself, an expression that only invovles constants


## 2.4 Declarations

Declaration means creating a variable with its own data type into existence.

All variables must be declared before use
although certain declarations can be made implicitly by content

A declaration specifies a type, and contains a list of one or more variables of that type, as in
```C
int lower, upper, step; 
char c, line[1000];
```

**Initalize**
A variable can be initalized in its declaration
Like this
```C
int lower = 50;
```
Meaning, initalize is the act of assigning a value to a variable in its declaration.
But I think that would fit the description of assignment

```C
void printNum() {
    static int num = 0
    printf("%i\n", num++);
}

int main() {
    printNum();  // 1
    printNum();  // 2
    printNum();  // 3
}
```
When calling a function, `static` variable makes the initialization of its value only once. 
When printNum is called again, it will never initialize the value of `num` to `0` again ...
... and will still have the same value as before, which is `1`

```C
void printNum() {
    int num = 0
    printf("%i\n", num++);
}

int main() {
    printNum();  // 1
    printNum();  // 1
    printNum();  // 1
}
```
Local Variables are by default -> Automatic Variables
When calling the function, it will always initialize any variable to its expression.


External and static variables are initialized to zero by default.
Automatic variables for which is no explicit initializer have undefined (i.e., garbage) values.


`const`
The qualifier `const` can be applied to the declaration of any variable to specify that its value will not be changed. 
For an array, the `const` qualifier says that the elements will not be altered
`const char name[] = "Jonathan";`
The `const` qualifier can also be used with array arguments, to indicate that the function does not change that array: `int strlen(const char[]);`
The result is implementation-defined if an attempt is made to change a const.

## 2.5 Arithmetic Operators
The `%` operator cannot be applied to a float or double. 
The direction of truncation for `/` and the sign of the result for `%` are machine-dependent for negative operands, as is the action taken on overflow or underflow.

1. unary `+` and `-`
2. same precedence of `*`, `/` and `%`, 
3. The binary `+` and `-` operators have the same precedence, 

## 2.6 Relational and Logical Operators

1. `> >= < <=` This are Relational Operators and Have same precedence
2. `== !=` This are Logical Operators and have same precedence
3. `&&` still logical Operator
4. `||` still logical Operator


```C
int i;
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
    s[i] = c;
```

Before reading a new character it is necessary to check that there is room to store it in the array s, so the test `i < lim-1` must be made first. Moreover, if this test fails, we must not go on and read another character. 
Similarly, it would be unfortunate if c were tested against EOF before getchar is called; therefore the call and assignment must occur before the character in c is tested.

Expressions connected by `&&` or `||` are evaluated left to right, 
evaluation stops as soon as the truth or falsehood of the result is known.


```C
i < lim-1 && (c=getchar()) != '\n' && c != EOF
true && (c=getchar()) != '\n' && c != EOF
true && c != '\n' && c != EOF
true && true && c!= EOF
true && true && true
true && true
true
```

```C
1 < 2 && 3 != 4 && 3 > 4
true && 3 != 4 && true
true && true && true
```
I think it reads all of the expression first as to evaluate what operator to priortize first
Then it does the evaluation in that manner

A loop equivalent to 
```C
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
    s[i] = c;


```


Constructions like `!valid` read nicely (``if not valid''),

## 2.7 Type Conversions

When an operator has operands of different `types`, 
they are converted to a common type according to a small number of rules.

In general, the only automatic conversions are 
those that convert a `narrower` operand into a `wider one` without losing information,
such as converting an `integer` into `floating point` in an expression like `f + i`.

Expressions that don't make sense, like using a float as a subscript, are disallowed. Expressions that might lose information, 
    like assigning a longer integer type to a shorter, or 
    a floating-point type to an integer, 
    may draw a warning, but they are not illegal.

A `char` is just a small integer, so chars may be freely used in arithmetic expressions

There is one subtle point about the conversion of `char` to `int`. 
The language does not specify whether variables of type `char` are `signed` or `unsigned` 
When `char` is converted to `int`, can it ever produce a negative integer? 
The answer varies from machine to machine, reflecting differences in architecture. 
IF -> `NONchar data` (bit) is to be stored in char variables
THEN -> specify if its `signed` or `unsigned`
WHY -> Because `arbitrary bit patterns` stored in character variables may appear to be negative on some machines, yet positive on others. 

Automatic Conversion Rules in Arithmetic Expressions
The highest data type the expression has will convert every data type into that same highest data type. For instance, if we have at least `double` with the remaining operands as `int` and `float`, then those `int/float` operands will be automatically conversed into `double`. 

Conversions take place across assignments; the value of the right side is converted to the type of the left, which is the type of the result. 
Thoughts -> So you mean that `1 == 1.0` won't be converted to `1 == 1` ???? Because like it siad, the right side will convert to whatever is on the left side. Since left side is `int`, it is lower than `float`. Oh actually, that type of conversion permits it, only there is a warning invovled that information will be lost along the way. 
Final Answer -> It is possible for `1 == 1.0` to be converted to both int `1 == 1` but we just lose an information of the decimal place.

So, it's not only in arithmetic expressions but it also happens with logical operations 
`1.0 == 1` -> `1.0 == 1.0`
Thoughts -> When you think about it, it does make sense 
because if you compare a floating `1.0` to int `1`, technically they are different numbers so the automatic conversion rules actually make sense here.

type conversion also takes place when arguments are passed to functions

`Cast`
is a unary operator that explicitly forces any expression of type to convert to another type.

`Function Prototypes`
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


## 2.8 Increment and Decrement Operators 

can only be applied to variables
can be used as a subscript -> `s[j++]`

[[Expression]]s aren't allowed to have Increment/Decrement Operators
    Like -> `(i + j)++`

There's a weird small detail about increment and decrement operators in C
We can do either `++x` or `x++`, both increases 1 but the BTS is different

postfix `n++`, increments `n` AFTER its value has been used.
If `n = 5`, 
then `x = n++;` sets `x` to `5`
So, if I somehow used the variable `x` somewhere 
    like `x + 0`, the increment now happens and turns into `6 + 0`  

prefix `++n`, increments `n` BEFORE value is used
If `n = 5;`
then `x = ++n;` sets `x` to `6`

This small little detail above affects the logic of a program
Take a look at this practical example of taking advantage of this little detail
```C
int j = 0;
while (True)
    s[j++] = a; 

// The code above is the same as below
int j = 0;
while (True) {
    s[j] = a;
    j++;
} 
```
So, let me explain code above
Compiler sees `j++`, the value of `j` remains at `0`
The next loop, the `j++` is called again, this is where `j` increments thus `j`'s value now is `1`


Code below shows obvious differences between `n++` and `++n`
```C
int n = 0;
while (n < 5)
    printf("%i", n++);
```
This will output `0, 1, 2, 3, 4`
Here, incrementation only happens when `n` is used again.
    That's why it was able to print `0` because incrementation didn't happen yet.

```C
int n = 0;
while (n < 5)
    printf("%i ", ++n);
```
This will output `1, 2, 3, 4, 5`
The reason it was able to print `5` even tho condition `n < 5` doesn't permit it
    Because in reality, it's actually `4 < 5`
    When it got printed, the `++` incremented 4 thus making it print `5`


## 2.9 Bitwise Operators'
Why should we care about bit level manipulation?
We can't directly store  `5` and `4` to a computer, it must be converted to `bits` first 


Data Types Keyword in C
A `BIT` is the basic building blocks of computers.
    A `BYTE` is made up of EIGHT `BIT`S
        A `WORD` is TWO `BYTE`S
            A `DWORD` is TWO `WORD`S

It takes FOUR `bits` to cover all the numbers from zero to fifteen
    zero to fifteen is also the number range of hexadecimal

Lingo
`BIT` -> `1`, `0`
`NIBBLE` -> group of TWO bits, `10`
`BYTE` -> group of FOUR bits `1000`

The fuck are this below?
Set
Mask
Flag


Hexadecimal is a great notation for expressing bits as we don't have to write lots of 0's and 1's


Six Bitwise Operators
1. `&`    AND operator
2. `|`    OR operator
3. `^`    XOR operator
4. `~`    Ones Complement (Unary) or Inversion Operator or (Not Operator)
    It's called unary operator because it only requires one value
    Like `~5`
5. `>>`  Right Shift Operator
6. `<<`  Left Shift Operator
https://www.codeproject.com/Articles/2247/An-Introduction-to-Bitwise-Operators
https://code.tutsplus.com/articles/understanding-bitwise-operators--active-11301

### Bit Operators
The output is different from logical operators and bitwise operators
because logical operator returns true or false (1, 0)
but bitwise operators, returns a proper number.

You could also say that its the same as arithmetic operators. 
Because `50 + 23` spits out `73`
and bitwise operation `50 & 23` spits out number  `18`

The logic of bitwise operation
`50` & `23`
both numbers are converted to their own bit representation
then does the `&` ting to both numbers
after that, the result will be converted to decimal


You can use bitwise operator `&` to identify if a number is even or odd
```C
int num = 22;
int b = num & 1;
```
Idk how it works but if `b` spits out `1`, meaning that's an odd number
`0`, meaning that's an even number.

`~` Operator does basically the same thing as `!`
It turns true into false, and false into true
Practical use of `~`
To recap, to find the negative of a number, we simply take its two's complement. We can do this by inverting all the bits `~37` and adding one.

There's a difference between `|` and `^`
Both says true if 1 value matches on condition
But `^` says false if both values is the same

`^` wants difference, if values are the same, it will spit out `false`
It must have different value for it to be `true`

### Bitshift Operators
The `>>` and `<<`

value to be shifted `>>` how many bits to shift
`10 << 2`
the `10's bits` will be shifted to `right side` `two times` 

`10` will be converted to 8 bits
`0000 1010`

It instructs to shift `bits` to `right side` `two times`
so, the leftside first two bits will be discarded
then we're gonna shift everything to right side
we fill the empty slots with `0`
`__00 1010`   
`0010 10`
`0010 1000`  we fill the empty slots with 0



## 2.10 Assignment Operators and Expressions

`+=` This is called an assignment operator
But is also `=` right?

So this  is the logic of assignment operators
sum = 5
sum += 2 - 3 + 5
is basically
    sum = sum + (2 - 3 + 5)
    In words, the [[expression]] must be computed first, 
    the variable to be assigned will always be the last value to be computed 



