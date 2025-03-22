class Solution {
public:
    int countDigits(int num) {
        int count = 0 , temp = num ;
        while(num){
            if(temp % (num%10) == 0)
                count ++ ;

            num/=10 ;
        }

        return count ;
    }
};