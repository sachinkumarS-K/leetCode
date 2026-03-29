class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0 ;
        vector<int>freq(26,0);
        for(auto c : allowed)
            freq[c-'a']++;
            
        for(auto str : words){
            bool flag = true ;
            for(auto c : str){
                if(freq[c-'a'] == 0){
                    flag = false;
                    break;
                }
            }
            if(flag)
                count++;
        }
        return count;
    }
};