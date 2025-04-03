class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0 ;
        int maxDiff = 0 ;
        int maxNum = 0 ;
        for(int i : nums){
            ans = max(ans , (long long) maxDiff * i );
            maxDiff = max(maxDiff , maxNum - i) ;
            maxNum = max(maxNum , i) ;
        }
        return ans ;
    }
};