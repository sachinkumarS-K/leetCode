class Solution {
public:
    int minRemoval(vector<int>& arr, int k) {
        int len = 0, n = arr.size();
        sort(arr.begin(), arr.end());

        int i = 0, j = 0;

        while (i < n) {
            while (j < n && arr[j] <= (long long)k * arr[i]) {
                j++;
            }            
            len = max(len, j - i);
            i++;
        }

        return n - len;
    }
};
