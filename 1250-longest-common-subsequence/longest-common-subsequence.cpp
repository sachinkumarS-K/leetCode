class Solution {
public:
    int solve(string &t1, string &t2, int n1, int n2, vector<vector<int>>& dp) {
        if (n1 < 0 || n2 < 0)
            return 0;

        if (dp[n1][n2] != -1)
            return dp[n1][n2];
        int ans = 0;
        if (t1[n1] == t2[n2])
            ans = 1 + solve(t1, t2, n1 - 1, n2 - 1, dp);
        else
            ans = max(solve(t1, t2, n1 - 1, n2, dp),
                      solve(t1, t2, n1, n2 - 1, dp));
        return dp[n1][n2] = ans;
    }
    
    int longestCommonSubsequence(string text1, string text2) {

        int n1 = text1.size(), n2 = text2.size();
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        return solve(text1, text2, n1 - 1, n2 - 1, dp);
    }
};