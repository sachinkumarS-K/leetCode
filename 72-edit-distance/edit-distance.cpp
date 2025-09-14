class Solution {
public:
    int solve(string& word1, string& word2, int i, int j , vector<vector<int>>&dp) {
        if (i == word1.size())
            return word2.size() - j;
        if (j == word2.size())
            return word1.size() - i;
        if(dp[i][j] != -1)
            return dp[i][j];

        if (word1[i] == word2[j])
            return solve(word1, word2, i + 1, j + 1 , dp);

        int insert = 1 + solve(word1, word2, i, j + 1 , dp);

        int del = 1 + solve(word1, word2, i + 1, j , dp);

        int rep = 1 + solve(word1, word2, i + 1, j + 1 , dp);

        return  dp[i][j] =  min(rep, min(del, insert));
    }
    int minDistance(string word1, string word2) {
        int m = word1.size() , n = word2.size();
        vector<vector<int>>dp(m , vector<int>(n , -1));
        int ans = solve(word1, word2, 0, 0  , dp);
        return ans;
    }
};