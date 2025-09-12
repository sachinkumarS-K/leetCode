class Solution {
public:
    string reverseWords(string str) {
        int s = 0 ;
        while(1){
            if(str[s] != ' ')
                break;
            s++;
        }
        int e = str.size()-1;
        while(1){
            if(str[e] != ' ')
                break;
            e--;
        }
        vector<string>st;
        int l = s;
        for(int i = s ; i<e ; i++){
            if(str[i] == ' ' && str[l] == ' ')
                l++;
            else if(str[i] == ' '){
                st.push_back(str.substr(l , i-l));
                l = i+1;
            }
        }
        st.push_back(str.substr(l , e-l+1));
        string ans = "";
        for(int i = st.size()-1 ; i>= 0 ; i--){
            ans += st[i];
            if(i != 0)
                ans += " ";
        }
            
        return ans;
    }
};