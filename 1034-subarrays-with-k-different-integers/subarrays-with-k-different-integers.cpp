class Solution {
public:
    int atMostK(vector<int>& arr, int k) {
        int ans = 0, n = arr.size();
        int head = -1, tail = 0;
        int distinctCount = 0;
        map<int, int> mp;

        while (tail < n) {
            while (head + 1 < n &&
                   (distinctCount < k || mp[arr[head + 1]] >= 1)) {
                head++;
                if (mp[arr[head]] == 0)
                    distinctCount++;
                mp[arr[head]]++;
            }

            ans += (head - tail + 1);

            if (tail > head) {
                tail++;
                head = tail - 1;
            } else {
                mp[arr[tail]]--;
                if (mp[arr[tail]] == 0)
                    distinctCount--;
                tail++;
            }
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& arr, int k) {
        return atMostK(arr, k) - atMostK(arr, k - 1);
    }
};
