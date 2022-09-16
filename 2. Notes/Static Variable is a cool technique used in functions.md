[[Different Variables in C]]

# Static Variable
Created:  [[2022-08-19]]
Tags: #fleeting 

---
```C
void printNum() {
    static int num = 0
    printf("%i\n", num++);
}

int main() {
    printNum();  // 1
    printNum();  // 2
    printNum();  // 3
}
```
When calling a function, 
`static` variable makes the initialization of its value only once. 
When `printNum()` is called again, it will never initialize the value of `num` to `0` again ...
... and will still have the same value as before, which is `1`

```C
void printNum() {
    int num = 0
    printf("%i\n", num++);
}

int main() {
    printNum();  // 1
    printNum();  // 1
    printNum();  // 1
}
```
Local Variables are by default -> [[Automatic Variables]]
When calling the function, it will always initialize any variable to its expression.














## References
1. 