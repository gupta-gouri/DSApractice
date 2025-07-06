## Find missing number

### Problem statement
Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

---

### Examples

**1. Input:** 
`nums = [0, 2, 3, 1, 4]`

**Output:** 5

**Explanation:** 
nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]

**2. Input:** 
`nums = [0, 1, 2, 4, 5, 6]`

**Output:** 3

**Explanation:** 
nums contains 0, 1, 2, 4, 5, 6 thus leaving 3 as the only missing number in the range [0, 6]

---

### Approach 1 - Hash set 
- Initialize an empty hash set.
- Insert every number from the array into the set.
- Loop from 0 to n, check if the number is not in the set.
- Return the number that is missing.

### Time complexity
 - **O(n)** - Traversed the array of size 'n'

### Space complexity
- **O(n)** - hashset of size 'n'

--- 

### Approach 2 - Visited array
- Initialize a boolean array visited of size n+1 with all values false.
- For each element num in the array, mark visited[num] = true.
- Iterate from 0 to n, return the index where visited[i] == false.

### Time complexity
 - **O(n)** - Traversed the array of size 'n'

### Space complexity
- **O(n)** - boolean vector of size 'n'

---

### Approach 3 - sum formula
- Compute expected_sum = n * (n + 1) / 2.
- Compute actual_sum as the sum of the array.
- Return expected_sum - actual_sum.

### Time complexity
 - **O(n)** - Traversed the array of size 'n'

### Space complexity
- **O(1)** - in-place, no additional memory required

---

### Approach 4 - xor approach
- Initialize xor_total = 0, xor_array = 0.
- XOR all numbers from 0 to n into xor_total.
- XOR all numbers in the array into xor_array.
- Return xor_total ^ xor_array.

### Time complexity
 - **O(n)** - Traversed the array of size 'n'

### Space complexity
- **O(1)** - in-place, no additional memory required

---

### Approach 5 - Sorting approach
- Sort the array.
- Loop i from 0 to n-1.
- If arr[i] != i, then i is the missing number.
- If all match, return n (missing number is at the end).

### Time complexity
 - **O(nlogn)** - Traversed the array of size 'n'

### Space complexity
- **O(1)** - in-place, no additional memory required