class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        unordered_set<int> st(arr.begin(), arr.end());
        for (int i = 1;; i++) {
            if (!st.count(k * i))
                return k * i;
        }
    }
};