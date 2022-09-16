[[The ANSI C Programming Languange - Book]]

# C- goto keyword to get out of a nested loop
Created:  [[2022-08-20]]
Tags: #fleeting 

---
```C
for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
        if (a[i] == b[j])
            goto found;
            /* didn't find any common element */
            ...
found:
    /* got one: a[i] == b[j] */
    ...
```

You can use code without `goto` that does the same thing
```C
for (i = 0; i < n && !found; i++)
    for (j = 0; j < m && !found; j++)
        if (a[i] == b[j])
            found = 1;
if (found)
    /* got one: a[i-1] == b[j-1] */
    ...
```













## References
1. 