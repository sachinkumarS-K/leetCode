class Solution {
public:
    void solve(vector<int>& arr, int& ans, int& n, int curr) {
        if (curr == n + 1) {
            ans++;
            return;
        }
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 0 && (curr % i == 0 || i % curr == 0)) {
                arr[i] = curr;
                solve(arr, ans, n, curr + 1);
                arr[i] = 0;
            }
        }
    }
    int countArrangement(int n) {
        int count = 0;
        vector<int> arr(n + 1);
        solve(arr, count, n, 1);
        return count;
    }
};