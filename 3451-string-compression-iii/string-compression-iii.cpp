class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int cnt = 1;
        char curr = word[0];
        for (int i = 1; i < word.size(); i++) {
            if (word[i] != curr) {
                if (cnt != 0) {
                    ans += to_string(cnt);
                    ans += curr;
                }
                curr = word[i];
                cnt = 1;
            } else
                cnt++;
            if (cnt == 9) {
                ans += to_string(cnt);
                ans += curr;
                cnt = 0;
            }
        }
        if (cnt != 0) {
            ans += to_string(cnt);
            ans += curr;
        }
        return ans;
    }
};