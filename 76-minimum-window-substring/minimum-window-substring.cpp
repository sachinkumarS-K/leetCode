class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};
        for (auto i : t)
            hash[i]++;
        int n = s.size(), minLen = INT_MAX;
        int count = t.size(), l = 0, startIdx = -1;
        for (int i = 0; i < n; i++) {
            if (hash[s[i]] > 0)
                count--;
            hash[s[i]]--;

            while(count == 0) {
                if (i - l + 1 < minLen) {
                    minLen = i - l + 1;
                    startIdx = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0)
                    count++;
                l++;
            }
        }
        return (minLen == INT_MAX ? "" : s.substr(startIdx, minLen));
    }
};