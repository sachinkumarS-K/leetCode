class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string>st;

        int i = 0 ;

        while(i < word.size()){
            char ch = word[i];
            if(ch >= 'a' && ch <= 'z'){
                i++;
                continue;
            }
            string num = "";
            while(i < word.size() && isdigit(word[i])){
                num += word[i];
                i++;
            }
            int j = 0 ;
            while( j < num.size() && num[j] == '0')
                j++;
            st.insert(num.substr(j));
        }


        return st.size();
    }
};