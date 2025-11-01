class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        long long ans = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int maxi = arr[i], mini = arr[i];
            for (int j = i+1; j < n; j++) {
                maxi = max(maxi, arr[j]);
                mini = min(mini, arr[j]);
                ans += (maxi - mini);
            }
        }
        return ans;
    }
};
