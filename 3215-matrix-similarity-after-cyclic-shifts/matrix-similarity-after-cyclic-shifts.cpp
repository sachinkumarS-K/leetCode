class Solution {
public:
    void leftRotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;

        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());
    }
    void rightRotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;

        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int r = mat.size(), c = mat[0].size();
        k = k % c;
        vector<vector<int>> temp = mat;
        for (int i = 0; i < r; i++) {
            if (i % 2 == 0)
                leftRotate(mat[i], k);
            else
                rightRotate(mat[i], k);
        }
        return temp == mat;
    }
};