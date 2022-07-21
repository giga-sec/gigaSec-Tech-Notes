[[MOC Cybersecurity]]

# PICOctf
Created:  [[2022-07-20]]
Tags: #fleeting 

---
## Stonks (Binary Exploitation)
I made a bot to automatically trade stonks for me using AI and machine learning.
`nc mercury.picoctf.net 16439` to run the app
The source code is written in `C`

- [ ] Learn about binary exploitation


#### Binary Exploitation
requires a familiarity with C and a scripting language (preferrably python).


Know where to get learning resources -> https://www.hoppersroppers.org/roadmap/training/pwning.html


Intro -> https://github.com/hoppersroppers/nightmare
Binary means a compiled code
Most languanges like C, compiles the source code into binary before it gets executed
Binary exploitation is the process of using bugs to force binary to execute whatever code that we put into it.

Reverse Engineering
- Process of figuring out how something works
- Most of the time, you are just handed  a binary without any clue as to what it does
- The goal here is to figure out what it do, so you can attack it.


Read this: [https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/](https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/). Compile step by step and understand what is going on.
[[Compiling explained--turning source code into `1's` and `0's`]]

1.  On Linux, after you compile a C program it will be an ELF. There are big ole reference docs on this file format like all file formats, but we will skip that for now. In fact, we won't even waste a bunch of time learning about what ELFs are... do things, don't read about them. However, if you are the type of person who need to know something about what they are working with and you don't trust me, these resources are pretty decent.
    
    -   [https://www.opensourceforu.com/2020/02/understanding-elf-the-executable-and-linkable-format/](https://www.opensourceforu.com/2020/02/understanding-elf-the-executable-and-linkable-format/)
    -   [https://linuxhint.com/understanding_elf_file_format/](https://linuxhint.com/understanding_elf_file_format/)
2.  Do this readelf tutorial: [https://www.geeksforgeeks.org/readelf-command-in-linux-with-examples/](https://www.geeksforgeeks.org/readelf-command-in-linux-with-examples/)
    
3.  After that, work through [Aviv's Unit 01 notes](https://github.com/hoppersroppers/nightmare/blob/master/modules/00-intro/unit_01.md) on C programming and compilation. Do all of the work shown in the lecture.
    

This will not have made you an expert in C compilation but it is enough to get you started.




---
[[Ways to analyze Binary Files on Linux]]


Tool to check if string is Base64 encoded 
https://base64.guru/tools/validator


Ways to check if image has hidden message on it
->[[Steganography]]
-> Sometimes, it's in the metadata 
    Use `exiftool` in linux to check metadata of photo

Numbers can either be
Binary (1, 0)
ASCII 
HEX 
https://www.duplichecker.com/ascii-to-text.php
https://www.branah.com/ascii-converter




## References
1. https://opensource.com/article/20/4/linux-binary-analysis