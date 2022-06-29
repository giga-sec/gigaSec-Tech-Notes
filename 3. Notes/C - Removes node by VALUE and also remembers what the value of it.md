[[Linked List Code Snippets]]

# C - Removes by value specified in the argument in linked list
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
int remove_by_value(node **head, int val) 
{
    node *current = *head;
    node *temp_node = NULL;

    // If first node matches with the value
    if (current->val == val)
    {
        *head = current->next;
        return 0;
    }

    // Let's look at the value two steps ahead
    // So that the first step acts as a previous value
    while (current->next->val != val)
    {
        if (current->next == NULL)
        {
            printf("Value isn't on the linked list");
            return 1;
        }
        current = current->next;
    }


    // Store the value of what's about to be deleted
    temp_node = current->next;

    // Basically saying current->next->next;
    // Make the previous node of "whats about
    // to be deleted" point to the next node of "what's about to be deleted"
    current->next = temp_node->next;

    // Free the memory of
    free(temp_node);


    return 0;
}
```















### References
1. 