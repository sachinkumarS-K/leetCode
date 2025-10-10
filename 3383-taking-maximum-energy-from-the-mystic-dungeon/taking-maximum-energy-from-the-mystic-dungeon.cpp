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
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int> dp(n , INT_MIN);
        int maxEnergy = INT_MIN;

        for(int i = 0 ; i < n ; i++)
            maxEnergy = max(solve(i , k , energy , dp) , maxEnergy);
        
        return maxEnergy;
    }
};
