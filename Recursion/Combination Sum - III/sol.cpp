class Solution {
public:
    void func(int sum, int last, int k, vector<int> &v, vector<vector<int> > &ans){
        // if sum is zero and no elements is k
        if(v.size() == k && sum == 0){
            ans.push_back(v);
            return;
        }

        // if sum is less than or equal to zero or the no of elements is more than k
        if(v.size() > k || sum <= 0) return;

        // iterate from last no to 9
        for(int i=last; i<=9; i++){

            // if current element is safe to be added to sum
            if(i <= sum){
                // include the current element
                v.push_back(i);
                // recursive call with next number and updated sum
                func(sum -i, i+1, k, v, ans);
                // backtrack
                v.pop_back();
            }
            else{
                // if number is greater than sum, break the loop
                break;
            }
        }
    }
    vector<vector<int> > combinationSum3(int k, int n) {
    	vector<vector<int> > ans;
        vector<int> v;
        func(n, 1, k, v, ans);
        return ans;
    }
};