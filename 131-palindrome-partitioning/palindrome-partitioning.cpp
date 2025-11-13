class Solution {
public:
    bool check(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    void solve(string& str, int idx, vector<string>& path,
               vector<vector<string>>& ans) {

        if (idx == str.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = idx; i < str.size(); i++) {
            if (check(str, idx, i)) {
                path.push_back(str.substr(idx, i - idx + 1));
                solve(str, i + 1, path, ans);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(s, 0, path, ans);
        return ans;
    }
};