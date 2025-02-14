class Solution {
public:
    int findComplement(int num) {
        int t = num , c = 0 ;
        while(t){
            c = (c<<1)|1;
            t >>= 1;
        }

        return c^num;
    }
};