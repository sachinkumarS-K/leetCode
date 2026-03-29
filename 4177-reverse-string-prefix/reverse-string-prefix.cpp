class Solution {
public:
    
    string reversePrefix(string s, int k) {
        int l = 0 , h = k-1 ;
        while(l < h)
            swap(s[l++] , s[h--]);
        return s;
    }
};