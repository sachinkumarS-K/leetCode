class Solution {
public:
    int solve(vector<int>& cost, int idx, vector<int>& dp) {
        if (idx >= cost.size())
            return 0;
        if (dp[idx] != -1)
            return dp[idx];
        int oneStep = cost[idx] + solve(cost, idx + 1, dp);
        int twoStep = cost[idx] + solve(cost, idx + 2, dp);
        return dp[idx] = min(oneStep, twoStep);
    }
    int solveUsingTabulation(vector<int>& cost, int idx) {
        int n = cost.size();
        vector<int> dp(n + 1, 0);
        dp[n] = 0;
        dp[n - 1] = cost[n - 1];
        for (int i = n - 2; i >= idx; i--) {
            int oneStep = cost[i] + dp[i + 1];
            int twoStep = cost[i] + dp[i + 2];
            dp[i] = min(oneStep, twoStep);
        }
        return dp[idx];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        return min(solveUsingTabulation(cost, 0),
                   solveUsingTabulation(cost, 1));
    }
};
