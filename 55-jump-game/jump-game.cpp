class Solution {
public:
    bool solve(vector<int>&arr ,  int idx , int n , vector<int>&dp){
        if(idx >= n - 1) 
            return true;

        if(dp[idx] != -1)
            return dp[idx];

        int k = arr[idx] ;
        for(int i = 1 ; i<= k ; i++){
            if(solve(arr , idx+i , n , dp))
                return dp[idx]  = 1;
        }
        return dp[idx] = 0;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1); 
        return solve(nums, 0, n, dp);
    }
};