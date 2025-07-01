class Solution{
    public:    	
    int func(int i, int sum, vector<int> &nums){
        if(sum < 0) return false;

        if(i == nums.size()){
            return sum == 0 ? 1 : 0;
        }

        return (func(i+1, sum - nums[i], nums) + func(i+1, sum, nums));
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	return func(0,k,nums);
    }
};