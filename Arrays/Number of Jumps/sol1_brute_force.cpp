/*

Given an array nums of n integers and an integer k, return the total number of jumps needed in the array.

An element nums[i] needs to jump another element nums[j] if:
    0 <= i < j <= n-1
    nums[i] + k < nums[j]

# Examples:
Input: nums = [3, 1, 10, 6, 5], k = 2
Output: 5

# Explanation: Number of jumps for each index:
nums[0] -> 2, nums[1] -> 3, nums[2] -> 0, nums[3] -> 0, nums[4] -> 0
Total = 2 + 3 + 0 + 0 + 0 = 5


Input: nums = [1, 4, 5, 1, 7], k = 3
Output: 3

# Explanation: Number of jumps for each index:
nums[0] -> 2, nums[1] -> 0, nums[2] -> 0, nums[3] -> 1, nums[4] -> 0
Total = 2 + 0 + 0 + 1 + 0 = 3


below sol - Brute force - TC - O(n^2)
              SC - O(1)
*/
class Solution {
public:
    int NumberOfJumps(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[j] > nums[i]+k){
                    count ++;
                }
            }
        }
        return count;
    }
};

