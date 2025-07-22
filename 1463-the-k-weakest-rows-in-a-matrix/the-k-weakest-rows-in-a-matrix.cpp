class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>> pq;
         vector<int> ans(k);

        for (int i = 0; i < mat.size(); i++) {
            int sum = 0;
            for (int j = 0; j < mat[0].size(); j++)
                sum += mat[i][j];

            pq.push({sum, i});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        for (int i = k - 1; i >= 0; i--) {
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};