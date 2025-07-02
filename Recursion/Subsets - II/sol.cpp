class Solution {
public:
    void func(int i, vector<int> &nums, vector<int> &v, vector<vector<int>> &ans){
        // if all elements are processed
        if(i == nums.size()){
            ans.push_back(v);
            return;
        }

        // include the current element
        v.push_back(nums[i]);
        // recur for next element
        func(i+1, nums, v, ans);
        // Backtrack
        v.pop_back();
        
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] != nums[j]){
                func(j, nums, v, ans);
                return;
            }
        }
        func(nums.size(), nums, v, ans);
    }
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> v;
        sort(nums.begin(), nums.end()); // to skip duplicates
        func(0, nums, v, ans);
        return ans;
    }
};