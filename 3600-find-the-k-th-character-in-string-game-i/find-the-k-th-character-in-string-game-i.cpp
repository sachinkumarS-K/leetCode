class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        while (str.size() <= k) {
            for (auto i : str) {
                string temp;
                for (char c : str) {
                    temp += (c == 'z' ? 'a' : c + 1);
                }
                str += temp;
            }
        }
        return str[k - 1];
    }
};