class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int k = 0 ;
        vector<int>ans;
        for(auto str : words){
            for(int i = 0 ; i<str.length() ; i++){
                if(str[i] == x){
                    ans.push_back(k) ;
                    break ;
                }                   
            }
            k++ ;
        }
        return ans ;
    }
};