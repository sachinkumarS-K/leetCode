class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> a, b;

        for (int i : nums2)
            a[i]++;

        vector<vector<int>> ans(2);

        for (int i : nums1) {
            b[i]++;
            if (a.find(i) == a.end()) {
                if (find(ans[0].begin(), ans[0].end(), i) == ans[0].end())
                    ans[0].push_back(i); 
            }
        }
       for (int i : nums2) {
            if (b.find(i) == b.end()) {
                if (find(ans[1].begin(), ans[1].end(), i) == ans[1].end())
                    ans[1].push_back(i); 
            }
        }

        return ans;
    }
};