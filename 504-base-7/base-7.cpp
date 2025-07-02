class Solution {
public:
    void base7(int num, string& ans) {
        if (num <= 0)
            return;
        base7(num / 7, ans);
        ans += (num % 7) + '0';
    }
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        string ans = "";
        base7(abs(num), ans);

        return num < 0 ? ans = '-' + ans : ans;
    }
};