[[Week 5 - Linked Lists, Trees, Data Structures]]

# Binary Trees
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:


---
**Depth-first search (DFS)** is an algorithm for traversing or searching tree or  graph data structures. One starts at the root and explores as far as possible along each branch before backtracking.
**pre-order** visit, left, right, 
**in-order** left, visit, right, 
**post-order** left, right, visit


Traversal means visiting all the nodes of a graph. 


A standard DFS implementation puts each vertex of the graph into one of two categories:

1.  Visited
2.  Not Visited

The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

The DFS algorithm works as follows:

1.  Start by putting any one of the graph's vertices on top of a stack.
2.  Take the top item of the stack and add it to the visited list.
3.  Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the top of the stack.
4.  Keep repeating steps 2 and 3 until the stack is empty.














**Breadth-first search** is an algorithm for traversing or searching tree or graph structures. In level-order, where we visit every node on a level before going to a lower level.












### References
1. https://www.learn-c.org/en/Binary_trees