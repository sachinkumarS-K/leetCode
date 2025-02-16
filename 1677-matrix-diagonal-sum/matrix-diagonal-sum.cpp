class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        for(int i = 0 ; i<mat.size() ; i++){
            s += mat[i][i] ;
            if(i != mat.size()-i-1)
                s+= mat[i][mat.size()-i-1];
        }
        return s;

    }
};