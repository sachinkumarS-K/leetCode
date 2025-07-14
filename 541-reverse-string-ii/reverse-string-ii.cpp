class Solution {
public:
    void reverse(string &str , int l , int h){
        while(l < h){
            swap(str[l++] , str[h--]);
        }
    }
    string reverseStr(string s, int k) {
         for(int i = 0; i < s.size(); i += 2 * k){
            int end = min((int)s.size() - 1, i + k - 1);
            reverse(s, i, end);
        }
        return s;
    }
};