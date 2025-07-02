class Solution {
public:
    void func(vector<int> &candidates, int start, int sum, vector<int> &v, vector<vector<int>>&ans){
        // Base case: if sum == 0
        if(sum == 0){
            ans.push_back(v);
            return;
        }

        for(int i = start; i < candidates.size(); i++){
            // Skip duplicates on same level
            if( i > start && candidates[i] == candidates[i-1]) continue;

            // If current element exceeds than sum, then break early
            if(candidates[i] > sum) break;

            // Include the current element
            v.push_back(candidates[i]);
            // move to next elements
            func(candidates, i+1, sum - candidates[i], v, ans);
            // Backtrack
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        // sort the array to skip duplicates
        sort(candidates.begin(), candidates.end());
        func(candidates, 0, target, v, ans);

        return ans;
    }
};