class Solution {
public:
    bool isThree(int n) {
        int x = sqrt(n);
        if(1LL*x*x != n || x < 2)
            return false;
        for(int i = 2 ; i*i <= x ; i++){
            if(x % i == 0)
                return false;
        }
        return true;
    }
};