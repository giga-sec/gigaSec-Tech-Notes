[[Week 5 - Linked Lists, Trees, Data Structures]]

# Two Types of Memory Allocation
Created:  [[2022-06-25]]
Tags: #fleeting 

---
Static Memory Allocation
- The memory allocated is fixed and the size can't be increased/decreased during run time. 
- It uses the stack space

Problems with Static Memory Allocation
- If user entered less than the fixed size, then there's a waste of memory
- If user eneted MORE than the fixed size, program will crash

^^ Source: https://www.youtube.com/watch?v=udfbq4M2Kfc


[[Malloc Explained]]
?? When to use Dynamic Memory Allocation
- When we're not sure how much data we're gonna use during runtime
- It's flexible as it has the ability to grow the array if the programmer wants.

Dynamic memory allocation which uses malloc is **the process of assigning the memory space during the execution time or the run time**. 
Pointers play a very imporant role in Dynamic memory Allocation. 
Allocated memory can only be accessed through pointers.
- It uses the heap space. Heap is the segment of memory where dynamic memory allocation takes place.

^^ Source: https://www.youtube.com/watch?v=SuBch2MZpZM Visualizing Pointers in C

For instance, malloc(5 * sizeof(int)). we know that sizeof(int) is 4, so it's basically allocating (5 * 4) thus 20 bytes of memory in heap space, stored in there are garbage values. 












### References
1. 