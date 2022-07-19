[[Week 4 - Memory, Malloc, Pointers, More Overflows]]

# Addresses vs Pointers in C
Created:  [[2022-06-22]]
Tags: #literature  

---
Abstract:


Code Snippet
- Pointers as parameters in a function

---
### Addresses
In C Languange
And = && 
Address of Operator = &
When prefixing `&` to a variable, we are instructing the computer to please tell me what address this variable is stored in. 

dereference operator = *
When using `*`, we are instructing to `go to that following address`. ( Note that `*` has different uses, it depends on the context. )

Conclusion: `&` is figuring out where the address is and the `*` is going into that address. 

`struct` to create custom data types


### Pointer
It's a variable that stores the address of some value.
`int *p = n`

Pointers tend to take up 8 bytes

[[Pointers as parameters in a function CODE SNIPPET]]













### References
1. 