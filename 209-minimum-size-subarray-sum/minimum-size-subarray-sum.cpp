class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX, n = nums.size();
        int l = 0, r = 0, sum = 0;

        while (r < n) {
            sum += nums[r++];
            while(sum >= target){
                minLen = min(minLen , r-l);
                sum -= nums[l++];
            }
        }
        return (minLen == INT_MAX ? 0 : minLen);
    }
};
