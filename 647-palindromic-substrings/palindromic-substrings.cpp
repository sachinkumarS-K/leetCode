class Solution {
public:
    int count(string s , int l , int h){
        int c = 0 ;
        while(l>=0 && h<s.length() && s[l] == s[h]){
            c++;
            l--;
            h++;
        }
        return c;
    }
    int countSubstrings(string s) {
        int c = 0 ;
        for(int i = 0 ; i<s.length() ; i++){
            int x = count(s ,i,i);
            c += x ;
            x = count(s , i, i+1);
            c += x;
        }
        return c;
    }
};