class Solution {
public:
    bool canWePlace(vector<int> nums, int k, int dist){
        int n = nums.size();
        int cowsPlaced = 1;
        int last_pos = nums[0]; // 1 cow is placed at 0th stall

        for(int i=0; i<n; i++){
            if(nums[i] - last_pos >= dist){ //distance safe
                cowsPlaced++;
                last_pos = nums[i];
            }
        }
        return cowsPlaced >= k;
    }
    int aggressiveCows(vector<int> &nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int low = 1;
        int high = nums[n-1] - nums[0];

        int ans;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(canWePlace(nums, k, mid)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};