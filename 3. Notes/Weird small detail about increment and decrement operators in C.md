[[Increment and Decrement Operators]]

# Weird small detail about increment and decrement operators in C
Created:  [[2022-08-19]]
Tags: #fleeting 

---
Two syntax for incrementation and decrement
- `++x`
- `x++`,
both increases 1 but the behind the scenes is different


## Postfix n++
`n++` increments `n` AFTER its value has been used.
If `n = 5`, 
then `n++;` nothing changes, therefore `n` is still `5`
But, if I somehow used the variable `n` somewhere 
    like `n + 0`, the increment now happens and turns `5` to `6`  

## Prefix ++n
`++n`, immediately increments `n`
If `n = 5;`
then `x = ++n;` immediately sets `x` to `6`


## Why the small detail matters
Because it affects the logic of a program

Practical example of taking advantage of this little detail
```C
// Code #1
int j = 0;
while (True)
    s[j++] = a; 

```
^ Compiler sees `j++`, the value of `j` remains at `0`
^ The next loop, the `j++` is called again, this is where `j` increments thus `j`'s value now is `1`


Still don't get it?
Code below shows obvious differences between `n++` and `++n`
### Postfix `n++` Example
```C
int n = 0;
while (n < 5)
    printf("%i", n++);
```
^ This will output `0, 1, 2, 3, 4`
Here, incrementation only happens when `n` is used again.
    That's why it was able to print `0` because incrementation didn't happen yet.

### Prefix `++n` Example
```C
int n = 0;
while (n < 5)  // It shouldn't print 5 but...
    printf("%i ", ++n);
```
^ This will output `1, 2, 3, 4, 5`
The reason it was able to print `5` even tho condition `n < 5` doesn't permit it
    Because in reality, it's actually `4 < 5`, incrementation didn't happen yet
    When it got printed, the `++` incremented 4 thus making it print `5`













