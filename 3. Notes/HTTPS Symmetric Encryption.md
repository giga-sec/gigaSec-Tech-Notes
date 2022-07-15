[[Encryption 101]]

# HTTPS Symmetric Encryption
Created:  [[2022-07-15]]
Tags: #fleeting 

---
#### Problem: 
How do you send  key with server without transmitting key for people snooping to see?

#### Metaphor for the problem:
Imagine you have a `secret code` and `instructions`  to read the secret code
Problem:
-> If you send your friend the instructions 
-> anyone else can read the `instructions` that unlocks the `secret code`

##### Solution: 
-> ask your friend for a `lock`. Only they have the `key` for this lock
If you send the `instructions` in a _indestructible locked box_ to your friend, 
Your friend can unlock the box with `lock` once it reaches them and read the `instructions`.
Finally, You've communicated the `secret code` without people snooping in

Conclusion:
In this metaphor
the `secret code` represents `symmetric encryption KEY`
the `lock` represents `server's PUBLIC key`












## References
1. 