[[Malloc in C Explained]]

# Code Snippet C - Freeing the linked list
Created:  [[2022-06-25]]
Tags: #permanent 

---
```C
while (list != NULL)
{
    node *tmp = list->next;
    free(list);
    list = tmp;
}
```


Memory leaks are among the most difficult bugs to detect because they don't cause any outward problems until you've run out of memory and your call to malloc suddenly fails













### References
1. 