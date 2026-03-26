class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string sortVowels(string s) {
        vector<int> arr;
        for (auto c : s)
            if (isVowel(c))
                arr.push_back(c);

        sort(arr.begin(), arr.end());
        int i = 0;
        for (int j = 0; j < s.size(); j++)
            if (isVowel(s[j]))
                s[j] = arr[i++];

        return s;
    }
};