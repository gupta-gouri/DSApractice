/*
TC - O(n)
SC - O(1)

using the sum of n formula, calculate the sum and subtract it with the sum of array - it will give the missing no.

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expected_sum = n*(n+1)/2;
        int actual_sum = 0;

        for(int i=0; i<n; i++){
            actual_sum += nums[i];
        }
        
        return expected_sum - actual_sum;
    }
};

/*
    OTHER - 1) hashing method - use a hash set, then find all the elements in range [0,n], the missing number can be found easily
            TC - O(n)
            SC - O(n)

            2) boolean vector visited - for each element if visited then mark its boolean in vector as true, then from index [0,n] 
            find the not visited element
            TC - O(n)
            SC - O(n)

*/