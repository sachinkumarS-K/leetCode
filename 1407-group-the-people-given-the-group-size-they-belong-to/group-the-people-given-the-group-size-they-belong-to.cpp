class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> size;
        int k = 0;
        for (int i : groupSizes) {

            size[i].push_back(k++);

            if (size[i].size() == i) {
                ans.push_back(size[i]);
                size.erase(i);
            }
        }
        for (auto it : size)
            ans.push_back(it.second);

        return ans;
    }
};