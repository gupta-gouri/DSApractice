class Solution {
public:
    int countPartitions(vector<int> a, int k, int mid){
        int n = a.size();
        int count = 1;
        int subarraySum = 0;
        for(int i=0; i<n; i++){
            if(subarraySum + a[i] <= mid){
                subarraySum += a[i];
            }
            else{
                count++;
                subarraySum = a[i];
            }
        }
        return count;
    }
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        int low = *max_element(a.begin(), a.end());
        int high = accumulate(a.begin(), a.end(),0);
        int ans;

        while(low <= high){ 
            int mid = low +(high - low)/2;
            int partition = countPartitions(a, k, mid);
            if(partition <=  k){
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