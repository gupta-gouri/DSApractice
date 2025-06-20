class Solution {
public:
    vector<int> setDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        // Check nums1 elements not in nums2
        for (int i = 0; i < nums1.size(); i++) {
            bool found = false;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                // Check if already in result (since we want unique elements)
                bool already = false;
                for (int r : result) {
                    if (r == nums1[i]) {
                        already = true;
                        break;
                    }
                }
                if (!already) result.push_back(nums1[i]);
            }
        }

        // Check nums2 elements not in nums1
        for (int i = 0; i < nums2.size(); i++) {
            bool found = false;
            for (int j = 0; j < nums1.size(); j++) {
                if (nums2[i] == nums1[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                bool already = false;
                for (int r : result) {
                    if (r == nums2[i]) {
                        already = true;
                        break;
                    }
                }
                if (!already) result.push_back(nums2[i]);
            }
        }

        return result;
    }
};

/*

For each element in nums1, check every element in nums2.

If not found, and not already in result, add it.

Repeat same for elements in nums2 vs nums1.


TC - O(n^2)
SC - O(1)
*/