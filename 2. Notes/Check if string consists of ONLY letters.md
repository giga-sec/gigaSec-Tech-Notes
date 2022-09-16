[[C - Code Snippets Strings]]

# Check if string consists of ONLY letters
Created:  [[2022-08-15]]
Tags: #fleeting 

---
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













## References
1. 