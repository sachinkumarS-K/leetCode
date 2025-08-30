class Solution {
public:
    int solve(int idx , int buy , vector<int>&arr , vector<vector<int>>&dp){
        if(idx >= arr.size())   return 0 ;
        int profit = 0 ;
        if(dp[idx][buy] != -1)  return dp[idx][buy];
        if(buy){
            int include = -arr[idx] + solve(idx+1 , 0 , arr , dp);
            int exclude = solve(idx+1 , 1 , arr , dp);
            profit = max(include , exclude);
        }
        else{
            int include = arr[idx] + solve(idx+1 , 1 , arr , dp);
            int exclude = solve(idx+1 , 0 , arr , dp);
            profit = max(include , exclude);
        }

        return dp[idx][buy] = profit;
    }
int solveUsingTabulation(vector<int>& arr) {
        vector<vector<int>> dp(arr.size() + 1, vector<int>(2, 0));
        for (int idx = arr.size() - 1; idx >= 0; idx--) {
            for (int b = 0; b < 2; b++) {
                int profit = 0 ;
                if (b) {
                    int include = -arr[idx] + dp[idx + 1][0];
                    int exclude = dp[idx + 1][1];
                    profit = max(include, exclude);
                } else {
                    int include = arr[idx] + dp[idx + 1][1];
                    int exclude = dp[idx + 1][0];
                    profit = max(include, exclude);
                }
                dp[idx][b] = profit;
            }
        }
        return dp[0][1];
    }
    int maxProfit(vector<int>& prices) {
        //vector<vector<int>>dp(prices.size()+1 , vector<int>(2 , -1));
        return solveUsingTabulation(prices);
    }
};