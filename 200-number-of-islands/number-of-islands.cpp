class Solution {
public:
    bool check(int i , int j , vector<vector<char>>& grid , vector<vector<bool>>&vis){
        return ((i >= 0 && i < grid.size()) && (j >= 0 && j < grid[0].size()) && grid[i][j] == '1' && !vis[i][j]) ;
    }
    void dfs(int i , int j , vector<vector<char>>& grid , vector<vector<bool>>&vis){
        if(check(i+1 , j , grid , vis)){
            vis[i+1][j] = true;
            dfs(i+1 , j , grid, vis);
        }
        if(check(i-1 , j , grid , vis)){
            vis[i-1][j] = true;
            dfs(i-1 , j , grid, vis);
        }
        if(check(i , j+1 , grid , vis)){
            vis[i][j+1] = true;
            dfs(i , j+1 , grid, vis);
        }
        if(check(i , j-1 , grid , vis)){
            vis[i][j-1] = true;
            dfs(i , j-1 , grid, vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0 ;
        int m = grid.size() , n = grid[0].size();
        vector<vector<bool>>vis(m , vector<bool>(n , false));

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    count++;
                    dfs(i , j , grid , vis);
                }
            }
        }


        return count;
    }
};