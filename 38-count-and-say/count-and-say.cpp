class Solution {
public:
    string solve(const string& str){
        string ans = "";
        int c = 1;
        for(int i = 1 ; i<str.size() ; i++){
            if(str[i] == str[i-1])
                c++;
            else{
                ans += to_string(c) + str[i-1];
                c = 1;
            }
        }
        ans += to_string(c) + str.back();
        return ans;
    }
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        return
            solve(countAndSay(n-1));
    }
};