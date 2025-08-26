class Solution {
public:
    bool solve(vector<int>& arr, int i, int sum, vector<vector<int>>& dp) {
        if(sum == 0)    return true;
        if(i >= arr.size()) return false;

        if(dp[i][sum] != -1)    return dp[i][sum];

        bool include = false ;
        if(sum - arr[i] >= 0)
            include = solve(arr , i+1 , sum - arr[i] , dp);
        bool exclude = solve(arr , i+1 , sum , dp);

        return dp[i][sum] = (include || exclude);
    }
    bool solveUsingTabulation(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int t = 1; t <= target; t++) {
                bool include = false;
                if (t - arr[i] >= 0)
                    include = dp[i + 1][t - arr[i]];
                bool exclude = dp[i + 1][t];

                dp[i][t] = include || exclude;
            }
        }

        return dp[0][target];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i : nums)
            sum += i;
        if (sum % 2 != 0)
            return false;
        return solveUsingTabulation(nums, sum / 2);
    }
};
