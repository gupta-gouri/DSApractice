class Solution {
public:
    //Function to find intersection of two sorted arrays
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        // To maintain visited status
        vector<int> visited(nums2.size(), 0);
   
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {

               /*If nums1[i] is equal to nums2[j] and nums2[j]
               is not visited then add nums2[j] in ans.*/
                if (nums1[i] == nums2[j] && visited[j] == 0) {
                    ans.push_back(nums2[j]);
                    
                    // Mark as visited
                    visited[j] = 1;
                    
                    break;
                } 
                /** If num2[j] is greater than nums1[i] 
                break out of the loop */
                else if (nums2[j] > nums1[i])
                    break; 
            }
        }
       //Return ans vector
        return ans;
    }
};