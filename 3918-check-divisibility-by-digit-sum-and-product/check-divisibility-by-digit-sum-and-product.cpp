class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 , pd = 1 ;
        int t = n ;
        while(t){
            int r = t % 10 ;
            sum += r ;
            pd *= r ;
            t/=10;
        }

        return !(n % (sum + pd));
    }
};