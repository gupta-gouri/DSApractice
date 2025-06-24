class Solution {
public:
    int NthRoot(int N, int M) {
        int low = 1, high = M;
        int ans;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(pow(mid, N) == M) return mid;
            else if(pow(mid, N) > M){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};
