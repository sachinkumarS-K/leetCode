class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int , vector<char>>mp;
        for(int i = 0 ; i<rings.size() ; i+=2){
            mp[rings[i+1]].push_back(rings[i]);
        }
        int count = 0 ;
        for(auto it : mp){
            bool a = false , b = false , c = false;
            for(int i = 0 ; i<it.second.size() ; i++){
                if(it.second[i] == 'R')
                    a = true;
                else if(it.second[i] == 'G')
                    b = true;
                else if(it.second[i] == 'B')
                    c = true;

                if(a && b && c){
                    count++;
                    break;
                }              
            }
        }
        return count;
    }
};