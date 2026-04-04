class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        stringstream ss(s) ;
        string token ;
        while(getline(ss,token , ' '))
            words.push_back(token);

        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> mp;
        unordered_map<string, char> rev;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string w = words[i];

            if (mp.count(ch) && mp[ch] != w) return false;
            if (rev.count(w) && rev[w] != ch) return false;

            mp[ch] = w;
            rev[w] = ch;
        }

        return true;
    }
};