class Solution {
public:
    int solve(int i , int m , int n , vector<pair<int,int>>&count , vector<vector<vector<int>>>&dp){
        if (i >= count.size())
            return 0;
        if(dp[i][m][n] != -1)
            return dp[i][m][n];
        int exclude = solve(i+1 , m , n , count,dp);
        int include = 0;
        int zero = count[i].first;
        int one = count[i].second;
        if(zero <= m && one <=n)
            include = 1 + solve(i+1 , m-zero , n-one , count , dp);

        return dp[i][m][n] = max(include , exclude);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int, int>> count;
        vector<vector<vector<int>>>dp(strs.size() , vector<vector<int>>(m+1 , vector<int>(n+1 , -1)));
        for (auto& s : strs) {
            int zero = 0, one = 0;
            for (auto i : s)
                if (i == '0')
                    zero++;
                else
                    one++;
            count.push_back({zero, one});
        }

        return solve(0, m, n, count , dp);
    }
};