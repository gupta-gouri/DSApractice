/*
TC - O(n)
SC - O(n)

Create a temp array, copy non-zeros, pad with zeros.

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        vector<int> ans;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
            else{
                count ++;
            }
        }
        for(int i=0; i<n-count; i++){
            nums[i] = ans[i];
        }
        for(int i=n-count; i<n; i++){
            nums[i] = 0;
        }
    }   
};

/*
OTHER  - Brute Force - for every zero found, shift the other elements towards left and add 0 to end
TC - O(n^2)
SC - O(1)
*/