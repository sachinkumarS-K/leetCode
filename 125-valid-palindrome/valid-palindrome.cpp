class Solution {
public:
    bool checkPalindrome(string s) {
        int l = 0, h = s.length() - 1;
        while (l < h) {
            if (s[l] != s[h])
                return false;
            else
                l++, h--;
        }
        return true;
    }
    bool isPalindrome(string s) {
       
            string ans = "";
            for (int i = 0; i < s.length(); i++) {

                if ((s[i] >= 'a' && s[i] <= 'z') ||
                    (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <='9')) {
                
                    if((s[i] >= 'a' && s[i] <= 'z') ||
                        (s[i] >= 'A' && s[i] <= 'Z'))   
                                ans += tolower(s[i]);
                    else
                                ans+=s[i];
                }
            }

            return checkPalindrome(ans);
        }
    };