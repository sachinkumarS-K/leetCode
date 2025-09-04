class Solution {
public:
    void dfs(int src , unordered_map<int, vector<int>>& list , unordered_map<int,bool>&visited){
        visited[src] = true;
        for(int i : list[src]){
            if(!visited[i])
                dfs(i , list , visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int, vector<int>> list;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && isConnected[i][j] == 1) {
                    list[i].push_back(j);
                    list[j].push_back(i);
                }
            }
        }
        int count = 0;
        unordered_map<int, bool> visited;
        for(int i = 0 ; i<n ; i++){
            if(!visited[i]){
                count++;
                dfs(i , list , visited);
            }
        }
        return count;
    }
};