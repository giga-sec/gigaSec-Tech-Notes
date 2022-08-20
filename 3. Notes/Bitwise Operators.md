[[The ANSI C Programming Languange - Book]]

# Bitwise Operators
Created:  [[2022-08-19]]
Tags: #fleeting 

---
## Why should we care about bit level manipulation?
Ans: We can't directly store  `5` and `4` to a computer, 
it must be converted to `bits` first 


## Data Types Used in C Bit Level Manipulation
A [[BIT]]  (1, 0)
    A [[BYTE]] is made up of EIGHT [[BIT]]S
        A `WORD` is TWO `BYTE`S
            A `DWORD` is TWO `WORD`S

### Lingo about Binary
[[BIT]] -> `1`, `0`
[[NIBBLE]] -> group of TWO bits, `10`
[[BYTE]] -> group of FOUR bits `1000`


The fuck are this below?
Set
Mask
Flag



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













## References
1. 