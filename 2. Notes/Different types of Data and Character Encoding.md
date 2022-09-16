

# Different types of Data and Character Encoding
Created:  [[2022-08-01]]
Tags: #fleeting 

---
Working with networking protocols and network programming 
you will come across a variety of data and character encoding schemes.


So how does a computer store the letter A or the number 1?

How the computer store a number like 60101 ? or 62.0101?

How do you transmit the letter A etc to another machine across a network?


To store text as binary data, 
you must specify an _encoding_ for that text.

Computers systems uses different character encoding schemes.

As long as data stays on the computer it is really unimportant how it is encoded.
However to transfer data between systems a standard encoding scheme needs to be adopted.
ASCII was created as a standard for data exchange in encoding text


Because there were different ASCII variations for different languanges that uses non-english symbols. 
Unicode character set was created 
-> to encode foreign languanges and other graphic characters
UTF - 8  (most commonly used)
UTF - 16
UTF - 32


A variable width encoding scheme 
UTF - 8 is **fully backwards compatible** with ASCII. 
It uses 1 to 4 bytes.


Character Sets and Encoding Schemes
A character set is a list of characters 
An encoding scheme is how characters are represented in binary.

The encoding schemes UTF-8, UTF-16 and UTF-32 use the Unicode character set 
but encode the characters differently.

ASCII is a character set and encoding scheme.




Also
base 8 (highest value is 7)
146 141 154 143 157 156

Don't get confuse about the ASCII
This one is an ASCII
114 114 114 111 99 107 110 114 110 48 49 49 51 114




## References
1. http://www.steves-internet-guide.com/guide-data-character-encoding/