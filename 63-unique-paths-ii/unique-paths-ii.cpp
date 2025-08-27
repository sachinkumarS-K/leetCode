class Solution {
public:
    bool check(vector<vector<int>>& arr, int i, int j) {
        int r = arr.size(), c = arr[0].size();
        if (i >= r || j >= c || arr[i][j] != 0)
            return false;
        return true;
    }
    int solve(vector<vector<int>>& arr, int i, int j, vector<vector<int>>& dp) {
        if (i == arr.size() - 1 && j == arr[0].size() - 1)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        int down = 0;
        if (check(arr, i, j + 1))
            down = solve(arr, i, j + 1, dp);

        int right = 0;
        if (check(arr, i + 1, j))
            right = solve(arr, i + 1, j, dp);

        return dp[i][j] = right + down;
    }
    int solveUsingTabulation(vector<vector<int>>& arr) {
        int r = arr.size(), c = arr[0].size();
        vector<vector<int>> dp(r + 1, vector<int>(c + 1, -1));
        dp[r - 1][c - 1] = 1;
        for (int i = r - 2; i >= 0; i--) {

            for (int j = c - 2; j >= 0; j--) {
                int down = 0;
                int right = 0;
                if (check(arr, i, j + 1))
                    down = dp[i][j + 1];

                if (check(arr, i + 1, j))
                    right = dp[i + 1][j];

                dp[i][j] = right + down;
            }
        }

        return dp[0][0];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1)
            return 0;

        int r = obstacleGrid.size(), c = obstacleGrid[0].size();
        vector<vector<int>> dp(r + 1, vector<int>(c + 1, -1));
        int ans = solve(obstacleGrid , 0 , 0, dp);
        return ans;
    }
};