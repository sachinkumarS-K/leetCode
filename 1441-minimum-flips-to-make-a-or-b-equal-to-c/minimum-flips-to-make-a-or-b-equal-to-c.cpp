class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;

        while (a || b || c) {
            int x = a & 1;
            int y = b & 1;
            if ((c & 1) == 1) {
                if (x == 0 && y == 0)
                    flips++;
            } else {
                if (x == 1)
                    flips++;
                if (y == 1)
                    flips++;
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }

        return flips;
    }
};