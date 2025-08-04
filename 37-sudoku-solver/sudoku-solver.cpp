class Solution {
public:
    bool findCell(vector<vector<char>>& arr, int& row, int& col) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (arr[i][j] == '.') {
                    row = i;
                    col = j;
                    return true;
                }
            }
        }
        return false;
    }
    bool isSafe(vector<vector<char>>& arr, int row, int col, int tar) {
        for (int i = 0; i < 9; i++) {
            if (arr[i][col] == tar) {
                return false;
            }
        }
        for (int i = 0; i < 9; i++) {
            if (arr[row][i] == tar)
                return false;
        }
        int sr = row - (row % 3);
        int sc = col - (col % 3);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[sr + i][sc + j] == tar)
                    return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board) {
        int row, col;
        if (!findCell(board, row, col))
            return true;

        for (int i = 1; i <= 9; i++) {
            char t = '0' + i;
            if (isSafe(board, row, col, t)) {
                board[row][col] = t;
                if (solve(board))
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};