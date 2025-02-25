class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int i : arr) {
            count[i]++;
        }
        unordered_set<int> temp;
        for (auto pair : count) {
            if (temp.find(pair.second) != temp.end()) {
                return false;
            }
            temp.insert(pair.second);
        }
        return true;
    }
};