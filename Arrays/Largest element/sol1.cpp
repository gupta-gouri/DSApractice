class Solution {
   public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for (int i : nums) {
            if (i > largest) {
                largest = i;
            }
        }
        return largest;
    }
};