class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if (n == 0)
            return 0;

        int maxLen = 0;
        unordered_set<int> st;
        for (int i : arr)
            st.insert(i);

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int c = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) {
                    c++;
                    x++;
                }
                maxLen = max(maxLen, c);
            }
        }

        return maxLen;
    }
};