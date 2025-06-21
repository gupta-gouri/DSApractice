class Solution
{
public:
    
    int lowerBound(vector<int>& nums, int x)
    {
        int low = 0, high = nums.size() - 1;
        int ans = nums.size(); 

        while (low <= high) {
            int mid = (low + high) / 2; 

            if (nums[mid] >= x) {
                ans = mid; //mid could be the lower bound
                high = mid - 1; // try to find smaller index
            } 
            else {
                // Search right half
                low = mid + 1; 
            }
        }
        return ans; 
    }
};