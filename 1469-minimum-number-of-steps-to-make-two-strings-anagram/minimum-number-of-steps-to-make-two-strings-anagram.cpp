class Solution {
public:
    int minSteps(string s, string t) {
        int steps = 0;
        int hash[26] = {0};
        for(auto c : s)
            hash[c - 'a']++;
        for(auto c : t){
            if(hash[c-'a'] == 0)
                steps++;
            else
                hash[c-'a']--;
        }
        

        return steps;
    }
};