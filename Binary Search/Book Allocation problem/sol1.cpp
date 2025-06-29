class Solution {
public:
    bool countStudents(vector<int> nums, int maxPages, int m){
        int students = 1;
        int currentPages = 0;

        for(int pages : nums){
            if(currentPages + pages <= maxPages){
                if(pages > maxPages) return false; // a single book is too big;
                currentPages += pages;
            }
            else{
                students++;
                currentPages = pages;
            }
        }
        return students <= m;
    }
    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();
        if(m > n) return -1;

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = -1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(countStudents(nums, mid, m)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};