class Solution {
public:
    int solve(int i , int n , vector<int>& cost, vector<int>& time , vector<vector<int>>&dp){
        if(n <= 0)  return 0;
        if(i >= cost.size())  return 1e9;
        
        if(dp[i][n] != -1)  return dp[i][n];
        int inc = cost[i] + solve(i+1 , n-1-time[i] , cost , time, dp);
        int exc = solve(i+1 , n , cost , time, dp);
        return dp[i][n] = min(inc , exc);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        int n = cost.size();
        vector<vector<int>>dp(n+1 , vector<int>(n+1,-1));
        return solve(0 , n , cost , time , dp);
    }
};