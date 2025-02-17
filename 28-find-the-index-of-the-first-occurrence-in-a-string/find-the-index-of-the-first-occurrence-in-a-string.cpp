class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int idx = 0 ;

        string ans ;

        for(char c : haystack){
            ans += c ;

            if(ans.length() == needle.length() && ans == needle)
                return idx ;
            else if(ans.length() == needle.length()){
                ans.erase(0 ,1);
                idx++;
            }
        }
        return -1;
       
    }
};