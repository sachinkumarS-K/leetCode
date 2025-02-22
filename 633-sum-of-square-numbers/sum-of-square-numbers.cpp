class Solution {
public:
    bool judgeSquareSum(int c) {
        bool ans = false ;
        int l = 0 , h = sqrt(c) ;
        while(l<=h){
             long long int sum = 1LL* l * l + h * h;
            if(sum == c)
                return true ;
            else if(sum  < c)
                l++;
            else 
                h--;
            
        }
            return ans ;
    }
};