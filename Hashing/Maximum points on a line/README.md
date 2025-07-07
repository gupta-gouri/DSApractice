## Maximum points on a line

--- 

### Problem Statement

Given an array of unqiue points nums, where each point is represented as nums[i] = [xi, yi] on a 2D plane, find the maximum number of points that lie on the same line.

---

### Examples:

**1. Input:**

`nums = [[0,0], [1,1], [2,2], [3,3]]`

**Output:**
`4`

**Explanation:**
All four points lie on the line with slope 1, so the maximum number of points on the same line is 4.


**2. Input:**
`nums = [[0,1], [2,3], [4,5], [1,2], [3,4], [2,2]]`

**Output:**
`5`

**Explanation:**
The points [0,1], [1,2], [2,3], [3,4], and [4,5] all lie on the same straight line, so the maximum number is 5.

---

**Time Complexity:**
    - **O(n^2)** - due to nested loops, and the unordered_map operations take O(1) on average.

**Space Complexity:**
    - **O(n)** -  in the worst case due to the unordered_map potentially storing slopes for all points relative to a given point.