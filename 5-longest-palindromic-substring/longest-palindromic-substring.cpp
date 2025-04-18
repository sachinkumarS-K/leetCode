class Solution {
public:
    int expand(string &str , int i , int j){
        while(i >= 0 && j <str.length() && str[i] == str[j])
            i-- , j++ ;
        
        return j-i-1 ;
    }
    string longestPalindrome(string s) {
        if(s.empty())   return "";

        int start = 0 , maxLen = 1 ;

        for(int i = 0 ; i<s.length() ; i++){
            int j = i ;
            int l1 = expand(s , i , j) ;
            j = i+1 ;
            int l2 = expand(s , i , j);
            int l = max(l1 , l2) ;

            if(l > maxLen){
                start = i - (l-1)/2;
                maxLen = l ;
            }
        }
        return s.substr(start , maxLen);
    }
};