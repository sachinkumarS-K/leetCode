class Solution {
public:
    void solve(vector<int>& arr, int k, int& ans, int& idx) {
        if (arr.size() == 1) {
            ans = arr[0];
            return;
        }

        idx = (idx + k - 1) % arr.size();
        arr.erase(arr.begin() + idx);

        solve(arr, k, ans, idx);
    }
    int findTheWinner(int n, int k) {
        vector<int> arr;

        for (int i = 1; i <= n; i++)
            arr.push_back(i);

        int ans = 0, idx = 0;
        solve(arr, k, ans, idx);
        return ans;
    }
};