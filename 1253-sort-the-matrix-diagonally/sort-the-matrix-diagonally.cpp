class Solution {
public:
    void sortDiagonal(int row , int col , vector<vector<int>>& grid){
        vector<int>arr ;
        int r = row , c = col ;
        while(r < grid.size() && c < grid[0].size())
            arr.push_back(grid[r++][c++]);
        
        sort(arr.begin() , arr.end());
        int i = 0 ;
        while(row < grid.size() && col < grid[0].size())
            grid[row++][col++] = arr[i++];
        
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        for(int i = 0 ; i<mat.size() ; i++)
            sortDiagonal(i , 0 , mat);

        for(int i = 1 ; i<mat[0].size() ; i++)
            sortDiagonal(0 , i , mat);

        return mat ;
    }
};