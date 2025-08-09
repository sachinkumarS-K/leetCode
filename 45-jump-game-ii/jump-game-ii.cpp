class Solution {
public:
    int solve(vector<int>& arr, int idx, vector<int>& dp) {   
        if (idx >= arr.size() - 1) 
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int minJumps = INT_MAX;

        for (int i = 1; i <= arr[idx]; i++) {
            int next = solve(arr, idx + i, dp);
            if (next != INT_MAX)
                minJumps = min(minJumps, 1 + next);
        }

        return dp[idx] = minJumps;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};
