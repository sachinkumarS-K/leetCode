class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& arr) {
        stack<long long> stk;

        for (int i = 0; i < arr.size(); i++) {
            long long curr = arr[i];

            while (!stk.empty() && stk.top() == curr) {
                curr = 2 * stk.top();
                stk.pop();
            }

            stk.push(curr);
        }

        vector<long long> ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
