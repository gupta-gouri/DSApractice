class Solution {
public:
    bool func(vector<vector<char>>& b, int i, int j, string& s, int k) {
        if (k == s.size()) return true;

        if (i < 0 || j < 0 || i >= b.size() || j >= b[0].size() || b[i][j] != s[k])
            return false;

        char temp = b[i][j];
        b[i][j] = ' '; // mark visited

        bool ans = func(b, i+1, j, s, k+1) ||
                   func(b, i-1, j, s, k+1) ||
                   func(b, i, j+1, s, k+1) ||
                   func(b, i, j-1, s, k+1);

        b[i][j] = temp; // backtrack
        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size(), cols = board[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (board[i][j] == word[0] && func(board, i, j, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
