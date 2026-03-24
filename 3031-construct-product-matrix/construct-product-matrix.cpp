class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int mod = 12345;
        vector<int> arr;

        for (auto& row : grid)
            for (auto& val : row)
                arr.push_back(val % mod);

        int n = arr.size();
        vector<long long> pref(n);

        pref[0] = arr[0] % mod;

        for (int i = 1; i < n; i++)
            pref[i] = (pref[i - 1] * arr[i]) % mod;

        long long pd = 1;

        for (int i = n - 1; i > 0; i--) {
            pref[i] = (pref[i - 1] * pd) % mod;
            pd = (pd * arr[i]) % mod;
        }

        pref[0] = pd % mod;

        int k = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                grid[i][j] = pref[k++] % mod;

        return grid;
    }
};