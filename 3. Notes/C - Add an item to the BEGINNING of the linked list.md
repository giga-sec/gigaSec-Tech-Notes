[[Linked List Code Snippets]]

# Adding an item to the BEGINNING of the linked list
Created:  [[2022-06-26]]
Tags: #permanent 

---
```C
// Adding an item to the BEGINNING of the list
void push_first(node **head, int val) {
    node *new_node;
    new_node = (node *) malloc(sizeof(node));

    // Point new node to first position in linked list
    new_node->val = val;
    new_node->next = *head;

    // Reset first position in linked list to point at new_node
    *head = new_node;
}
```















### References
1. 