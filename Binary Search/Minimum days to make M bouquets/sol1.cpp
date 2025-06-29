class Solution {
public:
    bool isPossible(vector<int> nums, int day, int m, int k){
        int count = 0;
        int bouquet = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] <= day){
                count ++;
                if(count == k){
                    count = 0;
                    bouquet++;
                }
            }
            else{
                count = 0;
            }
        }
        return bouquet >= m;
    }
    int roseGarden(int n,vector<int> nums, int k, int m) {
        if(k*m > n) return -1; //no of roses are less than required roses

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        
        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(isPossible(nums, mid, m, k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};