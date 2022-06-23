#fleeting 

A CPU with a single core is a bit like a person who can either breathe or talk, but not both at the same tme. When a single-core CPU needs to breathe, it stops talking. And when it needs to talk, it stops breathing. This is in contrast to multi-core CPU's which can do all of that at once. 


---
Copy pasted only. Make sure to read again
From: https://en.bitcoin.it/wiki/Why_a_GPU_mines_faster_than_a_CPU#A_CPU_is_an_executive

## A CPU is an executive

A CPU is designed primarily to be an executive and make decisions, as directed by the software. For example, if you type a document and save it, it is the CPU's job to turn your document into the appropriate file type and direct the hard disk to write it as a file. CPU's can also do all kinds of math, as inside every CPU is one or more "Arithmetic/Logic Units" (ALU's). CPU's are also highly capable of following instructions of the "if this, do that, otherwise do something else". A large bulk of the structures inside a CPU are concerned with making sure that the CPU is ready to deal with having to switch to a different task on a moment's notice when needed.

CPU's also have to deal with quite a few other things which add complexity, including:

-   enforcing privilege levels and the boundaries between user programs and the operating system
-   creating the illusion of "virtual memory" to programs
-   for the most popular processors, being backwards compatible with legacy code


## A GPU is a laborer

A GPU is very different. Yes, a GPU can do math, and can also do "this" and "that" based on specific conditions. However, GPU's have been designed so they are very good at doing video processing, and less executive work.

Video processing is a lot of repetitive work, since it is constantly being told to do the same thing to large groups of pixels on the screen. In order to make this run efficiency, video processors are far heavier on the ability to do repetitive work, than the ability to rapidly switch tasks.

GPU's have large numbers of ALU's, more so than CPU's. As a result, they can do large amounts of bulky mathematical labor in a greater quantity than CPU's.

## Analogy
One way to visualize it is a CPU works like a small group of very smart people who can quickly do any task given to them. A GPU is a large group of relatively dumb people who aren't individually very fast or smart, but who can be trained to do repetitive tasks, and collectively can be more productive just due to the sheer number of people.