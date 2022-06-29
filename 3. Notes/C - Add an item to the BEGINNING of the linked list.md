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

    new_node->val = val;
    new_node->next = *head;

    /** Since head doesn't know that there's a node 
    connecting to it, then we inform it **/
    *head = new_node;
}
```















### References
1. 