class Solution {
  public: 
    int CountOnes(vector<int> nums)  {
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == 1){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return nums.size() - ans;
    }
    int rowWithMax1s(vector < vector < int >> & mat) {
        int m = mat[0].size();
        int n = mat.size();

        int maxCount = 0;
        int index = -1;
        for(int i=0; i<n; i++){
            int count = CountOnes(mat[i]);
            if(count > maxCount){
                maxCount = count;
                index = i;
            }
        }
        return index;
    }
};