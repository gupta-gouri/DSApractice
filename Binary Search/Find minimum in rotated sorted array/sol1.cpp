class Solution {
   public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        
        while (low < high) {
            int mid = (low + high) / 2;
            
            if(nums[mid] > nums[high]){
                // min is in right part
                low = mid+1;
            }
            else if(nums[mid] < nums[high]){
                // min is in left part including mid
                high = mid;
            }
            else{
                // can't decide: duplicates
                high --;
            }
        }
        return nums[low];
    }
};