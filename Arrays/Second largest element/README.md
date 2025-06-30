## Largest and Second Largest Element

### 📝 Problem Statement  
Given an array of integers `nums`, return the second-largest element in the array. 
If the second-largest element does not exist, return `-1`.
---

### 📌 Examples

**1. Input:**  
`nums = [8, 8, 7, 6, 5]`  
**Output:** `7`

---

**2. Input:**  
`nums = 10, 10, 10, 10, 10]`  
**Output:** `-1`

---

### 🧠 Approach 1
- First pass: Find the largest element by scanning the array.  
- Remove all occurrences of the largest.  
- Second pass: Scan again to find the largest from the reduced array, which is the second largest overall.

---

### 🧠 Approach 2
- Initialize two variables: largest, and secondLargest. Initialize largest and secondLargest to INT_MIN as initially none of them should be holding any values.
- If the current element is larger than largest, update secondLargest and largest.
- Else if the current element is larger than secondLargest and not equal to largest, update secondLargest.
- Traverse the entire array to update the second largest element in declared variable i.e, secondLargest.

---

### ⏱️ Time Complexity  
- **O(n)** — where *n* is the size of the array. 

### 🧠 Space Complexity  
- **O(1)** — operates in-place using a few variables. No extra data structures used.

---
