class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>even(26,0);
        vector<int>odd(26,0);
        for(int i = 0 ; i<s1.size() ; i++){
            if(i & 1){
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']-- ;
            }
            else{
                even[s1[i]-'a']++;
                even[s2[i]-'a']--;
            }
        }
        for(int i = 0 ; i<26 ; i++)
            if(even[i] != 0 || odd[i] != 0)
                return false;
         
        return true;
    }
};