class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxSum = arr[0], c = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            c = max(arr[i] , arr[i] + c);
            maxSum = max(c , maxSum);
        }
        return maxSum;
    }
};