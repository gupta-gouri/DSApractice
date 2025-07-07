## Count of Subarrays with Sum Divisible by K

--- 

### Problem Statement

Given an array of integers, nums, and an integer k, the task is to find the total number of subarrays whose sum is divisible by k. A subarray is a contiguous portion of the array.

---

###Examples:

**1. Input:**
`nums = [3, 1, 4, 1]`, `k = 3`

**Output:**
3

**Explanation:**
The subarrays whose sum is divisible by 3 are: [3], [1, 4, 1], [3, 1, 4, 1].

**2. Input:**
`nums = [5, 10, -5, 20]`, `k = 7`

**Output:**
0

**Explanation:**
There is no subarray whose sum is divisible by 7

---

**Time Complexity:**
    - **O(n)** - because it iterates through the input array `nums` once.

**Space Complexity:**
    - **O(k)** -  because the `count` hash map stores at most k distinct remainders.