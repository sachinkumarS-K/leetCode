class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int idx = -1 , i = 0;
        while(n){
            int bit = n & 1;
            if(bit == 1){
                if(idx != -1){
                    ans = max(ans , i-idx);
                }
                idx = i;
            }
            i++;
            n >>= 1;
        }

        return ans;
    }
};