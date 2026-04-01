class Solution {
public:
    bool solve(string &str1 , string &str2 , int i , int j){
        if(j >= str2.size()) return true;
        if(i >= str1.size()) return false;

        if(str1[i] == str2[j] || (str1[i] + 1 - 'a') % 26 + 'a' == str2[j]){
            return solve(str1 , str2 , i+1,j+1);
        }
        else{
            return solve(str1 , str2 , i+1 , j);
        }
    }
    bool canMakeSubsequence(string str1, string str2) {
        return solve(str1 , str2 , 0 , 0);
    }
};