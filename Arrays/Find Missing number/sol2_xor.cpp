/*
TC - O(n)
SC - O(1)

If you XOR all numbers from 0 to n and also XOR all elements in nums, the duplicates will cancel out (because x ^ x = 0) 
What remains is the missing number.

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int xor_all = 0;
        int actual_xor = 0;

        for(int i=1; i<=n; i++){
            xor_all ^= i;
        }

        for(int i=0; i<n; i++){
            actual_xor ^= nums[i];
        }
        
        return xor_all ^ actual_xor;
    }
};