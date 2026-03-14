class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n = right + 1;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for(int i = 2 ; i*i <= n ; i++)
            for(int j = i*i ; j <= n ; j += i)
                isPrime[j] = false;

        int prev = -1;
        int diff = INT_MAX;
        vector<int> ans = {-1,-1};
        for(int i = left ; i <= right ; i++){
            if(isPrime[i]){
                if(prev != -1 && i - prev < diff){
                    diff = i - prev ;
                    ans = {prev , i};
                }
                prev = i;
            }
        }

        return ans;
    }
};