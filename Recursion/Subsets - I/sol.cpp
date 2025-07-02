class Solution {
  public:
    void func(vector<int> &nums, int i, int sum, vector<int> &ans){
        // Base case: if all elements are processed
        if(i == nums.size()){
            // add the current sum to the ans
            ans.push_back(sum);
            return;
        }
        // Recursively include the current element in the sum
        func(nums, i+1, sum+nums[i], ans );

        // Recursively exclude the current element from the sum
        func(nums, i+1, sum, ans);
    }
    vector<int> subsetSums(vector<int>& nums) {
        vector<int> ans;
        func(nums, 0, 0, ans);
        return ans;
    }
};