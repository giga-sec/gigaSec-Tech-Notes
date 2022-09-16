

# Conditional Expression as one liner if else in C
Created:  [[2022-08-19]]
Tags: #fleeting 

---
Normal Readable if else statement
```C
if (1 == 2)
    printf("True: 0");
else
    printf("False: 1");
```

One Liner If Else Statement in C (Conditional Expression)
```C
(1 == 2) ? printf("True: 0") : printf("False: 1");
```

Conditional Expression or Ternary Conditional
Visualization
```C
(1 == 2) ?
    printf("True: 0"):
    printf("False: 1");
```



Prolly Useful info !! copy pasted !!
> expr1 ? expr2 : expr3;
> If expr2 and expr3 are of different types, the type of the
result is determined by the conversion rules discussed earlier in this chapter. For example, if f
is a float and n an int, then the expression













## References
1. 