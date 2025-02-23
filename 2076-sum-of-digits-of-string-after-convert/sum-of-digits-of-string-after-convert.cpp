class Solution {
public:
    string getSum(string& str) {
        int ans = 0;
        for (int i = 0; i < str.length(); i++) {
            ans += (str[i] - 48);
        }
        return to_string(ans);
    }
    int getLucky(string s, int k) {
   
        string ans = "";

        for (char i : s)
            ans += to_string(int(i) - 96);

        for (int i = 0; i < k; i++) {
            ans = getSum(ans);
            
        }

        return stoi(ans);
    }
};