class Solution {
public:
    bool isTrionic(vector<int>& arr) {
        int n = arr.size(), i = 1;
        while (i < n && arr[i] > arr[i - 1])
            i++;
        if (i == 1 || i == n)
            return false;

        int temp = i;
        while (i < n && arr[i] < arr[i - 1])
            i++;
        if (i == temp || i == n)
            return false;

        temp = i;
        while (i < n && arr[i] > arr[i - 1])
            i++;
        if (i == temp)
            return false;

        return i == n;
    }
};