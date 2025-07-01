## Combination Sum

### Problem Statement
Provided with a goal integer target and an array of unique integer candidates, provide a list of all possible combinations of candidates in which the selected numbers add up to the target. The combinations can be returned in any order.

A candidate may be selected from the pool an infinite number of times. There are two distinct combinations if the frequency of at least one of the selected figures differs.

The test cases are created so that, for the given input, there are fewer than 150 possible combinations that add up to the target.

If there is no possible subsequences then return empty vector.

---

### Examples
**1. Input:** 
`candidates = [2, 3, 5, 4]` , `target = 7`

**Output:** 
`[ [2, 2, 3] , [3, 4] , [5, 2] ]`

**Explanation:**

2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.

5 and 2 are candidates, and 5 + 2 = 7.

3 and 4 are candidates, and 3 + 4 = 7.

There are total three combinations.

---
**2. Input:** 
`candidates = [2]`, `target = 1`

**Output:** []

**Explanation:**
There is no way we can choose the candidates to sum up to target.

---

### Approach
- Define a recursive function that explores all possible combinations of elements. The function should track the current sum and the elements included in the combination.
- Check base cases within the function, if the current sum matches the target, add the current combination to the result. If the sum exceeds the target or no more elements are available, stop further exploration.
- For each recursive call, decide whether to include the current element in the combination or exclude it. Update the sum and combination list accordingly, and then proceed with further recursive calls.
- After exploring with the current element included, backtrack by removing the last added element to explore other potential combinations.

---

### Time complexity
 - **O(k*2n)** - where N is the number of elements, due to the exponential number of possible combinations explored in the worst case. For each subset, it may take up to K operations to process, where K is the maximum length of any subset in the result

### Space complexity
 - **O(k*n)** - where N is the maximum depth of recursion, which corresponds to the length of the combination path stored in memory.