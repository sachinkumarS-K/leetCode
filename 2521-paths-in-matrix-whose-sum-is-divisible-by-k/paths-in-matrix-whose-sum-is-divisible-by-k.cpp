class Solution {
public:
    static const int MOD = 1e9 + 7;
    int m, n, k;
    vector<vector<int>> grid;
    vector<vector<vector<int>>> dp;

    int solve(int i, int j, int rem) {
        if (i >= m || j >= n) return 0;

        rem = (rem + grid[i][j]) % k;

        if (i == m - 1 && j == n - 1)
            return rem == 0 ? 1 : 0;

        if (dp[i][j][rem] != -1)
            return dp[i][j][rem];

        long long right = solve(i, j + 1, rem);
        long long down = solve(i + 1, j, rem);

        return dp[i][j][rem] = (right + down) % MOD;
    }

    int numberOfPaths(vector<vector<int>>& g, int kk) {
        grid = g;
        k = kk;                    
        m = grid.size();
        n = grid[0].size();

        dp = vector<vector<vector<int>>>(m,
              vector<vector<int>>(n, vector<int>(k, -1)));

        return solve(0, 0, 0);
    }
};
