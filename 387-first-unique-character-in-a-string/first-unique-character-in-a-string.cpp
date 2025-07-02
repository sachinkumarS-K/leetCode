class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int>mp ;
        for(auto ch : s)
            mp[ch]++ ;
        int i = 0 ;
        for(auto ch : s){
            if(mp[ch] == 1)
                return i;
            i++;
        }
        return -1 ;
    }
};