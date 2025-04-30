class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int sum = 10 , x = 9 , y = 9 , j = 1 ;
        for(int i = 1 ; i<=n ; i++){
             x = 9 , y = 9 , j = i ;
             while(j>1){
                x = x*y ;
                y-- , j-- ;
            }
            sum += x ;
        }

        return sum-9 ;
    }
};