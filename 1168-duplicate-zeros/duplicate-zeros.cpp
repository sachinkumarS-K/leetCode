class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeros = 0, n = arr.size();
        for (int i : arr)
            if (i == 0)
                zeros++;

        int i = n - 1, j = n + zeros - 1;
        while (i != j) {
            if (j < n)
                arr[j] = arr[i];
            j--;
            if (arr[i] == 0) {
                if (j < n)
                    arr[j] = 0;
                j--;
            }
            i--;
        }
    }
};