

# Valgrind
Created:  [[2022-07-10]]
Tags: #fleeting 

---
#### Abstract:


---
Sometimes bugs in your code that you don't see visually like possible memory leaks exists. 
```C
int main(void)
{
	char *s = malloc(2);  // Only accepts 2 bytes of char 
	s[0] = 'H';
	s[1] = 'I';
	s[2] = '!';
	s[3] = '\0';  
}
// This code will still run despite it having possible memory leak. 
```

Valgrind is a tool to help you determine memory bugs.


Memory Error
- reading uninitialized memory
- writing past the end of a piece of memory
- accessing freed memory


## How to read valgrind reports
### `Invalid read/write of size X`
- Accessing beyond the end of heap block
- Accessing memory that has been freed
- Accesing into unallocated region (unintialized pointer)

### `Use of uninitialised value`
or -> `Conditional jump or move depends on uninitialised value(s)`
First One: Program reads the value of an empty memory location 
Second One: Specifically occured in if/for/while


Solution:
-> Explicitly Initialize all of your variables!!!
    If you want int to be `0`, 
    or pointer to be `NULL`
    then make it so. Don't assign an empty thing!   


Memory Leak
- When allocated memory isn't freed














# References
1. https://web.stanford.edu/class/archive/cs/cs107/cs107.1226/resources/valgrind