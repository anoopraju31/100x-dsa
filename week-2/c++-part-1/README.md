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

#### `std::ios_base::sync_with_studio` 
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