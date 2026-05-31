class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10] = {0};
        while (n) {
            freq[n % 10]++;
            n /= 10;
        }
        int score = 0;

        for (int i = 0; i <= 9; i++)
            if (freq[i] > 0)
                score += i * freq[i];

        return score;
    }
};