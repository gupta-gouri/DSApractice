## Intersection of sorted arrays

### Problem statement
Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. Each element in the result must appear as many times as it appears in both arrays.

The intersection of two arrays is an array where all values are present in both arrays.

---
 
### Examples

**1. Input:** 
`nums1 = [1, 2, 2, 3, 5]`, `nums2 = [1, 2, 7]`

**Output:** 
`[1, 2]`

**Explanation:** 
The elements 1, 2 are the only elements present in both nums1 and nums2


**2. Input:** 
`nums1 = [1, 2, 2, 3]`, `nums2 = [4, 5, 7]`

**Output:** 
[]

**Explanation:** 
No elements appear in both nums1 and nums2

---

### Approach 1 - Brute force
- Create an array called visited of the same size as nums2 to keep track of elements that have already been checked in nums2.
- Iterate through loop (let's call the loop variable i) to go through each element in nums1.
- For each element in nums1, use another for loop (let's call the loop variable j) to iterate through nums2.
- For each element nums1[i], check if it is equal to nums2[j] and also ensure visited[j] is 0 (meaning this element of nums2 has not been visited yet).
- If both conditions are met, add nums1[i] to the result array ans and mark visited[j] as 1 to indicate that nums2[j] has been processed.
- Repeat the above steps until all elements in nums1 have been compared with all elements in nums2.

### Time complexity
 - **O(m*n)** - where M is the length of nums1 and N is the length of nums2.

### Space complexity
- **O(n)** - where N is size of nums2, extra space to store answer is not considered.

--- 

### Approach 2 
- Declare two pointers, i for iterating through nums1 and j for iterating through nums2, and set both to 0. Initialize a vector or list to hold the intersection results.
- Use a while loop to continue the iteration as long as both pointers are within the bounds of their respective arrays.
- If the elements at nums1[i] and nums2[j] are equal, add that element to the results and increment both pointers i and j by 1.
- If nums1[i] is less than nums2[j], increment pointer i to check the next element in nums1.
- If nums2[j] is less than nums1[i], increment pointer j to check the next element in nums2.
- This process continues until either pointer exceeds the last index of its respective array. Finally, return the vector containing the intersection.

### Time complexity
 - **O(m*n)** - because both the arrays must be traversed once.

### Space complexity
- **O(1)** - extra space to store answer is not considered.