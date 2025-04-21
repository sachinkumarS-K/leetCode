class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0, n = arr.size();
        int high = n - 1;
        while (low < high) {
            int m = (low + high) / 2;
            if (arr[m] > arr[high])
                low = m + 1;
            else
                high = m;
        }
        int shift = low;
        low = 0, high = n - 1;
        while (low <= high) {
            int m = (low + high) / 2;
            int m1 = (m + shift) % n;
            if (arr[m1] == target)
                return m1;
            else if (arr[m1] < target)
                low = m + 1;
            else
                high = m - 1;
        }
        return -1;
    }
};