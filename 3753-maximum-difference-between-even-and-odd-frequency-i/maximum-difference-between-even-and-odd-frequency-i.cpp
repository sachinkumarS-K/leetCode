class Solution {
public:
    int maxDifference(string s) {
        int arr[26] = {0};
        for (int i = 0; i < s.length(); i++)
            arr[s[i] - 97]++;

        int a = -1, b = 100;

        for (int i = 0; i < 26; i++) {
            if (arr[i] % 2) {
                a = max(a, arr[i]);
            } else {
                if (arr[i])
                    b = min(b, arr[i]);
            }
        }
        return a-b;
    }
};