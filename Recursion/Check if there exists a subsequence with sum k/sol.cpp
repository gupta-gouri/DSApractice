class Solution{
    public:
    bool func(int i, int sum, vector<int> &nums){
        if(sum < 0) return false; // early return (optimised)

        //Base case: if all elements are processed, check is sum is 0
        if(i == nums.size()){
            return sum == 0;
        }

        // Recursive case: include the current element in the subsequence 
        // or exclude the current element from the subsequence 
        return(func(i+1, sum - nums[i], nums) | func(i+1, sum, nums));

    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return func(0, k, nums);
    }
};