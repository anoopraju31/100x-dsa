# Binary Search - Part 1

### Contents:
- [**What is Binary Search**](#binary-search---part-1)
- [**How does Binary Search work?**](#how-does-binary-search-work)
- [**Complexity Analysis**](#complexity-analysis)
- [**Code**](#code)

### What is Binary Search
- **Binary search** is a **searching algorithm**, that works on a **monotonic sequence (increasing or decreasing)** and efficiently searches for an element. 
- **Binary search** is an efficient algorithm for finding an item from a **sorted list of items**. It works by repeatedly dividing the list in half until the item is found, or it is clear that the item is not in the list.

### How does Binary Search work?
During the binary search, we always discard half of the search space. As I mentioned earlier, it works only on monotonic sequences i.e. sequences that are increasing or decreasing. 

Let’s take an example, we are given an array containing the following elements:

``` cpp
int arr[] = {1, 1, 2, 3, 4, 5, 6, 7, 8};
```

We need to search for the element `7` in the array.

Following is how the binary search program would execute:
1. Determine the **middle element**. `4` is the middle element (i.e. index `4`)
2. Now we know `7 > 4`. And as the array is increasing, it is definitely on the RHS. So we can just discard the left half and continue our search on the right half. So, the new search space we are considering is `[5, 6, 7, 8]`.
3. Repeat the same process. The **middle element** is `6`. As `7 > 6`, we know it lies on the RHS. So reject the left half. New search space becomes `[7, 8]`.
4. The middle element is 7. As it is the same as the requested element, so we return it.


### Complexity Analysis

- In **binary search**, as discussed, half of the search space is rejected every iteration. So in the worst case, we will be continuing till we are left with at least one element.
- So initially we start with `N` elements.
- After the first iteration, we have `N/2` elements
- After the second iteration, `N/4` elements.
- And so on.
    ```
    N -> N/2 -> N/4 -> N/8 -> N/16 -> ..... -> 1
    ```

- We can also write this as,
    ```
    N -> N/2 -> N/(2^2) -> N/(2^3) -> ..... -> N/(2^k)
    ```
    where `N/(2^k) = 1` and it runs for `k` iterations.

- So **k = log<sub>2</sub>(N)**
 
- The overall complexity of the binary search algorithm is, **log<sub>2</sub>(N)** where `N` is the search space.

### Code
``` cpp
int findIndex(int arr[], int n, int x) {
	 // lo, hi points to the lowest and highest indices of search space. Currently,
	 // we are considering the entire array so 0 and n-1 respectively.
    int lo = 0, hi = n-1;
   
    while (lo <= hi) {
	    int mid = (lo + hi) / 2;
	    
        if (arr[mid] == x) return mid;
        // x is on the right hand side, reject left half
	    else if (arr[mid] < x) lo = mid + 1;
		// x is on the left hand side, reject right half
	    else hi = mid - 1;
   }
   
   // If we come here, then we did not find the element.
   return -1;
}
```