class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0 , h = n , ans= 0 ;
        while(l <= h){
            long long mid = l + (h-l)/2 ;
            long long c = mid * (mid + 1) / 2;
            if(c <= n){
                ans = mid ;
                l = mid + 1;
            }
            else{
                h  = mid - 1;
            }
        }
        return ans;
    }
};