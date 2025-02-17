class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1)
            return true;

        int f1, f2;
        for (int i = 1; i < nums.size(); i++) {
            f1 = nums[i] & 1 ? 1 : 0;
            f2 = nums[i - 1] & 1 ? 1 : 0;

            if (f1 == f2)
                return false;
        }
        return true;
    }
};