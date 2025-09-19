class Solution {
public:
    bool isPalindrome(int x) {
        string str = "";
        if(x < 0)
            return false;
        while(x){
            str += (char)('0' + (x % 10));
            x/=10;
        }
        int l = 0 , h = str.size()-1;
        while(l < h)
            if(str[l++] != str[h--])
                return false;
        return true;
    }
};