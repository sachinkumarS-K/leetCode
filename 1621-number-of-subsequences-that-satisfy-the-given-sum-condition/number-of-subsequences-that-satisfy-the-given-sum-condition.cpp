class Solution {
public:
    int numSubseq(vector<int>& arr, int target) {
        int mod = 1e9 + 7;
        int count = 0, n = arr.size();
        int l = 0, r = n - 1;
        sort(arr.begin(), arr.end());
        vector<int> pow2(n, 1);
        for (int i = 1; i < n; i++) {
            pow2[i] = (pow2[i - 1] * 2LL) % mod;
        }
        while (l <= r) {
            if (arr[l] + arr[r] <= target) {
                count = (count + pow2[r - l]) % mod;
                l++;
            } else {
                r--;
            }
        }

        return count;
    }
};