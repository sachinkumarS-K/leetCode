class Solution {
public:
    int solve(vector<int>& arr, int i, vector<int>& dp) {
        if (i >= arr.size()) 
            return 0;
        if(dp[i] != -1)
            return dp[i];
        int x = arr[i] + solve(arr, i + 2, dp);
        int y = solve(arr, i + 1, dp);
        return dp[i] = max(x, y);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};