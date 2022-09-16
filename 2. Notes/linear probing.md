

# linear probing
Created:  [[2022-07-04]]
Tags: #fleeting 

---
Abstract:


---
If we’re trying to insert an item but there’s one already there, simply move to the next slot. If the next slot is full too, move along again, until you find an empty one, wrapping around to the beginning if you hit the end of the array.

We try index 7 first, but that’s holding `foo`, so we move to index 8, but that’s holding `bazz`, so we move again to index 9, and that’s empty, 
so we insert "`x with value 200`" there:
![[Pasted image 20220704112229.png]]


We basically check the next bucket of the table, until we land on an empty spot. Or we go through the entire table and realize that table full. At that point, we no longer can add anything. 








### References
1. https://benhoyt.com/writings/hash-table-in-c/