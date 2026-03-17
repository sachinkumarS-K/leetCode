class Solution {
public:
    int solve(int i , int n , vector<int>&arr , vector<int>&dp){
        if(i >= n) return 0;

        if(dp[i] != -1) return dp[i];

        int ans = INT_MAX;

        for(int j = i+1 ; j <= min(i+3 , n) ; j++){
            int cost = arr[j] + (j - i)*(j - i);

            int next = solve(j , n , arr , dp);

            if(next != INT_MAX)  
                ans = min(ans , cost + next);
        }

        return dp[i] = ans;
    }

    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(), 0);  
        vector<int> dp(n+1 , -1);
        return solve(0 , n , costs , dp);
    }
};