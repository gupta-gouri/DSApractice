## Check if there exists a subsequence with sum K

### Problem Statement
Given an array nums and an integer k. R﻿eturn true if there exist subsequences such that the sum of all elements in subsequences is equal to k else false.

---

### Examples
**1. Input:** 
`nums = [1, 2, 3, 4, 5]` , `k = 8`

**Output:** `Yes`

**Explanation:** The subsequences like [1, 2, 5] , [1, 3, 4] , [3, 5] sum up to 8.

---

**2. Input:** 
`nums = [4, 3, 9, 2]` , `k = 10`

**Output:** No

**Explanation:** No subsequence can sum up to 10.

---

### Approach
- Start with the first item and explore two options: including the item in the current expenditure or excluding it.
- Recursively repeat the process for the next item with the updated target amount, adjusting the sum accordingly.
- Base cases include: achieving the target amount (success), running out of items (failure if target not met), or if the target becomes negative (failure).
- Continue this process until all combinations are explored, and determine if any of them meet the exact target amount.

---

### Time complexity
 - **O(2n)** - Each item has two choices (include or exclude), leading to an exponential number of combinations.

### Space complexity
 - **O(n)** - The maximum depth of the recursive call stack is equal to the number of items.