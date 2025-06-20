/*
TC - O(n)
SC - O(1)

uses unique and erase approach
preserves the order
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        return nums.size();
    }
};

/*
OTHER - 1) can use extra vector 
            TC - O(n) 
            SC - O(n)

      - 2) Rotate one by one: move the last element to front, shift others to right (repeat k times)
            TC - O(n*k) 
            SC - O(1)
*/