# Two Sum

You are given an array of N elements, and also a number k. Find if there are 2 elements, whose sum is equal to k.

### Example 1:
- **Input:** nums = [2,7,11,15], target = 9
- **Output:** True
- **Explanation:** Because nums[0] + nums[1] == 9, we return `True`.

### Example 2:
- **Input:** nums = [3,2,4], target = 6
- **Output:** True

### Example 3:
- **Input:** nums = [3,3], target = 7
- **Output:** False

### Solution
We can fix every element and try searching for the other element, such that their sum is `k`. If found, return `true`, else `false`.

For that, we can sort the array first. Now go through all the elements one by one. For every element `i` the question becomes, is there another element which is **equal to** `k - arr[i]`.

``` cpp
bool bs(vector<int> &nums, int target) {
    int lo = 0, hi = nums.size() - 1;

    while (lo <= hi) {
        int mid = (lo + hi)/2;
     
        if (nums[mid] == target) return true;
        else if (nums[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
  
    return false;
}

bool twoSum(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
   
    for(int i = 0; i < n; i++) {
	   int target = k - nums[i];
	
       if (bs(nums, target)) return true;
    }
   
   return false;
}
```