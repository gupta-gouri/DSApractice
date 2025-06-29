class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map<int, int> prefixSumIndex;
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum == k) {
            maxLen = i + 1;
        }

        if (prefixSumIndex.find(sum - k) != prefixSumIndex.end()) {
            maxLen = max(maxLen, i - prefixSumIndex[sum - k]);
        }

        if (prefixSumIndex.find(sum) == prefixSumIndex.end()) {
            prefixSumIndex[sum] = i;
        }
    }

    return maxLen;
    }
};
