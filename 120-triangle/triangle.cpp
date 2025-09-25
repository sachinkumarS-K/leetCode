class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& arr, vector<vector<int>>& dp) {
        if (i == arr.size() - 1)
            return arr[arr.size() - 1][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        int down = arr[i][j] + solve(i + 1, j, arr, dp);
        int diagonal = arr[i][j] + solve(i + 1, j + 1, arr, dp);

        return dp[i][j] = min(down, diagonal);
    }
    int solveUsingTabulation(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            dp[n - 1][i] = arr[n - 1][i];

        for (int i = n - 2; i >= 0; i--) {
            for (int j = i; j >= 0; j--) {
                int down = arr[i][j] + dp[i + 1][j];
                int diagonal = arr[i][j] + dp[i + 1][j + 1];
                dp[i][j] = min(down, diagonal);
            }
        }
        return dp[0][0];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(),
                               vector<int>(triangle.size(), -1));
        // return solve(0, 0, triangle, dp);
        return solveUsingTabulation(triangle);
    }
};