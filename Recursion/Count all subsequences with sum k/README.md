## Count all subsequences with sum K

### Problem Statement
Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.

---

### Examples
**1. Input:** 
`nums = [4, 9, 2, 5, 1]` , `k = 10`

**Output:** `2`

**Explanation:** The possible subsets with sum k are [9, 1] , [4, 5, 1].

---

**2. Input:** 
`nums = [4, 2, 10, 5, 1, 3]` , `k = 5`

**Output:** 3

**Explanation:** The possible subsets with sum k are [4, 1] , [2, 3] , [5].

---

### Approach
- Create a recursive function that explores each element in the array. This function will consider two possibilities for each element: including it in the current subset or excluding it.
- Define the base cases for the recursion:
    - If the target sum is 0, return 1, indicating that a valid subset has been found.
    - If the target sum becomes negative or if the index exceeds the array bounds, return 0, indicating that no valid subset can be formed with the current configuration.
- For each element, make two recursive calls:
    - One call includes the current element in the subset and subtracts its value from the target sum.
    - The other call excludes the current element and moves to the next index.
- Add the results of the two recursive calls to get the total count of subsets that sum up to the target.

---

### Time complexity
 - **O(2n)** - Each item has two choices (include or exclude), leading to an exponential number of combinations.

### Space complexity
 - **O(n)** - The maximum depth of the recursive call stack is equal to the number of items.