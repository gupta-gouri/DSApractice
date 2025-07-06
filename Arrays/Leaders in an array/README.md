## Leader in an array

### Problem statement
Given an integer array nums, return a list of all the leaders in the array.

A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

---
 
### Examples

**1. Input:** 
`nums = [1, 2, 5, 3, 1, 2]`

**Output:** 
`[5, 3, 2]`

**Explanation:** 
2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]


**2. Input:** 
`nums = [-3, 4, 5, 1, -4, -5]`

**Output:** 
`[5, 1, -4, -5]`

**Explanation:** 
-5 is the rightmost element, -4 is the largest element in the index range [4, 5], 1 is the largest element in the index range [3, 5] and 5 is the largest element in the range [2, 5]
 
---

### Approach 1 - Brute force
- Iterate through each element of the array with the variable let's say i and take a boolean variable leader set at true initially which will tell if nums[i] is a leader or not.
- For each i, iterate through the elements to the right (from i+1 to the end of the array) with the variable j & check if nums[j] is greater than nums[i], if so, reinitialize the variable leader as false and break.
- After exiting from the inner loop, check if leader equals true, if so add nums[i] to ans vector. Finally return the answer vector.

### Time complexity
 - **O(n^2)** - where n is the length of array

### Space complexity
- **O(1)** - no space required

--- 

### Approach 2 
- Set a variable max to the last element of the array (nums[sizeOfArray - 1]), as the last element is always a leader.
- Create an empty list ans to store the leader elements and add the last element of the array to this list initially, as it is always a leader.
- Start from the second last element (index = sizeOfArray - 2) and move towards the first element (index = 0)
- For each element, compare it with the max variable. If the current element is greater than max, add this element to the ans list and update max to the current element.
- The ans list now contains all the leader elements in the reverse order of them appearing in the array. Reverse the ans list and return.

### Time complexity
 - **O(n)** - where n is the length of array

### Space complexity
- **O(1)** - no space required