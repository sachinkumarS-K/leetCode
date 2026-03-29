class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n ;
        int rev = 0 ;
        while(temp){
            rev = rev*10 + temp%10 ;
            temp /= 10;
        }
        return abs(n - rev);
    }
};