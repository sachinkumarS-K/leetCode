class Solution {
public:
    bool isSafe(vector<vector<int>>& image, int i, int j, int r, int c,
                int color , vector<vector<bool>>&visited) {
         if((i < r && i >= 0) && (j < c && j >= 0) && !visited[i][j] && image[i][j] == color)
            return true;
        else
            return false;
    }
    void dfs(vector<vector<int>>& image,int i, int j, int r, int c,int color,
                vector<vector<bool>>&visited , int col) {

        if(isSafe(image , i-1 , j , r , c , col , visited)){
            visited[i-1][j] = true;
            dfs(image , i-1  , j , r  ,c , color , visited , col);
            image[i-1][j] = color;
        }
        if(isSafe(image , i+1 , j , r , c , col , visited)){
            visited[i+1][j] = true;
            dfs(image , i+1  , j , r  ,c , color , visited , col);
            image[i+1][j] = color;
        }
        if(isSafe(image , i , j-1 , r , c , col , visited)){
            visited[i][j-1] = true;
            dfs(image , i  , j-1 , r  ,c , color , visited , col);
            image[i][j-1] = color;
        }
        if(isSafe(image , i , j+1 , r , c , col , visited)){
            visited[i][j+1] = true;
            dfs(image , i  , j+1 , r  ,c , color , visited , col);
            image[i][j+1] = color;
        }
    
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size() , n = image[0].size();
        vector<vector<bool>>visited(m , vector<bool>(n , false));
        visited[sr][sc] = true;
        dfs(image,sr , sc , m , n ,color, visited  , image[sr][sc]);
        image[sr][sc] = color;
        return image;
    }
};