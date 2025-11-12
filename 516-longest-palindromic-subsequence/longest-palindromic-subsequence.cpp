class Solution {
public:
    int solve(string &str , int i , int j , vector<vector<int>>&dp){
        if (i > j) return 0;
        if (i == j) return 1;
        if(dp[i][j] != -1)  return dp[i][j];
        int ans = 0;
        if(str[i] == str[j])
            ans = 2 + solve(str , i+1 , j-1 , dp);
        else    
            ans = max(solve(str , i+1 , j , dp) , solve(str , i , j-1 , dp));

        return dp[i][j] =  ans;
    }
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>>dp(n , vector<int>(n , -1));
        return solve(s , 0 , n-1 , dp);
    }
};