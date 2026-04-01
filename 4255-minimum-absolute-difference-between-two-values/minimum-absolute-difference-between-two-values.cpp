class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        vector<int> one;
        vector<int> two;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                one.push_back(i);
            else if (nums[i] == 2)
                two.push_back(i);
        }
        if (one.size() == 0 || two.size() == 0)
            return -1;
        int mini = INT_MAX;
        for (int i = 0; i < one.size(); i++) {
            for (int j = 0; j < two.size(); j++) {
                mini = min(mini, abs(one[i] - two[j]));
            }
        }
        return mini;
    }
};