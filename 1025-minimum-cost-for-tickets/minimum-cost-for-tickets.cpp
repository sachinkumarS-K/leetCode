class Solution {
public:
    int solve(vector<int>&days , vector<int>&costs , int curr , vector<int>&dp){
        if(curr >= days.size()) return 0 ;
        if(dp[curr] != -1)  return dp[curr];

        int opt1 = costs[0] + solve(days , costs , curr+1 , dp);
        
        int i = curr ;
        while(i < days.size() && days[i] < days[curr]+7)   i++ ;
    
        int opt2 = costs[1] + solve(days , costs , i , dp) ;
    
        i = curr ;
        while(i < days.size() && days[i] < days[curr]+30)   i++ ;

        int opt3 = costs[2] + solve(days , costs , i , dp);

        return dp[curr] = min({opt1 , opt2 , opt3});

    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size()+1 , -1);
        int cost  = solve(days , costs , 0 , dp);
        return cost;
    }
};