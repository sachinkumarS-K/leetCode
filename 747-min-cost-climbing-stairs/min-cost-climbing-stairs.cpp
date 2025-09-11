class Solution {
public:
   int solve(vector<int>&cost , int idx , vector<int>&dp){
        if(idx >= cost.size())
            return 0 ;
        if(dp[idx] != -1)   return dp[idx];
        int oneStep = cost[idx] + solve(cost , idx+1 , dp);
        int twoStep = cost[idx] + solve(cost , idx+2 , dp);
        return dp[idx] =  min(oneStep , twoStep);
   }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        return min(solve(cost, 0 , dp), solve(cost, 1 , dp));
    }
};
