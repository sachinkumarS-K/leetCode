class Solution {
public:
    void reverse(string &s , int l , int h){
        while(l<h){
            swap(s[l++] , s[h--]);
        }
    }
    string reverseWords(string s) {
        int l = 0 , h = 0;

        while(h<s.length()){
            if(s[h] == ' '){
                reverse(s , l , h-1);
                l = h+1;
            }
            h++;
        }
        reverse(s, l, h - 1);
        return s;
    }
};