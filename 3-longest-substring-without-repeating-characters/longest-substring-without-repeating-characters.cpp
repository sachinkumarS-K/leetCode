class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        fill(hash, hash + 256, -1);
        int l = 0, r = 0, n = s.length();
        int maxLen = 0;

        while (r < n) {
            if (hash[s[r]] != -1 && hash[s[r]] >= l)
                l = hash[s[r]] + 1;

            maxLen = max(maxLen, r - l + 1);
            hash[s[r]] = r;

            r++;
        }

        return maxLen;
    }
};