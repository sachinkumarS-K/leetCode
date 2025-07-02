class Solution {
public:
    void reverseInt(int n, int& ans) {
        if (n <= 0)
            return;
        ans = ans * 10 + n % 10;
        reverseInt(n / 10, ans);
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
            int t = 0;
            reverseInt(nums[i], t);
            st.insert(t);
        }

        return st.size();
    }
};