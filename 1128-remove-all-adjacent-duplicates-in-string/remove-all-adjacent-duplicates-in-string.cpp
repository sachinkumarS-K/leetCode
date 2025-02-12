class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        for(char c: s){
            if(!stk.empty() && stk.top() == c)
                stk.pop();
            else
                stk.push(c);
        }
        string ans ;
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};