class Solution {
public:
    void solve(string str, char prev, int n, vector<string>& ans) {
        if (n == 1) {
            ans.push_back(str);
            return;
        }
        if (prev == 'a') {
            solve(str + "b", 'b', n - 1, ans);
            solve(str + "c", 'c', n - 1, ans);
        } else if (prev == 'b') {
            solve(str + "a", 'a', n - 1, ans);
            solve(str + "c", 'c', n - 1, ans);
        } else if (prev == 'c') {
            solve(str + "b", 'b', n - 1, ans);
            solve(str + "a", 'a', n - 1, ans);
        }
    }
    string getHappyString(int n, int k) {
        vector<string> ans;

        solve("a", 'a', n, ans);
        solve("b", 'b', n, ans);
        solve("c", 'c', n, ans);

        sort(ans.begin(), ans.end());
        if (ans.size() < k)
            return "";
        else
            return ans[k - 1];
    }
};
