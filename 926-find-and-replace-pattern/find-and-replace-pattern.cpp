class Solution {
public:
    string decode(string str){
        unordered_map<char,char>mp;
        char c = 'a';
        string ans ;
        for(auto ch : str){
            if(mp.count(ch)){
                ans += mp[ch];
            }
            else{
                ans += c;
                mp[ch] = c;
            }
            c++;
        }

        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        pattern = decode(pattern);
        for(auto str : words){
            if(pattern == decode(str))
                ans.push_back(str);
        }
        return ans;
    }
};