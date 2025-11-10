class Solution {
public:
    int minimumDistance(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
            mp[arr[i]].push_back(i);

        int minDis = INT_MAX;

        for (auto it : mp) {
            auto a = it.second;
            if (a.size() >= 3) {
                for (int idx = 0; idx + 2 < a.size(); idx++) {
                    int i = a[idx], j = a[idx + 1], k = a[idx + 2];
                    int dis = abs(i - j) + abs(j - k) + abs(k - i);
                    minDis = min(minDis, dis);
                }
            }
        }
        return minDis == INT_MAX ? -1 : minDis;
    }
};
