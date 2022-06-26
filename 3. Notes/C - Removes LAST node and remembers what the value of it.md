[[Linked List]]

# C - Removes the last node and remembers what the value of it in linked list
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
int pop_last(node *head)
{
    // Very Similar to adding num to end
    // Exception: Look two items ahead, see if next item is the last

    int retval = -1;
    // if there is only one item in the list, remove it
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    // get to the second to last node in the list
    // Look two items ahead, see if next item is the last
    node * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* now current points to the "second to last item" of the list, so let's remove `current->next` */
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}
```















### References
1. 