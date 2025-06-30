class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        // Store the first element
        int front = nums.front();

        // Append it to the end
        nums.push_back(front);

        // Remove it from the beginning
        nums.erase(nums.begin());
    }
};
