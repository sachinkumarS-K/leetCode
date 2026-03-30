class Solution {

    static int mod = (int) 1e9 + 7;

    static int solve(int n, int x, int i, int[][] dp) {
        if (n == 0)
            return 1;
        if (n < 0)
            return 0;

        if (dp[n][i] != -1)
            return dp[n][i];

        long ans = 0;

        int curr = i;
        while (true) {
            int power = 1;
            for (int k = 0; k < x; k++) power *= curr;
            if (power > n)
                break;
            ans = (ans + solve(n - power, x, curr + 1, dp)) % mod;
            curr++;
        }
        return dp[n][i] = (int) ans;
    }

    public int numberOfWays(int n, int x) {
        int[][] dp = new int[n + 1][n + 1];
        for (int[] row : dp)
            Arrays.fill(row, -1);
        
        return solve(n, x, 1, dp);
    }
}