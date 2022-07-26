

# Python Dictionaries - Dictionary
Created:  [[2022-07-26]]
Tags: #fleeting 

---
New Term:
[[Associate Array]]

---
Dictionary in python is basically [[Associate Array]].

A dictionary is basically
- collection of key-value pairs. 
- Each pair maps the key to its respective value.

[[definining Dictionary in Python - Code Snippet]]



GET the value of a particular key
```python
dictionary.get('name_of_key')
```

REPLACE a value of a particular key
```python
dictionary['name_of_key'] = 'new value to replace old value of key'
```

ADDING a key-value pair in the dictionary
```python
dict['new_key'] = 'new_value'
```



How dictionary works
How to read a dictionary code
How to understand a dictionary code
![[Pasted image 20220726112847.png|200]]
Translating the picture to a code would look like this
```python
MLB_team = {
     'Colorado' : 'Rockies',
     'Boston'   : 'Red Sox',
     'Minnesota': 'Twins',
     'Milwaukee': 'Brewers',
     'Seattle'  : 'Mariners'
}
```
Remember, dictionary uses `key: value` syntax






## References
1. https://realpython.com/python-dicts/