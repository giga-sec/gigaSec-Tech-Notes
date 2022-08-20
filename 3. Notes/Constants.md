[[The ANSI C Programming Languange - Book]]

# Constants
Created:  [[2022-08-19]]
Tags: #fleeting 

---
### Int, Float Constants 
Int Constants -> `12345`

Float Constants -> `13.4F` 
    Ends with `F` or `f`


### Octal, Hexa Constants

Octal Constants -> `036`
     Octal has three digits on it `000 000` 

Hexadecimal Constants-> `0x37`
    A leading `0x` means hexadecimal


### [[Symbolic Constants - fixed values that never changes throughout the program]]



### Character and String Constants
Character Constant:
[[Character Constant to make char ASCII compatible]]


String Constant:
Are characters surrounded in `""`
String constants can be concatenated at compile time: Like this below
```C
printf("Hello"
       "Madam");
```
prints to -> `Hello Madam`

#### [[String Constant vs Character Constant]]


## Qualifiers that are Constants
### Long Constants -> `234L` or `234l`
    Ends with `L` or `l`

### Unsigned Constants -> `u` or `U`
    123U    
Remember that unsigned is a [[Qualifiers that extends basic data types|qualifer]] therefore is an extension to the [[Basic Data Types in C]]
Example: `0xFUL`
    Means written in Hexadecimal `0x`  
    on Unsigned Long `UL` constant with value `F` on hexa but `15` on decimal





