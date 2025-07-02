## Combination Sum - III

### Problem Statement
Determine all possible set of k numbers that can be added together to equal n while meeting the following requirements:

There is only use of numerals 1 through 9.
A single use is made of each number.

Return list of every feasible combination that is allowed. The combinations can be returned in any order, but the list cannot have the same combination twice.
---

### Examples
**1. Input:** 
 `k = 3` , `n = 7`

**Output:** 
` [ [1, 2, 4] ]`

**Explanation:**

1 + 2 + 4 = 7

There are no other valid combinations.

---

**2. Input:** 
 `k = 3`, `n = 9`

**Output:** [[1, 2, 6],[1, 3, 5],[2, 3, 4]]

**Explanation:**
1 + 2 + 6 = 9

1 + 3 + 5 = 9

2 + 3 + 4 = 9

There are no other valid combinations.

---

### Approach
- Initialize an empty list to store the valid combinations and another list to track the current combination being formed.
- Define a recursive function that accepts the remaining target sum, the next number to consider, and the current combination.
- Within the recursive function, check if the remaining sum is zero and the current combination size matches k. If true, add the combination to the result list.
- If the remaining sum is less than zero or the combination size exceeds k, terminate the current path. Otherwise, iterate through the possible numbers, adding each to the current combination, calling the function recursively with updated parameters, and then removing the number to explore other paths.
---

### Time complexity
 - **O(2^9 * k)** - due to the exploration of all subsets of the set {1, 2, ..., 9}.

### Space complexity
 - **O(k)** - O(N), due to the maximum depth of the recursion stack, which is k.