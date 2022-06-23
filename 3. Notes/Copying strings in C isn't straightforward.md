[[Strings in C]]

# Copying strings in C isn't straightforward
Created:  [[2022-06-18]]
Tags: #permanent 

---
Isn't straightforward in a way like making a new variable for pointer
```C
char *s = get_string("Name: ");  
char *t = s;  		   

t[0] = toupper(t[0])
```


Any changes we made to variable pointer `t` will also affect the variable pointer `s`. 


### To make a unique copy
strcpy() is used to copy the string.















### References
1. 