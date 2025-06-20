/*
Given an array of integers nums and an array goodNumbers, return the maximum number of consecutive good numbers in the array.

Any number present in the goodNumbers array is a good number.


Examples:
Input: nums = [1, 2, 3, 5, 4, 5, 1], goodNumbers = [3, 5]

Output: 2

Explanation: [1, 2, 3, 5, 4, 5, 1] the underlined numbers are all good numbers and give the maximum length.

Input: nums = [4, 8, 1, 2, 0, 4, 6], goodNumbers = [1, 4, 2, 6]

Output: 2

Explanation: [4, 8, 1, 2, 0, 4, 6] the underlined numbers are all good numbers and give the maximum length.

Note that the segment with index [6, 7] was also a possible answer.
*/

class Solution {
public:
    int maxConsecutiveGoodNums(vector<int>& nums, vector<int>& goodNumbers) {
        int n = nums.size();
        int maxcount = 0;
        int count = 0;

        unordered_set<int> goodSet(goodNumbers.begin(), goodNumbers.end());

        for(int i:nums){
            if(goodSet.count(i)){
                count ++;
                maxcount = max(maxcount, count);
            }
            else{
                count = 0;
            }
        }
        return maxcount;
    }
};

/*
TC - O(n)
SC - O(n)
*/