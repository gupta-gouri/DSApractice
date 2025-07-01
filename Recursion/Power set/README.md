## Power set

### Problem statement
Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.
Do not include the duplicates in the answer.

---

### Examples
**1. Input:**
`nums = [1, 2, 3]`

**Output:** 
`[ [ ] , [1] , [2] , [1, 2] , [3] , [1, 3] , [2, 3] , [1, 2 ,3] ]`

---

**2. Input:** 
`nums = [1, 2]`

**Output:** 
`[ [ ] , [1] , [2] , [1,2] ]`

---

### Approach
- Base Case: When the current index equals the length of the array, it means all items have been considered. At this point, add the current subset (combination of included items) to the result list.
- Make a recursive call to the function without adding the current item to the subset. This explores the possibility of subsets that do not include the current item.
- Add the current item to the subset and make a recursive call to the function to explore subsets that include this item.
- Backtrack: After exploring the subsets that include the current item, remove it from the subset (backtrack) and continue exploring subsets with the next items. This step ensures that all combinations are considered.
- Continue the process recursively for each item, using both inclusion and exclusion to cover all possible subsets until all combinations are generated.

---

### Time complexity
- **O(2^N)** - Each element in the array has two choices: either to be included in a subset or not, leading to 2^n possible subsets.

### Space Complexity
- **O(N * 2^N)** - We generate 2^n subsets, and each subset can have up to n elements. Additionally, the recursion stack can go up to a depth of n.