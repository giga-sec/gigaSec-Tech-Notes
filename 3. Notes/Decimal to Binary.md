

# Decimal to Binary
Created:  [[2022-08-20]]
Tags: #fleeting 

---
Method 1: Short Division
Algo
while dividend is not 0
    Divide dividend with 2
    the quotient will be the new dividend
    store the remainder value in an array
Create new array
Reverse the array and store it into the new_array

If you ever need to convert int to char, just add char constant  `0` to `int`
https://scholarsoul.com/convert-int-to-char-in-c/

Each remainder will be concatenated to a string

```C
Division	Remainder (R)
112 / 2 = 56	0
56 / 2 = 28	    0
28 / 2 = 14	    0
14 / 2 = 7	    0
7 / 2 = 3	    1
3 / 2 = 1	    1
1 / 2 = 0	    1
```
Now write each remainders from bottom to up
`1110000`
`1110 0000`

[[Decimal to Hexadecimal]]








## References
1. 