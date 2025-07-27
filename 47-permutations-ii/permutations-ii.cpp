class Solution {
public:
    map<int, int> mp;
    void rec(int level, vector<vector<int>>& ans, vector<int>& temp, int n) {
        if (level == n) {
            ans.push_back(temp);
            return;
        }
        for (auto& it : mp) {
            if (it.second != 0) {
                it.second--;
                temp.push_back(it.first);
                rec(level + 1, ans, temp, n);
                temp.pop_back();
                it.second++;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;

        for (int i : nums)
            mp[i]++;
        vector<int> temp;
        rec(0, ans, temp, nums.size());

        return ans;
    }
};