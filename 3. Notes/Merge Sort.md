**Worst Case Scenario**	O (n log n)
- We have to split n elements 

**Best Case Scneraio** Ω (n log n)
- The array is already perfectly sorted. But we still have to split and recombine it back together with this algorithm.

![[1 T4lE_CveG7rAkEziwKtpAw.jpeg]]

![[1 ZFpPwH6_ssRu5p8tM9T-vQ.jpeg]]
 The basic idea behind merge sort is it tends to be a lot easier  to sort two smaller sorted lists rather than sorting a single large, unsorted one.

#### [[Algorithm Design Paradigm]]
**Divide and Conquer**
1. **Divide** and break up the problem into the smallest possible "subproblem", of the exact same type.
2. **Conquer** and tackle the smallest subproblems first. Once you're figured out a solution that works, use that exact same technique to solve the larger subproblems - in other words, solve the subproblems recursively.
3. **Combine** the answers and build up the smaller subproblems until you finally end up applying the same solution to the larger, more complicated problem that you started off with!

#### My own Algorithm
1. Define arr = {any numbers here}
2. Define the indexes:
	1. l = for the far left index, (starts with 0)
	2. r = for the far right index
3. 