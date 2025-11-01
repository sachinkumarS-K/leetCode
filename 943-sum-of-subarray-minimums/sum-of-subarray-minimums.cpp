class Solution {
public:
    void nextSmallerElement(vector<int>& arr, vector<int>& right) {
        stack<int> stk;
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!stk.empty() && arr[stk.top()] >= arr[i])
                stk.pop();

            right[i] = stk.empty() ? arr.size() : stk.top();
            stk.push(i);
        }
    }
    void previousSmallerElement(vector<int>& arr, vector<int>& left) {
        stack<int> stk;
        for (int i = 0; i < arr.size(); i++) {
            while (!stk.empty() && arr[stk.top()] > arr[i])
                stk.pop();

            left[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }
    }
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<int> nse(n), psee(n);
        nextSmallerElement(arr, nse);
        previousSmallerElement(arr, psee);
        int total = 0;
        for (int i = 0; i < n; i++) {
            int left = i - psee[i];
            int right = nse[i] - i;
            total = (total + (1LL * left * right * arr[i]) % MOD) % MOD;
        }
        return total;
    }
};