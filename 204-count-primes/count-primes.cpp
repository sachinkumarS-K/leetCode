class Solution {
public:
    int countPrimes(int n) {
        if(n == 0) return 0 ;
        vector<bool>arr(n , true);
        arr[0] = arr[1] = false ;
        int c = 0 ; 
        for(int i = 2 ; i<n ; i++){
            if(arr[i]){
                c++;
                long long int j = 1LL * i * i ;
                while(j < n){
                    arr[j] = false;
                    j += i ; 
                }
            }
        }
        return c;
    }
};