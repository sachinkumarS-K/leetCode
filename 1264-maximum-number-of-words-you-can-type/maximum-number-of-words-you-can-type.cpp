class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        unordered_set<char> st;
        for (auto i : brokenLetters)
            st.insert(i);

        int l = 0;
        bool flag = true;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                if (flag)
                    count++;
                flag = true;
            } else {
                if (st.find(text[i]) != st.end()) {
                    flag = false;
                }
            }
        }
        if (flag)
            count++;

        return count;
    }
};