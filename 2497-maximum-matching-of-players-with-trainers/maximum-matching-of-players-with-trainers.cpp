class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin() , players.end());
        sort(trainers.begin() , trainers.end());

        int ans = 0 ;

        for(int i = 0 ; i<trainers.size() ; i++){
                if(players[ans] <= trainers[i] && ++ans == players.size())
                    return ans;
        }
        return ans;
    }
};