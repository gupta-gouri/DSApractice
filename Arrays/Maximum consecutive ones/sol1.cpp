class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /* Initialize count and maxcount to 
        track current and maximum consecutive 1's */
        int count = 0;
        int maxcount = 0;

        // Traverse the vector
        for (int i = 0; i < nums.size(); i++) {
            // if current element is 1, increment the count
            if (nums[i] == 1) {
                count++;

                /* Update the maxcount if current 
                count is greater than maxcount */
                maxcount = max(maxcount, count);
            } else {
                /* if current element is 0, reset
                the count */
                count = 0;
            }
        }
        // Return maximum count of consecutive 1s
        return maxcount;
    }
};