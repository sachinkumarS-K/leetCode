class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int , int>count ;
        int res = 0 ;
        for(auto d : dominoes){
            int a = d[0] , b = d[1] ;

            int x = min(a,b)*10 + max(a,b) ;
            res += count[x] ;
            count[x]++ ;
        }
        return res ;
    }
};