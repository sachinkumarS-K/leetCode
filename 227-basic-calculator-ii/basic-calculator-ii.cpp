class Solution {
public:
    int calculate(string s) {
        stack<int>stk;
        int num = 0 ;
        char ch = '+';
        for(int i = 0 ; i<s.size() ; i++){
            char c = s[i];
            if(c >= '0' && ch <= '9'){
                num = num*10 + (c - '0');
            }
            if(!(c >= '0' && ch <= '9') && c != ' ' || i == s.size()-1){
                if(ch == '+'){
                    stk.push(num);
                }
                else if(ch == '-'){
                    stk.push(-num);
                }
                else if(ch == '*'){
                    int t = stk.top();
                    stk.pop();
                    stk.push(t*num);
                }
                else if(ch == '/'){
                    int t = stk.top();
                    stk.pop();
                    stk.push(t/num);
                }
                ch = c;
                num = 0;
            }
        }
        int ans = 0 ;
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};