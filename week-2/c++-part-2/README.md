# C++ Part - 2

### String
- **Strings** is a collection of characters. 
- It is similar to arrays, but has more functionalities than arrays. 
- That means, all the array operations are valid on a string, but you have additional methods available as well.

``` cpp
#include<string> // Not needed if you are using bits/stdc++.h

using namespace std;

int main() {
   string s = "Hello World!";
   return 0;
}
```

#### Input and Output
- For String I/O, we can use `cin` and `cout` statements.
``` cpp
#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	cin >> s;

	cout << "The string you entered is: " << s << endl;

	return 0;
}
```

#### Accessing characters
**String** eventually stores characters as an array. So like arrays, you can loop on the characters of string and access them by index. Or you can use the for-each loop as well.

``` cpp
for(int i = 0; i < s.length(); i++) {
   cout << s[i];
}

for(char x : s) {
   cout << x << " ";
}
```

#### Updating characters
Similar to arrays, we can update character at any index by `=` operator. Strings in C++ are **mutable** unlike some programming languages like Java, Python.

``` cpp
string s = "Hellw";
s[4] = 'o';
```

#### String Methods
Besides array-like operations, you can perform many other operations on Strings using some predefined methods. The following are examples of few commonly used ones:

``` cpp
string s = "Hello World";

// length
s.length();

// concatenation
string a = "Hello ", b = "World";
string res = a + b; // "Hello World"

// Equality
string a = "Test", b = "Test";
bool res = a == b; // true
a.compare(b); // = 0 if equal, < 0 is a is smaller, > 0 if a is larger

// Substring extraction
s.substr(1, 4); //ello, first argument is starting index and second is length

// Substring search
s.find("orl"); // First index where "orl" is present in string. If not found returns string::npos

// Replacing substring
s.replace(0, 3, "Hi"); // Replaces 3 characters from index 0 with "Hi"

// Inserting substring
s.insert(6, "new "); // Hello new World, Inserts the substring at index 6

// Iterators
s.begin() and s.end();

// Erase
s.erase(2, 3); // Erases 3 characters starting from index 2
s.erase(s.begin() + 1, s.begin() + 5); // Erases all characters in between indices [1, 5)
```

### Memory allocation
![](images/images%20(1).png)
Generally any program that running needs memory, to store the variables. Whenever a program is running the variables might change so it needed to be stored somewhere. 
The memory (RAM) is categorised into 4 parts.
1. **Program Code:** This where the entire program code loaded.
2. **Global (Static):** Global variables are stored here.
3. **Stack:** Local Variables and Function calls are stored
4. **Heap:** Dynamic (Free) memory, this used for dynamic allocation.

- Statically declared arrays (i.e arrays whose size is fixed and known at compile time) are stored in Stack memory.
- Variables whose size is determined at run time i.e dynamic sized variables are stored in heap memory. For example, dynamic sized arrays are stored in heap memory.
- Basically, whatever is created at run time uses heap memory.
- The varable whose size are fixed and known at compile time are created in stack memory.


### Pointers
**Pointers** in C++ are variables that store memory addresses. They allow you to directly manipulate memory, which can be very powerful but also requires careful handling to avoid bugs like segmentation faults or memory leaks.
![](images/pointers-in-c.png)

``` cpp
int x = 10; // We define an integer variable. It gets assigned 4 bytes in stack memory
int *ptr = &x; // We create a pointer on variable x. The pointer (ptr) stores the address of x
```

**Note:** `&` is the **addressOf** operator when used on the **right hand** of an` =` sign and can be used for defining references if used on left hand side or in function arguments. Similarly, `*` operator generally is used as valueOf operator except when it is declared with a data type in front of it, in that case it is for declaring a pointer variable.

**Note:**  In C++, references just means aliases (alternative name) to existing variables. They do not occupy any memory.

We can directly modify values of variables using pointers. For example: 
``` cpp
int x = 10;
int *ptr = &x; // We create a pointer on x
*ptr = 20; // Updates the value of x to 20.
```
Note, in the above e xample the usage of * operator. In the second line we have int *ptr = &x; . This tells us to create a pointer and assign it the value of address of variable x.

In Line 3, we write *ptr = 20 . As mentioned above, * without a data type before it is considered as valueOf operator. So it is read as Set valueOf variable pointed by pointer ptr (i.e x) to 20.


### Data type of pointer
Pointers themselves are always integers / longs as they hold memory location. They generally occupy a size of 8 bytes (or 4 bytes for 32-bit system).

However, we might see the different types of pointers are defined depending on the data type whose address it holds.

For example we define `int *ptr` for pointers holding address of integer variables. Similarly, we define `double *ptr` for pointers holding address of double variables. But the type of the pointer only signifies what is the data type of the variable whose address it holds and does not have anything to do with its memory allocation.

### Pointer of Pointer
It is a pointer to some pointer, i.e stores address of a variable which is a pointer.
``` cpp
int x = 10;
int *ptr = &x; // ptr stores address of x
int *ptr1 = &ptr; // ptr1 stores address of ptr
cout<< *ptr1; // Prints address of x
cout<< **ptr1; // Prints value of x
```