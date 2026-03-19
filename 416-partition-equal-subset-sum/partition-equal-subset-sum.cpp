class Solution {
public:
    bool solve(int i , int sum , int total , vector<int>&arr , vector<vector<int>>&dp){
        if(sum == total)    return true;
        if(i >= arr.size() || sum > total)  return false;
        if(dp[i][sum] != -1)    return dp[i][sum];

        return dp[i][sum] = solve(i+1 , sum + arr[i] , total-arr[i] , arr, dp) || solve(i+1 , sum , total,  arr , dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for(int i : nums)
            sum += i;
        vector<vector<int>>dp(nums.size()+1 , vector<int>(sum+1 , -1));
        return solve(0 ,0, sum , nums , dp);
    }
};