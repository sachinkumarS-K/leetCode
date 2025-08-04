
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0;
        unordered_map<int, int> mp;
        int l = 0;
        for (int i = 0; i < fruits.size(); i++) {
            mp[fruits[i]]++;
            if (mp.size() > 2) {
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            ans = max(ans , i-l+1);

        }
        return ans;
    }
};