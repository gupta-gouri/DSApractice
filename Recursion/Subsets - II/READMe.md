## Subsets - II

### Problem Statement
Given an integer array nums, which can have duplicate entries, provide the power set. Duplicate subsets cannot exist in the solution set. Return the answer in any sequence.

---

### Examples
**1. Input:** 
 `nums = [1, 2, 2]`

**Output:** 
`[ [ ] , [1] , [1, 2] , [1, 2, 2] , [2] , [2, 2] ]`
 
---

**2. Input:** 
 `nums = [1, 2]`

**Output:** 
`[ [ ], [1] , [2] , [1, 2] ]`

---

### Approach
- Sort the input list to group identical items together, simplifying the process of skipping duplicates.
- Use a helper function to explore subsets recursively, starting from the first item and tracking the current subset.
 - For each item, choose to include it in the current subset and recurse to the next item. Then, backtrack and exclude the item, skipping any subsequent duplicates, and recurse again.
- Upon reaching the end of the list, add the current subset to the result list. This ensures all possible subsets are captured while avoiding duplicates.
---

### Time complexity
 - **O(2^n)** - where N is the size of the given array.
Each element has two possibilities (include or exclude), resulting in 2N combinations.

### Space complexity
 - **O(n)** - O(N), due to the maximum depth of the recursion stack, which is k.