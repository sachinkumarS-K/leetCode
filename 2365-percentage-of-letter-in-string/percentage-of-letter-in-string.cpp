class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c = 0 , t = 0 ;
        for(int i =  0 ; i<s.length() ; i++){
            t++ ;
            if(s[i] == letter)
                c++ ;
        }

        return (c*100)/t ;
    }
};