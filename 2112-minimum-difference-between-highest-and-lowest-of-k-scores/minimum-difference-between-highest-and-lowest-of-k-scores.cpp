class Solution {
public:
    int minimumDifference(vector<int>& arr, int k) {
        if(k == 1)
            return 0;
        sort(arr.begin() , arr.end());
        int minDiff = INT_MAX;
        int n = arr.size();
        for(int i = 0; i <= n - k; i++)
            minDiff = min(minDiff, arr[i + k - 1] - arr[i]);

        return minDiff;
    }
};