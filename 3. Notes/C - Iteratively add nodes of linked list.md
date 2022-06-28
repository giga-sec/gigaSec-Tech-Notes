

# C - Iteratively add nodes of linked list
Created:  [[2022-06-28]]
Tags: #permanent 

---
```C
void add_numbers(node *head, int len)
{
    // Len here is the number of nodes

    node *current = head;
    current->next = NULL;

    int num;
    for (int i = 1; i <= len; i++)
    {
        printf("Input data for node %i: ", i);
        scanf("%i", &num);

        while (current->next != NULL) {
            current = current->next;
        }

        if (i != 1)
        {
            /* now we can add a new variable at the end of the node*/
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















### References
1. 