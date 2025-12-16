class Solution {
public:
    void dfs(int r , int c , vector<vector<char>>& board , vector<vector<bool>>&vis){
        int n = board.size(), m = board[0].size();
        vis[r][c] = true;

        vector<int>dr = {-1,0,1,0};
        vector<int>dc = {0,-1,0,1};

        for(int i = 0 ; i<4 ; i++){
            int nr = r + dr[i] , nc = c + dc[i] ;
            if(nr >= 0 && nr < n && nc >= 0 && nc < m && board[nr][nc] == 'O' && !vis[nr][nc]){
                dfs(nr,nc , board , vis);
            }
        }

    }
    void solve(vector<vector<char>>& board) {

        int r = board.size(), c = board[0].size();
        vector<vector<bool>> vis(r, vector<bool>(c, false));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if ((i == 0 || j == 0 || i == r-1 || j == c-1) &&
                    board[i][j] == 'O' && !vis[i][j]) {
                    dfs(i, j, board, vis);
                }
            }
        }
        for(int i = 0 ; i<r ; i++){
            for(int j = 0 ; j<c ; j++){
                if(board[i][j] == 'O' && !vis[i][j])
                    board[i][j] = 'X';
            }
        }
    }
};