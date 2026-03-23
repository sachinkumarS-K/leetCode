class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = false;
        if(word[0] >= 'A' && word[0] <= 'Z')
            flag = true;
        int l = 0 , u = 0;
        int n = word.size();
        for(auto c : word){
            if(c >= 'a' && c <= 'z')
                l++;
            else
                u++;
        }
        return (l == n || u == n || (flag && l == n-1));
    }
};