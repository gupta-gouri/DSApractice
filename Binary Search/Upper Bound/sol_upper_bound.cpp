class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size()-1;

        int result = nums.size();

        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] > x){
                result = mid;
                high = mid-1;
            }
            else if(nums[mid] <= x){
                low = mid + 1;
            }
            
        }
        return result;
    }
};