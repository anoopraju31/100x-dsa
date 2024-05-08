# C++ Part - 1

### Understanding basics of C++
``` c++
#include<iostream>

using namespace std;

int main() {
   cout<<"Hello World"<<endl;
   return 0;
}
```
Let's understand it ppart by part:
1. `#include<iostream>`:
    - This is how we import libraries in C++
    - Consider it same as import axios from "axios"
    - The general structure is `#include<library_name>`.
    - `iostream` is a library that imports the **I/O objects**. 

2. `using namespace std;`: 
    - In C++, a **namespace** is a collection of related **names** or **identifiers** **(functions, class, variables)** which helps to separate these identifiers from similar identifiers in other namespaces or the global namespace. 
    - Almost everytime, we will be using the std namespace only, so don’t worry about this a lot.

3. `int main()`: 
    - `main` function is the entry point for a file / program. 
    - `int` is the return type of the main method. 
    - Generally we will return `0` to indicate successful completion. 
    - We can also return error codes to indicate what kind of error occurred. However, in our case we will only return 0.

4. `cout`: 
    - Used for **printing the output to the terminal** (or some file). 
    - Similar to console.log() in Javascript

5. `endl`: 
    - Prints a new line after the output is printed. 
    - In C++, we need to manually specify newlines using endl or \n. 
    - For example: 
        ``` cpp
        cout<<"Hello ";
        cout<<"World";

        // Output: Hello World
        ```
6. `return 0;`: 
    - It returns `0` from the `main` function. 
 

### I/O Operations
#### Output

- For output, we can generally use `cout` statement.
    ```cpp
    cout << "Hello World!";
    ```
- To print new line we can use `endl` or `\n`.
- The difference between both are:
    - `\n`: It insert a new line to the output stream.
    - `endl`: It insert a new line and flushes the output stream.
- So eventually, `count << endl;` is equivalent to using `cout << '\n' << flush;`
- `\n` is much faster than `endl`, so use `\n` everytime if possible (unless you need to flush the output).
- When printing a single element or some fixed set of elements (like 100) we can use `endl`.

**Note:** By default, all streams (input and output) are tied together. Tied streams ensure that one stream is flushed automatically before each I/O operations on the other stream. To untie, we can use : `cout.tie(NULL);`

#### Input
- For reading input, we generally use `cin` statement.
    ``` cpp
    int x;
    cin >> x;

    // We can even read multiple space or newline seperated inputs like this

    int x, y;
    cin >> x >> y;
    ```

#### Fast I/O
Generally, the input and output streams are tied, which causes flushing before every I/O operation. This can make program execution slower in case of large input size. So, we can untie the streams adding the statements  `cin.tie(NULL)` and `cout.tie(NULL)` at the beginning of the program.

##### `std::ios_base::sync_with_studio` 
Sets weather the standard C++ streams are synchronized to the standard C stream after each I/O operation. In practice, the means that the synchronized C++ streams are unbuffered and each I/O operation on a c++ stream is immediately applied to the corresponding C stream's buffer. This makes it possible to freely mix C++ and I/O.

In addition, synchronized C++ streams are guaranted to be thread-safe (individual characters output from multiple threads may interleave, but no data races occur).

If the synchronization is turned off, the C++ standard streams are allowed to buffer their I/O independently, which may be considerably faster in some cases.

So overall, add these 2 things before the start of any program. 

Example:
``` cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  // Your program here
}
```


### Data Types in C++
C++ is a strictly types language. So, we need to specify the data type of all variables before assigning them values or using them. Generally, data types are categorised into 3 types: 
1. Primary / Bulit-in Data Types
2. Derived Data types
3. User Defined Data Types

![](images/DatatypesInC.png)

#### Sizes of Primary Data Types
![](images/cpp_datatype1.png)

**Note:** Sizes of **derived** data types and **user defined** data types can be calculated from the size of **primary** data types. For example an integer array of length 8, will contain 8 integers. Each integer is 4 bytes. So the array size will be 8 * 4 bytes = 32 bytes

**Note:** The sizes (especially int and long long int) helps us identify which data type to use for inputs and calculations.


### Conditional statements in C++
C++ like Javascript has the following conditional statements:
1. **if else**
2. **switch**
3. **conditional operator**

#### if-else statements
``` cpp
if (condition_1) {
  // Executed if condition_1 is true
} else if (condition_2) {
  // Executed if condition_1 is false and condition_2 is true
} else {
  // Executed if both condition_1 and condition_2 are false
}
```
We can even have nested if else statements or just single if statement
``` cpp
// Only if statement
if (condition) {}

// Nested if else
if (condition_outer) {
   if (condition_inner) {}
   else {}
} else {}
```

#### switch statements
``` cpp
switch(variable) {
   case 1:
	   // When variable is 1
	   break;
	 case 2:
		 // When variable is 2
		 break;
	 default:
		 // When none of the case statements is satisfied
}
```
**Note:** The case value must be of type integer or character.
**Note:** 
Like Javascript, default statement is optional. Also break keywords are optional.


