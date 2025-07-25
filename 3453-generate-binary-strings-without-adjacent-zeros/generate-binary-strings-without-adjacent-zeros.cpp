class Solution {
public:
    void solve(vector<string>& ans, int n, string str, int curr) {
        if (str.size() == n) {
            ans.push_back(str);
            return;
        }
        solve(ans, n, str + "1", curr + 1);
        if (str.empty() || str.back() != '0')
            solve(ans, n, str + "0", curr + 1);
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        solve(ans, n, "", 0);
        return ans;
    }
};