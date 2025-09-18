class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(int i = 0 ; i<tokens.size() ; i++){
            string ch = tokens[i];
            if(ch == "+" || ch == "-" || ch == "*" || ch == "/"){
                int a = stk.top();stk.pop();
                int b = stk.top() ; stk.pop();
                if(ch == "+")
                    stk.push(b + a);
                else if(ch == "-")
                    stk.push(b - a);
                else if(ch == "*")
                    stk.push(b * a);
                else if(ch == "/")
                    stk.push(b / a);
            }
            else{
                stk.push(stoi(ch));
            }
        }
        return stk.top();
    }
};