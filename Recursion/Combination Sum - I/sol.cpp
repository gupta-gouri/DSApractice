class Solution {
public:
    void func(vector<int> &c, int i, int sum, vector<int> v, vector<vector<int>> &ans){
        // Base case: if no elements are left
        if(i < 0){
            return;
        }

        // Base case: if sum becomes negative
        if(sum < 0){
            return;
        }

        // Base case: if the sum is 0, add the current subsequence to ans
        if(sum == 0){
            ans.push_back(v);
            return;
        }

        // Exclude the current element and move to next
        func(c, i-1, sum, v, ans);

        // Include the current element
        v.push_back(c[i]);

        // Recursively include the current element
        func(c, i, sum - c[i], v, ans);

        // Backtrack by removing the last added element
        v.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        func(candidates, candidates.size()-1, target, v, ans);
        return ans;
    }
};