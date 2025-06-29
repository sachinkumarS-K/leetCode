class Solution {
public:
    string invert(string binary) {
        for (int i = 0; i < binary.length(); i++) {
            binary[i] = (binary[i] == '0') ? '1' : '0';
        }
        return binary;
    }
    string reverseStr(string str){
        int l = 0 , h =str.length()-1;
        while(l < h){
            swap(str[l++] , str[h--]);
        }
        return str;
    }
    string gen(int n) {
        if (n == 1) {
            return "0";
        }
        string ans = gen(n - 1);
        return ans +"1"+ reverseStr(invert(ans));
    }
    char findKthBit(int n, int k) {
        string ans = gen(n);
        return ans[k-1];
    }
};