

# grep command
Created:  [[2022-07-06]]
Tags: #fleeting 

---
**Search a file for keywords** and spits it out.
grep means global regular expression print
Regex means regular expression. A “regular expression” is a text string that describes a particular search pattern.
`grep "TEXT TO SEARCH" filename.txt`


Every use of switches will be treat its "case"
If you want `grep` to ignore the “case” of your search parameter and search for both upper- and lower-case variations, you can specify the `-i` or `--ignore-case` option.
`grep -i "license" GPL-3`



Search for every line that does not contain the word `the` in the BSD license with the following command:
```
grep -v "the" BSD
```


Search for every line that does not contain the word `the` in the BSD license with the following command:
```
grep -v "the" BSD
```


You can add line number
`-n`

you could also just combine it with existing command
`-vn`


In the previous examples in this tutorial, when you searched for the words `GNU` and `the`, you were actually searching for basic regular expressions which matched the exact string of characters `GNU` and `the`. Patterns that exactly specify the characters to be matched are called “literals” because they match the pattern literally, character-for-character.








### References
1. 