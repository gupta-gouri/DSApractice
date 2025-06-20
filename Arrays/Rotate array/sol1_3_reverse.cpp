/*
TC - O(n)
SC - O(1)

using 3 reversals the array gets rotated

*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Ensures that k is within bounds
        int index = n-k;
        
        reverse(nums.begin(), nums.begin()+index);
        reverse(nums.begin()+index, nums.end());
        reverse(nums.begin(), nums.end());
    }
};