# Complexity Analysis

**Complexity analysis** is a fundamental concept in computer science that involves assessing the efficiency of algorithms in terms of their resource usage, such as time and space. It helps in understanding how an algorithm's performance scales with increasing input size.

There are two primary aspects of complexity analysis:

1. **Time Complexity:** This measures the amount of time an algorithm takes to run as a function of the length of its input. Time complexity is often expressed using **Big O notation**, which provides an upper bound on the growth rate of the algorithm's running time. Common time complexities include `O(1)` (**constant time**), `O(log n)` (**logarithmic time**), `O(n)` (**linear time**), `O(n log n)` (**linearithmic time**), `O(n^2)` (**quadratic time**), `O(2^n)` (**exponential time**), etc.

2. **Space Complexity:** This measures the amount of memory an algorithm uses as a function of the length of its input. Space complexity is also expressed using **Big O notation**. It describes the maximum amount of memory required by the algorithm at any point during its execution, not necessarily the total memory used. Common space complexities include `O(1)` (**constant space**), `O(n)` (**linear space**), `O(n^2)` (**quadratic space**), etc.

### Asymptotic Notations
Asymptotic notations are the mathematical notations used to describe the running time of an algorithm when the input tends towards a particular value or a limiting value.

There are mainly three asymptotic notations:
1. **Big-O notation**
2. **Omega notation**
3. **Theta notation**

#### Big-O Notation
Big-O notation represents the upper bound of the running time of an algorithm. Thus, it gives the worst-case complexity of an algorithm.

![](images/big0.png)

We say, a function `f(n)` is `O(g(n))` if there exists a constant `𝑐 > 0`and a value **𝑛<sub>0</sub>** (usually some threshold) such that for all `n` greater than **𝑛<sub>0</sub>**, the value of f(n) is bounded above by `c⋅g(n)`.

Example:
- f(n) = n^2  + 5n - 6
- g(n) = 2n ^ 2
- So g(n) ≥ f(n)  n ≥ 3  (Solved using quadratic equation)
- So there exists, c = 2 and  = 3 such that f(n) ≤ c * g(n) for all n ≥ 
- So f(n) = O(g(n))

#### Omega Notation
Omega notation represents the lower bound of the running time of an algorithm. Thus, it provides the best case complexity of an algorithm.
```       
Ω(g(n)) = { f(n): there exist positive constants c and n0
            such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }
```
![](images/omega.png)

For example, f(n) = n^2 and g(n) = n + 10

#### Theta Notation
Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm.

```
Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0
            such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }
```
![](images/theta.png)