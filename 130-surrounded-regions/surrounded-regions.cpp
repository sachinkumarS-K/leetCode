class Solution {
public:
    void bfs(int r , int c , vector<vector<char>>& board , vector<vector<bool>>&vis){
        int n = board.size(), m = board[0].size();
        vis[r][c] = true;
        queue<pair<int,int>>que;
        que.push({r,c});

        vector<int>dr = {-1,0,1,0};
        vector<int>dc = {0,-1,0,1};

        while(!que.empty()){
            auto [row , col] = que.front();
            que.pop();
            for(int i = 0 ; i<4 ; i++){
                int nRow = row + dr[i];
                int nCol = col + dc[i];
                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && board[nRow][nCol] == 'O' && !vis[nRow][nCol]){
                    que.push({nRow , nCol});
                    vis[nRow][nCol] = true;
                }
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
                    bfs(i, j, board, vis);
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