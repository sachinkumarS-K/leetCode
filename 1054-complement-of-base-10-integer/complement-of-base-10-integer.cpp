class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0;
        int num = n;
        if (n == 0) {
            return 1;
        }
        while (num > 0) {
            mask = (mask << 1) | 1;
            num = num >> 1;
        }
        return n ^ mask;
    }
};