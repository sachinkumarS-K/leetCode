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
    int solveUsingTabulation(int n , int k , int target){
        // vector<vector<int>>dp(n+1 , vector<int>(target+1 , 0));
        vector<int>prev(target+1 , 0);
        vector<int>curr(target+1 , 0);
        prev[0] = 1 ;

        for (int i = 1; i <= n; i++) {
            for (int t = 1; t <= target; t++) {
                long long ans = 0;
                for (int val = 1; val <= k; val++) 
                    if (t - val >= 0) 
                        ans = (ans % mod + prev[t-val]) % mod;                
                curr[t] = ans;
            }
            prev = curr ;
        }

        return curr[target];
    }
    int numRollsToTarget(int n, int k, int target) {
        // vector<vector<int>>dp(n+1 , vector<int>(target+1 , -1));
        int ans = solveUsingTabulation(n , k , target);
        return ans;
    }
};