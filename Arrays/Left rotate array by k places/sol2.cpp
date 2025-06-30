class Solution {
public:
    // Function to rotate the array to the left by k positions
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size(); // Size of array
        k = k % n; // To avoid unnecessary rotations
        
        vector<int> temp;
        
        // Store first k elements in a temporary array
        for(int i=0; i < k; i++) {
            temp.push_back(nums[i]);
        }
        
        // Shift n-k elements of given array to the front
        for(int i=k; i < n; i++) {
            nums[i-k] = nums[i];
        }
        
        // Copy back the k elemnents at the end
        for(int i=0; i < k; i++) {
            nums[n-k+i] = temp[i];
        }
    }
};
