class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int n = edges.size() + 1; 
        for (auto it : adj) 
            if (it.second.size() == n - 1) 
                return it.first;            
        
        return -1;
    }
};