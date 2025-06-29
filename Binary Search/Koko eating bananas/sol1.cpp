class Solution {
public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while(low <= high){
            int mid = low + (high-low)/2;

            long long time = 0;
            for(int num:nums){
                time += (num + mid - 1)/mid;
            }
            if(time <= h){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }            
        }
        return ans;
    }
};
