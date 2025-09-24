class Solution {
public:
    int minimumMoves(string s) {
        int count = 0, n = s.size();
        for (int i = 0; i < n;) {
            if (s[i] == 'O') {
                i++;
                continue;
            } else {
                count++;
                i += 3;
            }
        }
        return count;
    }
};