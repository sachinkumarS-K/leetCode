class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int maxCount = 0, n = s.length();
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                maxCount++;
        }
         int c = maxCount;
        for (int i = k; i <n; i++) {
           
            if(isVowel(s[i-k])) c -- ;
            if(isVowel(s[i]))   c++ ;
            maxCount = max(maxCount , c);
        }

        return maxCount ;
    }
};