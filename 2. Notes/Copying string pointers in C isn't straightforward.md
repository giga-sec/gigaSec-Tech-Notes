[[C - Strings]]

# Copying strings in C isn't straightforward
Created:  [[2022-06-18]]
Tags: #permanent 

---
Isn't straightforward in a way like making a new variable for pointer
```C
char *small_ltr = "jonathan";
char *capital_ltr = small_ltr;

// Make the first letter capital
capital_ltr[0] = toupper(capital_ltr[0]);
```

The pointer `small_ltr` is racist and only allows small letter. 
But any changes we made to pointer `capital_ltr` will also affect the  pointer `small_ltr`.  
```C
printf("%s", small_ltr);    // Jonathan
printf("%s", capital_ltr);  // Jonathan
```


### To make a unique copy
strcpy() is used to copy the string.















### References
1. 