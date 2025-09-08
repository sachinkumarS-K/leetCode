class Solution {
public:
    bool check(int n){
        while(n){
            if(n % 10 == 0) return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1 ; i<= n ; i++){
            if(check(i) && check(n-i))
                return {i , n-i};
        }
        return {};
    }
};