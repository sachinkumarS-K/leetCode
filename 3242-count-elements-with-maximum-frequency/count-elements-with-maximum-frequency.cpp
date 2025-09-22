class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int hash[101] = {0};
        for (int i : nums)
            hash[i]++;
        int maxi = INT_MIN;
        for (int i : hash) {
            if (i != 0)
                maxi = max(i, maxi);
        }
        int count = 0;

        for (int i : hash) {
            if (i == maxi)
                count += i;
        }

        return count;
    }
};