class Solution {
public:
    string solve(int n){
        if(n == 1)  return "1";

        string str = solve(n-1);
        
        int i = 0 ;
        string ans = "";
        while(i < str.size()){
            int count = 0 ;
            char ch = str[i];
            while(i < str.size() && ch == str[i])
                i++ , count++ ;
            ans += to_string(count);
            ans += ch;
        }
        return ans;
    }
    string countAndSay(int n) {
        return solve(n);
    }
};