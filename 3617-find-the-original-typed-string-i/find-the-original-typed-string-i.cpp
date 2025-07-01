class Solution {
public:
    int possibleStringCount(string word) {
        int ways = 1 ;
        for(int i =1 ; i<word.length() ; i++){
            if(word[i] == word[i-1])
                ways++;
        }

        return ways;
    }
};