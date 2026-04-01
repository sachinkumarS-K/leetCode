class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int k = 0 ;
        string ans = "" ;
        for(int i = 0 ; i<s.size() ; i++){
            if(k < spaces.size() && spaces[k] == i){
                ans += " ";
                k++;
            }
            ans += s[i];
        }
        return ans;
    }
};