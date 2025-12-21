class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        vector<string> str(n, "");
        int ans = 0;
        for (int i = 0; i < strs[0].size(); i++) {
            string temp = "";
            string s = "";
            for (int j = 0; j < strs.size(); j++) {
                temp = strs[j];
                s += temp[i];
            }
            temp = s;
            sort(temp.begin(), temp.end());
            if (temp != s) {
                ans++;
            }
        }
        return ans;
    }
};