class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                 "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                 "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                 "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                 "-.--", "--.."};
        set<string>st;
        for(auto str : words){
            string temp = "";
            for(int i = 0 ; i<str.size() ; i++){
                temp += morse[str[i]-'a'];
            }
            st.insert(temp);
        }  
        return st.size() ;                    
    }
};