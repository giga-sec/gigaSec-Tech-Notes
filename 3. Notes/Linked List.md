[[Week 5 - Linked Lists, Trees, Data Structures]]

# Linked List
Created:  [[2022-06-25]]
Tags: #fleeting 

---
[[Malloc in C Explained]]

After arrays, the second most popular data structure is Linked List. A linked list is a linear data structure. It's a set of dynamically allocated nodes. 



My understanding:
The elements of a linked list can be anywhere in the memory and they can be linked to each other through the usage of nodes. For instance, we have `1` in address 0x135, then we have `2` in address 0x485


The good and bad of Linked List:
With linked list, we have the tradeoff of needing to allocate more memory for each value and pointer, in order to spend less time adding values. Dynamic memory allocation and pointers are required, which complicates the code and increases the risk of memory leaks and segment faults. Linked lists have a much larger overhead over arrays, since linked list items are dynamically allocated (which is less efficient in memory usage) and each item in the list also must store an additional pointer.
- More memory usage
- Items can be added or removed from the middle of the list
**=="When you start using more space, you can save time"
"When you start conserving space, you might lose time"==**



Symbols in C
-   `struct` to create custom data types
-   `.` to access fields, or values, in a structure. Mostly used in struct, getting that traits on a struct.
-   `*` to go to an address in memory pointed to by a pointer
- `->` Combination of, going inside of a structure `.` and `*` going to an address is. Basically from `(*n).number = 1;` to this `n->number` 


? I don't understand this note ;-; 
`n->number = 1;`
Go to `n`, then once you know what's on `n`. Use that to assign `number` field with a value 1.

^  Explanation of the cryptic code above
`(*n).number = 1;` 
1. `(*n)` go to the address of this pointer first. The parenthesis basically acts as an order of operations. PEMDAS like that
2. `.number` tells us, go to "number" field (that's created by a struct)and assign `1`. 


Every linked list has two parts, the data section and the address section that holds the address of the next element in the list, which is called a node.
Linked lists function as an array that can grow and shrink as needed, from any point in the array



The size of the linked list is not fixed, and data items can be added at any locations in the list. The disadvantage is that to get to a node, we must traverse to all the way from the first node to the node that we require. 


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


[[C - Freeing a linked list]]














### References
1. https://www.learn-c.org/en/Linked_lists