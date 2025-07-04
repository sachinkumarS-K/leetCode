class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);
        int maxLen = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            }
            else{
                stk.pop();
                if(stk.empty()){
                    stk.push(i);
                }
                else{
                    int l = i - stk.top();
                    maxLen = max(l , maxLen);
                }
            }
        }
        return maxLen;
    }
};