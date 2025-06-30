class Solution {
   public:
    int largestElement(vector<int>& nums) {
        if (nums.empty()) return -1;
        int largest = INT_MIN;
        for (int i : nums) {
            if (i > largest) {
                largest = i;
            }
        }
        return largest;
    }

    int secondLargestElement(vector<int>& nums) {
        int largest = largestElement(nums);
        nums.erase(remove(nums.begin(), nums.end(), largest), nums.end());

        if (nums.empty()) return -1;  // No second largest exists

        return largestElement(nums);
    }
};