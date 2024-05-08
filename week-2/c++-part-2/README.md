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