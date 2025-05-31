class Solution {
public:
    int check(vector<int>& arr, int h, int m) {
        int t = 0;
        if(m == 0) return 0 ;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % m == 0)
                t += arr[i] / m;
            else
                t += (arr[i] / m + 1);
            if (t > h)
                return 0;
        }

        return 1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        if (piles.size() == 1){
            if(piles[0] < h){
                return piles[0]/h +1;
            }
            else if(piles[0] % h == 0)
                return piles[0]/h ;
        }
           
       
        int hi = INT_MIN;
        for (int i : piles)
            hi = max(hi, i);
        int li = 0, ans = 0;
        while (li <= hi) {
            int m = li + (hi - li) / 2;
            if (check(piles, h, m)) {
                ans = m;
                hi = m - 1;
            } else {
                li = m + 1;
            }
        }

        return ans;
    }
};