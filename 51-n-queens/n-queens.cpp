class Solution {
public:
    int queen[9];
    bool check(int row , int col){
        for(int i = 0 ; i<row ; i++){
            int j = queen[i];
            if (j == col || abs(row - i) == abs(col - j))
                return 0;
        }
        return 1;
    }
    void rec(int level , int n , vector<vector<string>>&ans , vector<string>&board){
        if(level == n){
            ans.push_back(board);
            return;
        }
        for(int ch = 0 ; ch < n ; ch++){
            if(check(level , ch)){
                board[level][ch] = 'Q';
                queen[level] = ch;
                rec(level+1 , n , ans , board);
                queen[level] = -1;
                board[level][ch] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> board(n, string(n, '.'));
        memset(queen , -1 , sizeof(queen));
        rec(0 , n , ans , board);
        return ans;
    }
};