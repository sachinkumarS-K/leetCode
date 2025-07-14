class Solution {
public:
  
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        if (n < m)
            return {};

        vector<int> pFreq(26, 0), sFreq(26, 0);
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            pFreq[p[i] - 'a']++;
            sFreq[s[i] - 'a']++;
        }

        if(sFreq == pFreq)
            ans.push_back(0);

        for (int i = m; i < n ; i++) {
            sFreq[s[i] - 'a']++;
            sFreq[s[i-m] - 'a']--;
            if(sFreq == pFreq)
                ans.push_back(i-m + 1);
        }
        return ans;
    }
};