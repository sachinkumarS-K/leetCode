class Solution {
public:
    bool isValid(string str){
        if(str.size() > 1 && str[0] == '0') return false;
        int n = stoi(str);
        return n >= 0 && n <= 255 ;
    }
    void solve(string &str , int idx , int part , string temp , vector<string>&ans){
        int n = str.size();
        if(idx == n && part == 4){
            temp.pop_back();
            ans.push_back(temp);
            return ;
        }
        if(part >= 4)   return ;

        if(idx+1 <= n && isValid(str.substr(idx,1)))
            solve(str , idx+1 , part+1 , temp+str.substr(idx,1)+"." , ans);

        if(idx+2 <= n && isValid(str.substr(idx,2)))
            solve(str , idx+2 , part+1 , temp+str.substr(idx,2)+"." , ans);
            
        if(idx+3 <= n && isValid(str.substr(idx,3)))
            solve(str , idx+3 , part+1 , temp+str.substr(idx,3)+"." , ans);
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size() > 12)   return {};
        vector<string>ans;
        solve(s , 0 , 0 , "" , ans);
        return ans;
    }
};