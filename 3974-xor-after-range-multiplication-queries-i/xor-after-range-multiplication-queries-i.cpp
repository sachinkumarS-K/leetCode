class Solution {
public:
    int xorAfterQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int mod = 1e9 + 7;
        for (auto& it : queries) {
            int i = it[0];
            while (i <= it[1]) {
                arr[i] = (1LL * arr[i] * it[3]) % mod;
                i += it[2];
            }
        }
        int ans = 0;
        for (auto i : arr)
            ans ^= i;

        return ans;
    }
};