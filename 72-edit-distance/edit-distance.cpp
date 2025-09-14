class Solution {
public:
    int solve(string& word1, string& word2, int i, int j,
              vector<vector<int>>& dp) {
        if (i == word1.size())
            return word2.size() - j;
        if (j == word2.size())
            return word1.size() - i;
        if (dp[i][j] != -1)
            return dp[i][j];

        if (word1[i] == word2[j])
            return solve(word1, word2, i + 1, j + 1, dp);

        int insert = 1 + solve(word1, word2, i, j + 1, dp);

        int del = 1 + solve(word1, word2, i + 1, j, dp);

        int rep = 1 + solve(word1, word2, i + 1, j + 1, dp);

        return dp[i][j] = min(rep, min(del, insert));
    }
    int solveUsingTabu(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        for (int i = 0; i <= m; i++)
            dp[i][n] = m - i;
        for (int j = 0; j <= n; j++)
            dp[m][j] = n - j;

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int ans = 0;
                if (word1[i] == word2[j])
                    ans = dp[i + 1][j + 1];
                else {
                    int insert = 1 + dp[i][j + 1];

                    int del = 1 + dp[i + 1][j];

                    int rep = 1 + dp[i + 1][j + 1];

                    ans = min(rep, min(del, insert));
                }
                dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }
    int minDistance(string word1, string word2) {
        // int m = word1.size() , n = word2.size();
        // vector<vector<int>>dp(m , vector<int>(n , -1));
        // int ans = solve(word1, word2, 0, 0  , dp);
        // return ans;

        return solveUsingTabu(word1, word2);
    }
};