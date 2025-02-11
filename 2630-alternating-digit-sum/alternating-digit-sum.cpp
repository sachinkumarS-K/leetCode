class Solution {
public:
    int countDigit(int n){
        int c= 0 ;
        while(n){
            c++;
            n/=10;
        }
        return c;
    }
    int alternateDigitSum(int n) {
        int c = countDigit(n) ;

        int s = c % 2 ? 0 : 1;
        int ans = 0;

        while(n){
            int t = n%10;
            if(s){
                ans -= t;
                s = 0;
            }
            else{
                ans+= t ;
                s = 1;
            }
            n/=10;
        }
        return ans;
    }
};