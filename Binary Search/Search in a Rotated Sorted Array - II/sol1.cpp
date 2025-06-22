class Solution {
   public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int target) {
        int low = 0, high = nums.size() - 1;
        bool found = false;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) found = true;
            
            // to handle duplicates, shrink search space
            if(nums[mid] == nums[low] && nums[mid] == nums[high]){
                low ++;
                high --;
            }
            else if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return found;
    }
};