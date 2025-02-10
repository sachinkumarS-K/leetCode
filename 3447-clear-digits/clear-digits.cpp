class Solution {
public:
    string clearDigits(string s) {

        vector<int> arr(s.length(), 0);
        for (int i = 0; i < s.length(); i++) {
            if (int(s[i]) >= 48 && int(s[i]) <= 57) {
                arr[i] = 1;
                for (int j = i - 1; j >= 0; j--) {
                    if (int(s[j]) >= 97 && int(s[j]) <= 122 && arr[j] == 0) {
                        arr[j] = 1;
                        break;
                    }
                }
            }
        }
        string result;
        for (int i = 0; i < arr.size(); i++) {
           
            if (!arr[i]) {

                result += s[i];
            }
        }
        return result;
    }
};