class Solution {
public:	
    void func(int idx, int n, vector<int> &nums, vector<int> &subset, vector<vector<int>> &ans){
        //Base case: if the index reaches the length of array,
        // add the current subset to the answer list
        if(idx == n){
            ans.push_back(subset);
            return;
        }

        // Recursive case: Exclude the current element and move to next element
        func(idx + 1, n, nums, subset, ans);

        // include the current element in the subset and move to next element
        subset.push_back(nums[idx]);
        func(idx + 1, n, nums, subset, ans);

        // Backtrack: remove the last added element to explore other subsets
        subset.pop_back();
    }
    vector<vector<int> > powerSet(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        
        func(0, nums.size(), nums, subset, ans);
        return ans;
    }
};