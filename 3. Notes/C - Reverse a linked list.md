[[Linked List Code Snippets]]

# C - Reverse a linked list
Created:  [[2022-06-29]]
Tags: #literature  

---
### Note
![[Reversing a linked list.mp4]]


### Parameters
- `**head` so that we can edit the real linked_list inside of the function

But why `**head` 
- First off, let's translate `**head` to english. Basically, it says that we are pointing to whatever head is pointing at. Or head is pointing at whatever it is pointing to. Since we assign the real linked list to parameter `**head` we can say, head is pointing to the real_linked_list. Whatever values we change to head, will also change the real_linked_list. In this case, real_linked_list means the argument we were passing to the parameter.


```C
// **head so that we can change the real linked_list inside of a function
void reverse_linkedList(node **head)
{
    node *prev = NULL;
    node *current = *head;
    node *next = NULL;

    do
    {
        // Point current pointer to previous node
        next = current->next;
        current->next = prev;

        // Shift the perspective
        prev = current;
        current = next;
    }
    while (next != NULL);
    // current, next have no values anymore
    // head is already fucked up as well
    // but prev have all the reversed values
    *head = prev;  
}
```















### References
1. 