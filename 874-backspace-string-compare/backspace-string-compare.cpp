class Solution {
public:
    string check(string str) {
        string ans;
        int i = 0;
        while (i < str.size()) {
            if (str[i] == '#') {
                if (!ans.empty())
                    ans.pop_back();
            } else {
                ans.push_back(str[i]);
            }
            i++;
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) { return check(s) == check(t); }
};