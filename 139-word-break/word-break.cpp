class Solution {
public:
    bool solve(int i, string s, unordered_set<string>& st, vector<int>& dp) {
        if (i == s.size())
            return true;
        if (dp[i] != -1)
            return dp[i];
        string str = "";
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            if (st.find(str) != st.end()) {
                if (solve(j + 1, s, st, dp))
                    return dp[i] = true;
            }
        }
        return dp[i] = false;
    }
    bool solveUsingTabulation(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[n] = true;
        for(int i = n-1 ; i>= 0 ; i--){
            string str = "";
            for(int j = i ; j< n ; j++){
                str += s[j];
                if(st.find(str) != st.end() && dp[j+1]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        // unordered_set<string> st(wordDict.begin(), wordDict.end());
        // vector<int> dp(s.size(), -1);
        // return solve(0, s, st, dp);
        return solveUsingTabulation(s , wordDict);
    }
};