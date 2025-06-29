class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set s(nums.begin(), nums.end());
        int n = nums.size();

        for (int num : s) {
            if (s.find(num - 1) == s.end()) {
                int currNum = num;
                int streak = 1;
            
            while (s.find(currNum + 1) != s.end()) {
                currNum++;
                streak++;
            
            }
            longest = max(longest, streak);
            }
        }
        return longest;
    }
};