class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) { return a[1] > b[1]; }
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        int maxProfit = 0;

        sort(arr.begin(), arr.end(), cmp);

        for (auto brr : arr) {
            if (brr[0] <= truckSize) {
                maxProfit += brr[1] * brr[0];
                truckSize -= brr[0];
            } else {
                maxProfit += truckSize * brr[1];
                break;
            }
        }

        return maxProfit;
    }
};