[[C - Code Snippets Strings]]

# Get size of string
Created:  [[2022-08-15]]
Tags: #fleeting 

---
Every string ends with `\0`
`\0` is kinda like a period signifying the end point of a string. 

Equipped with the knowledge above. We can use it to get the size of string 
```C
// Get the length of a string
int str_length(char str[])
{
    int len;
    while (str[len] != '\0')
        i++;
    return len;
}
```












## References
1. 