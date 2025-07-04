class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair< float , int>> pq;
        int c = 0;
        vector<vector<int>> ans;
        for (auto it : points) {
            float d = sqrt(abs(it[0]*it[0] + it[1]*it[1]));
            pq.push({d , c++});
            if (pq.size() > k)
                pq.pop();
            
        }
        while (!pq.empty()) {
            auto curr = pq.top();
            ans.push_back(points[curr.second]);
            pq.pop();
        }

        return ans;
    }
};