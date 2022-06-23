[[CS50 - Week 4]]

# Addresses vs Pointers in C
Created:  [[2022-06-22]]
Tags: #literature  

---
### Hexadecimal
It's **helpful to express four bits into hexadecimal** because 
==**four 1's or 0's bits equates to one hexadecimal**==
The **addresses for memory uses hexadecimal**, specifically 16 digits. 

[[Identify if a number is a hexadecimal]]



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
`int *p = &n`

Pointers tend to take up 8 bytes

When using pointers as parameters in a function
```C
void swap(int *c, int *d) // When called, it should be given with an address. 
{
    int *temp = c;
    *c = *d;
    *d = *temp;
}

int main()
{
	swap(&a, &b);  // Remember that `&` is getting the address
}
```












### References
1. 