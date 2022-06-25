[[Week 4 - Memory, Malloc, Pointers, More Overflows]]

# Malloc or Memory Allocation
Created:  [[2022-06-20]]
Tags: #fleeting   

---
Malloc is used to [[Dynamic memory allocation|dynamically allocate]] a single large block of [[continguous]] memory according to the size specified. 



The main job of malloc is to [[allocate memory]] at run time.  Malloc doesn't have an idea of what it is pointing to nor does it have any idea of what data type it's gonna store it to. 


**Explanation of Syntax**
`malloc(4)` malloc simply asks for how many bytes to be allocated.


?? What does malloc returns
`malloc()` 
- returns the address of the empty spaced memory. 
- Specifically, **returns a `void pointer` ==pointing to the first byte==** of the [[allocate memory|allocated memory]]]].
- returns NULL when there's no longer empty spaced memory. 


?? What's up with freeing memory
It is our job as a programmer to free the no longer used allocated memory by `malloc`. 
Simply use free(t), where t is the variable whose memory is allocated.


Always check if malloc can't give any memory anymore
```C 
int *list = malloc(3 * sizeof(int));
// if there's no memory
if (list == NULL)
{
    // I'm just going to clean up and quit
    free(list);
    return 1;
}
```




[[sizeof in C]]

Oh so if I say `malloc(sizeof(int))`. Then `sizeof(int)` is basically saying I have a 1 empty size int. Since I want three integers, thus `3 * sizeof(int)`. If translated to english, -> I want 3 empty size int       

Source: https://stackoverflow.com/questions/72751174/why-is-sizeof-used-in-the-argument-to-malloc

Full Answer:
Let's look at this line of code:

```c
int *list = malloc(3 * sizeof(int))
```

It creates a pointer to an `int`, and allocated three times the size of an int worth of memory for it. So we have enough room to store three `int`s in that block of memory.

I'll assume one int takes up four bytes of memory. So to store three of them, we need 12 bytes of memory (four bytes per int times three `int`s). `malloc` allocates space in bytes, so that will give you 12 bytes of memory (`sizeof(int)` will return four as there are four bytes per int*).

Now let's look at the other version:

```c
int *list = malloc(3)
```

You allocate three bytes of memory. Sadly, one int is four bytes... so you have enough space for 3/4 of an int (again, assuming one int is four bytes). If you wanted to store three ints, you need to allocate memory equal to three times however big an int is, hence `3 * sizeof(int)`.

---

*Technically, there are platforms where an `int` isn't four bytes. So it is better to write `sizeof(int)` instead of `4`. Don't worry about that for now, though.







For instance, `malloc(5 * sizeof(int))`, 
- `sizeof(int)` is `4`, 
- basically `malloc(5 * 4)` thus 20 bytes of memory in heap space, stored in there are garbage values. 

![[Pasted image 20220625105153.png]]





### References
1. 