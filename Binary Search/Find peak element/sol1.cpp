class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            int maxRow = 0;
            for(int i = 0; i<n; i++){
                if(mat[i][mid] > mat[maxRow][mid]){
                    maxRow = i;
                }
            }

            int left = (mid-1 >=0) ? mat[maxRow][mid-1] : -1;
            int right = (mid+1 < m) ? mat[maxRow][mid+1] : -1;
            int val = mat[maxRow][mid];

            if(val > left && val > right){
                return {maxRow, mid};
            }
            else if(right > val){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return {-1,-1};
    }
};