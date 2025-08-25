class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& arr) {
        int m = arr.size(), n = arr[0].size();
        vector<int> ans;
        int i = 0, j = 0;
        bool up = true;

        while (i < m && j < n) {
            if (up) {
                while (i >= 0 && j < n) {
                    ans.push_back(arr[i][j]);
                    i--, j++;
                }
                if (j == n) { i += 2; j--; } 
                else { i++; }
                up = false;
            } else {
                while (j >= 0 && i < m) {
                    ans.push_back(arr[i][j]);
                    j--, i++;
                }
                if (i == m) { j += 2; i--; }
                else { j++; }
                up = true;
            }
        }
        return ans;
    }
};
