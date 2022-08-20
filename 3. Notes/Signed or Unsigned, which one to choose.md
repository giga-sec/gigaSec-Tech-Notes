[[Week 1 - Data Types, Imprecision and Overflows]]

# Signed or Unsigned Data type, which one to choose
Created:  [[2022-05-13]]
Tags: #permanent 

---
`-128 to 127`     8-bit signed integer 
**`Signed Data Type` accepts negative numbers**. 
It however accepts lower POSITIVE values compared to the same data type but `unsigned`.


`0 to 255`           8-bit **un**signed integer
**`Unsigned Data Type` ONLY accepts zero or positive numbers.**
Unsigned numbers are always zero or positive numbers


[[Qualifiers that extends basic data types]]

## !! NERDY INFO about UNSIGNED DATA TYPES !!
Unsigned numbers also obeys the laws of arithmetic modulo `2^n` , where `n` is number of bits in data type
    So, for instance, if chars are 8 bits, unsigned char variables have values between 0 and 255. Because `2^8` is equals to `256`, we'd have to include the `0` so `255`.
> Whether plain chars are signed or unsigned is machine-dependent, 
> but printable characters are always positive










### References
1. [[Week 1 - Data Types, Imprecision and Overflows]]