#### Conditional Operations
``` cpp
condition ? true_statement : false_statement
```
example:
``` cpp
bool is_even = (n % 2 == 0) ? true : false;

int absolute_diff = (a > b) ? a - b : b - a;
```


### Looping Statements
C++ like Javascript has the following conditional statements:
1. **For Loop**
2. **While Loop**
3. **Do While loop** (rearly uses)

#### For Loop
``` cpp
for (int i=0; i<n; i++) {
  // do something
}

// You don't always need to iterate on integer values only. Example:
for(char i='a'; i<='z'; i++) {
  // do something
}

// We also have for-each loop in C++, similar to javascript
for(int x: arr) {
  // You get each array values one by one in x. 
}

// We can also have nested loops
for(int i=0; i<n; i++) {
   for(int j=0; j<n; j++) {
      // Nested loop example
   }
}
```

The middle statement is a `conditional statement` and the last statement is `stepping statement`.  The conditional statement can be anything, that breaks at some point. The stepping statement, should change the iteration variable in any way. We can also initialise and use multiple iteration variables.

``` cpp
// Example of different way of writing iteration variable
for(int i=0, j=n-1; i<j; i++, j--) {
  // Step 1: i = 0, j = n-1
  // Step 2: i = 1, j = n-2
  // Step 3: i = 2, j = n-3
}
```

#### Early exits
Sometimes, we might want to break the loop before it runs to completion. Or we might want to skip to the next iteration in some cases. We can do these using break and continue statements respectively.

``` cpp
for(int i=0; i<n; i++) {
   if (i == 5) break; // We break when i reaches 5. So it does not continue with remaining iteration
   if (i % 2 == 0) continue; // We don't execute the loop for even values of i, just continue to next iteration value of i
   sum += i;
}
```


#### While Loop
``` cpp
while (i < 10) {
  // do something
  i++;
}
```


### Functions
- A function is a block of code which only runs when it is called.
- We can pass data known as parameters into a function.
- functions are used to perform certain actions ans they are important for reusing code. Define the code once, and use it many times.
- Functions take in some arguments and returns (may or may not) some values. 
- The return type of a function determines what type of data is returned. 
- If the return type is `void`, then it does not return any value.

``` cpp
int sum(int x, int y) {
   return x + y;
}


void print_data(int x) {
		cout<<"Number is: " << x <<endl;
}

int find_max(int a, int b) {
   if (a > b) return a;
   return b;
}

string concatenate(string a, string b) {
  string res = "";
  for(char x: a) res.push_back(x);
	for(char x: b) res.push_back(x);
  return res;
}
```

#### Function Overloading
- Function Overloading is defined as the process of having two or more function with the same name, but different in parameters is known as function overloading in C++. 
- In function overloading, the function is redefined by using either different types of arguments or a different number of arguments.

``` cpp
int add(int a, int b) {
  return a + b;
}

int add(int a, int b, int c) {
   return a + b + c;
}

add(2, 3); // Works
add(2, 3, 4); // Works as well
```

``` cpp
int add(int a, int b) {
   return a + b;
}

float add(float a, float b) {
   return a + b;
}

string add(string a, string b) {
   return a + b;
}

add(2, 3); // Works
add(2.2, 3.5); // Works as well
add("ab", "cd"); // Works as well
```


### Arrays
- Collection of elements of similar type is called an **array**. 
- Similar to javascript However, as C++ is strictly typed, we can only store elements of a single type, unlike Javascript.
- Each array element has some index. It starts from 0.
![](images/images.png)

#### Creating Arrays
1. Specify the size or the initial elements
    ``` cpp
    int arr[5];

    arr[0] = 0;
    cout << arr[0];
    ```
    
    ``` cpp
    int arr[] = {1, 2, 3, 4};

    // You either need to specify the size or initial elements.
    int arr[10]; 
    ```
2. To Create Dynamic sized array
    ``` cpp
    int n;
    
    cin>>n;
    
    int arr[n];

    // Now take input
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    ```

3. Using Vector
    - `vector` is C++ collection that allows us to create dynamic arrays.

#### Loop on arrays
Similar to javascript we can run a for loop
``` cpp
int arr[n];

for(int i=0; i<n; i++) {
   cin>>arr[i];
}
```

We can also run for-each loops as well, these assigns the array values to the variable directly instead of needing to access by index.
``` cpp 
for(int x: arr) {
   cout<<x<<" ";
}
```

#### Accessing elements
We can access elements of array using their index. For example, arr[3] gives the element at index 3, which is the 4th element of the array (Remember, array indices are 0 based)


#### Updating elements
We can assign values to array elements using = operator. Example:
``` cpp
arr[0] = 10;

arr[i] = i + 10;
```