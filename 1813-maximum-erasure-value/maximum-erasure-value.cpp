class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxSum = 0;
        int currSum = 0;
        unordered_map<int, int> mp;
        int l = 0, r = 0;

        while (r < nums.size()) {
            while (mp.count(nums[r]) && mp[nums[r]] > 0) {
                mp[nums[l]]--;
                currSum -= nums[l];
                l++;
            }
            mp[nums[r]]++;
            currSum += nums[r];
            maxSum = max(maxSum , currSum);
            r++;
        }

        return maxSum;
    }
};