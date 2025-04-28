class Solution {
public:
    int maximum69Number(int num) {
        int maxi = INT_MIN, n = 0, t = num;
        vector<int> arr;
        while (t) {
            arr.push_back(t % 10);
            n++;
            t /= 10;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;
            }
        }
        int res = 0;
        for (int i = n - 1; i >= 0; i--)
            res = res * 10 + arr[i];
        
        return res;
    }
};