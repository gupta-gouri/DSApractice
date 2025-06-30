## Left Rotate Array by One

### Problem statement
Given an integer array nums, rotate the array to the left by one.
Note: There is no need to return anything, just modify the given array.

---

### Examples
**1.Input:** `nums = [1, 2, 3, 4, 5]`
**Output:** `[2, 3, 4, 5, 1]`
**Explanation:** Initially, `nums = [1, 2, 3, 4, 5]`
Rotating once to left -> `nums = [2, 3, 4, 5, 1]`

---

**1.Input:** `nums = [1, 2, 3, 4, 5]`
**Output:** `[2, 3, 4, 5, 1]`
**Explanation:** Initially, `nums = [1, 2, 3, 4, 5]`
Rotating once to left -> `nums = [2, 3, 4, 5, 1]`

---

**2.Input:** `nums = [-1, 0, 3, 6]`
**Output:** `[0, 3, 6, -1]`
**Explanation:**  Initially, `nums = [-1, 0, 3, 6]`
Rotating once to left -> `nums = [0, 3, 6, -1]`

---

### Approach 1
- Store the first element of the array.
- Append this element to the end of the array.
- Erase the first element to complete the shift.
- Effectively, all elements are moved one step to the left, and the first goes to the last.

---

### Approach 2
- Store the value of the first element of the array in a temporary variable.
- Iterate through the array starting from the second element.
- Shift each element one position to the left by assigning the current element to the position of its predecessor.
- After completing the iteration, place the value from the temporary variable into the last position of the array.

---

### Time complexity
- **O(n)** -  where N is the number of elements in the array. Each element is visited once during the iteration.

### Space complexity
- **O(1) - The space used does not depend on the size of the input array and remains constant.
