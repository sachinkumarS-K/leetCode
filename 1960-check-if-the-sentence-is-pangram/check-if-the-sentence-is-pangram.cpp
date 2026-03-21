class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26] = {0};
        int count = 0 ;
        for(auto c : sentence){
            if(freq[c-'a'] == 0){
                count++;
                freq[c-'a']++;
            }
        }
        return count >= 26 ;
    }
};