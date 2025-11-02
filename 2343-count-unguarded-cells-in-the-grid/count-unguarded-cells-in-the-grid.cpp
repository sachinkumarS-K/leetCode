class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {
        int count = 0;
        vector<vector<int>> grid(m, vector<int>(n, 0));
        for (auto g : guards)
            grid[g[0]][g[1]] = 1;

        for (auto w : walls)
            grid[w[0]][w[1]] = 2;

        vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (auto g : guards) {
            int x = g[0], y = g[1];
            for (auto [dx, dy] : dirs) {
                int i = dx + x, j = dy + y;
                // cout<<i<<" "<<j<<endl;
                while (i >= 0 && i < m && j >= 0 && j < n && grid[i][j] != 1 &&
                       grid[i][j] != 2) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 3;
                    i += dx;
                    j += dy;
                }
            }
        }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 0)
                    count++;

        return count;
    }
};