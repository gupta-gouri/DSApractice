## Subsets - I

### Problem Statement
Given an array nums of n integers.Return sum of all subsets of the array nums.

Output can be printed in any order.
---

### Examples
**1. Input:** 
 `nums = [2, 3]`

**Output:** 
` [ [0, 2, 3, 5] ]`

**Explanation:**

When no elements is taken then Sum = 0.

When only 2 is taken then Sum = 2.

When only 3 is taken then Sum = 3.

When element 2 and 3 are taken then sum = 2+3 = 5.

---

**2. Input:** 
 `nums = [5, 2, 1]`

**Output:** 
`[0, 1, 2, 3, 5, 6, 7, 8]`

**Explanation:**
When no elements is taken then Sum = 0.

When only 5 is taken then Sum = 5.

When only 2 is taken then Sum = 2.

When only 1 is taken then Sum = 1.

When element 2 and 1 are taken then sum = 2+1 = 3.

---

### Approach
- Initialize an empty list to store the results of subset sums.
- Define a recursive function that takes the current index, current sum, the input array, and the result list as parameters.
- In the recursive function, check if the current index has reached the end of the array. If so, add the current sum to the result list and return.
- Recursively call the function twice:
    - First call includes the current element in the sum, incrementing the index.
    - Second call excludes the current element from the sum, incrementing the index.
- Start the recursion with the initial index 0 and sum 0.
- Return the result list containing all possible subset sums after the recursion completes.
---

### Time complexity
 - **O(2^n)** - where N is the size of the given array.
Each element has two possibilities (include or exclude), resulting in 2N combinations.

### Space complexity
 - **O(n)** - O(N), due to the maximum depth of the recursion stack, which is k.