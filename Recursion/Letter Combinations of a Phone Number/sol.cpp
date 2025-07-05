class Solution {
public:
    // Mapping of digits to letters as per phone keypad
    string combos[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void func(int i, string digits, string s, vector<string> &result) {
        // Base case: if all digits are processed, store the formed string
        if (i == digits.size()) {
            result.push_back(s);
            return;
        }

        // Get the digit at current index and convert it to int
        int digit = digits[i] - '0';

        // Get the corresponding letters for the current digit
        string letters = combos[digit];

        // Loop through each letter and recurse for the next digit
        for (char ch : letters) {
            func(i + 1, digits, s + ch, result);  // Append the letter and move to next digit
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string curr;  // Temporary string to build each combination

        // Edge case: if input is empty, return empty result
        if (digits.empty()) return result;

        // Start recursive process from index 0
        func(0, digits, curr, result);
        return result;
    }
};
