/*
Symmetric difference of two arrays 
The set difference of two arrays is an array where all values are distinct and are present in either the first array or the second array, but not in both.

TC - O(nlogn)
SC - O(n)

Put all elements of nums1 in a set s1.

Put all elements of nums2 in a set s2.

For each element in nums2, if not in s1, add to result.

For each element in nums1, if not in s2, add to result.

*/
class Solution {
public:
    vector<int> setDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        set<int> ans;

        for(int i:nums2){
            if(s1.count(i) == 0){
                ans.insert(i);
            }
        }
        for(int i:nums1){
            if(s2.count(i) == 0){
                ans.insert(i);
            }
        }

        vector<int> result(ans.begin(), ans.end());
        return result;
    }
};