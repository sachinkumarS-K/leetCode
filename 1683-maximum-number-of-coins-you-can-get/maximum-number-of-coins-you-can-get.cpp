class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin() , piles.end());
        int idx = piles.size()/3 ;
        int ans = 0 ;
        for(int i = idx ; i<piles.size() ; i+=2)
            ans += piles[i] ;

        return ans ;
    }
};