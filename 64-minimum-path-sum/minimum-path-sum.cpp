class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& grid, int i, int j) {
        int r = grid.size(), c = grid[0].size();
        if (i == r - 1 && j == c - 1)
            return grid[i][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        int right = (j + 1 < c) ? solve(grid, i, j + 1) : INT_MAX;
        int down = (i + 1 < r) ? solve(grid, i + 1, j) : INT_MAX;
        return dp[i][j] = grid[i][j] + min(right, down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        return solve(grid, 0, 0);
    }
};