class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (x == sum - nums[i] - x)
                return i;

            x += nums[i];
        }
        return -1;
    }
};