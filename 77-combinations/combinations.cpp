class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& arr, int n, int idx,
               int k) {
        if (arr.size() == k) {
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < n; i++) {
            arr.push_back(i + 1);
            solve(ans, arr, n, i + 1, k);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> arr;
        solve(ans, arr, n, 0, k);
        return ans;
    }
};