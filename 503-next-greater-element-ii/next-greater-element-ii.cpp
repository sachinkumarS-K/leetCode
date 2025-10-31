class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        stack<int> stk;
        vector<int> ans(n, -1);
        for (int i = 2 * n - 1; i >= 0; i--) {
            int curr = arr[i % n];
            while (!stk.empty() && stk.top() <= curr)
                stk.pop();
            if (i < n && !stk.empty()) {
                ans[i] = stk.top();
            }
            stk.push(curr);
        }
        return ans;
    }
};