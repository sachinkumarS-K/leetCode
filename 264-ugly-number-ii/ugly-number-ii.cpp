class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ans(n+1 , 0);
        ans[1] = 1;
        int i2 = 1 , i3 = 1 , i5 = 1;
        
        for(int i = 2 ; i<= n ; i++){
            int a = ans[i2] * 2 ;
            int b = ans[i3] * 3 ;
            int c = ans[i5] * 5 ;
            ans[i] = min(a , min(b,c));
            if(ans[i] == a) i2++;
            if(ans[i] == b) i3++;
            if(ans[i] == c) i5++;
        }

        return ans[n];
    }
};