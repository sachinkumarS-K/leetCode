class Solution {
public:
    string removeOccurrences(string str, string part) {
        int n = part.length();
        string ans;
        for (char c : str) {
            ans += c;
            if (ans.length() >= n && ans.substr(ans.length() - n, n) == part) {
                ans.erase(ans.length() - n, n);
            }
        }
        return ans;
    }
};