class Solution {
public:
    void solve(vector<int>& arr , int& sum, int curr, int i) {
        if (i == arr.size()) {
            sum += curr;
            return;
        }
        solve(arr, sum, curr , i + 1);
        solve(arr, sum, curr^arr[i], i + 1);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        solve(nums, sum,0, 0);
        return sum;
    }
};