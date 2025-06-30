## Move zeroes to end

### Problem statement
Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same. This must be done in place, without making a copy of the array.

---

### Examples:

**1.Input:** `nums = [0, 1, 4, 0, 5, 2]`

**Output:** `[1, 4, 5, 2, 0, 0]`

**Explanation:** Both the zeroes are moved to the end and the order of the other elements stay the same

---

**2.Input:** ``nums = [0, 0, 0, 1, 3, -2]`

**Output:** `[1, 3, -2, 0, 0, 0]`

**Explanation:** All 3 zeroes are moved to the end and the order of the other elements stay the same

---

### Approach 1
- Create a temp array
- Copy non-zeros
- Pad with zeros.

### Time complexity: 
- **O(n)** - where n is the length of array

### Space complexity:
- **O(n)** - used extra space for vector

---

### Approach 2
- Use two pointers:
    - right scans every element
    - left tracks where to overwrite with non-zero
- After copying non-zeros, fill the rest with 0.

### Time complexity: 
- **O(n)** - where n is the length of array

### Space complexity:
- **O(1)** - in-place

---

### Approach 3
- Iterate through the array
    - If the element is non-zero, place it at the pos index and increment pos.
- After placing all non-zero elements,
    - Fill remaining positions (from pos to end) with zero

### Time complexity: 
- **O(n)** - where n is the length of array

### Space complexity:
- **O(1)** - in-place

---