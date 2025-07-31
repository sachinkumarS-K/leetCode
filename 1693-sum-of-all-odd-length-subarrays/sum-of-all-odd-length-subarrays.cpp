class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int total = 0, n = arr.size();
        for (int start = 0; start < n; ++start) {
            for (int end = start; end < n; ++end) {
                if ((end - start + 1) % 2 == 1) { 
                    for (int k = start; k <= end; ++k)
                        total += arr[k];
                }
            }
        }
        return total;
    }
};
