class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> c;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++)
                c[nums[i][j]]++;
        }

        for (auto i : c) {
            if (i.second == nums.size()) {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};