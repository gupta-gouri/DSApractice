class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        unordered_map<string, vector<string>> anagramGroups;
        vector<vector<string>> ans;

        for(string word: nums){
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            anagramGroups[sortedWord].push_back(word);
        }

        for(auto& groups: anagramGroups){
            ans.push_back(groups.second);
        }

        return ans;
    }
};
