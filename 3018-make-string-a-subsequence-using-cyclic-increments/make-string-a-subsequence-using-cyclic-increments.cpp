class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0;
        for (int j = 0; j < str1.size(); j++)
            if (str1[j] == str2[i] || (str1[j] + 1 - 'a') % 26 + 'a' == str2[i])
                i++;

        return i == str2.size();
    }
};