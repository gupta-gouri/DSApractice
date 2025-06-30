class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;  // Pointer for the position to place non-zero

        // Step 1: Copy all non-zero elements to the front
        for (int right = 0; right < n; right++) {
            if (nums[right] != 0) {
                nums[left] = nums[right];
                left++;
            }
        }

        // Step 2: Fill remaining elements with 0
        while (left < n) {
            nums[left++] = 0;
        }
    }
};
