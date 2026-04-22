class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries,
                                vector<string>& dictionary) {
        vector<string> ans;

        for (auto& str : queries) {
            for (auto& s : dictionary) {
                int cnt = 0;
                for (int i = 0; i < str.size(); i++) {
                    if (str[i] != s[i])
                        cnt++;
                    if (cnt > 2)
                        break;
                }

                if (cnt <= 2) {
                    ans.push_back(str);
                    break;
                }
            }
        }

        return ans;
    }
};