class Solution {
public:
    bool hasAlternatingBits(int n) {
        long int x = n^(n>>1);

        return (x & (x + 1)) == 0;
    }
};