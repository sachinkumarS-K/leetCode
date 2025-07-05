class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> freq;
        int n = arr.size();
        for (int i : arr)
            freq[i]++;

        priority_queue<pair<int, int>> pq;
        int c = 0;
        for (auto i : freq) {
            pq.push({i.second, i.first});
        }
        int ans = 0;
        while (c < n / 2) {
            ans++;
            auto curr = pq.top();
            pq.pop();
            c += curr.first;
        }
        return ans;
    }
};