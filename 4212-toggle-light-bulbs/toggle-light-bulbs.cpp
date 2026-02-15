class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool>flag(101,false);
        for(auto i : bulbs)
            flag[i] = !flag[i];
        
        vector<int>ans;
        for(int i = 1 ; i<=100 ; i++)
            if(flag[i])
                ans.push_back(i);
        
        return ans;
    }
};