class Solution {
public:
    int solve(int n  , int i , vector<vector<int>>&dp){
        if(n == 0)  return 1;
        if(dp[n][i] != -1) return dp[n][i];
        int ans = 0 ;
        for(int k = i ; k<5 ; k++)
            ans += solve(n-1 , k ,dp);
        
        return dp[n][i] = ans;
    }
    int countVowelStrings(int n) {
        vector<vector<int>>dp(n+1 , vector<int>(5 , -1));
        int ans = solve(n , 0 , dp);
        return ans;
    }
};