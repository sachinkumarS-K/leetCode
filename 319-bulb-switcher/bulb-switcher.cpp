class Solution {
public:
    int bulbSwitch(int n) {
        // if (n == 0 || n == 1)
        //     return n;

        // vector<int> arr(n, 1);

        // for (int i = 2; i < n; i++) {
        //     for (int j = i - 1; j < n; j += i) {
        //         arr[j] = arr[j] ? 0 : 1; 
        //     }
        // }
        // arr[n-1] = arr[n-1] ? 0 : 1 ;

        // int ans = 0;
        // for (int i : arr) {
        //     if (i)
        //         ans++; 
        // }

        // return ans;

         return sqrt(n);
    }
};