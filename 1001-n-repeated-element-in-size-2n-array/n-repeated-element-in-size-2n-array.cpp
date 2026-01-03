class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums)
            mp[i]++;
        
        int n = mp.size()-1;
        int ans = 0;
        for(auto it : mp){
            if(it.second == n){
                ans = it.first;
                break;
            }               
        }
        return ans;
    }
};