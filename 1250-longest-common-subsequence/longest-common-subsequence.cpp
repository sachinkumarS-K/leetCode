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
    int solveUsingTabulation(string &text1 , string &text2){
        int n1 = text1.size();
        int n2 = text2.size();

        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
        for(int i = 1 ; i<=n1 ; i++){
            int ans = 0;
            for(int j = 1 ; j<=n2 ; j++){
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[n1][n2];
    }
    int longestCommonSubsequence(string text1, string text2) {

        return solveUsingTabulation(text1 , text2);
    }
};