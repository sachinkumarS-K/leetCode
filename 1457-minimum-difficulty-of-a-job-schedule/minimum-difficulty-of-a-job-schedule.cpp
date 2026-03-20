class Solution {
public:
    int solve(vector<int>&arr , int i , int d , vector<vector<int>>&dp){
        int n = arr.size();
        if(n - i < d) return INT_MAX;
        if(d == 1){
            int ans = INT_MIN;
            for(int j = i ; j < n ; j++)
                ans = max(ans , arr[j]);          
            return ans;
        }
        if(dp[i][d] != -1)  return dp[i][d];
        int maxi = INT_MIN;
        int ans = INT_MAX;
        for(int j = i ; j< arr.size() ; j++){
            maxi = max(maxi , arr[j]);
            int rem = solve(arr , j+1 , d-1 , dp);
            if(rem != INT_MAX)
                ans = min(ans , rem + maxi);
        }
        return dp[i][d] = ans;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(n < d)   return -1;
        vector<vector<int>>dp(n+1 , vector<int>(d+1 , -1));
        int ans =  solve(jobDifficulty,0,d , dp);
        return ans == INT_MAX ? -1 : ans;
    }
};