class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans = 0 ;
        int i = 0 , j = 0 ;
        while(i < s.size() || j < t.size()){
            if(i < s.size())
                ans ^= (s[i++]-'0');
            if(j < t.size())
                ans ^= (t[j++]-'0');
        }
        return ans + '0';
    }
};