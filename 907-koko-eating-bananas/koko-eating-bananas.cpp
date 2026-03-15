class Solution {
public:
    int check(vector<int>& arr, int h, int m) {
        long long count = 0;
        for(int i : arr){
            int rem = i % m;
            if(rem != 0)
                count++;
            count += i/m;
        }
        return count <= h;
    }
    int minEatingSpeed(vector<int>& piles, int hour) {
        int l = 1 , h = 0 ;
        for(int i : piles)
            h = max(i , h);
        int ans = h;
        while(l <= h){
            int m = l + (h-l)/2;
            if(check(piles , hour , m)){
                ans = m;
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
};