class Solution {
    public int[][] reverseSubmatrix(int[][] grid, int x, int y, int k) {
        int startRow = x , endRow = x + k - 1;
        int startCol = y , endCol = y + k - 1;
        for(int i = startRow ; i <= endRow ; i++){
            for(int j = startCol ; j <= endCol ; j++){
                int t = grid[i][j] ;
                grid[i][j] = grid[endRow][j];
                grid[endRow][j] = t ;
            }
            endRow-- ;
        }
        return grid;
    }
}