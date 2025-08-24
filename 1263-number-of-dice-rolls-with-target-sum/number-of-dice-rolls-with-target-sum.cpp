class Solution {
public:
    long long int mod = 1e9 + 7;
    int solve(int n , int k , int target , vector<vector<int>>&dp){
        if(n < 0 || target < 0 || (n == 0 && target != 0) || (n != 0 && target == 0))
            return 0;
        if(n == 0 && target == 0)
            return 1 ;
        int ans = 0 ;
        if(dp[n][target] != -1) return dp[n][target];
        for(int val = 1 ; val <= k ; val++)
            ans = (ans % mod + solve(n-1 , k , target - val , dp) % mod) % mod;

        return dp[n][target] =  ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1 , vector<int>(target+1 , -1));
        int ans = solve(n , k , target , dp);
        return ans;
    }
};