class Solution {
public:
    bool solve(int idx, string& s, unordered_set<string>& dict,
               vector<int>& dp) {
        if (idx == s.size())
            return true;
        if (dp[idx] != -1)
            return dp[idx];
        string str = "";
        for (int i = idx; i < s.size(); i++) {
            str += s[i];
            if (dict.find(str) != dict.end()) {
                if (solve(i + 1, s, dict, dp))
                    return dp[idx] = true;
            }
        }
        return dp[idx] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<int> dp(s.size(), -1);
        return solve(0, s, dict, dp);
    }
};