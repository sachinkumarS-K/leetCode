class Solution {
public:
    string decodeString(string s) {
        stack<string> stk;
        stack<int> numStk;
        int num = 0;
        string curr = "";
        for (auto ch : s) {
            if (isdigit(ch))
                num = num * 10 + (ch - '0');
            else if (ch == ']') {
                string temp = curr;
                curr = stk.top();
                stk.pop();
                int k = numStk.top();
                numStk.pop();
                while(k--){
                    curr += temp;
                }

            } else if (ch == '[') {
                numStk.push(num);
                stk.push(curr);
                curr = "";
                num = 0;
            } else
                curr += ch;
        }
        return curr;
    }
};