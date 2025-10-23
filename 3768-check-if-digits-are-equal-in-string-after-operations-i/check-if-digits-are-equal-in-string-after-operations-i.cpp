class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() != 2){
            string temp = "";
            for(int i = 1 ; i<s.size() ; i++){
                int sum = s[i-1]-'0' + s[i] - '0';
                temp += (sum % 10) + '0';
            }
            s = temp;
        }
        return s[0] == s[1];
    }
};