class Solution {
public:
    int smallestNumber(int n) {
        int m = 0 , t = n;
        while(t){
            m = (m<<1) | 1;
            t >>= 1;
        }
        return m|n ;
    }
};