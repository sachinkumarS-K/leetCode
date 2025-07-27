class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int prev = nums[0];
        int count = 0;

        for (int i = 1; i < nums.size() - 1; i++) {
            if ((nums[i] > prev && nums[i] > nums[i + 1]) ||
                (nums[i] < prev && nums[i] < nums[i + 1])) {
                count++;
                prev = nums[i];
            }
        }

        return count;
    }
};