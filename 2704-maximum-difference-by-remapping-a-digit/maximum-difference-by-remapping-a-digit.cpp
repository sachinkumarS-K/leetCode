class Solution {
public:
    int minMaxDifference(int num) {
        int num1 = num;
        int num2 = num;

        stack<int> stk;

        while (num1) {
           stk.push(num1 % 10);
            num1 /= 10;
        }

        int found = -1;
        while (!stk.empty()) {
            if (stk.top() == 9)
                num1 = (10 * num1) + 9;
            else if (found != -1 && found != stk.top())
                num1 = (10 * num1) + stk.top();
            else {
                found = stk.top();
                num1 = (10 * num1) + 9;
            }
            stk.pop();
        }

        
        stk = stack<int>();
        int temp = num2;
        while (temp) {
            stk.push(temp % 10);
            temp /= 10;
        }

        found = -1;
        num2 = 0;
        while (!stk.empty()) {
            if (found == -1 && stk.top() != 0) {
                found = stk.top();
                num2 = (10 * num2);  
            } else if (found != -1 && found != stk.top()) {
                num2 = (10 * num2) + stk.top();
            } else {
                found = stk.top();
                num2 = (10 * num2);  
            }
            stk.pop();
        }

        return num1 - num2;
    }
};
