class Solution {
public:
    vector<vector<int>> twoSum(vector<int> arr, int n, int t) {
        vector<vector<int>> ans;
        int l = n, h = arr.size() - 1;
        while (l < h) {
            int s = arr[l] + arr[h];

            if (s == t) {
                ans.push_back({arr[n - 1], arr[l], arr[h]});
                while (l < h && arr[l] == arr[l + 1])
                    l++;
                while (l < h && arr[h] == arr[h - 1])
                    h--;
                l++;
                h--;
            } else if (s > t) {
                h--;
            } else {
                l++;
            }
        }
        return ans;
    }

    vector<vector<int>> threeSum(vector<int> arr) {

        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            if (i > 0 && arr[i] == arr[i - 1])
                continue;
            vector<vector<int>> pairs = twoSum(arr, i + 1, -arr[i]);
            ans.insert(ans.end(), pairs.begin(), pairs.end());
        }
        return ans;
    }
};