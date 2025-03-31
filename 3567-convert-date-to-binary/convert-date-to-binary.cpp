class Solution {
public:
    string bin(int n) {
        if (n == 0)
            return "0";

        string ans = "";
        while (n) {
            ans += (n % 2) + '0';
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        int s = 0;
        string ans = "", t = "";

        t = date.substr(0, 4);
        ans += bin(stoi(t));
        ans += "-";

        t = date.substr(5, 2);
        ans += bin(stoi(t));
        ans += "-";
        
        t = date.substr(8, 2);
        ans += bin(stoi(t));
        

        return ans;
    }
};