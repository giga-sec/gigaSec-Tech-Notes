[[Linked List Code Snippets]]

# C - Remove by index of linked list and remembers what the value of it 
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
int remove_by_index(node **head, int n)
{
    // What if the index n basically exceeds with
    // The number of index in it

    int i = 0;
    int retval = -1;
    node *current = *head;
    node *temp_node = NULL;

    // If we remove the first index
    if (n == 0)
    {
        // This is basically a copy of pop_first()
        node *next_node = NULL;

        if (*head == NULL) {
            return -1;
        }

        // `*head->next` will give you an error
        next_node = (*head)->next;
        // retrieve value incase if I want it
        retval = (*head)->val;   
        free(*head);
        *head = next_node;

        return retval;
    }


    // Iterate to the node 
    // and stop before the node we wish to delete
    for (i = 0; i < n - 1; i++)
    {
        if (current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }

    // Tf does this mean here?
    if (current->next == NULL)
    {
        return -1;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}
```















### References
1. 