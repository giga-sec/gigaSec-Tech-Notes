[[Week 1 - Data Types, Imprecision and Overflows]]

# Integer Overflow or Underflow is dangerous
Created:  [[2022-05-13]]
Tags: #permanent 

---
Real-World examples with disaster consequences already happened such as the crash of Ariane 5 rocket. It was unable to handle the unexpectedly high readings resulting integer overflow. 

It is when a number exceeds with the accepted number range of a data type. 
This error is tricky to detect as the compiler may show 
- no errors given by compiler but wrong result  or 
- might show no error at all or 
- luckily will give you an error. 


Conclusion:
**Its important to know the accepted range of numbers in your data types** 












### References
1. [^1]: https://medium.com/@jollyfish/integer-overflow-underflow-and-floating-point-imprecision-6ba869a99033