[[Week 5 - Linked Lists, Trees, Data Structures]]

# Linked List
Created:  [[2022-06-25]]
Tags: #fleeting 

---
Abstract:



Code Snippets
- Creating a node or linked list
- Adding, Removing, Printing values to a linked list
---
[[Malloc in C Explained]]

After arrays, the second most popular data structure is Linked List. A linked list is a linear data structure. It's a set of dynamically allocated nodes. 


My understanding:
The elements of a linked list can be anywhere in the memory and they can be linked to each other through the usage of pointers. For instance, we have `1` in address 0x135, then we have `2` in address 0x485


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

Every linked list has nodes and each node have two parts, the data section and the address section that holds the address of the next element in the list.

Linked lists function as an array that can grow and shrink as needed, data items can be added at any locations in the list.

The disadvantage is that to get to a node, we must traverse to all the way from the first node to the node that we require. 


(2)
`n->number = 1;`
Go to `n`, then once you know what's on `n`. Use that to assign `number` field with a value 1.

^  Explanation of the cryptic code above
`(*n).number = 1;` 
1. `(*n)` go to the address of this pointer first. The parenthesis basically acts as an order of operations. PEMDAS like that
2. `.number` tells us, go to "number" field (that's created by a struct)and assign `1`. 



(1)
All of the code snippets below is checked by valgrind and are memory bug free. 

Headers needed
```C
#include <stdio.h>
#include <stdlib.h>
```

## Linked List Code Snippets

[[C - Creating a node or linked list using struct]]

[[C - Print each value of a linked list]]

### Add values to a linked list

[[C - Add an item to the BEGINNING of the linked list]]

[[C - Add an item to the END of linked list]]


### Remove nodes of a linked list

[[C - Removes FIRST node and remembers what the value of it]]


[[C - Removes LAST node and remembers what the value of it]]


[[C - Remove node by INDEX of linked list and remembers what the value of it]]


[[C - Removes node by VALUE and also remembers what the value of it]]
























### References
1. https://www.learn-c.org/en/Linked_lists
2. https://cs50.harvard.edu/x/2022/notes/5/#linked-lists
3. 