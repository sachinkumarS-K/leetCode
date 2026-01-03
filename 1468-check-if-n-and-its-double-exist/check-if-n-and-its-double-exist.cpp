class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i : arr)
            mp[i]++;
        
        for(auto it : mp){
            int x = it.first;
            if (x == 0) {
                if (mp[0] > 1)   
                    return true;
            }
            else if (mp.count(x * 2)) {
                return true;
            }
        }       
        return false;
    }
};