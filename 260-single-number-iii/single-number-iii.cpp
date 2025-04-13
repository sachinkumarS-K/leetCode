class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i : nums)
            ans ^= i;

        int t = ans, k = 0;
        while (1) {
            if (t & 1)
                break;
            k++;
            t >>= 1;
        }
        t = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] >> k) & 1)
                t ^= nums[i];
        }
        return {t , t^ans} ;
    }
};