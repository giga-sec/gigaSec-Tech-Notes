[[Week 5 - Linked Lists, Trees, Data Structures]]

# Linked List
Created:  [[2022-06-25]]
Tags: #fleeting 

---
Abstract:



[[Linked List Code Snippets]]
- Creating a node or linked list
- Adding, Removing, Printing values to a linked list
- Freeing Multiple Nodes of a linked list
---
[[Malloc in C Explained]]

[[Dynamic memory allocation]]

A linked list is a linear data structure. It's a set of dynamically allocated nodes. 

---
## Linked list vs Array

Array's placeholder of values are called "elements"
and it's location as "index"

Now here, in linked list, we call the placeholder of values "node"
and the locations as "position"

### Inserting values into ARRAY
![[Inserting Values in an array.mp4]]
When inserting into array, we typically have to shift values.  When scenarios such as inserting array into the beginning of an array, we are gonna have to shift every index. 

However, adding values to the end of the array is faster compared to linked list. As we don't have to traverse each index. 


### Inserting values into LINKED LIST
![[Inserting Values in Linked List.mp4]]
Linked list is an alternative as we don't have to shift individual values. When we insert a node into the beginning of a linked list, we just have to change where we point the pointer.

The problem with linked list is we do not keep track of the position of nodes, thus computers can't automatically tell if its a 5th, 6th or last node. Thus in oder to add a node AT THE END OF THE LINKED LIST, we have to traverse each node from beginning until the NULL is found, thus we declare that it's the end of the linked list. 

----



My understanding:
The elements of a linked list can be anywhere in the memory and they can be linked to each other through the usage of pointers. For instance, we have `1` in address 0x135, then we have `2` in address 0x485


The good and bad of Linked List:
With linked list, we have the tradeoff of needing to allocate more memory for each value and pointer, in order to spend less time adding values. Dynamic memory allocation and pointers are required, which complicates the code and increases the risk of memory leaks and segment faults. Linked lists have a much larger overhead over arrays, since linked list items are dynamically allocated (which is less efficient in memory usage) and each item in the list also must store an additional pointer. However, since we don't keep track of any index numbers for the nodes in a linked list, we cannot tell just by examining a node if it is the second, or fifth node in the list. Linked lists function as an array that can grow and shrink as needed, data items can be added at any locations in the list.The disadvantage is that to get to a node, we must traverse to all the way from the first node to the node that we require. 
- More memory usage
- Items can be added or removed from the middle of the list
**=="When you start using more space, you can save time"
"When you start conserving space, you might lose time"==**


Symbols in C
-   `struct` to create custom data types
-   `.` to access fields, or values, in a structure. Mostly used in struct, getting that traits on a struct.
-   `*` to go to an address in memory pointed to by a pointer
- `->` Combination of, going inside of a structure `.` and `*` going to an address is. Basically from `(*n).number = 1;` to this `n->number` 

Every linked list has nodes and each node have two parts, the data section and the address section that holds the address of the next element in the list. The first and last node of a linked list are called the head and tail of the list, respectively. The tail node is a special node, where the next pointer is always pointing or linking to a null reference, indicating the end of the list.



(2)
`n->number = 1;`
Go to `n`, then once you know what's on `n`. Use that to assign `number` field with a value 1.

^  Explanation of the cryptic code above
`(*n).number = 1;` 
1. `(*n)` go to the address of this pointer first. The parenthesis basically acts as an order of operations. PEMDAS like that
2. `.number` tells us, go to "number" field (that's created by a struct)and assign `1`. 
https://overiq.com/c-programming-101/pointer-to-a-structure-in-c/







## [[Linked List Code Snippets]]
























### References
1. https://www.learn-c.org/en/Linked_lists
2. https://cs50.harvard.edu/x/2022/notes/5/#linked-lists
3. [https://www.cpp.edu/~ftang/courses/CS240/lectures/slist.htm](https://www.cpp.edu/~ftang/courses/CS240/lectures/slist.htm)
