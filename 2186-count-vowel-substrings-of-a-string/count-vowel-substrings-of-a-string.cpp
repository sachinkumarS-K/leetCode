class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int countVowelSubstrings(string word) {
        int count = 0;
        int n = word.length();

        for (int i = 0; i < n; i++) {
            unordered_set<char> st;
            for (int j = i; j < n; j++) {
                if (!isVowel(word[j]))
                    break; 
                st.insert(word[j]);
                if (st.size() == 5)
                    count++;
            }
        }
        return count;
    }
};