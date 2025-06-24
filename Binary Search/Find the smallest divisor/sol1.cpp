class Solution {
public:
    int smallestDivisor(vector<int> &nums, int limit) {
        int n = nums.size();

        // Set binary search boundaries:
        // The smallest divisor can be 1
        // The largest divisor can be the max element in nums
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = 0;  // Store the smallest valid divisor found

        while (low <= high) {
            int mid = low + (high - low)/2;  // Candidate divisor (avoid overflow)

            int sum = 0;
            // Calculate the sum of ceil(num / mid) for all nums
            for(int num: nums){
                sum += (num + mid - 1) / mid;  
                // This computes ceil(num / mid) using integer math
                // (num + mid - 1) / mid is equivalent to ceil(num / mid)
            }

            if(sum <= limit){
                // If the sum is within the limit, mid is a valid divisor
                ans = mid;
                // Try to find a smaller divisor (minimize)
                high = mid - 1;
            }
            else{
                // If sum exceeds the limit, we need a larger divisor
                low = mid + 1;
            }
        }

        // Return the smallest divisor found that satisfies the condition
        return ans;
    }
};
