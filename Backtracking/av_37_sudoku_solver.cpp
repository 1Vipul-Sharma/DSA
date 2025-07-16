class Solution {
public:
    bool isValid(vector<vector<char>>& board, int val, int row, int col) {
        char ch = val + '0';
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == ch) return false;
            if (board[i][col] == ch) return false;
        }
        int dx = (row / 3) * 3;
        int dy = (col / 3) * 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[dx + i][dy + j] == ch) return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (int val = 1; val <= 9; val++) {
                        if (isValid(board, val, i, j)) {
                            board[i][j] = val + '0';
                            if (solve(board)) return true;
                            board[i][j] = '.'; // backtrack
                        }
                    }
                    return false; // no valid number found
                }
            }
        }
        return true; // board completely filled
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
