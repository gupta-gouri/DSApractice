class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    void func(int index, string s, vector<string> &v, vector<vector<string>> &ans){
        // if the index reaches the end of string
        if(index == s.size()){
            // add the current partition to result
            ans.push_back(v);
            return;
        }

        // iterate over the substring starting from index
        for(int i = index; i < s.size(); i++){

            // check if substrs[index .. i] is a palindrome
            if(isPalindrome(s, index, i)){
                
                // if true, add it to v
                v.push_back(s.substr(index, i-index+1));
                // recur for remaining substr
                func(i+1, s, v, ans);
                // backtrack
                v.pop_back();
            }
        }
    }
    vector<vector<string> > partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        
        func(0, s, v, ans);

        return ans;
    }
};