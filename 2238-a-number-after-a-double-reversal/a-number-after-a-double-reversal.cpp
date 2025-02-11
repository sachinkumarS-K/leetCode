class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while (n) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int n) {
        int x = n;
        if (n == 0)
            return true;
        while (n) {
            if (n % 10 == 0) {
                n /= 10;
            } else {
                break;
            }
        }
        // int t = n;
        int t = reverse(n);
        n = reverse(t);

        if(n == x)
            return true;
        else
            return false;
    }

};