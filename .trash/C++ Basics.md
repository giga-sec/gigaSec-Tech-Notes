[[MOC C++]]

# C++ Basics
Created:  [[2022-02-12]]
Tags: 

---
### Basic
```C++
#include <iostream>
using namespace std;
```

### User Inputs
When getting integers, chars, or doubles

```C++
int age;
cout << "Enter your age: ";
cin >> age;  // Use cin when getting int, char, or double

cout << "You are" << age << "years old";
```

### When getting strings
```C++
string name;
cout << "Enter your name: ";
getline(cin, name);  // Use getline() when getting strings

```

### Switch Statements
```C++
int num;

cout << "Enter a number: ";
cin >> num;				// Get user input
switch(num)
{
	case 0:
		cout << "You typed 0"
		break;
	case 1:
		cout << "You typed 1"
		break;
	default:
		day = "None of the cases are true. So this code executes";\
		break;
}
```






### References
1. 