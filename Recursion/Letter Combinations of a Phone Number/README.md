## Letter combinations of a phone number

### Problem Statement
Given a string consisting of digits from 2 to 9 (inclusive). Return all possible letter combinations that the number can represent.

---

### Examples
**1. Input:** 
 `digits = "34" `

**Output:** 
`[ "dg", "dh", "di", "eg", "eh", "ei", "fg", "fh", "fi" ]`

**Explanation:** 
The 3 is mapped with "def" and 4 is mapped with "ghi".
So all possible combination by replacing the digits with characters are shown in output.
 
---

**2. Input:** 
 `digits = "3"`

**Output:** 
`[ "d", "e", "f" ]`

**Explanation:** 
The 3 is mapped with "def".

---

### Approach
- Initialize a mapping of digits to their corresponding letters, and an empty list to store results.
- Define a recursive helper function that takes the current digit index, the current string combination, and the result list as arguments.
- In the base case, when the index equals the length of the digits string, add the current combination to the result list.
- For the current digit, iterate over its corresponding letters and recursively call the helper function with the next index and the updated combination string.

---

### Time complexity
 - **O(4^n * n)** - where n is the length of the input digits. This is because each digit can map to up to 4 letters and there are n digits.

### Space complexity
 - **O(n)** - where n is the length of the input digits. This is due to the recursion stack depth.