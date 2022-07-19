[[Malloc in C Explained]]

# C - Memory or NULL check of malloc
Created:  [[2022-06-25]]
Tags: #permanent 

---
Always check if malloc can't give any memory anymore.
```C 
int *list = malloc(3 * sizeof(int));
if (list == NULL) 
{
    // I'm just going to clean up and quit
    free(list);
    return 1;
}
```















### References
1. 