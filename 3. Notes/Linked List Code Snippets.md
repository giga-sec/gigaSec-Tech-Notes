[[Linked List]]

# Linked List Code Snippets
Created:  [[2022-06-29]]
Tags: #permanent 

---
Abstract
- ADDING nodes to a linked list
- REMOVING nodes of a linked list
- FREEING the linked list

---
[[C - Creating a node or linked list using struct]]


[[C - Print each value of a linked list]]

### Add nodes to a linked list

[[C - Add an item to the BEGINNING of the linked list]]


[[C - Add an item to the END of linked list]]


[[C - Iteratively add nodes of a NEW linked list]]


[[C - Iteratively add nodes to the end of an EXISTING linked list]]

### Remove nodes of a linked list

[[C - Removes FIRST node and remembers what the value of it]]


[[C - Removes LAST node and remembers what the value of it]]


[[C - Remove node by INDEX of linked list and remembers what the value of it]]


[[C - Removes node by VALUE and also remembers what the value of it]]


### Freeing the linked list
ITS IMPORTANT TO FREE ALL NODES!
Don't simply do this `free(linked_list_name)`. That will only free one block of memory!! 

Do this instead:
```C
while (linked_list_name != NULL)
    {
        node *tmp = linked_list_name->next;
        free(linked_list_name);
        linked_list_name = tmp;
    }
```
















### References
1. 