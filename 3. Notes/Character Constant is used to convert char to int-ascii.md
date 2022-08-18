[[The ANSI C Programming Languange - Book]]

# Character Constant is used to convert char to int-ascii
Created:  [[2022-08-15]]
Tags: #fleeting 

---
A character surrounded by `''` like `'A'` is called **Character Constant** 
A character constant makes it possible to convert character into ASCII
```C
int num = 'A';
printf("%i", num);
```

If you surrounded `A` with `""` like `"A"`
It will give you an error
```C
int num = "A";
error: expected expression before 'int'
```













## References
1. 