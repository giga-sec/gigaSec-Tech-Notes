[[Linked List Code Snippets]]

# C - Adding an item to the END of linked list
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
// Adding an item to the END of the list
void push_last(node *head, int val) {
    /** To iterate over all the members of the linked list,
     we use a pointer called current
     We set it to start from the head **/
    node *current = head;

    /** Each step, we move the pointer to the 
    next item in the list, until we reach the last item.  **/
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = (node *) malloc(sizeof(node));
    current->next->val = val;
    current->next->next = NULL;
}
```















### References
1. 