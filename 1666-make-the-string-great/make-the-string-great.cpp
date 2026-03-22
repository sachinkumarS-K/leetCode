class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for (auto c : s) {
            if (stk.empty()) {
                stk.push(c);
                continue;
            }
            if ((stk.top() >= 'a' && stk.top() <= 'z' && c >= 'A' && c <= 'Z' && stk.top() == tolower(c)) ||
                (stk.top() >= 'A' && stk.top() <= 'Z' && c >= 'a' && c <= 'z' && stk.top() == toupper(c))) {
                stk.pop();
            } else {
                stk.push(c);
            }
        }
        string ans = "";
        while (!stk.empty()) {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};