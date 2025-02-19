class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false ;
        for(int i = 2 ; i<n ; i++){
            if(n%i == 0)
                return false;
        }
        return true;
    }
    int countBit(int n){
        int c = 0 ;
        while(n){
            c++;
            n = n & (n-1);
        }
        return c ;
    }
    int countPrimeSetBits(int left, int right) {
        int c = 0;
        for(int i = left ; i<= right ; i++){
            int bit = countBit(i);
            if(isPrime(bit))
                c++ ;
        }
        return c;
    }
};