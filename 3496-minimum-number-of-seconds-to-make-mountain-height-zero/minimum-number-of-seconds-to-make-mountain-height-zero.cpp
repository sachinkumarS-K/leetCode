class Solution {
public:
    bool check(long long n ,int target , vector<int>&arr){
        long long h = 0;
        for(int i : arr){
            h += (long long)(sqrt((long double)2 * n / i + 0.25) - 0.5);          
            if(h >= target)
                return true; 
        }
        return h >= target;
    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        int maxTime = INT_MIN;
        for(int i : workerTimes)
            maxTime = max(i , maxTime);

        long long l = 1;
        long long r = 1LL * maxTime * mountainHeight * (mountainHeight + 1) / 2;
        long long ans = 0 ;
        while(l <= r){
            long long m = l + (r - l) / 2 ;
            if(check(m ,mountainHeight, workerTimes)){
                ans = m;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
};