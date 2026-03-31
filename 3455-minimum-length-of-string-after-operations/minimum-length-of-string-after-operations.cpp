class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>freq;
        for(auto c : s)
            freq[c]++ ;
        int n = s.size();
        for(int i : s){
            if(freq[i] >= 3){
                n -= 2;
                freq[i] -= 2;
            }
        }
        return n ;
    }
};