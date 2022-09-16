[[Base Number Conversion]]

# Decimal to Hexadecimal
Created:  [[2022-08-16]]
Tags: #fleeting 

---
Divide the decimal number by `16` until (*the number that is being divided*) [[dividend]] <= `0`
Each `remainder` will be in a reverse order of when they got divided


Check this example
```
Dividend            Remainder
540       %   16 =  12
33        %   16 =  1
2         %   16 =  2
0         %   16 =  0
```
The order of remainder is 12, 1, 2, 0
We're gonna reverse that to 0, 2, 1, 12
Like this -> `0 2 1 12`
Remove any leading zeros -> `2 1 12`
Convert numbers >= 10 to their respective letters -> `2 1 C`
Add the hexadecimal prefix -> `0x21C`











## References
1. https://www.tutorialspoint.com/how-to-convert-decimal-to-hexadecimal#:~:text=Take%20decimal%20number%20as%20dividend,number%20is%20greater%20than%20zero.