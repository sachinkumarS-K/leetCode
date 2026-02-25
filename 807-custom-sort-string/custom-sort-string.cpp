class Solution {
public:
    string customSortString(string order, string s) {
        int mp[26] = {INT_MIN};
        int i = 0;
        for(auto s : order){
            mp[s-'a'] = i++;
        }
        auto compare = [&mp](char &a , char &b){
            return mp[a-'a'] < mp[b - 'a'];
        };

        sort(s.begin() , s.end() , compare);
        return s;
    }
};