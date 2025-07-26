class Solution {
public:
    int xorAllNums(vector<int>& num1, vector<int>& num2) {
        int x1 = 0, x2 = 0;

        for (int i : num1)
            x1 ^= i;
        for (int i : num2)
            x2 ^= i;

        int ans = 0;
        if (num2.size() & 1)
            ans ^= x1;
        if (num1.size() & 1)
            ans ^= x2;

        return ans;
    }
};