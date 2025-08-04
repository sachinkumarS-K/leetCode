class Solution {
public:
    int solve(vector<int>& arr, int target, vector<int>& dp) {
        if (target < 0)
            return 0;
        if (target == 0)
            return 1;
        if (dp[target] != -1)
            return dp[target];
        int way = 0;
        for (int i = 0; i < arr.size(); i++)
            way += solve(arr, target - arr[i],dp);
        return dp[target] = way;
    }
    int combinationSum4(vector<int>& arr, int target) {
        vector<int> dp(target + 1, -1);
        return solve(arr, target, dp);
    }
};