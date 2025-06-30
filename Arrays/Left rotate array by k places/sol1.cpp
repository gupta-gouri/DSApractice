class Solution {
public:
    // Function to rotate the array left by one position
    void rotateArrayByOne(vector<int>& nums) {
        // Store the first element
        int front = nums.front();
        
        // Push it to the end
        nums.push_back(front);
        
        // Remove the first element
        nums.erase(nums.begin());
    }

    // Function to rotate the array left by k positions
    void rotateArray(vector<int>& nums, int k) {
        // Repeat the left-rotation process k times
        for (int i = 0; i < k; i++) {
            rotateArrayByOne(nums);  // Rotate by one each time
        }
    }
};
