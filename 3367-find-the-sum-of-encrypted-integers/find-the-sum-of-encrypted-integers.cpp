class Solution {
public:
    int findLargest(int n) {
        if (n < 10) {
            return n;
        }
        int maxDigit = n % 10;
        int count = 0;
        while (n) {
            int rem = n % 10;
            if (rem > maxDigit) {
                maxDigit = rem;
            }
            count++;
            n /= 10;
        }
        n = 1;
        for (int i = 1; i < count; i++) {
            n = n * 10 + 1;
        }
        return n * maxDigit;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum += findLargest(i);
        }
        return sum;
    }
};