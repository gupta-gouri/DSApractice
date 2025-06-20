/*
TC - O(n)
SC - O(1)

uses 2 pointer approach
overwrites the duplicates in-place
preserves the original order

*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i=0; i<n; i++){
            if(i==0 || nums[i] != nums[i-1]){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};


/* OTHER - can't use set because it sorts the array
         - can't use unordered set because it doesnt preserves the original order */