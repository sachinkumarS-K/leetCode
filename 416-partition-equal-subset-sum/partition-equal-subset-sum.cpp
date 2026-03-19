class Solution {
public:
    bool solve(int i , int sum , int total , vector<int>&arr , vector<vector<int>>&dp){
        if(sum == total)    return true;
        if(i >= arr.size() || sum > total)  return false;
        if(dp[i][sum] != -1)    return dp[i][sum];

        return dp[i][sum] = solve(i+1 , sum + arr[i] , total-arr[i] , arr, dp) || solve(i+1 , sum , total,  arr , dp);
    }
    bool solveUsingTabulation(int sum , vector<int>&arr){
        int n = arr.size();
        vector<vector<bool>>dp(n+1 , vector<bool>(sum+1 , false));
        for(int i = 0 ; i<= n ; i++)
            dp[i][0] = true;
        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = 1 ; j <= sum ; j++){
                bool inc = false;
                if(j-arr[i] >= 0)
                    inc = dp[i+1][j-arr[i]];
                bool exc = dp[i+1][j];

                dp[i][j] = inc || exc ; 
            }
        }
        return dp[0][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for(int i : nums)
            sum += i;
        // vector<vector<int>>dp(nums.size()+1 , vector<int>(sum+1 , -1));
        // return solve(0 ,0, sum , nums , dp);
        if(sum & 1) return false;
        return solveUsingTabulation(sum/2 , nums);
    }
};