class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> rowOne(m, 0), rowZero(m, 0);
        vector<int> colOne(n, 0), colZero(n, 0);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1)
                    rowOne[i]++;
                else
                    rowZero[i]++;
            }
        }

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1)
                    colOne[j]++;
                else
                    colZero[j]++;
            }
        }

        vector<vector<int>> diff(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                diff[i][j] = rowOne[i] + colOne[j] - rowZero[i] - colZero[j];
            }
        }

        return diff;
    }
};
