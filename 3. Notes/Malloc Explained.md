[[Week 4 - Memory, Pointers, More Overflows]]

# malloc
Created:  [[2022-06-20]]
Tags: #literature  

---
[[What's the use of malloc]]
`malloc(4)` malloc simply asks for how many bytes to be allocated.
The use of it is to find an empty spaced address and assign that to a variable. 


?? What does malloc returns
`malloc()` 
- returns the address of the empty spaced memory. 
- returns NULL when there's no longer empty spaced memory.


?? What's up with freeing memory
It is our job as a programmer to free the no longer used allocated memory by `malloc`. Simply use free(t), where t is the variable whose memory is allocated.


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








### References
1. 