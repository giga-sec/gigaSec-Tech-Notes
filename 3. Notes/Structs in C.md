[[Week 3 - BigO, Recursion, Data Search, Structs]]

# Structs in C
Created:  [[2022-06-12]]
Tags: #literature  

---
struct is a datatype
- There's defining struct, the name of the struct must be capitalized first letter
- Then we create variables from the defined struct (that variable doesn't have any value yet) 
- Last is the members in which the created variables can inherit the members traits which gives the value of the variable

```C
struct StructureName{
    datatype member1;  // datatype like (int, char)
    datatype member2;  //
}
```

There's two different ways we can create struct variables

A BETTER WAY TO define struct
- It's better because it reduces redundancy when calling the struct
```C
typedef struct StructureName{
      // code here
}
structureName
```












### References
1. 