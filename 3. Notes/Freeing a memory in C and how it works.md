[[Malloc in C Explained]]

# Freeing a memory in C and how it works
Created:  [[2022-07-24]]
Tags: #fleeting 

---
```c
int num = malloc(sizeof(int));
free(num);  // basically -> int num;
``` 

## free() only deletes values, not the variable itself. 
-> `free(num)`basically turns num into this `int num;` . 
Freeing num doesn't remove the variable. 
The variable `num` is still there but it no longer have any value attached to it. 


What this means is, 
We can still use the variable `num` and we can safely assign any value to it. 
#myquestion This brings me a question, can we just directly replace the allocated variable without freeing it in the first place?











## References
1. 