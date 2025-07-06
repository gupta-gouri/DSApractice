## Rearrange array elements by sign

### Problem statement
Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.

---
 
### Examples

**1. Input:** 
`nums = [2, 4, 5, -1, -3, -4]`

**Output:** 
`[2, -1, 4, -3, 5, -4]`

**Explanation:** 
The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions


**2. Input:** 
`nums = 1, -1, -3, -4, 2, 3]`

**Output:** 
`[1, -1, 2, -3, 3, -4]`

**Explanation:** 
The positive number 1, 2, 3 maintain their relative positions and -1, -3, -4 maintain their relative positions

---

### Approach 1 - Brute force
- Since the number of positive and negative elements are the same, we put positives into an array called “pos” and negatives into an array called “neg”.
- After segregating each of the positive and negative elements, we start putting them alternatively back into the original array.
- Initialize an array which will run from 0 till (sizeOfArray/2 - 1) because the number of positive and negative elements are equal, so the total count of any of them will be equal to (sizeOfArray/2).
- Since the array must begin with a positive number and the start index is 0, so all the positive numbers would be placed at even indices (2*i) and negatives at the odd indices (2*i+1), where i is the index of the pos or neg array while traversing them simultaneously.

### Time complexity
 - **O(N+N/2)** - where N is the size of the array. O(N) for traversing the array once for segregating positives and negatives and another O(N/2) for adding those elements alternatively to the array.

### Space complexity
- **O(N/2 + N/2) = O(N)** - N/2 space required to store each of the positive and negative elements in separate arrays.

--- 

### Approach 2 
- Initialize two variable posIndex as 0 and negIndex as 1 initially.
- Now, iterate in the array & on encountering the first negative element, understand that its first position in resultant array should be starting from index 1, as initially positive number will be placed. And then each time when a negative number is found, its next position would be 2 steps ahead considering that a positive number will occupy space in between 2 negative numbers. So increment the position of negative number by 2.
- Similarly, when you encounter the first positive element, it occupies the position at index 0 in the resultant array, and then each time on finding a positive number, put it on the posIndex and it increments by 2.
- When both the negIndex and posIndex exceed the size of the array, stop the iteration as the whole array is now rearranged alternatively according to the sign.

### Time complexity
 - **O(n)** - where n is the length of array

### Space complexity
- **O(n)** - to store the resultant array.