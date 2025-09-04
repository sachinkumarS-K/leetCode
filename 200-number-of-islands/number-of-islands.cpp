class Solution {
public:
    bool check(int i , int j , int r, int c ,vector<vector<char>>& grid ,vector<vector<bool>>&visited){
        if((i < r && i >= 0) && (j < c && j >= 0) && !visited[i][j] && grid[i][j] == '1')
            return true;
        else
            return false;
    }
    void dfs(int i , int j , int r, int c ,vector<vector<char>>& grid ,vector<vector<bool>>&visited){

        if(check(i+1 , j , r , c , grid , visited)){
            visited[i+1][j] = true;
            dfs(i+1 , j , r , c , grid , visited);
        }
        if(check(i-1 , j , r , c , grid , visited)){
            visited[i-1][j] = true;
            dfs(i-1 , j , r , c , grid , visited);
        }
        if(check(i, j+1 , r , c , grid , visited)){
            visited[i][j+1] = true;
            dfs(i , j+1 , r , c , grid , visited);
        }
        if(check(i , j-1 , r , c , grid , visited)){
            visited[i][j-1] = true;
            dfs(i , j-1 , r , c , grid , visited);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size() , n = grid[0].size();
        vector<vector<bool>>visited(m , vector<bool>(n , false));
        int count = 0 ;
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] == '1' && !visited[i][j]){
                    count++;
                    dfs(i , j , m , n , grid , visited);
                }
            }
        }
        return count;
    }
};