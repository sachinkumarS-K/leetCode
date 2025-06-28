class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {

        int count = 0;
        int preSum = 0;
        unordered_map<int, int> mp;
        mp[0]++;

        for (int i = 0; i < arr.size(); i++) {
            preSum += arr[i];

            auto it = mp.find(preSum - k);
            if (it != mp.end()) {
                count += it->second;
            }
            mp[preSum]++;
        }

        return count;
    }
};