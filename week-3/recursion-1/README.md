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

``` cpp
int fib(int n) {
    if (n == 1 || n == 0) return n;
    
    return fib(n - 1) + fib(n - 2);
}
```

#### Function Call Stack
![](images/1_rJ2sh-q1deQGGGVG5gYyIQ.png)