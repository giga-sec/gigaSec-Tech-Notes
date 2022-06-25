[[Week 4 - Memory, Malloc, Pointers, More Overflows]]

# Malloc or Memory Allocation
Created:  [[2022-06-20]]
Tags: #literature  

---
Malloc is used to [[|dynamically allocate]] a single large block of [[continguous]] memory according to the size specified. 



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




For instance, `malloc(5 * sizeof(int))`, 
- `sizeof(int)` is `4`, 
- basically `malloc(5 * 4)` thus 20 bytes of memory in heap space, stored in there are garbage values. 

![[Pasted image 20220625105153.png]]





### References
1. 