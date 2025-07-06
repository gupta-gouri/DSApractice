## Print matrix in spiral manner

### Problem statement
Given an M * N matrix, print the elements in a clockwise spiral manner. Return an array with the elements in the order of their appearance when printed in a spiral manner.

---

### Examples

**1. Input:** 
`matrix = [[1, 2, 3], [4 ,5 ,6], [7, 8, 9]]`

**Output:** 
`[1, 2, 3, 6, 9, 8, 7, 4, 5]`

**Explanation:** 
The elements in the spiral order are 1, 2, 3 -> 6, 9 -> 8, 7 -> 4, 5


**2. Input:** 
`matrix = [[1, 2, 3, 4], [5, 6, 7, 8]]`

**Output:** 
`[1, 2, 3, 4, 8, 7, 6, 5]`

**Explanation:** 
The elements in the spiral order are 1, 2, 3, 4 -> 8, 7, 6, 5

---

### Approach 1 -
- Initialize four variables top as 0, left as 0, bottom as TotalRow - 1, right as ToatalColumn - 1.
- Iterate till top is less than or equal to bottom and left less than or equal to right
- For moving left to right use a loop(say i) and add the elements. Increment top by 1.
- For moving top to bottom use another loop and add the elements in answer. Decrement right by 1.
- If top is less than or equal to bottom then for moving right to left use another loop and add the elements in answer. Decrement bottom by 1.
- If left is less than or equal to right the for moving bottom to top take another loop and add the elements in answer. Increment left by 1. Lastly, return the answer.

### Time complexity
 - **O(m*n)** - since all the elements are being traversed once and there are total N x M elements ( M elements in each row and total N rows)

### Space complexity
- **O(1)** - no space required
