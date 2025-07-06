class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       // Using unordered for storing unique elements
        set<int> s; 
        vector<int> Union;

        // Insert all elements of nums1 into the set
        for (int num : nums1) {
            s.insert(num);
        }

        // Insert all elements of nums2 into the set
        for (int num : nums2) {
            s.insert(num);
        }

        // Convert the set to vector to get the union
        for (int num : s) {
            Union.push_back(num);
        }

        return Union;
    }
};