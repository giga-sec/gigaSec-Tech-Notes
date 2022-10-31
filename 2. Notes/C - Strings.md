[[Week 3 - BigO, Recursion, Data Search, Structs]]

# Strings in C
Created:  [[2022-06-18]]
Tags: #fleeting 

---
[[Strings explained in depth]]

[[Copying string pointers in C isn't straightforward]]

[[C - Code Snippets Strings]]


Every string ends with `\0`
`\0` is kinda like a period signifying the end point of a string. 


### Strings as an argument in functions
```C
int check(const char *word);
unsigned int hash(const char *word);
int load(const char *dictionary);
```
`char *variable_name` gets a `string` as an argument
And `const` is optional for getting `strings` as an argument
 -> It just makes it so strings passed will not get changed inside the functions.



### Different ways to declare strings in C
```C
char s[10] = "Hello";  // char array makes string writable

// char pointer makes string constant
char *t;
```


