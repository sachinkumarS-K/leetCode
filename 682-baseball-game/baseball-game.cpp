class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;

        for (string& op : operations) {
            if (op == "C") {
                stk.pop();
            } 
            else if (op == "D") {
                stk.push(2 * stk.top());
            } 
            else if (op == "+") {
                int top1 = stk.top(); stk.pop();
                int top2 = stk.top();
                stk.push(top1);
                stk.push(top1 + top2);
            } 
            else { 
                stk.push(stoi(op));  
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