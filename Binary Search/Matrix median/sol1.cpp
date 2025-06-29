class Solution{
public:
    int upperBound(vector<int> & nums, int x, int m){
        int low = 0;
        int high = m - 1;
        int ans = m;

        while (low <= high) {
            int mid = (low + high) / 2;
            
            if (nums[mid] > x) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1; 
            }
        }
        return ans;
    }
    int countSmallEqual(vector<vector<int>> &mat, int m, int n, int mid){
        int count = 0;
        for(int i=0; i<n; i++){
            count += upperBound(mat[i], mid, m);
        }
        return count;
    }
    int findMedian(vector<vector<int>>&mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = INT_MAX;
        int high = INT_MIN;

        for(int i=0; i<n; i++){
            low = min(low, mat[i][0]);
            high = max(high, mat[i][m-1]);
        }

        int desired = (m * n) / 2;
        while(low <= high){
            int mid = low+ (high - low) / 2;

            int smallEqual = countSmallEqual(mat, m, n, mid);
            if(smallEqual <= desired){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};