[[C - Strings]]

# Strings are pointers
Created:  [[2022-06-18]]
Tags: #permanent 

---
Strings are pointers. 
A variable that stores only the address of the first char of a string. 


```C
char s[4] = "Hi!"

----------------------------
--> {'H', 'i', '!', '\0'} 
```


[[Strings are contiguous or connected to each other]]