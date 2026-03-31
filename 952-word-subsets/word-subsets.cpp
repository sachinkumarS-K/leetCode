class Solution {
public:
    bool check(string &word , vector<int>&freq){
        vector<int>temp(26,0);
        for(auto c : word)
            temp[c-'a']++;
        
        for(int i = 0 ; i<26 ; i++)
            if(freq[i] != 0 && freq[i] > temp[i])
                return false;
        
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        vector<int>freq(26,0);
        for(auto &word : words2){
            vector<int>temp(26,0);
            for(auto &c : word){
                temp[c-'a']++;
                freq[c-'a'] = max(freq[c-'a'] , temp[c-'a']);
            }
        }
        
        for(auto &word : words1)
            if(check(word , freq))
                ans.push_back(word);
        
        return ans ;
    }
};