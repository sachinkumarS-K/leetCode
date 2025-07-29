class Solution {
public:
    int minimumPushes(string word) {

        unordered_map<char, int> freq;
        for (auto i : word)
            freq[i]++;

        vector<int> count;
        for (auto& pair : freq)
            count.push_back(pair.second);

        sort(count.rbegin(), count.rend()); 

        int ans = 0;
        for (int i = 0; i < count.size(); ++i) {
            int cost = (i / 8) + 1; 
            ans += count[i] * cost;
        }
        return ans;
    }
};