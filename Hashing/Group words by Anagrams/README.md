## Group words by Anagrams

--- 

### Problem Statement

Given an array of strings strs, group the words that are anagrams of each other.

An anagram is a word formed by rearranging the letters of another word using all the original letters exactly once. You may return the groups in any order.

---

### Examples:

**1. Input:**
`strs = ["race", "care", "acre", "bake", "beak", "keep"]`

**Output:**
`[["race", "care", "acre"], ["bake", "beak"], ["keep"]]`

**Explanation:**
"race", "care", and "acre" are anagrams and can be rearranged to form each other.

"bake" and "beak" are anagrams and form another group.

"keep" does not have any anagrams in the list and forms its own group.


**2. Input:**
`strs = ["bob", "obb", "boo", "oob", "bbo"]`

**Output:**
`[["bob", "obb", "bbo"], ["boo", "oob"]]`

**Explanation:**
"bob", "obb", and "bbo" are anagrams and can be rearranged to form each other.

"boo" and "oob" are anagrams and form another group.

---

**Time Complexity:**
    - **O(n*k log k)** - where n is the number of strings in the input vector and k is the average length of the strings.

**Space Complexity:**
    - **O(n*k)** -  where n is the number of strings and k is the maximum length of a string, due to storing the anagram groups and the final answer.