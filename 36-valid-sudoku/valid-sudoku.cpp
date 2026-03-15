class Solution {
public:
    bool check(vector<vector<char>>& board , int sr , int er , int sc , int ec){
        unordered_set<int>st;
        for(int i = sr ; i<er ; i++){
            for(int j = sc ; j<ec ; j++){
                if(board[i][j] == '.')  continue;
                if(st.find(board[i][j]) != st.end())    return false;
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9 ;
        for(int i = 0 ; i<n ; i++){
            unordered_set<int>st;
            for(int j = 0 ; j<n ; j++){
                if(board[i][j] == '.')  continue;
                if(st.find(board[i][j]) != st.end())    return false;
                st.insert(board[i][j]);
            }
        }
        for(int j = 0 ; j<n ; j++){
            unordered_set<int>st;
            for(int i = 0 ; i<n ; i++){
                if(board[i][j] == '.')  continue;
                if(st.find(board[i][j]) != st.end())    return false;
                st.insert(board[i][j]);
            }
        }

        for(int sr = 0 ; sr < n ; sr += 3)
            for(int sc = 0 ; sc < n ; sc += 3)
                if(!check(board , sr , sr + 3 , sc , sc + 3))   return false;

        return true;    
    }
};