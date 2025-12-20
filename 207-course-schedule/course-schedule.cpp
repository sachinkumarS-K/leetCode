class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>freq(numCourses , 0);
        vector<vector<int>>adj(numCourses);

        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]); 
            freq[it[0]]++;
        }
        int count = 0;
        queue<int>que;
        for(int i = 0 ; i<freq.size() ; i++){
            if(freq[i] == 0){
                que.push(i);
                count++;
            }
        }
        while(!que.empty()){
            int node = que.front();
            que.pop();

            for(auto it : adj[node]){
                freq[it]--;
                if(freq[it] == 0){
                    que.push(it);
                    count++;
                }
            }
        }
        return count == numCourses;
    }
};