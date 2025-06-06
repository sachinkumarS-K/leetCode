class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";
        vector<string> str;

        for (int i = 0; i < s.size(); i += k) 
            if (i + k <= s.size()) 
                str.push_back(s.substr(i, k));
     
        for (auto i : str) {
            int sum = 0;
            for (auto j : i) 
                sum += j - 97;
            
            sum %= 26;
            ans += char(sum + 97);
        }
        return ans;
    }
};