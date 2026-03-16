class Solution {
public:
    int queen[10] = {-1};
    bool check(int row , int col){
        for(int i = 0 ; i<row ; i++){
            int j = queen[i];
            if(j == col || abs(row-i) == abs(col-j))
                return false;
        }
        return true;
    }
    void solve(int r , int n , vector<vector<string>>&ans , vector<string>&board){
        if(r == n){
            ans.push_back(board);
            return;
        }
        for(int i = 0 ; i<n ; i++){
            if(check(r , i)){
                board[r][i] = 'Q';
                queen[r] = i;
                solve(r+1 , n , ans , board);
                board[r][i] = '.';
                queen[r] = -1;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));

        solve(0 , n , ans , board);
        return ans;
    }
};