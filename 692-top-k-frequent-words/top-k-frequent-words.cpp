class compare {
public:
    bool operator()(pair<int, string>& a, pair<int, string>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (auto w : words) {
            freq[w]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, compare> pq;

        vector<string> ans;

        for (auto& [word, count] : freq) {
            pq.push({count, word});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};