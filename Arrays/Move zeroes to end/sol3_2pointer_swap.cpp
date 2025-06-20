/*
TC - O(n)
SC - O(1)

Two-pointer swap 
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j++]);
            }
        }
        
    }   
};