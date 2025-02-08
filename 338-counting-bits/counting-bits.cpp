class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            int c = 0, t = i;
            if (i == 0) {
               ans[i] = c;
            } else {
                while (t) {
                    c++;
                    t = t & (t - 1);
                }
            }
            ans[i] = c;
        }
        return ans;
    }
};