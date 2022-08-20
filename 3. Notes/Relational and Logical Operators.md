[[The ANSI C Programming Languange - Book]]

# Relational and Logical Operators
Created:  [[2022-08-19]]
Tags: #fleeting 

---
1. `> >= < <=` This are Relational Operators and they Have same precedence
2. `== !=` This are Logical Operators and have same precedence
3. `&&` still logical Operator
4. `||` still logical Operator


```C
int i;
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
    s[i] = c;
```


Expressions connected by `&&` or `||` are evaluated left to right, 
evaluation stops as soon as the truth or falsehood of the result is known


```C
i < lim-1 && (c=getchar()) != '\n' && c != EOF
true && (c=getchar()) != '\n' && c != EOF
true && c != '\n' && c != EOF
true && true && c!= EOF
true && true && true
true && true
true
```

```C
1 < 2 && 3 != 4 && 3 > 4
true && 3 != 4 && true
true && true && true
```
I think it reads all of the expression first as to evaluate what operator to priortize first
Then it does the evaluation in that manner


A loop equivalent to 
```C
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
    s[i] = c;
```


Constructions like `!valid` read nicely saying (``if not valid''),








