[[Malloc in C Explained]]

# Code Snippet C - Freeing the linked list
Created:  [[2022-06-25]]
Tags: #permanent 

---
TIP: You NEED to free all memory first before reusing a linked list.
```C
while (list != NULL)
{
    node *tmp = list->next;
    free(list);
    list = tmp;
}
```

## Why it's important to free memory?
Memory leaks don't automatically cause problems 
-> **until you've run out of memory and your call to malloc suddenly fails**


[[Freeing a memory in C and how it works]]








### References
1. 