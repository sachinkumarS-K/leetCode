class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<vector<int>> ans;

        for (int i = 0; i < n; i += 3) {
            if (nums[i + 2] - nums[i] <= k) {
                vector<int> t;
                t.push_back(nums[i]);
                t.push_back(nums[i + 1]);
                t.push_back(nums[i + 2]);
                ans.push_back(t);
            } else {
                return {};
            }
        }
        return ans;
    }
};