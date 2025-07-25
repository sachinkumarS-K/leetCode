class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> st;
        int sum = 0, maxi = INT_MIN;
        for (int i : nums) {
            st.insert(i);
            maxi = max(i, maxi);
        }
        if (maxi < 0)
            return maxi;

        for (auto it : st)
            if (it >= 0)
                sum += it;

        return sum;
    }
};