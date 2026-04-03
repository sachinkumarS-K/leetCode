class Solution {
public:
    long long solve(int idx, int c, int k, vector<int>& arr,
                    vector<vector<vector<long long>>>& dp) {
        if (idx >= arr.size()) {
            if (c == 0)
                return 0;
            return INT_MIN;
        }
        if (dp[idx][c][k] != -1)
            return dp[idx][c][k];
        long long exc = solve(idx + 1, c, k, arr, dp);
        long long inc = 0;

        if (k == 0)
            return exc;

        if (c == 0)
            inc = max(-arr[idx] + solve(idx + 1, 1, k, arr, dp),
                      arr[idx] + solve(idx + 1, 2, k, arr, dp));
        else if (c == 1)
            inc = arr[idx] + solve(idx + 1, 0, k - 1, arr, dp);
        else
            inc = -arr[idx] + solve(idx + 1, 0, k - 1, arr, dp);

        return dp[idx][c][k] = max(inc, exc);
    }
    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        vector<vector<vector<long long>>> dp(
            n + 1, vector<vector<long long>>(3, vector<long long>(k + 1, -1)));
        return solve(0, 0, k, prices, dp);
    }
};