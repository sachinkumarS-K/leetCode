class Solution {
public:
    void sortDiagonal(int row , int col ,vector<vector<int>>& grid , bool flag = true){
        vector<int>arr ;
        int r = row , c = col ;
        while(r < grid.size() && c < grid[0].size())
            arr.push_back(grid[r++][c++]);
        
        r = row , c = col ;
        if(flag)
            sort(arr.begin() , arr.end() , greater<int>());
        else
            sort(arr.begin() , arr.end());
        int i = 0 ;
         while(r < grid.size() && c < grid[0].size())
            grid[r++][c++] = arr[i++];
        
    }
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        vector<vector<int>>arr ;
        for(int i = 0 ; i<grid.size() ; i++)
            sortDiagonal(i , 0 ,grid);
        
        for(int i = 1 ; i<grid[0].size() ; i++)
            sortDiagonal(0 , i , grid , false);
        return grid;
    }
};