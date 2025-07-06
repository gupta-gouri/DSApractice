## Word Search

### Problem statement
Given a grid of n x m dimension grid of characters board and a string word.The word can be created by assembling the letters of successively surrounding cells, whether they are next to each other vertically or horizontally. It is forbidden to use the same letter cell more than once.

Return true if the word exists in the grid otherwise false.

---
 
### Examples

**1. Input:** 
`board = [ ["A", "B", "C", "E"] , ["S" ,"F" ,"C" ,"S"] , ["A", "D", "E", "E"] ]` , `word = "ABCCED"`

**Output:** 
`true`


**2. Input:** 
`board = [ ["A", "B", "C", "E"] , ["S" ,"F" ,"C" ,"S"] , ["A", "D", "E", "E"] ]` , `word = "SEE"`

**Output:** 
`true`

---

### Approach -
- Start by iterating through each cell in the grid.
- For each cell, check if it matches the first character of the word. f it matches, invoke a helper function to explore all possible paths from this cell.
- In the helper function, perform the following checks:
- Check if the current index matches the length of the word, indicating the word is found.
- Check boundary conditions and character mismatch to prevent invalid accesses.
- If the character matches, mark the current cell as visited by temporarily changing its value. Recursively explore all four directions (up, down, left, right) from the current cell for the next character in the word. If any recursive call returns true, propagate this result up the call stack.
- After exploring all directions, restore the current cell's original value to allow other paths to use it. Continue this process until all cells and paths are exhausted.
- Return true if any path successfully spells out the word; otherwise, return false.

### Time complexity
 - **O(n * m * 4^L)** - where N is rows, M is columns and L is the word length; recursive search through board.

### Space complexity
- **O(L)** - due to recursive call stack depth, where L is the length of the word.
