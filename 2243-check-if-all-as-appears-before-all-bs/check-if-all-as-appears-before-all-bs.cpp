class Solution {
public:
    bool checkString(string s) {
        int idx = -1;
        int l = 0, h = s.length();

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'b') {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            return true;

        for (int i = idx; i < s.length(); i++) {
            if (s[i] == 'a')
                return false;
        }

        return true;
    }
};