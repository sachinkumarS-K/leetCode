class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string ans  ;
        while(1){
            char curr = 0;
            for(auto str : strs){
                if(i >= str.size()){
                    curr = 0;
                    break;
                }
                if(curr == 0){
                    curr = str[i];
                }
                else if(str[i] != curr){
                    curr = 0;
                    break;
                }        
            }
            if(curr == 0)
                break;
            
            ans.push_back(curr);
            i++;
        }
        return ans;
    }
};