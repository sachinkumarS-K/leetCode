class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for (int i = 0; i < spells.size(); i++) {
            long long required = (success + spells[i] - 1) / spells[i];
            int l = 0, h = potions.size() - 1, idx = potions.size();
            while (l <= h) {
                int m = l + (h - l) / 2;
                if (potions[m] >= required) {
                    idx = m;
                    h = m - 1;
                } else {
                    l = m + 1;
                }
            }
            ans.push_back((potions.size() - idx));
        }

        return ans;
    }
};