## Generate parenthesis

### Problem Statement
Given an integer n.Generate all possible combinations of well-formed parentheses of length 2 x N.

---

### Examples
**1. Input:**
`n = 3`

**Output:** 
`[ "((()))" , "(()())" , "(())()" , "()(())" , "()()()" ]`

---

**2. Input:** 
`n = 2`

**Output:** 
`[ "(())" , "()()" ]`

---

### Approach
- Begin with zero open and zero close parentheses. Initialize an empty string and a list to store the valid combinations.
- At each step, decide to add an open parenthesis if there are more available. Add a close parenthesis if it is valid (i.e., if the number of close parentheses used is less than the number of open parentheses).
- Base Case: When the number of open and close parentheses used equals the total number of pairs, the current string is a valid combination. Add this string to the list of results.
- Recursive Calls: Use recursion to explore both adding an open parenthesis and adding a close parenthesis, if permissible, to build all possible valid combinations.

---

### Time complexity
- **O(4^n / sqrt(n))** - where n is the number of pairs of parentheses. This complexity arises because each step involves branching into two possibilities, resulting in an exponential number of possibilities, reduced by the Catalan number formula for valid combinations.

### Space Complexity
- **O(4^n / sqrt(n))** - primarily due to the recursion stack and the storage required for the result list of valid combinations. The space is proportional to the number of valid combinations generated.