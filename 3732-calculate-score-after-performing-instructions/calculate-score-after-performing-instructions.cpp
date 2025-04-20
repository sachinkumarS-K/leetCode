class Solution {
public:
    long long calculateScore(vector<string>& instructions,
                             vector<int>& values) {
        long long ans = 0;

        long long i = 0, n = values.size();
        vector<int> arr(n, 0);
        while (i < n && i>=0 && arr[i] == 0) {
            arr[i] = 1;
            if (instructions[i] == "jump") {
                i += values[i];
            } else {
                ans += values[i];
                i += 1;
            }
        }

        return ans;
    }
};