[[MOC Programming]]

# Advice I found in reddit when doing some programming
Created:  [[2022-06-28]]
Tags: #fleeting 

---
Abstract:
What are some universal things you need to learn as a programmer?
- The answer is basically what's the best way to approach solving a programming problem or doing some code in general.
---
Get the structures right and life is a lot simpler.

I've had problems that feel like a game of whack a mole, you figure out how to do one part of the problem and then the next part is a nightmare. You solve that but that breaks the first half or requires it to be changed extensively. When you hit this sort of thing a lot of the time it is a code or data structure related issue.

Changing what you're storing and passing between functions or change how you are splitting the task up and suddenly things can start to drop into place far easier.

There isn't always an elegant clean solution. But the chances of you coming up with the best structure for a non-trivial problem first try is low. So try something, if it feels like an up hill struggle to make it work then start again taking a different approach. Now you know the pitfalls and what doesn't work you can probably do a lot better.

Don't over optimise or optimise too soon. Most problems have a lot of possible solutions, these are normally a trade off between simplicity, readability, and efficiency (in either memory, time or both). Computers these days are fast and have lots of memory. Go for the the most readable and maintainable solution. If it's not good enough then profile it and optimise the worst bits. Early optimisation is making your life harder for some unknown and possibly unnecessary benefit. The only exception to this is normally the embedded world where resources are more limited but even then don't over do it too early.

Don't reinvent the wheel. The standard libraries for most languages are highly optimised and well tested. Use them whenever possible.












### References
1. https://old.reddit.com/r/learnprogramming/comments/vm2689/what_are_some_universal_programming_things_you/idz076b/