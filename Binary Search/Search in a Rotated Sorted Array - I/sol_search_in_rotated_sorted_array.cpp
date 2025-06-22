class Solution {
   public:
    int findPivot(vector<int> &nums) {
        int ans = -1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                ans = i - 1;
            }
        }
        return ans;
    }
    int search(vector<int> &nums, int k) {
        int n = nums.size();
        int pivot = findPivot(nums);

        int s = 0;
        int e = pivot;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] < k) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        s = pivot + 1;
        e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == k) {
                return mid;
            } else if (nums[mid] < k) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return -1;
    }
};