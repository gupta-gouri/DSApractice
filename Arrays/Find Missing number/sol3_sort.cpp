/*
TC - O(n logn)
SC - O(1)

sort the array and then find the missing number by comparing the elements from indices

*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(nums[i] != i) return i;
        }
        return n;
    }
};