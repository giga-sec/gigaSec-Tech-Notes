[[MOC Programming]]

# CS50 - Week 5
Created:  [[2022-06-19]]
Tags: #fleeting 

---
Arrays in C are equivalent to pointers

With a sorted array, we have running time of O(log⁡ *n*) for search, and O(*n*) for insert, or adding a new value.

The best case running times for insert and search both have Ω(1), since we might get lucky and find our value immediately, or have free memory after our array to add a new value to.


Dynamic memory allocation which uses malloc is **the process of assigning the memory space during the execution time or the run time**. Reasons and Advantage of allocating memory dynamically: When we do not know how much amount of memory would be needed for the program beforehand. It's flexible as it has the ability to grow the array if the programmer wants. 



Array's address are actually next to each other.
Linked list can be anywhere in the memory and they can be linked to each other.


With a linked list, we have the tradeoff of needing to allocate more memory for each value and pointer, in order to spend less time adding values. (When we copy an array, we do need to allocate more memory, but we free the old array once we finish copying it.)
"When you start using more space, you can save time"
"When you start conserving space, you might lose time"

-   `struct` to create custom data types
-   `.` to access fields, or values, in a structure. Mostly used in struct, getting that traits on a struct.
-   `*` to go to an address in memory pointed to by a pointer

To go inside of a structure `.` and `*` to go to an address is combined and formed into `->`
-   `->` to access fields in a structure pointed to by a pointer. Going to an address and looking at a field inside of it. 

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



`n->number = 1;`
Go to `n`, then once you know what's on `n`. Use that to assign `number` field with a value 1.

^  Explanation of the cryptic code above
`(*n).number = 1;` 
1. `(*n)` go to the address of this pointer first. The parenthesis basically acts as an order of operations. PEMDAS like that
2. `.number` then access number and assign `1`



Freeing the linked list

```C
while (list != NULL)
{
    node *tmp = list->next;
    free(list);
    list = tmp;
}
```




Binary Search in Binary Search Tree
```C
bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else if (number == tree->number)
    {
        return true;
    }
}
```



[[Trees in Programming]]




A binary search tree that looks like a linked list. If you use a Binary Search algorithm in this specific example, this will result into errors as you don't have something to search for on the left tree. 
![[imbalanced_tree.png|200]]










### References
1. https://cs50.harvard.edu/x/2022/notes/5/#linked-lists
2. https://youtu.be/-gpsiMiEOHU