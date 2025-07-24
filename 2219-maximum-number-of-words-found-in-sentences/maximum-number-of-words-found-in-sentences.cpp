class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = INT_MIN ;
        for(auto str  : sentences){
            int curr = 0 ;
            for(int i = 0 ; i<str.size() ; i++){
                if(str[i] == ' ')
                    curr++;
            }
            maxWords = max(curr+1 , maxWords);
        }

        return maxWords;
    }
};