class Solution {
public:
    //Function to find intersection of two sorted arrays
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        // Vector to store the intersection elements
        vector<int> ans;
        // Pointers for nums1 and nums2
        int i = 0, j = 0; 

        // Traverse both arrays using two pointers approach
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums2[j] < nums1[i]) {
                j++;
            } 
          // nums1[i] == nums2[j]
          else { 
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
       
       //Return intersection
        return ans;
    }
};