[[MOC Programming]]              

# CS50 - Week 1
Created:  [[2022-05-08]]
Tags: #literature  

---
Abstract                                
[[Decimals aren't precise in programming -- Floating Point Imprecision]]

[[Signed or Unsigned Data type, which one to choose]]

[[Integer Overflow or Underflow is dangerous]]

---


Floating-point imprecision
Working with decimals using float is tricky especially when computers can only understand binary digits. Most fractional decimals especially infinite decimals can't be represented precisely in binary. We can use double for more accuracy but it will still give you `errors` for certain calculations[^1]. 
[[Decimals aren't precise in programming -- Floating Point Imprecision]]


`Signed Data Type` can accept negative numbers. It however accepts lower POSITIVE values compared to the same data type but `unsigned`.
Unsigned Data Type ONLY accepts zero or positive numbers.

Example:
8-bit unsigned integer only accepts `0 to 255`
8-bit signed integer accepts ``-128 to 127`

[[Signed or Unsigned Data type, which one to choose]]


Integer Overflow/Underflow
Its important to know the accepted range of numbers in your data types   

It is when a number exceeds with the accepted number range of a data type. 
This error is tricky to detect as the compiler may show a 
- no errors given by compiler but wrong result  or 
- might show no error at all or 
- luckily will give you an error. 

[[Integer Overflow or Underflow is dangerous]]







### References
[^1]: https://medium.com/@jollyfish/integer-overflow-underflow-and-floating-point-imprecision-6ba869a99033

2. https://cs50.harvard.edu/x/2022/weeks/1/