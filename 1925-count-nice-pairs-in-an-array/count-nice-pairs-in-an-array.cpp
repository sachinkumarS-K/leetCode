class Solution {
public:
    int rev(int n) {
        int ans = 0;
        while (n) {
            ans = (ans * 10) + (n % 10);
            n /= 10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        long long count = 0;
        for (int i : nums) {
            int t = i - rev(i);
            if (mp.find(t) != mp.end()) {
                count += mp[t];
                mp[t]++;
            } else {
                mp[t]++;
            }
        }

        return count % 1000000007;
    }
};