class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime(n + 1, true);

        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> arr;
        for (int i = 0; i <= n; i++) 
            if (isPrime[i])
                arr.push_back(i);
        
        vector<vector<int>> ans;

        int l = 0 , h = arr.size()-1;

        while(l <= h){
            if(arr[l] + arr[h] == n){
                ans.push_back({arr[l] , arr[h]});
                l++ , h--;
            }
            else if(arr[l] + arr[h] > n)
                h--;
            else
                l++;
        }

        return ans;
    }
};