class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        unordered_map<int, int> freq;
        int maxRows = 0;

        for (int num : nums) {
            freq[num]++;
            maxRows = max(maxRows, freq[num]);
        }

        vector<vector<int>> result(maxRows);

        for (auto& t : freq) 
            for (int i = 0; i < t.second; i++) 
                result[i].push_back(t.first);
                  
        return result;
    }
};