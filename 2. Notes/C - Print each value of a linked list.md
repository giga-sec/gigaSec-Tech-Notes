[[Linked List Code Snippets]]

# Printing each value of a node
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
void print_list(node *head) {
    node *current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;  // Goes to next node
    }
}
```















### References
1. 