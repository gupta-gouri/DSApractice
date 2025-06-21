class Solution{
public:
    int Helper(vector<int> &nums, int s, int e, int target){
        if(s > e) return -1;

        int mid = s+(e-s)/2;
        if(nums[mid] == target) return mid;

        else if(nums[mid] < target){
            return Helper(nums, mid+1, e, target);
        }
        else{
            return Helper(nums, s, mid-1, target);
        }
    }
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        return Helper(nums, low, high, target);
    }
};
/* 
TC - O(logn)
SC - O(logn)
*/