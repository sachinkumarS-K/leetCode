class Solution {
    void reverse(string & str , int l , int h){
        while(l < h)
            swap(str[l++] , str[h--]);        
    }
public:
    string reverseWords(string s) {
        string ans;
        int i = 0 , n = s.length();
        while (i < n && s[i] == ' ')
            i++;
        bool spaceAdded = false;
        for (; i < n; i++) {
            if (s[i] != ' ') {
                ans += s[i];
                spaceAdded = false;
            } else if (!spaceAdded) {
                ans += ' ';
                spaceAdded = true;
            }
        }    
    
        if(!ans.empty() && ans.back() == ' ') 
            ans.pop_back();

        reverse(ans , 0 , ans.size() - 1);

        int idx = 0 ;
        for(i = 0 ; i<ans.length() ; i++){
            if(ans[i] == ' '){
                reverse(ans , idx , i-1);
                idx = i+1;
            }
        }
        reverse(ans , idx , ans.size()-1);



        return ans;
    }
};