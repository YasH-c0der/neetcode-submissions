class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<int, bool> duprow;
            unordered_map<int, bool> dupcol;
            for (int j = 0; j < 9; j++) {
                int k = 0;
                if (board[i][j] == '.')
                    k = 2;
                else if (duprow.find(board[i][j]) == duprow.end())
                    duprow[board[i][j]] = true;
                else
                    return false;

                if (board[j][i] == '.')
                    k = 3;
                else if (dupcol.find(board[j][i]) == dupcol.end())
                    dupcol[board[j][i]] = true;
                else
                    return false;
            }
        }
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                unordered_map<int, bool> dup;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char val = board[row + i][col + j];
                        if (val != '.') {
                            if (dup.find(val) != dup.end()) return false;
                            dup[val] = true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
