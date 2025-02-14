class Solution {
public:
    string reverseOnlyLetters(string arr) {
        int l = 0, h = arr.length() - 1;

        while (l <= h) {
            if ((int(arr[l]) >= 33 && int(arr[l]) < 65) ||
                (int(arr[l]) >= 91 && int(arr[l]) < 97))
                l++;
            else if ((int(arr[h]) >= 33 && int(arr[h]) < 65) ||
                     (int(arr[h]) >= 91 && int(arr[h]) < 97))
                h--;
            else {
                swap(arr[l++], arr[h--]);
            }
        }
        return arr;
    }
};