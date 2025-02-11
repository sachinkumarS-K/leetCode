class Solution {
public:
    int trailingZeroes(int n) {
       int x = 5;
        int c = 0;
       while(n){
            n  = n/x;
            c += n;
            if(n == 0){
                break;
            }
       }
        return c;
    }
};