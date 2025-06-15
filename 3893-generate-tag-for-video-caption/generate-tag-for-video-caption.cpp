class Solution {
public:
    string generateTag(string str) {
        for (char& i : str)
            if (isupper(i))
                i = tolower(i);

        for (int i = 1; i < str.size(); ++i)
            if (str[i - 1] == ' ' && i - 1 != 0 && islower(str[i]))
                str[i] = toupper(str[i]);

        string ans;
        for (char i : str)
            if (i != ' ')
                ans.push_back(i);

        if (ans.size() >= 100)
            ans = ans.substr(0, 99);

        ans.insert(ans.begin(), '#');

        return ans;
    }
};