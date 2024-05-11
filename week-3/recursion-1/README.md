# Recursion: Part 1

### Introduction to Recursion

#### What is Recursion?
![](images/1_RzsENqKDC_gE42PrCLrspQ.png)
- A function calling itself (with different parameters) is called recursion.
- For example: f(n) = f(n-1) + f(n-2) is an example of recursion.

#### Visual Representation (Recursion Tree)
```
            fib(6)
           /      \
      fib(5)        fib(4)
      /     \       /     \
  fib(4)  fib(3) fib(3) fib(2)
  /     \
fib(3) fib(2)
```

#### Function Call Stack
