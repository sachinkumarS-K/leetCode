class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;

        int c = 0;
        string res = "";
        while (i >= 0 || j >= 0 || c != 0) {
            int sum = c;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';
            c = sum / 2;
            res += (sum % 2) + '0';
        }
        reverse(res.begin() , res.end());

        return res;
    }
};