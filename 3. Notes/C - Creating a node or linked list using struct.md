[[Linked List Code Snippets]]

# C - Defining a node
Created:  [[2022-06-26]]
Tags: #permanent 

---
**Node**, a component of a data structure that encapsulates some information. 
```C
typedef struct node {
    int val;
    struct node *next;
} 
node;
```

Explanation of the code above
- We start this struct with `typedef struct node` so that we can refer to a `struct node` inside our struct.
- Then, we’ll have an `int` called `val`, for the value we want to store, and then a pointer to the next node with `struct node`. (We haven’t fully defined `node` yet, so the compiler needs to know it’s a custom struct still.
- Finally, `node` at the end let us use just `node` in the rest of our program.


```C
node *n = malloc(sizeof(node));
```











### References
1. 