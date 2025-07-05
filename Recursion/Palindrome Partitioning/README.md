## Palindrome Partitioning

### Problem Statement
Given a string s partition string s such that every substring of partition is palindrome. Return all possible palindrome partition of string s.

---

### Examples
**1. Input:** 
`s = "aabaa"`

**Output:** 
`[ [ "a", "a", "b", "a", "a"] , [ "a", "a", "b", "aa"] , [ "a", "aba", "a"] , [ "aa", "b", "a", "a"] , [ "aa", "b", "aa" ] , [ "aabaa" ] ]`

**Explanation:** 
Above all are the possible ways in which the string can be partitioned so that each substring is a palindrome.

---

**2. Input:** 
`s = "baa"`

**Output:** 
`[ [ "b", "a", "a"] , [ "b", "aa" ] ]`

**Explanation:** 
Above all are the possible ways in which the string can be partitioned so that each substring is a palindrome.
 
---

### Approach
- Initialize an empty result list to store all possible partitions.
- Define a recursive function that takes the current index, the string, a temporary path list, and the result list.
- In the recursive function, check if the current index has reached the end of the string, if true, add the current path to the result list and return. If false, iterate over the substring starting from the current index.
- For each substring, check if it is a palindrome, if true, add the substring to the current path. Call the recursive function with the next index. Backtrack by removing the last added substring to explore other possibilities.
- Define a helper function to check if a given substring is a palindrome Compare characters from the start and end of the substring. If all characters match, the substring is a palindrome.
- Invoke the recursive function initially with the starting index, the string, an empty path list, and the result list. Return the result list containing all possible palindromic partitions.

---

### Time complexity
 - **O(2^n)** - due to the exponential number of possible partitions.

### Space complexity
 - **O(n)** - for the recursion stack and additional space for storing partitions.




