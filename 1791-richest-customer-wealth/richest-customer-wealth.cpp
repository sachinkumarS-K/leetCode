class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;

        for(int i = 0 ; i<accounts.size() ; i++){
            int s = 0 ;
            for(int j = 0 ; j<accounts[0].size() ; j++)
                s+= accounts[i][j];
            
            if(s > maxWealth)
                maxWealth = s;
        }
        return maxWealth;
    }
};