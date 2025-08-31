class Solution {
public:
    int solve(vector<int>& arr, int amt, int i, vector<vector<int>>& dp) {
        if (amt == 0)
            return 1;
        if (amt < 0)
            return 0;
        if (dp[i][amt] != -1)
            return dp[i][amt];
        int ans = 0;
        for (int k = i; k < arr.size(); k++) {
            ans += solve(arr, amt - arr[k], k, dp);
        }
        return dp[i][amt] = ans;
    }
    int solveUsingTabulation(vector<int>& arr, int amt) {
        vector<vector<int>> dp(amt + 1, vector<int>(amt + 1, 0));
        for (int i = 0; i < amt; i++)
            dp[0][i] = 1;
        for (int i = 1; i < amt; i++) {
            for (int j = amt; j >= 0; j--) {
                int ans = 0;
                for (int k = i; k < arr.size(); k++)
                    ans += dp[i - arr[k]][k];

                dp[j][i] = ans;
            }
        }
        return dp[amt][0];
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(amount + 1, vector<int>(amount + 1, -1));
        int ans = 0;
        ans = solve(coins, amount , 0 , dp);
        return ans;
    }
};