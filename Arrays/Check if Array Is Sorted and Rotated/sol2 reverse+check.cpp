/*
TC - O(n)
SC - O(1)

Find first position where array order decreases (nums[i-1] > nums[i])
Rotate array back to sorted form using 3 reverses
Check if the array is now sorted
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                reverse(nums.begin(), nums.begin()+i-1);
                reverse(nums.begin()+i, nums.end());
                reverse(nums.begin(), nums.end());
                break;
            }
        }
        bool flag = true;
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                flag = false;
            }
        }
        return flag;
    }
};