/*
TC - O(n)
SC - O(1)

Two-pointer swap 
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;  // Position to place the next non-zero element

        // Step 1: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos++] = nums[i];
            }
        }

        // Step 2: Fill remaining positions with zeroes
        while (pos < nums.size()) {
            nums[pos++] = 0;
        }
    }
};
