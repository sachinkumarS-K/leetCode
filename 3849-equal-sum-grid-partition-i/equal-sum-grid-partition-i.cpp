class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        vector<long long> rowSum(r, 0);
        vector<long long> colSum(c, 0);
        long long totalRowSum = 0, totalColSum = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                rowSum[i] += grid[i][j];
                totalRowSum += grid[i][j];
                colSum[j] += grid[i][j];
                totalColSum += grid[i][j];
            }
        }
        for (int i = 1; i < rowSum.size(); i++)
            rowSum[i] += rowSum[i - 1];

        for (int i = 1; i < colSum.size(); i++)
            colSum[i] += colSum[i - 1];

        for (int i = 0; i < r; i++)
            if (totalRowSum - rowSum[i] == rowSum[i])
                return true;

        for (int i = 0; i < c; i++)
            if (totalColSum - colSum[i] == colSum[i])
                return true;

        cout << totalColSum;
        return false;
    }
};