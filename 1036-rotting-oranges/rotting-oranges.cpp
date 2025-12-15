class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        queue<pair<pair<int,int>,int>>que;
        vector<vector<int>>vis(n , vector<int>(m , 0));
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(grid[i][j] == 2){
                    que.push({{i , j} , 0});
                    vis[i][j] = 2;
                }
            }
        }
        int time = 0;
        vector<int> row = {-1, 0 , 1 , 0};
        vector<int> col = {0 , -1 , 0 ,1};
        while(!que.empty()){
            int r = que.front().first.first;
            int c = que.front().first.second;
            int t = que.front().second;
            time = max(t , time);
            que.pop();

            for(int i = 0 ; i<4 ; i++){
                int nRow = r + row[i];
                int nCol = c + col[i];
                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && vis[nRow][nCol] != 2 && grid[nRow][nCol] == 1){
                    que.push({{nRow , nCol} , t+1});
                    vis[nRow][nCol] = 2;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] != 2)
                    return -1;
            }
        }

        return time;
    }
};