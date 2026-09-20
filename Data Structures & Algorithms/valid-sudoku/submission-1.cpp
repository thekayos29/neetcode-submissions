class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seen; 
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') continue;
                if (seen.count(val)) return false;
                seen.insert(val);
            }
        }

       
        for (int j = 0; j < 9; j++) {
            unordered_set<char> seen; 
            for (int i = 0; i < 9; i++) {
                char val = board[i][j];
                if (val == '.') continue;
                if (seen.count(val)) return false;
                seen.insert(val);
            }
        }

       
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                unordered_set<char> seen; 
                for (int r = boxRow; r < boxRow + 3; r++) {
                    for (int c = boxCol; c < boxCol + 3; c++) {
                        char val = board[r][c];
                        if (val == '.') continue;
                        if (seen.count(val)) return false;
                        seen.insert(val);
                    }
                }
            }
        }

        return true; 
    }
};