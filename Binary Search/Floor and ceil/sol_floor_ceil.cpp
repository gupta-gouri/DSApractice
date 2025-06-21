class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int floor = -1;
        int ceil = -1;
        
        int s = 0;
        int e = n-1;

        while(s<=e){
            int mid = s+(e-s)/2;

            if(nums[mid] <= x){
                floor = nums[mid];
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        s = 0, e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;

            if(nums[mid] >= x){
                ceil = nums[mid];
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        vector<int> ans = {floor, ceil};
        return ans;
    }
};