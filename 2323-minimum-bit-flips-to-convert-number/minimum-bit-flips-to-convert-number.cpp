class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int c = 0;
        while(ans){
            c++;
            ans &= ans-1;
        }
        return c;
    }
};