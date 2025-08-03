class Solution {
public:
    int longestPalindrome(string s) {
        if (s.size() == 1)
            return 1;
        unordered_map<char, int> mp;
        for (auto i : s)
            mp[i]++;
        int len = 0, check = 0;
        for (auto it : mp) {
            if (it.second % 2 == 0) {
                len += it.second;
            } else {
                len += it.second - 1;
                check = 1;
            }
        }
        if (check)
            return len + 1;
        else
            return len;
    }
};