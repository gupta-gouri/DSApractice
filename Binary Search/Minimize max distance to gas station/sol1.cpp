class Solution {
public:
    bool CanPlace(vector<int> nums, long double dist, int k){
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n-1; i++){
            long double gap = nums[i+1] - nums[i];
            count += int(gap/dist);
        }
        return count <= k;
    }
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        int n = arr.size();
        long double low = 0;
        long double high = arr[n-1] - arr[0];
        long double eps = 1e-6;

        long double ans = -1; 

        while(high - low > eps){
            long double mid = low + (high- low)/2;

            if(CanPlace(arr, mid, k)){
                ans = mid;
                high = mid;
            }
            else{
                low = mid;
            }
        }
        return ans;
    }
};