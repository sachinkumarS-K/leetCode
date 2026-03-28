class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == c)
                ans++;

        return (1LL * ans * (ans + 1)) / 2;
    }
};