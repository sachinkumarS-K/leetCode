class Solution {
public:
    int numRabbits(vector<int>& answers) {
       unordered_map<int,int>mp ;
       int count = 0 ;
       for(int i : answers){
            auto it = mp.find(i);
            if(it != mp.end()){
                mp[i]++;
                if(mp[i] == i+1){
                    count += i+1;
                    mp.erase(i);
                }
            }
            else{
                mp[i]++;
                if(i == 0){
                    count++;
                    mp.erase(i);
                }
            }
       }
       for(auto it : mp)
            count += it.first+1;
       return count;
    }
};