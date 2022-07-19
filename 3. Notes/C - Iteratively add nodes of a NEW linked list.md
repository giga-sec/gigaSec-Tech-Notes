[[Linked List Code Snippets]]

# C - Iteratively add nodes of a new linked list
Created:  [[2022-06-28]]
Tags: #permanent 

---
### NOTE: 
- This function assumes **linked list doesn't have any value to it**.
- This adds the value to the end of the linked list which is slow!

### PARAMETERS:
`node *head` is the **EMPTY** linked list
`int len` is how many nodes the linked list is gonna have.


```C
void create_nodes_iteratively(node *head, int len)
{
    // Len here is the number of nodes
    int num;

    node *current = head;
    current->next = NULL;

    for (int i = 1; i <= len; i++)
    {
        printf("Input data for node %i: ", i);
        scanf("%i", &num);

        while (current->next != NULL) {
            current = current->next;
        }

        if (i > 1)
        {
            /* now we can add a variable at the end*/
            current->next = (node *) malloc(sizeof(node));
            if (current->next == NULL) { return; }
            current->next->val = num;
            current->next->next = NULL;
        }
        else
        {
            // We first need to have a value for first node
            current->val = num;
            current->next = NULL;
        }
    }
}
```


[[C - Iteratively add nodes to the end of an EXISTING linked list]]













### References
1. 