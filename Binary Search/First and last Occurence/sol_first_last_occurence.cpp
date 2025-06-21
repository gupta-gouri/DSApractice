class Solution{
public:
    int firstOcc(vector<int> &nums, int target, int s, int e){
        if(s>e) return -1;
        int first = -1;
        int mid = s+(e-s)/2;

        if(nums[mid] == target){
            first = mid;
            int left = firstOcc(nums, target, s, mid-1);
            return (left != -1) ? left : mid;
        }
        else if(nums[mid] < target){
            return firstOcc(nums, target, mid+1, e);
        }
        else{
            return firstOcc(nums, target, s, mid-1);
        }
        return first;
    }

    int lastOcc(vector<int> &nums, int target, int s, int e){
        if(s>e) return -1;
        int last = -1;
        int mid = s+(e-s)/2;

        if(nums[mid] == target){
            last = mid;
            int right = lastOcc(nums, target, mid+1, e);
            return (right != -1) ? right : mid;
        }
        else if(nums[mid] < target){
            return lastOcc(nums, target, mid+1, e);
        }
        else{
            return lastOcc(nums, target, s, mid-1);
        }
        return last;
    }


    vector<int> searchRange(vector<int> &nums, int target) {
        int n = nums.size();
        int first = firstOcc(nums, target, 0, n-1);
        int last = lastOcc(nums, target, 0, n-1);

        return {first, last};
    }
};