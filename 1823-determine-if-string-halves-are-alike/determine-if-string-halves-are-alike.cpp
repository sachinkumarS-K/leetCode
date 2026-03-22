class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    bool halvesAreAlike(string s) {
        int l = 0, h = s.size() - 1;
        int leftCount = 0, rightCount = 0;
        while (l < h) {
            if (isVowel(s[l++]))
                leftCount++;
            if (isVowel(s[h--]))
                rightCount++;
        }
        return leftCount == rightCount;
    }
};