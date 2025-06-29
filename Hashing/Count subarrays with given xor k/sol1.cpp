class Solution {
   public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        int xr = 0;
        int count = 0;
        int x;
        
        map<int, int> M;
        M[xr]++;
        
        for (int i = 0; i < n; i++) {
            xr ^= nums[i];
            x = xr ^ k;
            count += M[x];
            M[xr]++;
        }
        return count;
    }
};