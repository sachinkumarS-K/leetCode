class Solution {
public:
    int solve(string &str , int i , vector<int>&dp){
        if(i == str.size()) return 1;
        if(str[i] == '0')   return 0;
        if(dp[i] != -1)     return dp[i];

        int ans = solve(str , i+1 , dp);
        if((i+1 < str.size()) && (str[i] == '1' || str[i] == '2' && str[i+1] < '7'))
            ans += solve(str , i+2 , dp);

        return dp[i] = ans;
    }
    int solveUsingTabulation(string str){
        int n = str.size();
        vector<int>dp(n+1,-1);
        dp[n] = 1;

        for(int i = n-1 ; i>= 0 ; i--){
            if(str[i] == '0'){
                dp[i] = 0;
                continue;
            }
            int ans = dp[i+1];
            if((i+1 < str.size()) && (str[i] == '1' || str[i] == '2' && str[i+1] < '7'))
            ans += dp[i+2];

            dp[i] = ans;
        }
        return dp[0];
    }
    int numDecodings(string s) {
        // int n = s.size();
        // vector<int>dp(n+1,-1);
        // return solve(s,0 , dp);
        return solveUsingTabulation(s);
    }
};