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
 