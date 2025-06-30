class Solution {
   public:
    int largestElement(vector<int>& nums) {
        int largest = INT_MIN;
        for (int i : nums) {
            if (i > largest) {
                largest = i;
            }
        }
        return largest;
    }
};