class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
         int n = candyType.size();
        unordered_map<int ,int>mp;
        for(int i : candyType)
            mp[i]++;
        int count = 0;
        int i = 0 ;
        for(auto it : mp){
            if(i++ < n/2)
                count++;
        }

        return count;
    }
};