class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1, j = t.size() - 1;
        int skipT = 0 , skipS = 0 ;
        while (i >= 0 || j >= 0) {
            while(i >= 0){
                if(s[i] == '#')
                    skipS++;
                else if(skipS > 0)
                    skipS--;
                else
                    break;
                i--;
            }
            while(j >= 0){
                if(t[j] == '#')
                    skipT++;
                else if(skipT > 0)
                    skipT--;
                else
                    break;
                j--;
            }
            char first = i == -1 ? '.' : s[i];
            char second = j == -1 ? '.' : t[j] ;

            if(first != second)
                return false;

            i--;
            j--;
        }
        return true;
    }
};