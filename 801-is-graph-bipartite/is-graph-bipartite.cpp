class Solution {
public:
    bool check(int start , vector<vector<int>>& graph , vector<int>&color){
        int n = graph.size();
        queue<int>que;       
        que.push(start);
        color[start] = 0;
        while(!que.empty()){
            int node = que.front();
            que.pop();
            
            for(auto it : graph[node]){
                if(color[it] == -1){
                    color[it] = !color[node];
                    que.push(it);
                }
                else if(color[it] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool dfs(int start ,int curr , vector<vector<int>>& graph , vector<int>&color){
        color[start] = curr;

        for(auto it : graph[start]){
            if(color[it] == -1){
                if(!dfs(it , 1-curr , graph , color))
                    return false;
            }
            else if(color[it] == curr)
                return false;
        }
        return true;    
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n , -1);

        for(int i = 0 ; i<n ; i++){
            if(color[i] == -1){
                if(!dfs(i , 0 , graph , color))
                    return false;
            }
        }
        return true;
    }
};