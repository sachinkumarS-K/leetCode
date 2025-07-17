class Solution {
public:
    bool check(int i, int j, vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int count = 0;

                if (check(i - 1, j, board) && board[i - 1][j]) count++;
                if (check(i + 1, j, board) && board[i + 1][j]) count++;
                if (check(i, j - 1, board) && board[i][j - 1]) count++;
                if (check(i, j + 1, board) && board[i][j + 1]) count++;
                if (check(i - 1, j - 1, board) && board[i - 1][j - 1]) count++;
                if (check(i - 1, j + 1, board) && board[i - 1][j + 1]) count++;
                if (check(i + 1, j - 1, board) && board[i + 1][j - 1]) count++;
                if (check(i + 1, j + 1, board) && board[i + 1][j + 1]) count++;

                if(board[i][j] == 1){
                    if(count < 2 || count > 3)
                        ans[i][j] = 0;
                    else
                        ans[i][j] = 1;
                }
                else{
                    if(count == 3)
                        ans[i][j] = 1;
                }
            }
        }

        board = ans;
    }
};
