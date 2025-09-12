class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    bool doesAliceWin(string s) {
        int i = 0 ;
        int count = 0 ;
        while(i < s.size()){
            if(isVowel(s[i]))
                count++;
            i++;
        }
        return count>0;
    }
};