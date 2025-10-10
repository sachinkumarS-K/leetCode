class Solution {
public:
    int solve(int i , int k , vector<int>& energy,vector<int>&dp){
        if(i >= energy.size())
            return 0;
        if(dp[i] != INT_MIN)
            return dp[i];

        int inc = energy[i] + solve(i+k , k , energy , dp);
        return dp[i] = inc;
    }
    int solveUsingTab(int k , vector<int>&arr){
        int n = arr.size();
        vector<int> dp(n+1 , 0);
        int maxEnergy = INT_MIN ;
        for(int i = n-1 ; i>= 0 ; i--){
            if(i + k < n)
                dp[i] = dp[i+k] + arr[i];
            else
                dp[i] = arr[i];

            maxEnergy = max(dp[i] , maxEnergy);
        }
        return maxEnergy;
    }
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> dp(n , INT_MIN);

        return solveUsingTab(k , energy);                
    }
};
