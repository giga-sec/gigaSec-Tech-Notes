[[Week 3 - BigO, Recursion, Data Search, Structs]]

# Strings in C
Created:  [[2022-06-18]]
Tags: #fleeting 

---
[[Strings explained in depth]]

[[Copying strings in C isn't straightforward]]



bool check(const char *word);
unsigned int hash(const char *word);
bool load(const char *dictionary);
```
`char *` is what we used to call `string`. 
So those three functions above are essentially just:
```C
bool check(const string word);
unsigned int hash(const string word);
bool load(const string dictionary);
```
And `const`, makes it so that strings passed will not get changed 
you won’t be able to change them accidentally or smtnh


### Types of char in strings C
```C
char s[10] = "Hello";  // char array makes string writable

// char pointer makes string constant
char *t;

// When you only want to assign string pointer with a value later, then Use malloc
t = malloc(sizeof(char) * 1024); /
if (t == NULL)
    {
        fprintf(stderr, "Failed to allocate memory!\n");
        exit(1);
    }
```




Comparing Strings in C is a little bit trickier. `string` library has function, `strcmp`




Then Code Snippets
str_length
str_toUpper
str_isAlpha



Every string ends with `\0`
`\0` is kinda like a period signifying the end point of a string. 

Equipped with the knowledge above. We can use it to determine the size of a string.
```C
// Get the length of a string
int str_length(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
```


```C
// Make letters be UPPERCASE. Please put letters only
const char* str_toUpper(char str_ltr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        // Skips if already in uppercase
        if ((str_ltr[i] >= 'A') && (str_ltr[i] <= 'Z'))
        {
            continue;
        }

        // Convert lower to UPPER
        str_ltr[i] -= 32;
    }
    return str_ltr;
}
```


```C
// Check if all char in string is letters
int str_isAlpha(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        {
            if ((str[i] >= 'A') && (str[i] <= 'Z'))
            {
                continue;
            }
            else if ((str[i] >= 'a') && (str[i] <= 'z'))
            {
                continue;
            }
            else // if its not Alphabetical
            {
                return 1;
            }
        }
        return 0;  // All characters are alphabet
}
```





### References
1. 