class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int> ans;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < k; i++) 
            pq.push({arr[i], i});
        
        ans.push_back(pq.top().first);

        for (int i = k; i < arr.size(); i++) {
            pq.push({arr[i], i});

            while (!pq.empty() && pq.top().second <= i - k)            
                pq.pop();

            ans.push_back(pq.top().first);
        }
        return ans;
    }
};