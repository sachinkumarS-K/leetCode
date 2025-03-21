class Solution {
public:
    int myAtoi(string s) {
        int num = 0 , sign = 1 , i = 0;

        while(s[i] == ' ')
            i++ ;

        if(i<s.length() &&(s[i] == '+' || s[i] == '-')){
            sign = s[i] == '+' ? 1 : -1 ;
            i++ ;
        }

        while(i<s.length() && isdigit(s[i])){

            if(num > INT_MAX /10  || (num == INT_MAX / 10 && s[i] > '7'))
                return sign == -1 ? INT_MIN : INT_MAX ;
                
            num = num*10 + (s[i] - '0') ;
            i++ ;
        }

        return num * sign ;
    }
};