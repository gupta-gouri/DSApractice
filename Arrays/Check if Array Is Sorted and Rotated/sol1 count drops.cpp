/*
TC - O(n)
SC - O(1)
Count how many times the array order decreases (nums[i-1] > nums[i])
Also check end-to-start pair (nums[n-1] > nums[0])
If there's more than 1 drop, array is not a rotated sorted array
*/


class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                count ++;
            }
        }
        if(count != 0){
            if(nums[n-1] <= nums[0]) count --;
        }   

        return (count==0) ? true : false;
    }
};