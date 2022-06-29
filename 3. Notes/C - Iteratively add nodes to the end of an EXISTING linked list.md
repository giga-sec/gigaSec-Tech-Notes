[[Linked List Code Snippets]]

# C - Iteratively add nodes of an EXISTING linked list
Created:  [[2022-06-29]]
Tags: #permanent 

---
### NOTE
- All **new numbers** will be **assigned to the end of the linked list**. 


### PARAMETERS
`node *head` is the EXISTING linked list
`int len` means how many nodes you want to add


```C
void add_nodes_iteratively(node *head, int len)
{
    // Variables used throughout the function
    int num;
    int counter = 1;
    node *current = head;

    // Counts how many nodes there are
    while (current->next != NULL) {
        current = current->next;
        counter++;
    }

    for (int i = 0 + counter; i < len + counter; i++)
    {
        printf("Input data for node %i: ", i);
        scanf("%i", &num);

        while (current->next != NULL) {
            current = current->next;
        }

        /* now we can add a variable at the end*/
        current->next = (node *) malloc(sizeof(node));
        if (current->next == NULL) { return; }
        current->next->val = num;
        current->next->next = NULL;
    }
}
```

[[C - Iteratively add nodes of a NEW linked list]]













### References
1. 