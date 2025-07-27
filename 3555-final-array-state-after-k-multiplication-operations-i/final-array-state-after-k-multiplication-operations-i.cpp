struct Compare {
    bool operator()(pair<int, int>& a, pair<int, int>& b) {
        if (a.second == b.second)
            return a.first > b.first;

        return a.second > b.second;
    }
};
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> minHeap;
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++)
            minHeap.push({i, nums[i]});

        for (int i = 0; i < k; i++) {
            auto temp = minHeap.top();
            minHeap.pop();
            minHeap.push({temp.first, temp.second * multiplier});
        }
        while (!minHeap.empty()) {
            auto temp = minHeap.top();
            minHeap.pop();
            ans[temp.first] = temp.second;
        }

        return ans;
    }
};