class Solution {
public:
    int smallestEvenMultiple(int n) {
        for(int i = 2 ; i<=2*n ; i+=2){
            if(i%n == 0 && i%2 == 0)
                return i;
        }
        return -1;
    }
};