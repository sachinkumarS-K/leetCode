class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int maxOcc = n / 4;
        int c = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                c++;
            } else {
                if (c > maxOcc)
                    return arr[i - 1];

                c = 1;
            }
        }
        if (c > maxOcc) {
            return arr[n - 1];
        }
        return -1;
    }
};