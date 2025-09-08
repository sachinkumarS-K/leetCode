class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int i , int j , int r , int c , char ch , vector<vector<bool>>&visited){
        if((i < r && i>=0 && j<c && j >=0) && !visited[i][j] && board[i][j] == ch)
            return true;
        return false;
    }
    bool dfs(vector<vector<char>>& board,string word,int k, int i , int j , int r , int c , vector<vector<bool>>&visited){
        if(k == word.size())
            return true;

        if(isSafe(board , i+1 , j , r , c , word[k] , visited)){
            visited[i+1][j] = true;
            if(dfs(board , word , k+1 , i+1 , j , r , c , visited))
                return true;
            visited[i+1][j] = false;
        }
        if(isSafe(board , i-1 , j , r , c , word[k] , visited)){
            visited[i-1][j] = true;
            if(dfs(board , word , k+1 , i-1 , j , r , c , visited))
                return true;
            visited[i-1][j] = false;
        }
        if(isSafe(board , i , j+1 , r , c , word[k] , visited)){
            visited[i][j+1] = true;
            if(dfs(board , word , k+1 , i , j+1 , r , c , visited))
                return true;
            visited[i][j+1] = false;
        }
        if(isSafe(board , i , j-1 , r , c , word[k] , visited)){
            visited[i][j-1] = true;
            if(dfs(board , word , k+1 , i , j-1 , r , c , visited))
                return true;
            visited[i][j-1] = false;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size() , c= board[0].size();
        vector<vector<bool>>visited(r , vector<bool>(c , false));
        for(int i =  0 ; i<r ; i++){
            for(int j = 0 ; j<c ; j++){
                if(board[i][j] == word[0]){
                    visited[i][j] = true;
                    if(dfs(board ,word,1, i , j , r , c , visited))
                        return true;
                    visited[i][j] = false;
                }
            }
        }
        return false;
    }
};