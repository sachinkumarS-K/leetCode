class Solution {
public:
    bool check(vector<int>& arr, int mid, int tar) {
        if (arr[mid] <= tar)
            return true;
        else
            return false;
    }
    vector<int> answerQueries(vector<int>& arr, vector<int>& queries) {
        vector<int> ans;
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size(); i++)
            arr[i] += arr[i - 1];

        for (int i = 0; i < queries.size(); i++) {
            int l = 0, h = arr.size() - 1, t = 0;
            while (l <= h) {
                int m = l + (h - l) / 2;
                if (check(arr, m, queries[i])) {
                    t = m + 1;
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};