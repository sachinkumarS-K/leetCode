class Solution {
public:
    int countHomogenous(string s) {
        long long ans = 0 ;
        int mod = 1e9 + 7 ;
        int i = 0 , n = s.size() ;

        while(i < n){
            int cnt = 0 ;
            while(i+1 < n && s[i] == s[i+1]){
                cnt++ ;
                i++ ;
            }
            int len = cnt + 1 ;
            ans = (ans + (1LL * len * (len+1))/2) % mod ;
            i++; 
        }
        return ans;
    }
};