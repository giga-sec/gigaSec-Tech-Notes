[[Linked List Code Snippets]]

# C - Removes the first node and remembers what the value of it in linked list
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
int pop_first(node ** head) {
    /***
    Take the next item that the head points to and save it
    Free the head item
    Set the head to be the next item that we've stored on the side
    ***/
    int retval = -1;  // Retrieves Value, in case if I want it
    node *next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    // `*head->next` will give you an error
    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}
```















### References
1. 