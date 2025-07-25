class Solution {
public:
    //Function to find leaders in an array.
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;

        // Iterate through each element in nums
        for (int i = 0; i < nums.size(); i++) {
            bool leader = true;

            /* Check whether nums[i] is greater
            than all elements to its right*/
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] >= nums[i]) {
                    /* If any element to the right is greater 
                    or equal, nums[i] is not a leader*/
                    leader = false;
                    break;
                }
            }

            // If nums[i] is a leader, add it to the ans vector
            if (leader) {
                ans.push_back(nums[i]);
            }
        }

       //Return the leaders 
        return ans;
    }
};