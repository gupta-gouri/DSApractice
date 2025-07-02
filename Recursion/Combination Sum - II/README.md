## Combination Sum - II

### Problem Statement
Given collection of candidate numbers (candidates) and a integer target.Find all unique combinations in candidates where the sum is equal to the target.There can only be one usage of each number in the candidates combination and return the answer in sorted order.

e.g : The combination [1, 1, 2] and [1, 2, 1] are not unique.

---

### Examples
**1. Input:** 
`candidates = [2, 1, 2, 7, 6, 1, 5]` , `target = 8`

**Output:** 
` [ [1, 1, 6] , [1, 2, 5] , [1, 7] , [2, 6] ]`

**Explanation:**

The combinations sum up to target are

1 + 1 + 6 => 8.

1 + 2 + 5 => 8.

1 + 7 => 8.

2 + 6 => 8.

---

**2. Input:** 
`candidates = [2, 5, 2, 1, 2]`, `target = 5`

**Output:** [[1, 2, 2] , [5]]

**Explanation:**
The combinations sum up to target are

1 + 2 + 2 => 5.

5 => 5.

---

### Approach
- Sort the given array to handle duplicates efficiently.
- Use a recursive function to explore combinations, starting with an initial index and target sum.
- Include the current element in the combination and recursively call the function with the updated sum and next index.
- Backtrack by removing the last added element and skip duplicate coins to ensure unique combinations.
---

### Time complexity
 - **O(2^n * n)** - where n is the number of coins. This accounts for exploring all subsets of coins.

### Space complexity
 - **O(n)** - O(N), due to the recursion stack depth and storage for the current combination.