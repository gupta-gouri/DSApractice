## Maximum Consecutive 1s

### Problem statement
Given a binary array nums, return the maximum number of consecutive 1s in the array.
A binary array is an array that contains only 0s and 1s.

---

### Examples
**1. Input:** `nums = [1, 1, 0, 0, 1, 1, 1, 0]`
**Output:** `3`
**Explanation:** The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s

---

**2.Input:** `nums = [0, 0, 0, 0, 0, 0, 0, 0]`
**Output:** `0`
**Explanation:** No 1s are present in nums, thus we return 0

---

### Approach
- Initialize two variables, count and max_count to 0. Traverse the array and if the current element is 1, increment the count by 1.
- Update max_count if count is greater than max_count.
- If the current element is 0, reset the count variable to 0 and at last return max_count.

---

### Time complexity
- **O(n)** - as there is single traversal of the array .Here N is the number of elements in the array.

### Space Complexity
- **O(1)** - as no additional space is used