class Solution {
public:
    int sum(int n){
        int s = 0 ;
        while(n){
            s += n%10 ;
            n/=10;
        }
        return s ;
    }
    int countLargestGroup(int n) {

        if(n < 10) return n ;
        unordered_map<int , int> freq ;

        for(int i = 1; i <= n; i++)       
            freq[sum(i)]++;
        
        int maxCount = 0;
        for (auto& [key, value] : freq) {
            if (value > maxCount)
                maxCount = value;
        }

        int result = 0;
        for (auto& [key, value] : freq) {
            if (value == maxCount)
                result++;
        }

        return result;
    }
};