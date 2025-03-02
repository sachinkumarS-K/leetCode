class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& arr1,
                                    vector<vector<int>>& arr2) {
        map<int, int> mergedMap;
        for (auto& pair : arr1)
            mergedMap[pair[0]] += pair[1];

        for (auto& pair : arr2)
            mergedMap[pair[0]] += pair[1];

        vector<vector<int>> result;
        for (auto& entry : mergedMap) 
            result.push_back({entry.first, entry.second});
            
        return result;
    }
};