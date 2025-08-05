class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<int>vis(n,0);
        int ans = n ;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                if(baskets[j] >= fruits[i] && !vis[j]){
                    vis[j] = 1;
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};