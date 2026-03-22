class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                swap(arr[i][j], arr[j][i]);

        for (int i = 0; i < n; i++)
            reverse(arr[i].begin(), arr[i].end());
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int t = 0;
        while (t < 4) {
            bool isEqual = true;
            for (int i = 0; i < n; i++) {
                bool flag = true;
                for (int j = 0; j < n; j++) {
                    if (mat[i][j] != target[i][j]) {
                        flag = false;
                        break;
                    }
                }
                if (!flag) {
                    isEqual = false;
                    break;
                }
            }
            if (isEqual)
                return true;
            t++;
            rotate(mat);
        }
        return false;
    }
};