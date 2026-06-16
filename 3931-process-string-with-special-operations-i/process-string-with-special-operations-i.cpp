class Solution {
public:
    string processStr(string s) {
        string ans = "" ;

        for(auto c : s){
            if(c == '*' && ans.size() > 0)
                ans.pop_back();
            else if(c == '#' && ans.size() > 0)
                ans += ans;
            else if(c == '%')
                reverse(ans.begin() , ans.end());
            else if(c >= 'a' && c <= 'z')
                ans.push_back(c);
        }

        return ans;
    }
};