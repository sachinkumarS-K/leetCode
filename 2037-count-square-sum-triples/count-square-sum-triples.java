class Solution {
    int solve(int i, int n) {
        if (i >= n)
            return 0;
        return inner(i, i + 1, n) + solve(i + 1, n);
    }

    int inner(int i, int j, int n) {
        if (j >= n)
            return 0;
        int t = i * i + j * j;
        int k = (int) Math.sqrt(t);
        int c = (k * k == t && k <= n) ? 2 : 0;
        return c + inner(i, j + 1, n);
    }

    public int countTriples(int n) {
        return solve(1, n);
    }
}