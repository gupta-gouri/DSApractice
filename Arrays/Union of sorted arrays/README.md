## Union of sorted arrays

### Problem statement
Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.

The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

---
 
### Examples

**1. Input:** 
`nums1 = [1, 2, 3, 4, 5]`, `nums2 = [1, 2, 7]`

**Output:** 
`[1, 2, 3, 4, 5, 7]`

**Explanation:** 
The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2

**2. Input:** 
`nums1 = [3, 4, 6, 7, 9, 9]`, `nums2 = [1, 5, 7, 8, 8]`

**Output:** 
`[1, 3, 4, 5, 6, 7, 8, 9]`

**Explanation:** 
The element 7 is common to both, 3, 4, 6, 9 are from nums1 and 1, 5, 8 is from nums2

---

### Approach 1 
- Declare a set s to store all the unique elements and a vector or list union to store the final answer.
- Iterate through nums1 and nums 2 to store the elements in the set.
- Now, iterate in the set and copy all the elements of the set to the answer vector and return it.

### Time complexity
 - **O((m+n)log(m+n))** - at max set can store M+N elements {when there are no common elements and elements in nums1 , nums2 are distntict}. So Inserting M+N th element takes log(M+N) time. Upon approximation across inserting all elements in worst, it would take O((M+N)log(M+N) time.

### Space complexity
- **O(m+n)** - considering space of Union Array.

--- 

### Approach 2 
- Initialize two variable i to iterate nums1 and j to iterate nums2 as 0.
- Create an empty vector for storing the union of nums1 and nums2.
- If current element of nums1 is equal to current element of nums2, this means its a common element, so insert only one element in the union & increment it by 1.
- If current element of nums1 is less than current element of nums2, insert current element of nums1 in union. Also check if last element in union vector is not equal to nums1[ i ],then insert in union else don’t insert. After checking increment i.
- If current element of nums1 is greater than current element of nums2, insert current element of nums2 in union. Similar to last point, check if the last element in the union vector is not equal to nums2[ j ], then insert in the union, else don’t insert. After checking increment j.

### Time complexity
 - **O(m+n)** - because both the arrays must be traversed once.

### Space complexity
- **O(m+n)** - considering space of Union Array.