class Solution {
public:
    int firstOcc(vector<int> arr, int l, int h, int t) {
        if (l > h)
            return -1;
        int m = l + (h - l) / 2;
        if (arr[m] > t)
            return firstOcc(arr, l, m - 1, t);
        else if (arr[m] < t)
            return firstOcc(arr, m + 1, h, t);
        else {
            if (m == 0 || arr[m - 1] != t)
                return m;
            else
                return firstOcc(arr, l, m - 1, t);
        }
    }
    int lastOcc(vector<int> arr, int l, int h, int t) {
        if (l > h)
            return -1;

        int m = l + (h - l) / 2;
        if (arr[m] > t)
            return lastOcc(arr, l, m - 1, t);
        else if (arr[m] < t)
            return lastOcc(arr, m + 1, h, t);
        else {
            if (m == arr.size() - 1 || arr[m + 1] != t)
                return m;
            else
                return lastOcc(arr, m + 1, h, t);
        }
    }
    vector<int> searchRange(vector<int>& arr, int t) {
        vector<int> ans(2, -1);
        if (arr.size() == 0)
            return ans;

        ans[0] = firstOcc(arr, 0, arr.size() - 1, t);
        ans[1] = lastOcc(arr, 0, arr.size() - 1, t);

        return ans;
    }
};