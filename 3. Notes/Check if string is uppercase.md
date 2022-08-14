[[C - Code Snippets Strings]]

# Check if string is uppercase
Created:  [[2022-08-15]]
Tags: #fleeting 

---
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












## References
1. 