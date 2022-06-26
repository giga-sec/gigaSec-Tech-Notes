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





Every linked list has nodes and each node have two parts, the data section and the address section that holds the address of the next element in the list.
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
```C
node *n = malloc(sizeof(node));
```


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

Defining a node
```C
typedef struct node {
    int val;
    struct node * next;
} 
node;
```

Printing each value of a node
```C
void print_list(node *head) {
    node *current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;  // Goes to next node
    }
}
```


Adding an item to the BEGINNING of the linked list
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


Removes the first node and remembers what the value of it
```C
int pop_first(node ** head) {
    /***
    Take the next item that the head points to and save it
    Free the head item
    Set the head to be the next item that we've stored on the side
    ***/
    int retval = -1;  // Retrieves Value, in case if I want it
    node *next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    // `*head->next` will give you an error
    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}
```


Adding an item to the END of the list
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

Removes the last node and remembers what the value of it
```C
int pop_last(node *head)
{
    // Very Similar to adding num to end
    // Exception: Look two items ahead, see if next item is the last

    int retval = -1;
    // if there is only one item in the list, remove it
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    // get to the second to last node in the list
    // Look two items ahead, see if next item is the last
    node * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* now current points to the "second to last item" of the list, so let's remove `current->next` */
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}
```

Removes by value specified in the argument
```C
int remove_by_value(node **head, int val) {

    node *current = *head;
    node *temp_node = NULL;


    // If first node matches with the value
    if (current->val == val)
    {
        *head = current->next;
        return 0;
    }

    // Let's look at the value two steps ahead
    // So that the first step acts as a previous value
    while (current->next->val != val)
    {
        if (current->next == NULL)
        {
            printf("Value isn't on the linked list");
            return 1;
        }
        current = current->next;
    }


    // Store the value of what's about to be deleted
    temp_node = current->next;

    // Basically saying current->next->next;
    // Make the previous node of "whats about
    // to be deleted" point to the next node of "what's about to be deleted"
    current->next = temp_node->next;

    // Free the memory of
    free(temp_node);


    return 0;
}
```

Remove by the index of the linked list and remembers what the value of it
```C
int remove_by_index(node **head, int n)
{
    int i = 0;
    int retval = -1;
    node *current = *head;
    node *temp_node = NULL;

    // If removing the first index
    if (n == 0)
    {
        return pop_first(head);
    }


    // Iterate to the node before the node we wish to delete
    for (i = 0; i < n - 1; i++)
    {
        if (current->next == NULL)
        {
            return -1;
        }
        current = current->next;
    }

    // Tf does this mean here?
    if (current->next == NULL)
    {
        return -1;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return retval;
}
```




















### References
1. https://www.learn-c.org/en/Linked_lists
2. https://cs50.harvard.edu/x/2022/notes/5/#linked-lists
3. 