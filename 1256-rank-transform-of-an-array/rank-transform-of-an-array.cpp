class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
        vector<int> sorted = nums;
        unordered_map<int, int> mp;

        sort(sorted.begin(), sorted.end());

        int rank = 1;
        for (int i = 0; i < sorted.size(); i++) {
            if (mp.find(sorted[i]) == mp.end()) {
                mp[sorted[i]] = rank++;
            }
        }

        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back(mp[nums[i]]);
        }

        return arr;
    }
};
