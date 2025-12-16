class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int r = isWater.size() , c = isWater[0].size() ;

        vector<vector<int>>ans(r , vector<int>(c , 0));
        vector<vector<bool>>vis(r , vector<bool>(c , false));
        queue<pair<pair<int,int>,int>>que;

        for(int i = 0 ; i<r ; i++){
            for(int j = 0 ; j<c ; j++){
                if(isWater[i][j] == 1){
                    vis[i][j] = true;
                    que.push({{i,j} , 0});
                }
            }
        }
        while(!que.empty()){
            int row = que.front().first.first;
            int col = que.front().first.second;
            int step = que.front().second;
            que.pop();
            ans[row][col] = step;

            vector<int>dr = {-1 , 0 , 1 , 0};
            vector<int>dc = {0 , -1 , 0 , 1};
            for(int i = 0 ; i<4 ; i++){
                int nr = row + dr[i] , nc = col + dc[i] ;
                if((nr >= 0 && nr < r) && (nc >= 0 && nc < c) && !vis[nr][nc]){
                    vis[nr][nc] = true;
                    que.push({{nr , nc} , step+1});
                }
            }
        }

        return ans;
    }
};