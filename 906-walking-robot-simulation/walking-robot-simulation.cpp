class Solution {
public:
    string convert(int a , int b){
        return to_string(a) + "_" + to_string(b);
    }
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string>st;
        for(auto it : obstacles)
            st.insert(convert(it[0] , it[1]));
        
        int maxDis = 0 ;

        int x = 0 , y = 0 ;
        int dir = 0 ;

        int dx[] = {0 , 1 , 0 , -1} ;
        int dy[] = {1 , 0 , -1 , 0} ;

        for(int cmd : commands){
            if(cmd == -1){
                dir = (dir+1) % 4 ;
            }
            else if(cmd == -2){
                dir = (dir+3) % 4 ;
            }
            else{
                
                for(int i = 0 ; i<cmd ; i++){
                    int nx = x + dx[dir] ;
                    int ny = y + dy[dir] ;

                    if(st.find(convert(nx,ny)) != st.end())
                        break;
                    
                    x = nx ;
                    y = ny ;

                   maxDis = max(maxDis, x*x + y*y);
                }
            }
        }

        return maxDis ;
    }
};