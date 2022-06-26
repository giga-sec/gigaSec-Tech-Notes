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
















### References
1. 