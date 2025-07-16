//better solution figure it out by yourself

class Solution {
public:
    void markvisited(vector<vector<int>>& visited, int row, int col, int n) {
        // mark right in row
        for (int i = col; i < n; i++) visited[row][i]++;

        // mark upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) visited[i][j]++;

        // mark lower-right diagonal
        for (int i = row, j = col; i < n && j < n; i++, j++) visited[i][j]++;
    }

    void unmarkvisited(vector<vector<int>>& visited, int row, int col, int n) {
        // unmark right in row
        for (int i = col; i < n; i++) visited[row][i]--;

        // unmark upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) visited[i][j]--;

        // unmark lower-right diagonal
        for (int i = row, j = col; i < n && j < n; i++, j++) visited[i][j]--;
    }

    void solve(int col, vector<vector<int>>& visited, vector<string>& board, vector<vector<string>>& res, int n) {
        if (col == n) {
            res.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (visited[row][col] == 0) {
                board[row][col] = 'Q';
                markvisited(visited, row, col, n);
                solve(col + 1, visited, board, res, n);
                unmarkvisited(visited, row, col, n);
                board[row][col] = '.'; 
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.'));
        vector<vector<int>> visited(n, vector<int>(n, 0));
        solve(0, visited, board, res, n);
        return res;
    }
};
