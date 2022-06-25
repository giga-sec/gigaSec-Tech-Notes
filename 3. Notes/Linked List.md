[[Week 5 - Linked Lists, Trees, Data Structures]]

# Linked List
Created:  [[2022-06-25]]
Tags: #fleeting 

---
[[Malloc in C Explained]]

My understanding:
Linked list can be anywhere in the memory and they can be linked to each other through the usage of nodes. For instance, we have `1` in address 0x135, then we have `2` in address 0x367


[[How to implement a linked list in C]]

The good and bad of Linked List:
With linked list, we have the tradeoff of needing to allocate more memory for each value and pointer, in order to spend less time adding values. 
- More memory usage
- Spend Less time adding values



Symbols in C
-   `struct` to create custom data types
-   `.` to access fields, or values, in a structure. Mostly used in struct, getting that traits on a struct.
-   `*` to go to an address in memory pointed to by a pointer


To go inside of a structure `.` and `*` to go to an address is combined and formed into `->`
-   `->` to access fields in a structure pointed to by a pointer. Going to an address and looking at a field inside of it.

`n->number = 1;`
Go to `n`, then once you know what's on `n`. Use that to assign `number` field with a value 1.

^  Explanation of the cryptic code above
`(*n).number = 1;` 
1. `(*n)` go to the address of this pointer first. The parenthesis basically acts as an order of operations. PEMDAS like that
2. `.number` then access number and assign `1`



**Linked List**
 
**Node**, a component of a data structure that encapsulates some information. 
```C
// Defining a node in C
typedef struct node
{
    int number;
    struct node *next;
}
node;
```

Explanation of the code above
- We start this struct with `typedef struct node` so that we can refer to a `struct node` inside our struct.
- Then, we’ll have an `int` called `number`, for the value we want to store, and then a pointer to the next node with `struct node`. (We haven’t fully defined `node` yet, so the compiler needs to know it’s a custom struct still.
- Finally, `node` at the end lets us use just `node` in the rest of our program.

Represents an empty linked list.
node *list = NULL;  


-   We can build a linked list in code starting with our struct. First, we’ll want to remember an empty list, so we can use the null pointer: `node *list = NULL;`.
-   To add a node, we’ll first need to allocate some memory:
    
    ```
    node *n = malloc(sizeof(node));
    ```
    
    -   Recall that we can use `sizeof` to get the size of some data type, including structs. We want to allocate enough memory for both a value and a pointer, and we’ll point to that with `n`, a pointer to a `node`.

Freeing the linked list

```C
while (list != NULL)
{
    node *tmp = list->next;
    free(list);
    list = tmp;
}
```














### References
1. 