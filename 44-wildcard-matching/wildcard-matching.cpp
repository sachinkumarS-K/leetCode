class Solution {
public:
    bool solve(string &s , string &p , int i , int j , vector<vector<int>>&dp){
        if(i < 0 && j < 0)
            return true;
        if(i>=0 && j<0)
            return false;
        if(j>=0 && i < 0){
            for(int k = 0 ; k<=j ; k++)
                if(p[k] != '*')
                    return false;
            return true;
        }
        if(dp[i][j] != -1)  
            return dp[i][j];
        bool ans ;
        if(s[i] == p[j] || p[j] == '?'){
            ans = solve(s , p ,i-1 , j-1 , dp );
        }
        else if(p[j] == '*'){
            ans = (solve(s , p , i-1 , j , dp) || solve(s , p , i , j-1 , dp));
        }
        else{
            ans = false;
        }
        return dp[i][j] = ans;
    }
    bool isMatch(string s, string p) {
        int n = s.size() , m = p.size();
        vector<vector<int>>dp(n , vector<int>(m , -1));
        return solve(s , p , n-1 , m-1 , dp);
    }
};