When should I use recursion?
- Ask yourself, "Can I really break the problem down into subproblems that makes sense for recursion?"

Why should we use Recursion?
- Reduces the need for complex loops
- Can reduce the [[time complexity]] easily with memoization

Why should we ==NOT== use recursion
- Slowness due to CPU overhead
- If poorly constructed, can be unncessarily complex

---
#### Designing an algorithm for Recursion
1. Determine the base case. 
	Q: "What's my stopping condition? "

2. Determine the general case.
	Q: "How do I break these problem down into a subproblem?"
	
	
Example:
Base Case: `to_sixtynine(69) = user_inputted_Number`
General Case: `to_sixtynine(n) = to_sixtynine(n + 1)`

```C
if (given_number == 69)
{
	return given_number;
}

return to_sixtyNine(given_number + 1);
```


---
Link: https://www.youtube.com/watch?v=kepBmgvWNDw
### Understanding Recursion

`return 1 + func(3)`
The code will not `return` unless if the function `func()` is dealt first, meaning they already carry a returned value.  