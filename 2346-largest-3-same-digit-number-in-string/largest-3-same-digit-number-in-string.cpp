class Solution {
public:
    string largestGoodInteger(string arr) {
        string ans = "";
        for (int i = 0; i <= arr.size() - 3; i++) {
            if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]) {
                string temp = arr.substr(i, 3);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};