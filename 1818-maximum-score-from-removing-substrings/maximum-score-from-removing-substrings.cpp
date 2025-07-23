class Solution {
public:
    int remove(string& str, char x, char y, int c) {
        int sum = 0;
        stack<int> stk;

        for (auto i : str) {
            if (!stk.empty() && i == y && stk.top() == x) {
                stk.pop();
                sum += c;
            } else {
                stk.push(i);
            }
        }
        str = "";
        while (!stk.empty()) {
            str += stk.top();
            stk.pop();
        }
        reverse(str.begin(), str.end());
        return sum;
    }
    int maximumGain(string s, int x, int y) {
        int maxGain = 0;
        if (x > y) {
            maxGain += remove(s, 'a', 'b', x);
            maxGain += remove(s, 'b', 'a', y);
        } else {
            maxGain += remove(s, 'b', 'a', y);
            maxGain += remove(s, 'a', 'b', x);
        }
        return maxGain;
    }
};