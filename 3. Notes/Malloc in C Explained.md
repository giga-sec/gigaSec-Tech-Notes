[[Week 4 - Memory, Malloc, Pointers, More Overflows]]

# Malloc, meaning Memory Allocation
Created:  [[2022-06-20]]
Tags: #fleeting   

---
#### Abstract:
- What does malloc returns
- Typecast the returned `void pointer` of malloc
- Explanation about how `free()` works


#### Code Snippets
- [[C - Freeing a linked list]]

##### Always check if malloc can't give memory anymore
- [[C - Memory or NULL check of malloc]]
---

Malloc is used to create a single large block of [[continguous]] memory according to the size specified. The whole idea of it is to [[allocate memory]] during run time. 

**Explanation of Syntax**
`malloc(4)` malloc asks for how many bytes to be allocated.



### What does malloc returns
`malloc()` 
- returns the address of the empty spaced memory. 
- Specifically, **returns a `void pointer` ==pointing to the first byte==** of the [[allocate memory|allocated memory]].
- returns NULL when there's no longer empty spaced memory. 


### Typecast the returned `void pointer` of malloc
Malloc doesn't have an idea of what it is pointing to nor the data type it's gonna store it to. Therefore it's important to assign a data type by typecasting it. We can write `(int *)` in front of `malloc()` 
```c
person *myperson = (person *) malloc(sizeof(person));
// person here is name of the struct
```





[[sizeof values in each data type of C]]
`malloc(sizeof(int))`
Basically `sizeof(int)` is saying **I have 1 int**. Since I want three integers, **give me three pieces of int** -> `3 * sizeof(int)`. (1)





`free(num);`  basically turns into this `int num;` . When we free `num`, the variable `num` is still there but it no longer have any value attached to it. Basically, `free()` only deletes values, not the variable itself. 


[[C - Freeing a linked list]]









### References:
1. https://stackoverflow.com/questions/72751174/why-is-sizeof-used-in-the-argument-to-malloc