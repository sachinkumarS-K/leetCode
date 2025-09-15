class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int> arr;
        for (auto it : tasks)
            arr.push_back(it[0] + it[1]);
        int ans = INT_MAX;
        for (int i : arr)
            ans = min(i, ans);

        return ans;
    }
};