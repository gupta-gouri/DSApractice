class Solution {
public:
    long long floorSqrt(long long n)  {
        if(n == 0 || n == 1) return n;

       long long low = 1, high = n;

       while(low <= high){

        long long mid = low + (high - low)/2;

            if(mid * mid == n){
                return mid;
            }
            else if(mid * mid < n){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
       }
       return high;
    }
};