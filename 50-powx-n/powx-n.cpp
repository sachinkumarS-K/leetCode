class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long temp = n;
        if(temp < 0)
            temp = -1 * temp;
        while ((temp)) {
            if (temp % 2 == 0) {
                x *= x;
                temp /= 2;
            } else {
                ans *= x;
                temp--;
            }
        }

        if (n < 0)
            ans = (1.0) / ans;

        return ans;
    }
};