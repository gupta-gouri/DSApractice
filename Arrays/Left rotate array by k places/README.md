## Left rotate array by k places

### Problem statement
Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

---

### Examples
**1.Input:** `nums = [1, 2, 3, 4, 5, 6]`, `k = 2`

**Output:** `nums = [3, 4, 5, 6, 1, 2]`

**Explanation:** 

rotate 1 step to the left: `[2, 3, 4, 5, 6, 1]`

rotate 2 steps to the left: `[3, 4, 5, 6, 1, 2]`

---

**1.Input:** `nums = [3, 4, 1, 5, 3, -5]`, `k = 8`

**Output:** `nums = [1, 5, 3, -5, 3, 4]`

**Explanation:**

rotate 1 step to the left: `[4, 1, 5, 3, -5, 3]`

rotate 2 steps to the left: `[1, 5, 3, -5, 3, 4]`

rotate 3 steps to the left: `[5, 3, -5, 3, 4, 1]`

rotate 4 steps to the left: `[3, -5, 3, 4, 1, 5]`

rotate 5 steps to the left: `[-5, 3, 4, 1, 5, 3]`

rotate 6 steps to the left: `[3, 4, 1, 5, 3, -5]`

rotate 7 steps to the left: `[4, 1, 5, 3, -5, 3]`

rotate 8 steps to the left: `[1, 5, 3, -5, 3, 4]`

---

### Approach 1
- Repeat k times:
    - Move the first element to the end.
    - Remove the first element.
- This rotates the array left by one each time — done k times.
- Final array is the result after k left rotations.

### Time complexity
 - **O(n*k)** - Traversed the array of size 'n', 'k' times 

### Space complexity
- **O(1)** - in-place, no additional memory required

---

### Approach 2
- First, calculate the effective number of rotations by taking the modulo of K with the array size to avoid unnecessary rotations.
- Create a temporary array to store the first K elements of the array.
- Shift the remaining (N - K) elements of the array to the front.
- Copy the stored K elements from the temporary array to the end of the array.
- The array is now rotated to the left by K places.

### Time complexity
 - **O(n)** - where N is the length of the array.

### Space complexity
- **O(k)** - due to the temporary list created to copy the K elements.
