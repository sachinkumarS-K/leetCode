class Solution {
public:
    int solveUsingemo(vector<int>&arr , int curr , int prev ,  vector<vector<int>>&dp){
        if(curr >= arr.size())
            return 0 ;
        if(dp[curr][prev+1] != -1)  return dp[curr][prev+1];
        int include =  0 ;
        if(prev == -1 || arr[curr] > arr[prev])
            include = 1 + solveUsingemo(arr , curr+1 , curr , dp);
        int exclude = solveUsingemo(arr , curr + 1 , prev , dp) ;

        return dp[curr][prev+1] = max(include , exclude);
    }
    int solveUsingTabu(vector<int>&arr){
        int n = arr.size() ;
        vector<vector<int>>dp(n+1,vector<int>(n+1 , 0));

        for(int curr = n-1  ; curr >= 0 ; curr--){
            for(int prev = curr-1 ; prev >= -1 ; prev--){
                int include = 0 ;
                if(prev == -1 || arr[curr] > arr[prev]){
                    include = 1 + dp[curr+1][curr+1] ;
                }
                int exclude = dp[curr+1][prev+1];
                dp[curr][prev+1] = max(include , exclude);
            }
        }
        return dp[0][0];
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
        return solveUsingTabu(nums);
    }
};