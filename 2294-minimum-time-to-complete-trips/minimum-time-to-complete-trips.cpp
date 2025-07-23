class Solution {
public:
    bool check(vector<int>&arr , long long m , int t){
        long long sum = 0 ;
        for(int i : arr){
            sum += m / i ;
            if(sum >= t)
                return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long  l = 0 , h = 1LL * *max_element(time.begin(), time.end()) * totalTrips;
        long long ans = -1;

        while(l <= h){
            long long mid = l + (h - l) / 2;
            if(check(time , mid , totalTrips)){
                ans = mid ;
                h = mid - 1 ;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};