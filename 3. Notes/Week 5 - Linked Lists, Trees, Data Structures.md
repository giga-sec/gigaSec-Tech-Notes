[[MOC Programming]]

# CS50 - Week 5
Created:  [[2022-06-19]]
Tags: #fleeting 

---
Arrays in C are equivalent to pointers

With a sorted array, we have running time of O(log⁡ *n*) for search, and O(*n*) for insert, or adding a new value.

The best case running times for insert and search both have Ω(1), since we might get lucky and find our value immediately, or have free memory after our array to add a new value to.

[[Two Types of Memory Allocation]]






Array's address are contiguous (rightnext to each other, like 0x136, 0x137, 0x138).

Linked list can be anywhere in the memory and they can be linked to each other through the usage of nodes. For instance, we have `1` in address 0x135, then we have `2` in address 0x367


[[How to implement a linked list in C]]

With a linked list, we have the tradeoff of needing to allocate more memory for each value and pointer, in order to spend less time adding values. (When we copy an array, we do need to allocate more memory, but we free the old array once we finish copying it.)

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


### Hash Table
We can represent the letters of the Alphabet here. `0` for A and `25` for Z. These looks like a dictionary but dictionary is a concept that doesn't use some sort of things to put more things in a bucket. For instance, in dictionary, if bucket 1 has a value in it, then that's it, you can't add any values in it anymore and can only replace it.
![[Pasted image 20220624105028.png|50]]

There's an array vertically here. The extra names can be used as "linked lists". -     
    The array has 26 pointers, some of which are null, but some pointing to a name in a node, each of which may also point to another name in another node.
![[Pasted image 20220624105157.png|300]]

```C
typedef struct node
{
    char word[LONGEST_WORD + 1];
    struct node *next;
}
node;
```


To create a hash_table thing. `NUMBER_OF_BUCKETS` is the size of the hash table.
```C
node *hash_table[NUMBER_OF_BUCKETS];
```


To decide which bucket, or location in the array, that a value should be placed in, we use a **hash function**, which takes some input and produces an index, or location.


Hash Table is technically faster than a single linked_list. But it's only gonna be fast when there aren't that many nodes in a single bucket. 


Another Data Structure, is trie, hard to explain but it's definetly better than Hash Table, Linked List or somethin like that. The cost for this, though, is that we need lots of memory to store mostly null pointers.
![[Pasted image 20220624111339.png]]
Basically, the idea here is if the name is Hagrid. Then it first searches for the H in the first tree, then a, g, r until it reaches to d where there is a "true" value that indicates that's where we end. 
Now my question is what if in hagrid, when searching for i, there is a true value in it because there's someone's name called "Hagri". 

As amazing as it sounds, the instructor said "Hash Table" is not that used type of data structure. 



Another Data Type Structure
Queue - FIFO property, first in first out. 
How can you implement it?
- To add a value we **enqueue** it, and to remove a value we **dequeue** it. We could use an array that we have to grow, or we could use a linked list.


-     
    Another abstract data structure is a **stack**, where items most recently added are removed first: last-in-first-out **(LIFO)**. In a dining hall, we might take, or **pop**, the top tray from a stack, and clean trays would be added, or **pushed**, to the top as well.


Learning about queue in an animation easy way:
https://www.youtube.com/watch?v=ItAG3s6KIEI








### References
1. https://cs50.harvard.edu/x/2022/notes/5/#linked-lists
2. https://youtu.be/-gpsiMiEOHU