class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    string sortVowels(string s) {
        vector<char> vowel;
        for (int i = 0; i < s.size(); i++)
            if (isVowel(s[i]))
                vowel.push_back(s[i]);

        sort(vowel.begin(), vowel.end());
        int k = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i]))
                s[i] = vowel[k++];
        }
        return s;
    }
};