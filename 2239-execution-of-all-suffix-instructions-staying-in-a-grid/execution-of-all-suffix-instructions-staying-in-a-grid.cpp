class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>ans;
        for(int i = 0 ; i<s.size() ; i++){
            int cnt = 0 ;
            int x = startPos[0] , y = startPos[1] ;
            for(int j = i ; j<s.size() ; j++){              
                if(s[j] == 'R')
                    y++;   
                else if(s[j] == 'L')
                    y--;
                else if(s[j] == 'U')
                    x--;
                else
                    x++;

                if(x < 0 || x >= n || y < 0 || y >= n)
                    break;
                cnt++;
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};