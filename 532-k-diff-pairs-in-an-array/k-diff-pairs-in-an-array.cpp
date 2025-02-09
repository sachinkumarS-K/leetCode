class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        int c = 0;
        sort(arr.begin(), arr.end());
        int i = 0, j = 1;
        set<pair<int, int>> ans;
        while (j < arr.size()) {
            int d = arr[j] - arr[i];
            if (d == k) {
                ans.insert({arr[i], arr[j]});
                i++, j++;
            } else if (d < k) {
                j++;
            }

            else {
                i++;
            }
            if (i == j)
                j++;
        }
        return ans.size();
    }
};