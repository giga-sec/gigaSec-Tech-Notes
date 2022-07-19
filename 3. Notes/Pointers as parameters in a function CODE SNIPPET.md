[[Address vs Pointers in C]]

# Pointers as parameters in a function
Created:  [[2022-06-29]]
Tags: #permanent 

---
Why is it used?
- lksdfjklsdlflsdflkjsdlf

```C
void swap(int *c, int *d)
{
    int *temp = c;
    *c = *d;
    *d = *temp;
}

int main()
{
	swap(&a, &b);  // Remember that `&` is getting the address
}
```















### References
1. 