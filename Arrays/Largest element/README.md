## Largest Element

### 📝 Problem Statement  
Given an array of integers `nums`, return the **value** of the largest element in the array.

---

### 📌 Examples

**1. Input:**  
`nums = [3, 3, 6, 1]`  
**Output:** `6`  
**Explanation:** The largest element in the array is 6.

---

**2. Input:**  
`nums = [3, 3, 0, 99, -40]`  
**Output:** `99`  
**Explanation:** The largest element in the array is 99.

---

### 🧠 Approach  
- Initialize a variable `largest` to the first element.  
- Traverse the array, updating `largest` if a larger element is found.  
- Return `largest` at the end.

---

### 🕒 Time Complexity  
- **O(n)** — We scan all elements of the array once.

### 🧠 Space Complexity  
- **O(1)** — No extra space is used apart from a few variables.
