class Solution {
public:
    void solve(string str, vector<string>& ans, string temp) {
        if (str.length() == 0) {
            ans.push_back(temp);
            return;
        }
        char ch = str[0];
        bool flag = false;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            flag = true;
        }

        str.erase(str.begin() + 0);

        if (flag) {
            solve(str, ans, temp + ch);
            if ((ch >= 'a' && ch <= 'z')) {
                ch -= 32;
            } else {
                ch += 32;
            }
            solve(str, ans, temp + ch);
        } else {
            solve(str, ans, temp + ch);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;

        solve(s, ans, "");

        return ans;
    }
};