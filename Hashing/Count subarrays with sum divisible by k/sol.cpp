class Solution{
public:
    int subarraySumDivisbleByK(vector<int> &nums, int k){
        unordered_map<int, int> count;

        int prefixSum = 0;
        int result = 0;

        count[0] = 1;
        for(int num:nums){
            prefixSum += num;

            int mod = (((prefixSum % k) + k) % k);

            if(count.find(mod) != count.end()){
                result += count[mod];
            }

            count[mod] ++;
        }
        return result;
    }
};