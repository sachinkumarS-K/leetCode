class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();

        if (rows == cols) {
            for (int i = 0; i < rows; i++) {
                for (int j = i + 1; j < cols; j++)
                    swap(matrix[i][j], matrix[j][i]);
            }
            return matrix;
        }
        vector<vector<int>> res(cols, vector<int>(rows));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                res[j][i] = matrix[i][j];
            }
        }
        return res;
    }
};