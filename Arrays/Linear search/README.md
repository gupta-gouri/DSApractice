## Linear Search

### 📝 Problem Statement  
Given an array of integers `nums` and an integer `target`, find the **smallest index (0-based)** where the target appears. If the target is not found, return `-1`.

---

### 📌 Examples

**1. Input:**  
`nums = [2, 3, 4, 5, 3]`, `target = 3`  
**Output:** `1`  
**Explanation:** The first occurrence of 3 is at index 1.

---

**2. Input:**  
`nums = [2, -4, 4, 0, 10]`, `target = 6`  
**Output:** `-1`  
**Explanation:** 6 is not found in the array.

---

### 🧠 Approach  
- Traverse the array using a simple `for` loop.
- Compare each element with the `target`.
- If found, return the index.
- If the loop completes with no match, return `-1`.

---

### 🕒 Time Complexity  
- **O(n)** - because the code iterates through the input vector 'nums' at most once.

### 🧠 Space Complexity  
- **O(1)** - as the code uses a constant amount of extra space.