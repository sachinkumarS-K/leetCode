class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans ;
        for(auto str : words)
            ans += str[0] ;

        return (ans == s) ;
    }
};