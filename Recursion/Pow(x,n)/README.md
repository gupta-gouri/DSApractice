## Power

### Problem Statement
Implement the power function pow(x, n) , which calculates the x raised to n i.e. x^n.

---

### Examples
**1. Input:** 
`x = 2.0000` , `n = 10`

**Output:** `1024.0000`

**Explanation:** Answer = 2^10 => 1024.

---

**2. Input:** 
`x = 2.0000` , `n = -2`

**Output:** `0.2500`

**Explanation:** Answer = 2^(-2) = 1/4 => 0.25.

---

### Approach
- Use recursion with divide and conquer:
    - x^n = (x^(n/2))^2 if n is even
    - x^n = x * (x^(n/2))^2 if n is odd
- Handle negative exponents by converting:
    - x^(-n) = 1 / x^n
- Convert n to long long to avoid overflow (e.g., INT_MIN).

---

### Time complexity
 - **O(log n)** 

### Space complexity
 - **O(log n)**  