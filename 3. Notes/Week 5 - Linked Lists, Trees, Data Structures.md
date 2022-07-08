[[MOC Programming]]

# CS50 - Week 5
Created:  [[2022-06-19]]
Tags: #fleeting 

---
Arrays in C are equivalent to pointers

With a sorted array, we have 
running time of O(log⁡ *n*) for search,
O(*n*) for inserting new value

Ω(1) for best case running times in insert and search
since we might get lucky and find our value immediately.


[[Two Types of Memory Allocation]]




[[Linked List]]


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

[[Binary Trees]]



[[Trees in Programming]]




A binary search tree that looks like a linked list. If you use a Binary Search algorithm in this specific example, this will result into errors as you don't have something to search for on the left tree. 
![[imbalanced_tree.png|200]]


### [[Hash Table]]



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